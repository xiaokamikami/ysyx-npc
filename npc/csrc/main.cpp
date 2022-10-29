//#include Begin
#include "../obj_dir/Vysyx_22041412_cpu.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "color.h"
#include "difftests/difftest.h"
#include "difftests/memory.h"
#include "device.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <dlfcn.h>
#include <iostream>//预处理
//include END

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_KEY      0xa0000060
#define CONFIG_VGA      0xa0000100
#define CONFIG_SERIAL_MMIO 0xa00003f8

//flags
#define diff_en
#define vcd_en


struct CPU_state
{
  uint64_t gpr[32];
  uint64_t pc;

  uint64_t mepc;
  uint64_t mstatus;
  uint64_t mcause;
  uint64_t mtvec;
}cpureg;
//export module example;

VerilatedContext *contextp = NULL;
VerilatedVcdC* tfp = new VerilatedVcdC;
Vysyx_22041412_cpu *top = new Vysyx_22041412_cpu("ysyx_22041412_cpu");
uint64_t *cpu_gpr = NULL;
bool is_exit = false;
bool isebreak = false;


size_t get_bit(char data) {
  int sum=0;
	for (sum; data; sum++)
		data &= (data - 1);
  return sum;
}

//define DPI-C
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void mem_read(long long raddr, uint64_t *rdata) { 
  if(raddr<0x88000000 && raddr >= 0x80000000 ){
    // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
    // pmem_read(      *(uint64_t *)(raddr & ~0x7ull) ;
    // *rdata = pmem_read((raddr & ~0x7ull), 8) >> ((raddr & 0x7ull) * 8);
    if (raddr == CONFIG_RTC_MMIO)
    {
      *rdata = get_time();
      printf("%08lx\n", get_time());
    }
    else{
      *rdata = pmem_read((raddr & ~0x7ull), 8);
    }

    //mask
    if (raddr-(raddr & ~0x7ull)>0)
    {
      *rdata = (*rdata) >> ((raddr-(raddr & ~0x7ull))*8);
    }
      
  }
}
extern "C" void mem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  size_t bits_set = get_bit(wmask);
  //printf("write:%llx\n",waddr);
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    //pmem_write((waddr & ~0x7ull), bits_set,wdata);
    pmem_write((waddr), bits_set,wdata);
  }
  else if(waddr == CONFIG_SERIAL_MMIO ){
    serial_io_input(wdata);
  }
  else{
    printf("no mem write addr  %llx\n",waddr);
  }
}



void sim_init() {
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
}

//end

using namespace std;//命名空间 
vluint64_t main_time = 0;

void refresh_clk()
{
  top->clk = !(top->clk);
  top->eval();
  #ifdef vcd_en
    tfp->dump(main_time);
    if(main_time>999999){
      printf(RED "vcd break" NONE);
      assert(0);
    }
    main_time++;  
  #endif 
  
}
double sc_time_stamp()
{
  return main_time;
}

static void top_clk()
{
  top->clk = !(top->clk);
}


void exit_now() {
  is_exit = true;
}
// CMD
void isa_reg_display() {
	for(int i=0; i<32; i=i+2){				//64->16,4 but 8 seem looks better
		printf("%s\t0x%16lx\t", regs[i], cpu_gpr[i]);
		printf("%s\t0x%16lx\n", regs[i+1], cpu_gpr[i+1]);
	}
	printf("pc = \t0x%16lx\n", cpureg.pc);
}
void isa_reg_print(uint8_t num) {
	printf("%s\t0x%16lx\n", regs[num], cpu_gpr[num]);
}


static uint32_t thim=0,nxim=0;
static int cmd_c()
{ 
  static bool bubble;
  static paddr_t pc;
  static paddr_t npc; 
  pc = top->CP_PC;
  npc = top->CP_NPC;
  cpureg.pc = pc;
  thim = top->CP_Imm;
  if(pc >= CONFIG_MBASE && pc <= (CONFIG_MBASE + CONFIG_MSIZE)  && thim != nxim ) {
    bubble = top->CP_difftest;
    if(bubble == 1) {
      nxim = thim;
      for(int i = 0; i < 32; i++) {cpureg.gpr[i] = cpu_gpr[i];}// sp regs are used for addtion
      difftest_step(pc, npc);
      contextp->timeInc(1);
      //printf("next pc=%lx\n",top->CP_NPC);
      // if (top->CP_PC==0x80000fe8)
      // {
      //  printf("puch\n");
      // }
    }
  }
  if (isebreak || is_exit) {
    if(isebreak)
      printf("\033[1;32mebreak \33[0m\n");
  }
  
  return 0;
}

int main(int argc,char **argv){
  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  // for (int i = 0; i < argc; i++)
  // {
  //   printf("%s\t",argv[i]);
  // }

  #ifdef diff_en
    static char nemu_str[] = "/home/kami/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    static char nemu_bin[] = "/home/kami/ysyx-workbench/npc/resource/Imm.bin";
    static char *diff_so_file = nemu_str;
    static long img_size = load_image(nemu_bin);
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);
    refresh_clk();  //刷新CLK与波形记录
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);
  #endif
  sim_init();
  //uint32_t Imm = 0;
  //uint32_t Imm_hc =0;
  printf(BLUE "Run verilog\n" NONE);
  //top_clk();
  while (1)
  {
    refresh_clk();  //刷新CLK与波形记录
    //Imm=top->CP_Imm;
    #ifdef diff_en
      cmd_c();
    #endif
    if(top->Ebreak==1){  //ebreak
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      break;
    }
    else if(is_exit ==true){
      printf(RED "[HIT BAD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      //关闭程序
      top->final();
      tfp->close();
      delete top;
      return(-1);
      break; 
    }
 
  }
  
  //关闭程序
  top->final();
  tfp->close();
  delete top;
  
  return 0;
}

