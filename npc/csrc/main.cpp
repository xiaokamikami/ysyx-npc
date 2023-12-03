//#include Begin
#include "../obj_dir/Vysyx_22041412_top.h"
#include "verilated_fst_c.h"
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
VerilatedFstC* tfp = new VerilatedFstC;
Vysyx_22041412_top *top = new Vysyx_22041412_top("ysyx_22041412_top");
uint64_t *cpu_gpr = NULL;
uint64_t *csr_gpr = NULL;
bool is_exit = false;
bool sdl_exit = false;
bool isebreak = false;
static uint32_t last_pc;
static uint32_t last_diff_pc;
static uint32_t same_pc;
static inline void updata_clk();
static inline int cmd_c();

using namespace std;
uint64_t main_time = 0;
static uint64_t main_dir_value = 0;
static uint64_t main_clk_value = 0;
static uint64_t main_time_us = 0;

static uint32_t boot_time = 0;
static uint32_t end_time  = 0;
struct timespec sys_time;  //记录仿真的运行时间
static const uint32_t reg32_size =  sizeof(uint64_t)*32;   //32个寄存器占用的内存大小

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
//内存读外设处理
void device_read(uint64_t raddr, uint64_t *rdata){
      switch (raddr)
      {
      case VGACTL_ADDR: *rdata = mmio_read(raddr,4);
        printf("npc: vga config w %ld , h %ld \n",*rdata>>16,*rdata&0x0000ffff);
        break;
      case KBD_ADDR   : *rdata = key_dequeue();  
        break;  
      case RTC_ADDR   : main_time_us=get_time(); 
                        *rdata = (uint32_t)main_time_us;
        break;
      case RTC_ADDR+4 : *rdata = main_time_us >> 32;
        break;
      default: printf("error mem read device  %lx\n",raddr);    assert(0);
        break;
      }
      #ifdef diff_en
	      Push(&dut_data, top->pip_mem_pc);
        //printf(GREEN "in_queue  dut_num %d,pc %lx \n" NONE,dut_data.m_size,dut_data.m_array[dut_data.m_front]);
        //printf("Device read : pc =%lx  dut_num =%d main_clk_value =%d \n",top->pip_mem_pc,dut_num,main_clk_value);
      #endif
}
//内存写外设处理
void device_write(uint64_t waddr, uint64_t wdata){
  if( FB_ADDR <=waddr & waddr <= FB_ADDR+0xf00000){
    mmio_write(waddr,4,(uint32_t)wdata);
    //printf("mmio addr %lx \n",waddr);
  } 
  else if(waddr == SERIAL_PORT ){
    //printf("npc-usart\n");
    serial_io_input(wdata);
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

  #ifdef vcd_en  
    contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("wave.vcd");
  #else 
    contextp = new VerilatedContext;
    contextp->traceEverOn(false);
  #endif 

  clock_gettime(CLOCK_MONOTONIC_COARSE, &sys_time);  //获取启动时间
  boot_time =  sys_time.tv_sec;
}


static timespec start_timespec, end_timespec;
static uint8_t count_timespec; 
//Statistical calculation time
double getCalcuationTime(){
  double elapsed_time; 
  if (!count_timespec) {
    clock_gettime(CLOCK_MONOTONIC, &start_timespec); // 记录开始时间  
    count_timespec =1;
    return 0;
  }else {
    clock_gettime(CLOCK_MONOTONIC, &end_timespec); // 记录开始时间
    elapsed_time = ((end_timespec.tv_sec - start_timespec.tv_sec)*1000000000) + (end_timespec.tv_nsec - start_timespec.tv_nsec);
    count_timespec =0;
    return elapsed_time;
  }
  return 0;
}


static uint8_t star_debug;
static uint64_t start_time;
static uint16_t updevice_clk;
static inline void updata_clk()    //刷新一次时钟与设备
{
      //getCalcuationTime();
  top->clk = !(top->clk);  //取反时钟
  top->eval();             //为仿真核更新数据
      //printf("printf rtl-update  time%lf\n",getCalcuationTime());
  #ifdef vcd_en    //一个是根据PC地址输出调试波形，一个是根据运行时间输出调试波形
      //getCalcuationTime();  
      #ifdef debuge_pc
        if(top->pip_pc==debuge_pc & ~star_debug){
          star_debug = 1;
          start_time = 0;
          printf("start_debug \n");
        }else if(star_debug & (debuge_time < start_time & start_time< debuge_time+5000)){
          tfp->dump(main_time);
          start_time++;
        }else{ star_debug = 0;}
      #elif debuge_time
        if( debuge_time < main_time & main_time< debuge_time+5000){
          tfp->dump(main_time);
        }
      #endif 
    contextp->timeInc(1);
    //printf("printf vcd-update  time%lf\n",getCalcuationTime());
  #endif 

  if (top->clk == 1){ 
      //getCalcuationTime();
    axi_channel axi;
    axi_copy_from_dut_ptr(top, axi);  //从 NPC引脚拷贝出数据
    axi4_helper_falling(axi);         //模拟从机工作
    axi_set_dut_ptr(top, axi);        //复制结果到 NPC引脚
      //printf("printf axi-update  time%lf\n",getCalcuationTime());
  }
  else{
    main_clk_value++;  
    updevice_clk++;
      //getCalcuationTime();
    cmd_c();//记录指令的变化 并验证正确性
      //printf("printf dif-update  time%lf\n",getCalcuationTime());
    if(updevice_clk == 0x7ff){
        //getCalcuationTime();
      device_update();  //准备外设数据
       //printf("printf device-update  time%lf\n",getCalcuationTime());
    }
  }

  main_time++; 
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
    for (int i = 1; i <= csr_size; i++)
    {
        printf("%s\t0x%16lx\n", csrs[i], csr_gpr[i]);
    }

	printf("pc = \t0x%16lx\n", cpureg.pc);
}
void isa_reg_print(uint8_t num) {
	printf("%s\t0x%16lx\n", regs[num], cpu_gpr[num]);
}


static inline int cmd_c()                //DIFFTEST
{ 
  paddr_t pc = top->pip_pc;
    #ifdef diff_en 
        if (top->pip_reg_en==1) {
            #ifdef diff_reg0
                if(cpu_gpr[0]!=0) {
                    std::cout << "[cmd_c]Error  Cannot write to register zero" << std::endl;
                    exit_now();
                }
            #endif
            if(top->pip_reg_addr!=0) 
                cpureg.gpr[top->pip_reg_addr]=top->pip_reg_data;//准备需要被检查的寄存器数据 
        }
    #endif

  if((pc > CONFIG_MBASE) && (pc < (CONFIG_MBASE + CONFIG_MSIZE))) {
    if(last_pc != pc){
        #ifdef diff_en      //正确性检查
        //printf("DIFFTEST : pc=%lx time=%ld \n",pc,main_clk_value);

            // for(int i = 0; i < 32; i++) {   //准备需要被检查的数据
            //    cpureg.gpr[i] = cpu_gpr[i];
            // } // sp regs are used for addtion
            //memcpy(&cpureg.gpr,cpu_gpr,reg32_size); //准备需要被检查的寄存器数据 

            cpureg.pc=pc;
            last_diff_pc=pc;
            if(dut_data.m_size>0 && Pop(&dut_data,pc))  {   //有访问外设的情况
              //printf(GREEN "out_queue dut_num %d ,pc %lx \n" NONE,dut_num,pc);
              difftest_skip_ref();
              dut_num=dut_num-1;
            }
            else difftest_step(pc, pc);
        #endif
      //isa_reg_display();
      last_pc =top->pip_pc;    
      main_dir_value+=1;     //统计运行的指令量
      same_pc = 0; 
    }
    #ifdef diff_pc
      else {      //PC长时间无变化，视为卡死
        ++same_pc;
        if(same_pc > 30000) {
          printf("The pc No update many times \n");
          is_exit =true;
          //assert(0);
        }
      }
    #endif
  }
  #ifdef diff_pc
    else if(pc==0){       //PC长时间为0  说明IFU有问题或跳转后流水线堵塞没有解除
      ++same_pc;
      if(same_pc > 30000) {   
        printf("The pc No update many times PC==0\n");
        is_exit =true;
        //assert(0);
      }
      last_pc =0;  
    } 
    else if((pc < CONFIG_MBASE) && (pc > (CONFIG_MBASE + CONFIG_MSIZE))){
      
      printf("IF越界 %lx \n", pc);
      assert(0);
    }
  #endif
  //else if((imm>0) && (pc < CONFIG_MBASE) && (pc >0)){
  //  is_exit=true;
  //}
  return 0;
}

static void npc_init(void){
  sim_init();
  rct_init();
  init_device();
}

int main(int argc,char **argv){
  Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  printf("veriltor init \n");
  for (int i = 0; i < argc; i++)
  {
    printf( BLUE "arg %d: %s\n" NONE ,i,argv[i]);
  }
    npc_init();
    //加载difftest 与 程序img
    static char nemu_str[128]; 
    static char img[128];
    sprintf(nemu_str,"%s/build/riscv64-nemu-interpreter-so",argv[1]);
    sprintf(img,"%s/resource/Imm.bin",argv[2]);
    //sprintf(img,"%s/resource/nanos-lite-riscv64-npc.bin",argv[2]);

    static char *diff_so_file = nemu_str;
    static long img_size = load_image(img);
    printf("veriltor img load \n");



    top->clk=0;
    top->rst=1;  //复位CPU的状态
    top->eval();
    printf("init cpu\n");
    updata_clk();
    top->rst=0;
    
    //rst_cpu();
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);  
    #ifdef diff_en
        printf(BLUE "\033[1;31mDifftest  ENABLE \033[0m\n" NONE);
        for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
        init_difftest(diff_so_file, img_size, 1024);           // 为ref初始化bin文件
    #else
        printf(RED "\033[1;31mDifftest  DISABLE \033[0m\n" NONE);
    #endif


  printf(BLUE "Run verilog\n" NONE);
  //-------------BEGIN WHILE-----------------//
  while (1)               //主循环
  {
    updata_clk();  //刷新时钟，最耗时的部分

    #ifdef clk_count_end
      if(main_clk_value>end_times){
        printf(BLUE "[TIME END]" GREEN " PC=%08lx\n" NONE,top->pip_pc);
        updata_clk();  
        break;
      }
    #endif

    if(top->Ebreak == true || sdl_exit == true ){  //ebreak   或人为关闭窗口
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08x\n" NONE,last_diff_pc);
      updata_clk();  
      break;
    }
    else if(is_exit == true){            //遇到错误，停止运行
      isa_reg_display();
      printf(RED "[HIT BAD ]" GREEN " PC=%08x " NONE "maintime=%ld\n",last_diff_pc,main_time);

      updata_clk();  
      //break;
      top->final();
      tfp->close();
      delete top;
      return(-1);
      break; 
    }
 
  }
  //-------------END WHILE-----------------//



//------------END NPC-----------//

  //输出一些性能统计

  clock_gettime(CLOCK_MONOTONIC_COARSE, &sys_time);
  end_time =  sys_time.tv_sec;
  double ipc ,icache_l1_hit ,dcache_l1_hit ,ifu_pred_hit;

  ipc=((double)main_dir_value)/main_clk_value;
  icache_l1_hit=((double)top->Icache_L1_hit)/(top->Icache_L1_miss+top->Icache_L1_hit);
  dcache_l1_hit=((double)top->Dcache_L1_hit)/(top->Dcache_L1_miss+top->Dcache_L1_hit);
  ifu_pred_hit =((double)top->IFU_Pred_hit)/(top->IFU_Pred_miss+top->IFU_Pred_hit);
  printf(BLUE "\nCore Cache info:\n" NONE "icache_l1  hit rate  %.2lf %% \ndcache_l1  hit rate  %.2lf %% \n",icache_l1_hit*100 , dcache_l1_hit*100);
  printf(     "icache_l1  hit :%ld  miss :%ld \n",top->Icache_L1_hit,top->Icache_L1_miss);
  printf(     "dcache_l1  hit :%ld  miss :%ld \n",top->Dcache_L1_hit,top->Dcache_L1_miss);
  printf(     "ifu_pred   hit rate  %.2lf %% \n",ifu_pred_hit*100);
  printf(     "ifu_pred   hit :%ld  miss :%ld \n",top->IFU_Pred_hit,top->IFU_Pred_miss);
  printf(BLUE "NPC-IPC  :" NONE " %.4lf \n\n",ipc);
  
  double freq,inst;
  freq = (double)main_clk_value/(end_time-boot_time);
  inst = (double)main_dir_value/(end_time-boot_time);
  printf(BLUE "Verilator-freq :" NONE " %.0lf HZ = %0.1lf MHZ\n",freq,freq/1000000);
  printf(BLUE "Verilator-inst :" NONE " %.0lf inst/s\n",inst);


  printf("Difftest : imm count:%ld \n",main_dir_value);

  top->final();
  tfp->close();
  delete top;
  return 0;
}

