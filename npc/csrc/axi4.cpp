#include "aix4.h"

#include <assert.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "difftests/memory.h"
#include "device/macro.h"
#include "device/device.h"
#include "device/debug.h"
#include "device/io/map.h"

#include "main.h"

extern void exit_now();
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
//检查写响应通道
bool axi_check_wack_fire(const axi_channel &axi) {
  if (axi.b.valid && axi.b.ready) {
#ifdef DEBUG_LOG_AXI4
    printf("axi b channel fired id = %d\n", axi.b.id);
    std::fflush(stdout);
    std::fflush(stderr);
#endif
    return true;
  }
  return false;
}

// ar channel: (1) read raddr; (2) try to accept the address; 
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
// aw channel: (1) read waddr; (2) try to accept the address; 
// 获取写地址
bool axi_get_waddr(const axi_channel &axi, axi_addr_t &addr) {
  if (axi.aw.valid) {
    addr = axi.aw.addr;
    return true;
  }
  return false;
}
//接收写地址，将ready设置为1
void axi_accept_waddr(axi_channel &axi) {
  axi.aw.ready = 1;
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

static void ram_read(uint64_t raddr, uint64_t *rdata) {
  #ifdef DEBUG_LOG_AXI4
    printf("axi4 ram_read addr %lx ",raddr);
  #endif
  if(raddr >= 0x80000000 & raddr<0x83000000 ){     //程序文件
    //raddr=(raddr-CONFIG_MBASE);
    //*rdata =  *(uint64_t *)(sram+(raddr & ~0x7ull));
    *rdata = pmem_read((raddr & ~0x7ull), 8);
    // 8字节对齐
    uint8_t offset = raddr-(raddr & ~0x7ull);
    //mask
    if (offset>0)
    {
      *rdata = (*rdata) >> (offset*8);
    }
  }
  else if(raddr >= 0x83000000 & raddr<0x88000000 ){ //虚拟磁盘
    *rdata = pmem_read(raddr, 8);
  } 
  else if(DEVICE_BASE <= raddr && raddr <= AUDIO_SBUF_ADDR){ //读取外设
    device_read(raddr, rdata);
  }
  else if(raddr !=0) {
    printf("axi4 read no tag addr %16lx \n",raddr);
    exit_now();//assert(0);
  }
  else assert(raddr==0);
  #ifdef DEBUG_LOG_AXI4
    printf("axi4 ram_read addr %lx data %lx \n",raddr,*rdata);
  #endif
}
static void ram_write(uint64_t waddr,size_t len, uint64_t wdata) {
  #ifdef DEBUG_LOG_AXI4
    printf("axi4 ram_write addr %lx data %lx \n",waddr,wdata);
  #endif
  if(waddr<0x88000000 && waddr >= 0x80000000 ){
    pmem_write((waddr), len, wdata);     //写入不对齐
  }
  else if(DEVICE_BASE <= waddr && waddr <= AUDIO_SBUF_ADDR){ //写外设
    device_write(waddr,wdata);
  }
  else if(waddr !=0){
    printf("axi4 write no tag addr %lx \n",waddr);
    exit_now();//assert(0);
  } 
  else assert(waddr==0);
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

  }
  // read address fire: accept a new request
  // 如果读地址握手了
  if (axi_check_raddr_fire(axi)) {

  }

  // the last write transaction is acknowledged
  // 如果写响应通道握手了
  // 理应是写完了再响应，但仿真器是瞬间写入，因此直接握手并写入
  if(axi_check_wack_fire(axi)){

  }

  // write address fire: accept a new write request
  // 如果写地址握手了
  if (axi_check_waddr_fire(axi)) {

  }

  // write data fire: for the last write transaction
  // 如果写数据握手了
  if (axi_check_wdata_fire(axi)) {

  } 
}
axi_addr_t raddr;
axi_addr_t waddr;
uint8_t   ar_len_count;  //读计数

// 准备下降沿的处理
void dramsim3_helper_falling(axi_channel &axi) {
  // default branch to avoid wrong handshake
  uint64_t data;
  uint8_t  strb;
  // 初始化slave的所有握手信号避免错误握手
  axi.aw.ready = 0;
  axi.w.ready  = 0;
  axi.b.valid  = 0;
  axi.ar.ready = 0;
  axi.r.valid  = 0;
  axi.r.last   = 0;
  // RADDR: check whether the read request can be accepted
  // 读地址，检测是否有读地址请求，并且dram能否接收请求，那么就接收读地址
  if (axi_get_raddr(axi, raddr)) {
    axi.ar.ready = 1;
    //printf("try to accept read request to 0x%lx\n", raddr);
  }
  // RDATA: if finished, we try the next rdata response
  // 读数据，检测是否有读数据回应，如果有就提交到axi总线
  if (axi.r.ready==1 ) {
      //printf("ar len %ld ",axi.ar.len);
      if(axi.ar.len <= 64){
        ram_read(raddr,&data);
        // 利用返回的读数据设置axi总线
        memcpy(axi.r.data, &data, 8);
        axi.r.valid = 1;
        axi.r.last =  1;
        axi.r.id = 0;
        //printf("[axi ar]addr=%lx ,data=%lx END \n",raddr+(ar_len_count/8),data);
      }else {
        if(ar_len_count >= axi.ar.len){
          axi.r.valid = 1;
          axi.r.last =  1;
          axi.r.id = 0;
         //printf("[axi ar] END \n");
        } else{
          ram_read(raddr+(ar_len_count/8),&data);
          // 利用返回的读数据设置axi总线
          memcpy(axi.r.data, &data, 8);
          //printf("[axi ar]addr=%lx ,data=%lx ",raddr+(ar_len_count/8),data);
          ar_len_count =ar_len_count+64;
          axi.r.valid = 1;
          axi.r.last =  0;
          axi.r.id = 0;
          //printf("[axi ar] bust \n");
        }
      }
  } else {
    ar_len_count = 0;
  }



  // WREQ: check whether the write request can be accepted
  // Note: block the next write here to simplify logic
  // 写请求，检测是否有写请求，并且目前仿真是否有其他请求，并且dram能否接收请求
  // ok则接收写地址和写数据
  if (axi_get_waddr(axi, waddr)) {
      axi.aw.ready = 1;
      //printf("try to accept write request to 0x%lx\n", waddr);
  }
  // WDATA: check whether the write data can be accepted
  // 写数据，burst持续接收写数据
  if( axi.w.valid == 1){
    strb  = axi.w.strb;
    uint8_t len;
    switch (strb){
      case 0x01   :len=1;break;
      case 0x03   :len=2;break;
      case 0x0f   :len=4;break;
      case 0xff   :len=8;break;
        /* code */
      default: printf("error axi w strb  错误的掩码\n");assert(0);break;
    }
    memcpy(&data, axi.w.data,len);
    ram_write(waddr,len,data);
    //printf("try to write data %lx to 0x%lx \n",data, waddr);
    axi.w.ready = 1;
  }

  // WRESP: if finished, we try the next write response
  // 写响应

}
