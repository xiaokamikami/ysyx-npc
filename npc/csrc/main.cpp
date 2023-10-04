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
#include "fifo.h"

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
static uint64_t main_dir_value= 0;
static uint64_t main_clk_value= 0;
static uint64_t main_time_us;

static uint32_t boot_time = 0;
static uint32_t end_time  = 0;
struct timespec sys_time;  //记录仿真的运行时间

//****************************debug*********************
static const uint64_t debuge_time=4000;  //debug的时钟地点
static const uint64_t debuge_pc  =0;  //debug的pc地址
//dram wmask
size_t get_bit(uint8_t wmask) {
  if(wmask == 1)return 1;
  else if(wmask == 3)return 2;
  else if(wmask == 0xf)return 4;
  else if(wmask == 0xff)return 8;
  else return 0;
}
//储存等待同步NEMU的PC信息 
Queue     dut_data; // 需要跳过的PC情况缓存
uint8_t   dut_num =0;

//define DPI-C
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  csr_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

void device_read(uint64_t raddr, uint64_t *rdata){
      switch (raddr)
      {
      case RTC_ADDR   : main_time_us=get_time(); 
                        *rdata = (uint32_t)main_time_us;
        break;
      case RTC_ADDR+4 : *rdata = main_time_us>>32;
        break;
      case KBD_ADDR   : *rdata = serial_io_output();
        break;
      case VGACTL_ADDR: *rdata = mmio_read(raddr,4);
        printf("npc: vga config w %ld , h %ld \n",*rdata>>16,*rdata&0x0000ffff);
        break;
      default: printf("error mem read device  %lx\n",raddr);    assert(0);
        break;
      }
      #ifdef diff_en
	      Push(&dut_data, top->pip_mem_pc);
        //printf(GREEN "in_queue  dut_num %d,pc %lx \n" NONE,dut_data.m_size,dut_data.m_array[dut_data.m_front]);


        //printf("Device read : pc =%lx  dut_num =%d main_time =%d \n",top->pip_mem_pc,dut_num,main_time);
      #endif
}
void device_write(uint64_t waddr, uint64_t wdata){
  if(waddr == SERIAL_PORT ){
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
    printf("error mem write device  %lx\n",waddr);
    assert(0);
  }
} 

void sim_init() {                 //vcd init
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
  clock_gettime(CLOCK_MONOTONIC_COARSE, &sys_time);
  boot_time=  sys_time.tv_sec;
}

//end
uint64_t last_us=0;
uint8_t star_debug;
uint64_t start_time;
void updata_clk()    //刷新一次时钟与设备
{

  top->clk = !(top->clk);  //取反时钟
  top->eval();             //为仿真核更新数据

  #ifdef vcd_en
    if(debuge_pc != 0 && top->pip_pc==debuge_pc & ~star_debug){
      star_debug = 1;
      start_time = 0;
      printf("start_debug \n");
    }else if(debuge_pc == 0 & debuge_time < main_time & main_time< debuge_time+3000){
      tfp->dump(main_time);
    }else if(star_debug & (debuge_time < start_time & start_time< debuge_time+3000)){
      tfp->dump(main_time);
      start_time++;
    }

  #endif 

  axi_channel axi;
  if (top->clk == 1){ 
    axi_copy_from_dut_ptr(top, axi);  //从 NPC引脚拷贝出数据
    axi4_helper_falling(axi);         //模拟从机工作
    axi_set_dut_ptr(top, axi);        //复制结果到 NPC引脚
  }
  main_time++; 

  #ifdef DEVICE_ENABLE
    device_update();
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
  bool bubble;
      
  paddr_t pc = top->pip_pc;

  cpureg.pc = pc;
  if((pc > CONFIG_MBASE) && (pc <= (CONFIG_MBASE + CONFIG_MSIZE))) {
    if(last_pc != pc){
      #ifdef diff_en
        paddr_t npc  = top->pip_dnpc;
        //printf("DIFFTEST : pc=%lx time=%ld \n",pc,main_time);
        for(int i = 0; i < 32; i++) {
          cpureg.gpr[i] = cpu_gpr[i];
          cpureg.pc=pc;
        }// sp regs are used for addtion
        if(dut_data.m_size>0 && Pop(&dut_data,pc))  {
          //printf(GREEN "out_queue dut_num %d ,pc %lx \n" NONE,dut_num,pc);
          difftest_skip_ref();
          dut_num=dut_num-1;
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
      printf("The pc No update many times PC==0\n");
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

  for (int i = 0; i < argc; i++)
  {
    printf("arg %d: %s\n",i,argv[i]);
  }
    npc_init();
    static char nemu_str[] = "/home/kami/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    static char img[] = "/home/kami/ysyx-workbench/npc/resource/Imm.bin";
    static char *diff_so_file = nemu_str;
    static long img_size = load_image(img);

    top->clk=0;
    top->rst=1;  //复位CPU的状态
    top->eval();
    printf("init cpu\n");
    updata_clk();
    top->rst=0;
    
    //rst_cpu();
  #ifdef diff_en
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);  
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);           // 为ref初始化bin文件
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
      //break;
      top->final();
      tfp->close();
      delete top;
      return(-1);
      break; 
    }
 
  }


//------------END NPC-----------//

  clock_gettime(CLOCK_MONOTONIC_COARSE, &sys_time);
  end_time =  sys_time.tv_sec;
  double ipc,icache_l1_hit,dcache_l1_hit;
  ipc=((double)main_dir_value)/main_clk_value;
  icache_l1_hit=((double)top->Icache_L1_hit)/(top->Icache_L1_miss+top->Icache_L1_hit);
  dcache_l1_hit=((double)top->Dcache_L1_hit)/(top->Dcache_L1_miss+top->Dcache_L1_hit);

  printf(BLUE "\nCore Cache info:\n" NONE "icache_l1  hit rate  %.2lf %% \ndcache_l1  hit rate  %.2lf %% \n",icache_l1_hit*100 , dcache_l1_hit*100);
  printf(     "icache_l1  hit :%ld  miss :%ld \n",top->Icache_L1_hit,top->Icache_L1_miss);
  printf(     "dcache_l1  hit :%ld  miss :%ld \n",top->Dcache_L1_hit,top->Dcache_L1_miss);
  printf(BLUE "NPC-IPC  :" NONE " %.4lf \n",ipc);
  
  double freq,inst;
  freq = (double)main_clk_value/(end_time-boot_time);
  inst = (double)main_dir_value/(end_time-boot_time);
  printf(BLUE "Verilator-freq :" NONE " %.0lf HZ\n",freq);
  printf(BLUE "Verilator-inst :" NONE " %.0lf inst/s\n",inst);


  printf("Difftest : imm count:%ld \n",main_dir_value);

  top->final();
  tfp->close();
  delete top;
  return 0;
}

