//#include Begin
#include "../obj_dir/Vysyx_22041412_cpu.h"
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
Vysyx_22041412_cpu *top = new Vysyx_22041412_cpu("ysyx_22041412_cpu");
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
uint8_t ff=0;


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

extern "C" void ram_read(long long raddr, uint32_t *rdata) {
  if(raddr >= 0x80000000 & raddr<0x83000000 ){
    raddr=(raddr-CONFIG_MBASE);
    *rdata =  *(uint32_t *)(sram+raddr);
    //printf("ram_read raddr %llx data %lx \n",raddr,*rdata);
  }
  else if(raddr >= 0x83000000 & raddr<0x88000000 ){
    *rdata = pmem_read(raddr, 4);
  }
  
}

extern "C" void mem_read(long long raddr, uint64_t *rdata) { 
  //if(raddr!=0)printf("mem_read %llx \n",raddr);
  if(raddr >= 0x80000000 & raddr<0x88000000 ){
    // 8�ֽڶ���
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
  else if (DEVICE_BASE <= raddr & raddr <= DISK_ADDR )
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
      spik.pc[spik.num]=top->MEM_PC;
    #endif
  }
  else if(raddr !=0){
    printf("error mem read addr  %llx\n",raddr);
  }
}

extern "C" void mem_write(long long waddr, long long wdata, uint8_t wmask) {
  uint8_t bits_set = get_bit(wmask);
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    pmem_write((waddr), bits_set, wdata);     //д�벻����
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



void sim_init() {                 //��ʼ��
  contextp = new VerilatedContext;
  contextp->traceEverOn(true);
  top->trace(tfp,0);
  tfp->open("wave.vcd");
}

//end
uint64_t last_us=0;
uint64_t debuge_pc=0;

void updata_clk()    //ˢ��һ��ʱ�����豸
{
  top->clk = !(top->clk);
  top->eval();
  if(ff==0) {ff=1;}
  else {ff=0;main_clk_value++;}
  #ifdef vcd_en
    if(debuge_pc-500 < main_time & main_time< debuge_pc+500){
      tfp->dump(main_time);
    }
    else {
      //
    }
  #endif 
  main_time++; 
  //����֡��
  main_time_us=get_time(); 
  //main_time_us=main_clk_value/100;
  #ifdef DEVICE_ENABLE
  //if(main_time_us-(FPS*1000)>last_us){
    device_update();
  //  last_us=main_time_us;
  //}  
  #endif

  cmd_c();
  
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
    if(last_pc != top->CP_PC){
      #ifdef diff_en
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
      //printf("pc:%lx\n next pc=%lx time=%ld \n",pc,top->CP_NPC,main_time);
    last_pc=top->CP_PC;
    main_dir_value++;
    same_pc = 0; 
    }
    else {
      ++same_pc;
      if(same_pc > 10) {
        printf("The pc No update many times \n");
        assert(0);
      }
      
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
    static char nemu_str[] = "/home/kami/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    static char img[] = "/home/kami/ysyx-workbench/npc/resource/Imm.bin";
    static char *diff_so_file = nemu_str;
    static long img_size = load_image(img);
    init_ram(img, img_size);
  #ifdef diff_en
    printf("\033[1;31mWelcome to fxxk NPC\033[0m\n");
    printf("\033[1;32mimg_size %lx\33[0m\n", img_size);
    updata_clk();  
    for(int i = 0; i < 32; i++) cpureg.gpr[i] = cpu_gpr[i];// sp regs are used for addtion
    init_difftest(diff_so_file, img_size, 1024);
  #endif

  npc_init();
  printf(BLUE "Run verilog\n" NONE);
  while (1)               //��ѭ��
  {
    updata_clk();  
    //Imm=top->CP_Imm;
    
    if(top->Ebreak==true | sdl_exit==true ){  //ebreak
      printf(BLUE "[HIT GOOD ]" GREEN " PC=%08lx\n" NONE,top->CP_PC);
      updata_clk();  
      break;
    }
    else if(is_exit ==true){
      //isa_reg_display();
      printf(RED "[HIT BAD ]" GREEN " PC=%08lx " NONE "maintime=%ld\n",top->CP_PC,main_time);
      
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

