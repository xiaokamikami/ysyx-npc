#include <common.h>
#include "device.h"
#include "fs.h"
#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (uint16_t i=0;i<len;++i)
  {
      putch(((char *)buf)[i]);
  }

  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;

  //int keydown;
  //if(ev.keydown) keydown=1;
  //else keydown=0;
  sprintf(buf," %d,%d \n",ev.keydown,ev.keycode);
  printf("Got  (kbd): %s (%d) %s  \n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
  
  return len;

}
static uint32_t Canvas_x,Canvas_y;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  Canvas_x = io_read(AM_GPU_CONFIG).width ;
  Canvas_y = io_read(AM_GPU_CONFIG).height;
  //Log("GET dispinfo %d %d ",w,h);
  sprintf(buf,"WIDTH :%d\nHEIGHT:%d\n",Canvas_x,Canvas_y);
  return len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {   
  int x = offset%Canvas_x;
  int y = len%Canvas_y;
  int w = offset/Canvas_x;
  int h = len/Canvas_y;

  //printf("[fb write]x:%d y:%d w %d,h %d \n",x,y,w,h);
  io_write(AM_GPU_FBDRAW,x,y, (uint32_t *)buf, w , h, true);


  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}


uint64_t rtc_read(void){
  // uint64_t lo = *(volatile uint32_t *)(RTC_ADDR );
  // uint64_t hi = *(volatile uint32_t *)(RTC_ADDR+4 );
  // uint64_t time  = (hi << 32) | lo;
  // //Log("get time %ld\n",time);
  return io_read(AM_TIMER_UPTIME).us; 
}

#define KEYDOWN_MASK 0x8000


