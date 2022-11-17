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
#define CONFIG_RTC   0xb0000048
#define CONFIG_KEY      0xb0000060
#define CONFIG_VGA      0xb0000100
#define CONFIG_SERIAL_MMIO 0xb00003f8

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
static uint32_t imm;


// 通过掩码计算输入的位数
size_t get_bit(uint8_t wmask) {
  if(wmask == 1)return 1;
  else if(wmask == 3)return 2;
  else if(wmask == 0xf)return 4;
  else if(wmask == 0xff)return 8;
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
    *rdata = pmem_read((raddr & ~0x7ull), 8);
    //mask
    if (raddr-(raddr & ~0x7ull)>0)
    {
      *rdata = (*rdata) >> ((raddr-(raddr & ~0x7ull))*8);
    }
    //printf("get ram :%llx\n",*rdata);
  }
  else if (raddr == CONFIG_RTC || raddr == (CONFIG_RTC+4))
  {
    //printf("npc-rtc\n");
    uint64_t us =get_time();
    if(raddr == CONFIG_RTC){
      *rdata = (uint32_t)us;
    }
    else{
      *rdata = (us >>32);
    }
    difftest_skip_ref();
  } 
  else if(raddr !=0){
    printf("error mem read addr  %llx\n",raddr);
  }
}
extern "C" void mem_write(long long waddr, long long wdata, uint8_t wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  size_t bits_set = get_bit(wmask);
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    //pmem_write((waddr & ~0x7ull), bits_set,wdata);
    pmem_write((waddr), bits_set,wdata);
  }
  else if(waddr == CONFIG_SERIAL_MMIO ){
    //printf("npc-usart\n");
    serial_io_input(wdata);
  }
  else if(waddr !=0){
    printf("error mem write addr  %llx\n",waddr);
  }
}



void sim_init() {
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
  imm=top->CP_IMM;
  printf("get:imm %lx \n",imm);
}

//end

using namespace std;//命名空间 
vluint64_t main_time = 0;

void refresh_clk()
{
  top->clk = !(top->clk);
  top->eval();
  #ifdef vcd_en
    if(main_time>0){
      tfp->dump(main_time);
    }
    if(main_time>4999){
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



static int cmd_c()
{ 
  static bool bubble;
  static paddr_t pc;
  static paddr_t npc;        
  pc = top->CP_PC;
  npc = top->CP_NPC;
  cpureg.pc = pc;
  if((pc > CONFIG_MBASE) && (pc <= (CONFIG_MBASE + CONFIG_MSIZE))) {
    if(imm != top->CP_PC){
      imm=top->CP_PC;
      //refresh_clk();  //刷新CLK与波形记录
      pc = top->CP_PC;
      npc = top->CP_NPC;
      printf("pc:%lx\n",pc);
      for(int i = 0; i < 32; i++) {
        cpureg.gpr[i] = cpu_gpr[i];
        cpureg.pc=npc;
      }// sp regs are used for addtion
      difftest_step(pc, npc);
      contextp->timeInc(1);
      //printf("next pc=%lx\n",top->CP_NPC);
    }
  }
  else if((imm>0) && (pc < CONFIG_MBASE) && (pc >0)){
    is_exit=true;
  }
  return 0;
}

void npc_init(void){
  sim_init();
  rct_init();

}
int main(int argc,char **argv){
  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  // for (int i = 0; i < argc; i++)
  // {
  //   printf("%s\t",argv[i]);
  // }
    static char nemu_str[] = "/home/kami/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    static char nemu_bin[] = "/home/kami/ysyx-workbench/npc/resource/Imm.bin";
    static char *diff_so_file = nemu_str;
    static long img_size = load_image(nemu_bin);
  #ifdef diff_en
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);
    refresh_clk();  //刷新CLK与波形记录
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);
  #endif

  npc_init();
  printf(BLUE "Run verilog\n" NONE);
  while (1)
  {
    refresh_clk();  //刷新CLK与波形记录
    //Imm=top->CP_Imm;
    #ifdef diff_en
      cmd_c();
    #endif
    if(top->Ebreak==1){  //ebreak
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      refresh_clk();  //刷新CLK与波形记录
      break;
    }
    else if(is_exit ==true){
      //isa_reg_display();
      printf(RED "[HIT BAD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      refresh_clk();  //刷新CLK与波形记录
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

