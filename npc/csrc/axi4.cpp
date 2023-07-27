#include "aix4.h"

#include <assert.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "difftests/memory.h"
#include "device/macro.h"
uint8_t sram[CONFIG_MSIZE];
#define MAX_AXI_DATA_LEN 8
//uint64_t *dram;

void init_ram(char *img, long img_size){  //加载程序到内存中

    assert(sram !=NULL);
    int ret;
    FILE *fp = fopen(img, "rb");
    if (fp == NULL) {
        printf("Can not open img '%s'\n", img);
        assert(0);
    }

    fseek(fp, 0, SEEK_SET);
    ret = fread(sram, img_size, 1, fp);
    assert(ret == 1);
    fclose(fp);

    printf("init_ram:%s size: %d MB \n",img,CONFIG_MSIZE/1024/1024);
}
// 检查写地址通道是否握手
bool axi_check_waddr_fire(const axi_channel &axi) {
  if (axi.aw.valid && axi.aw.ready) {
    assert(axi.aw.burst == 1 || (axi.aw.burst == 2 && ((axi.aw.addr & 0x3f) == 0)));
#ifdef DEBUG_LOG_AXI4
    printf("axi aw channel fired addr = 0x%016lx, id = %d\n", axi.aw.addr, axi.aw.id);
#endif
    return true;
  }
  return false;
}
// 检查写数据通道是否握手
bool axi_check_wdata_fire(const axi_channel &axi) {
  if (axi.w.valid && axi.w.ready) {
#ifdef DEBUG_LOG_AXI4
    printf("axi w channel fired data = 0x%016lx\n", axi.w.data[0]);
#endif
    return true;
  }
  return false;
}
// ar channel: (1) read raddr; (2) try to accept the address; (3) check raddr fire
// 获取读地址
bool axi_get_raddr(const axi_channel &axi, axi_addr_t &addr) {
  // 如果master发送valid，则读取读地址通道的读地址
  if (axi.ar.valid) {
    addr = axi.ar.addr;
    //printf("axi ar channel fired addr = 0x%016lx, id = %d\n", axi.ar.addr, axi.ar.id);
    return true;
  }
  return false;
}
// 接受读地址，将ready设置为1
void axi_accept_raddr(axi_channel &axi) {
  axi.ar.ready = 1;
}
// 检查读地址通道是否握手
bool axi_check_raddr_fire(const axi_channel &axi) {
  //printf("axi ar valid %x ready %x \n",axi.ar.valid, axi.ar.ready);
  if (axi.ar.valid && axi.ar.ready) {
#ifdef DEBUG_LOG_AXI4
    printf("axi ar channel fired addr = 0x%016lx, id = %d\n", axi.ar.addr, axi.ar.id);
#endif
    return true;
  }
  return false;
}
// 检查读数据通道是否握手
bool axi_check_rdata_fire(const axi_channel &axi) {
  //printf("axi r valid %x ready %x \n",axi.r.valid, axi.r.ready);
  if (axi.r.ready && axi.r.valid) {
#ifdef DEBUG_LOG_AXI4
    printf("axi r channel fired data = 0x%016lx, id = %d\n", axi.r.data[0], axi.r.id);
#endif
    return true;
  }
  return false;
}

void init_axi4(){

}

void axi4_read(){

}
void axi4_write(){
    
}

static void ram_read(long long raddr, uint32_t *rdata) {
  if(raddr >= 0x80000000 & raddr<0x83000000 ){
    raddr=(raddr-CONFIG_MBASE);
    *rdata =  *(uint32_t *)(sram+raddr);
    //printf("ram_read raddr %llx data %x \n",raddr,*rdata);
  }
  else if(raddr >= 0x83000000 & raddr<0x88000000 ){
    *rdata = pmem_read(raddr, 4);
  }
  else assert(raddr==0);
}
static int wait_resp_r = 0;
static int wait_resp_b = 0;
static int wait_req_w = 0;
// 准备上升沿的处理
void dramsim3_helper_rising(const axi_channel &axi) {
  // ticks DRAMsim3 according to CPU_FREQ:DRAM_FREQ

  // read data fire: check the last read request
  // 如果读数据握手了
  if (axi_check_rdata_fire(axi)) {
    wait_resp_r = 1;
  }
  // read address fire: accept a new request
  // 如果读地址握手了
  if (axi_check_raddr_fire(axi)) {

  }

  // the last write transaction is acknowledged
  // 如果写响应通道握手了
  // 理应是写完了再响应，但仿真器是瞬间写入，因此直接握手并写入


  // write address fire: accept a new write request
  // 如果写地址握手了


  // write data fire: for the last write transaction
  // 如果写数据握手了

}
axi_addr_t raddr;
// 准备下降沿的处理
void dramsim3_helper_falling(axi_channel &axi) {
  // default branch to avoid wrong handshake
  // 初始化slave的所有握手信号避免错误握手
  axi.aw.ready = 0;
  axi.w.ready  = 0;
  axi.b.valid  = 0;
  axi.ar.ready = 0;
  axi.r.valid  = 0;
  // RADDR: check whether the read request can be accepted
  // 读地址，检测是否有读地址请求，并且dram能否接收请求，那么就接收读地址
  if (axi_get_raddr(axi, raddr)) {
    axi.ar.ready = 1;

    //printf("try to accept read request to 0x%lx\n", raddr);
  }
  // RDATA: if finished, we try the next rdata response
  // 读数据，检测是否有读数据回应，如果有就提交到axi总线
  if (axi.r.ready==1) {
      uint32_t data;
      ram_read(raddr,&data);

      // 利用返回的读数据设置axi总线
      memcpy(axi.r.data, &data, 4);
      axi.r.valid = 1;
      axi.r.last =  1;
      axi.r.id = 0;
      //printf("[axi ar]addr=%lx ,data=%x \n",raddr,data);
  }



  // WREQ: check whether the write request can be accepted
  // Note: block the next write here to simplify logic
  // 写请求，检测是否有写请求，并且目前仿真是否有其他请求，并且dram能否接收请求
  // ok则接收写地址和写数据


  // WDATA: check whether the write data can be accepted
  // 写数据，burst持续接收写数据

  

  // WRESP: if finished, we try the next write response
  // 写响应

}
