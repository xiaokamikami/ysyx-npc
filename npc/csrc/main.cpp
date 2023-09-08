//#include Begin
#include "../obj_dir/Vysyx_22041412_top.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "color.h"
#include "difftests/difftest.h"
#include "difftests/memory.h"
#include "device/device.h"
#include "device/debug.h"
#include "device/io/map.h"
#include "aix4.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <dlfcn.h>
#include <iostream>
#include "main.h"
//include END

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

struct SPIK_state
{
  uint32_t pc[7];
  uint32_t num;
}spik;
//export module example;

VerilatedContext *contextp = NULL;
VerilatedVcdC* tfp = new VerilatedVcdC;
Vysyx_22041412_top *top = new Vysyx_22041412_top("ysyx_22041412_top");
uint64_t *cpu_gpr = NULL;
uint64_t *csr_gpr = NULL;
bool is_exit = false;
bool sdl_exit = false;
bool isebreak = false;
static uint32_t last_pc;
static uint32_t same_pc;
static void updata_clk();
static int cmd_c();

using namespace std;
vluint64_t main_time = 0;
uint64_t main_dir_value= 0;
uint64_t main_clk_value= 0;
uint64_t main_time_us;

//****************************debug*********************
uint64_t debuge_pc=100;  //debug的时钟地点

//dram wmask
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
  //if(raddr!=0)printf("mem_read %llx \n",raddr);
  if(raddr >= 0x80000000 & raddr<0x88000000 ){
    // 8字节对齐
    *rdata = pmem_read((raddr & ~0x7ull), 8);
    uint8_t offset = raddr-(raddr & ~0x7ull);
    //mask
    if (offset>0)
    {
      *rdata = (*rdata) >> (offset*8);
    }
    //printf("get ram :%llx\n",*rdata);
  }
  else if (DEVICE_BASE <= raddr & raddr <= DISK_ADDR )  //外设段
  {
    switch (raddr)
    {
    case RTC_ADDR   : *rdata = (uint32_t)main_time_us;
      break;
    case RTC_ADDR+4 : *rdata = main_time_us>>32;
      break;
    case KBD_ADDR   : *rdata = serial_io_output();
      break;
    case VGACTL_ADDR: *rdata = mmio_read(raddr,4);
      printf("npc: vga config w %ld , h %ld \n",*rdata>>16,*rdata&0x0000ffff);
      break;
    default: printf("Devices not yet implemented %llx\n",raddr);
      break;
    }
    #ifdef diff_en
      spik.num=spik.num+1;
      spik.pc[spik.num]=top->pip_mem_pc;
    #endif
  }
  else if(raddr !=0){
    printf("error mem read addr  %llx\n",raddr);
  }
}

extern "C" void mem_write(long long waddr, long long wdata, uint8_t wmask) {
  uint8_t bits_set = get_bit(wmask);
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    pmem_write((waddr), bits_set, wdata);     //写入不对齐
  }
  else if(waddr == SERIAL_PORT ){
    //printf("npc-usart\n");
    serial_io_input(wdata);
  }
  else if( FB_ADDR <=waddr & waddr <= FB_ADDR+0xf00000){
    mmio_write(waddr,4,(uint32_t)wdata);
    //printf("mmio addr %lx \n",waddr);
  }
  else if( waddr == SYNC_ADDR ){
    update_vga();
  }
  else if(waddr !=0){
    printf("error mem write addr  %llx\n",waddr);
  }
}



void sim_init() {                 //vcd init
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
}

//end
uint64_t last_us=0;


void updata_clk()    //刷新一次时钟与设备
{
  top->clk = !(top->clk);
  top->eval();

  #ifdef vcd_en
    if(debuge_pc < main_time & main_time< debuge_pc+500){
      tfp->dump(main_time);
    }
    else {
      //
    }
  #endif 
  axi_channel axi;
  if (top->clk == 0) {
    axi_copy_from_dut_ptr(top, axi);
    dramsim3_helper_rising(axi);
  }
  else {
    axi_copy_from_dut_ptr(top, axi);
    dramsim3_helper_falling(axi);
    axi_set_dut_ptr(top, axi);
  }
  main_time++; 
  //控制帧数
  main_time_us=get_time(); 
  //main_time_us=main_clk_value/100;
  #ifdef DEVICE_ENABLE
  //if(main_time_us-(FPS*1000)>last_us){
    device_update();
  //  last_us=main_time_us;
  //}  
  #endif
  if(top->clk==0){
    main_clk_value++;  
    cmd_c();//记录指令的变化 并验证正确性
  }

  
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
  pc = top->pip_pc;
  npc = top->pip_dnpc;
  cpureg.pc = pc;
  if((pc > CONFIG_MBASE) && (pc <= (CONFIG_MBASE + CONFIG_MSIZE))) {
    if(last_pc != pc){
      #ifdef diff_en
      //printf("DIFFTEST : pc:%lx\n next pc=%lx time=%ld \n",pc,npc,main_time);
        for(int i = 0; i < 32; i++) {
          cpureg.gpr[i] = cpu_gpr[i];
          cpureg.pc=npc;
        }// sp regs are used for addtion
        if(spik.pc[spik.num] ==pc & spik.num>0 )  {
          difftest_skip_ref();
          spik.pc[spik.num]=0;
          spik.num=spik.num-1;
        }
        else difftest_step(pc, npc);
        contextp->timeInc(1);
      #endif
    last_pc=top->pip_pc;
    main_dir_value++;
    same_pc = 0; 
    }
    else {
      ++same_pc;
      if(same_pc > 100) {
        printf("The pc No update many times \n");
        is_exit =true;
        //assert(0);
      }
    }
  }
  else if(pc==0){
    ++same_pc;
    if(same_pc > 100) {
      printf("The pc No update many times \n");
      is_exit =true;
      //assert(0);
    }
  } 
  else if((pc < CONFIG_MBASE) && (pc > (CONFIG_MBASE + CONFIG_MSIZE))){
    
    printf("IF越界 %lx \n", pc);
    assert(0);
  }
  //else if((imm>0) && (pc < CONFIG_MBASE) && (pc >0)){
  //  is_exit=true;
  //}
  return 0;
}

void npc_init(void){
  sim_init();
  rct_init();
  #ifdef DEVICE_ENABLE
    init_device();
  #endif
}
int main(int argc,char **argv){
  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  double ipc;
  for (int i = 0; i < argc; i++)
  {
    printf("arg %d: %s\n",i,argv[i]);
  }
    npc_init();
    static char nemu_str[] = "/home/kami/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    static char img[] = "/home/kami/ysyx-workbench/npc/resource/Imm.bin";
    static char *diff_so_file = nemu_str;
    static long img_size = load_image(img);
    init_ram(img, img_size);
    top->clk=0;
    top->rst=1;
    top->eval();
    printf("init cpu\n");
    updata_clk();
    top->rst=0;
    
    //rst_cpu();
  #ifdef diff_en
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);  
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);
  #endif


  printf(BLUE "Run verilog\n" NONE);
  while (1)               //主循环
  {
    updata_clk();  
    //Imm=top->CP_Imm;

    #ifdef end_time
      if(main_clk_value>end_time){
        printf(BLUE "[TIME END]" GREEN " PC=%08lx\n" NONE,top->pip_pc);
        updata_clk();  
        break;
      }
    #endif




    if(top->Ebreak==true | sdl_exit==true ){  //ebreak
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08lx\n" NONE,last_pc);
      updata_clk();  
      break;
    }
    else if(is_exit ==true){
      //isa_reg_display();
      printf(RED "[HIT BAD ]" GREEN " PC=%08lx " NONE "maintime=%ld\n",last_pc,main_time);
      
      updata_clk();  

      top->final();
      tfp->close();
      delete top;
      return(-1);
      break; 
    }
 
  }


  //printf("main_dir_value :%ld \n",main_dir_value);
  //printf("main_clk_value :%ld \n",main_clk_value);
  ipc=((double)main_dir_value)/main_clk_value;
  printf(BLUE "IPC:" NONE " %.3lf \n",ipc);


  top->final();
  tfp->close();
  delete top;
  return 0;
}

