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
#include <iostream>//?????
//include END

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_RTC   0xb0000048
#define CONFIG_KEY      0xb0000060
#define CONFIG_VGA      0xb0000100
#define CONFIG_SERIAL_MMIO 0xb00003f8

//flags
#define diff_en


void exit_now();
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
uint64_t *csr_gpr = NULL;
bool is_exit = false;
bool isebreak = false;
static uint32_t imm;
void refresh_clk();


//?????
using namespace std;//??????? 
vluint64_t main_time = 0;
uint64_t main_dir_value= 0;
uint64_t main_clk_value= 0;
uint8_t ff=0;




// ???????????????¦Ë??
size_t get_bit(uint8_t wmask) {
  if(wmask == 1)return 1;
  else if(wmask == 3)return 2;
  else if(wmask == 0xf)return 4;
  else if(wmask == 0xff)return 8;
  else return 0;
}
//define DPI-C
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  csr_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void mem_read(long long raddr, uint64_t *rdata) { 
  if(raddr<0x88000000 && raddr >= 0x80000000 ){
    // ??????????`raddr & ~0x7ull`??8???????`rdata`
    // pmem_read(      *(uint64_t *)(raddr & ~0x7ull) ;
    // *rdata = pmem_read((raddr & ~0x7ull), 8) >> ((raddr & 0x7ull) * 8);
    *rdata = pmem_read((raddr & ~0x7ull), 8);
    uint8_t offset = raddr-(raddr & ~0x7ull);
    //mask
    if (offset>0)
    {
      *rdata = (*rdata) >> (offset*8);
    }
    //printf("get ram :%llx\n",*rdata);
  }
  else if (raddr == CONFIG_RTC || raddr == (CONFIG_RTC+4))
  {
    //printf("npc-rtc\n");
   
    //uint64_t us =main_clk_value/100;
    //printf("rtc %ld ",us);
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
  // ??????????`waddr & ~0x7ull`??8????§Õ????`wmask`§Õ??`wdata`
  // `wmask`?????????`wdata`??1??????????,
  // ??`wmask = 0x3`?????§Õ?????2?????, ????§Ö??????????????
  uint8_t bits_set = get_bit(wmask);
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    //printf("write :%d addr %llx \n",bits_set,waddr);
    //pmem_write((waddr & ~0x7ull), bits_set,wdata);
    pmem_write((waddr), bits_set, wdata);
  }
  else if(waddr == CONFIG_SERIAL_MMIO ){
    //printf("npc-usart\n");
    serial_io_input(wdata);
  }
  else if(waddr !=0){
    printf("error mem write addr  %llx\n",waddr);
  }
}



void sim_init() {                 //³õÊ¼»¯
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");

}

//end
#define vcd_en
void refresh_clk()    
{

  top->clk = !(top->clk);
  top->eval();
  if(ff==0) {ff=1;}
  else {ff=0;main_clk_value++;}
  #ifdef vcd_en
    if(1626309< main_time & main_time<1628309){
      tfp->dump(main_time);
    }
    else {
      //
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
  for (int i = 2; i < 5; i++)
  {
    printf("%s\t0x%16lx\n", csrs[i], csr_gpr[i]);
  }
  
	printf("pc = \t0x%16lx\n", cpureg.pc);
}
void isa_reg_print(uint8_t num) {
	printf("%s\t0x%16lx\n", regs[num], cpu_gpr[num]);
}


static int cmd_c()                //DIFFTEST
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
      //refresh_clk();  //Ë¢ÐÂCLK
      main_dir_value++;
      pc = top->CP_PC;
      npc = top->CP_NPC;
      for(int i = 0; i < 32; i++) {
        cpureg.gpr[i] = cpu_gpr[i];
        cpureg.pc=npc;
      }// sp regs are used for addtion
      difftest_step(pc, npc);
      contextp->timeInc(1);
      //printf("pc:%lx\n next pc=%lx\n",pc,top->CP_NPC);
    }
  }
  //else if((imm>0) && (pc < CONFIG_MBASE) && (pc >0)){
  //  is_exit=true;
  //}
  return 0;
}

void npc_init(void){
  sim_init();
  rct_init();

}
int main(int argc,char **argv){
  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  double ipc;
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
    refresh_clk();  //???CLK???¦Ì??
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);
  #endif

  npc_init();
  printf(BLUE "Run verilog\n" NONE);
  while (1)
  {
    refresh_clk();  //???CLK???¦Ì??
    //Imm=top->CP_Imm;
    #ifdef diff_en
      cmd_c();
    #endif
    if(top->Ebreak==1){  //ebreak
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      refresh_clk();  //???CLK???¦Ì??
      break;
    }
    else if(is_exit ==true){
      //isa_reg_display();
      printf(RED "[HIT BAD ]" GREEN " PC=%08lx " NONE "maintime=%ld\n",top->CP_PC,main_time);
      
      refresh_clk();  //???CLK???¦Ì??
      //??????
      top->final();
      tfp->close();
      delete top;
      return(-1);
      break; 
    }
 
  }

  #ifdef diff_en
    //printf("main_dir_value :%ld \n",main_dir_value);
    //printf("main_clk_value :%ld \n",main_clk_value);
    ipc=((double)main_dir_value)/main_clk_value;
    printf(BLUE "IPC:" NONE " %.3lf \n",ipc);
  #endif
  //??????
  top->final();
  tfp->close();
  delete top;
  return 0;
}

