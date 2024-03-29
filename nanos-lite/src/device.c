#include <common.h>
#include "device.h"
#include "fs.h"
#include "stdio.h"
#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif
#define KEYDOWN_MASK 0x8000
#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};


typedef struct {
  uint8_t sym;
} SDL_keysym;

typedef struct {
  uint8_t type;
  SDL_keysym keysym;
} SDL_KeyboardEvent;

typedef struct {
  uint8_t type;
  int code;
  void *data1;
  void *data2;
} SDL_UserEvent;
typedef union {
  uint8_t type;
  SDL_KeyboardEvent key;
  SDL_UserEvent user;
} SDL_Event;


size_t serial_write(const void *buf, size_t offset, size_t len) {
  for (uint16_t i=0;i<len;++i)
  {
      putch(((char *)buf)[i]);
  }

  return len;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  SDL_Event *th = buf;
  //把AM IO的数据转为NAVY的SDL格式  
  if (ev.keycode == AM_KEY_NONE) return 0;
  else{
    th->key.keysym.sym  = (uint8_t)ev.keycode ;
    th->type         = ev.keydown ;
  }

  //printf("[events] keycode=%d ,down=%d",th->key.keysym.sym,th->type);


  // if (ev.keycode == AM_KEY_NONE) return 0;     //之前写的老版本，采用字符解析法，计算开销很大，废弃
  // sprintf((char *)buf, "k%c %s\0", ev.keydown ? 'd' : 'u', keyname[ev.keycode]);
  // len = strlen(buf);
  //int keydown;
  //if(ev.keydown) keydown=1;
  //else keydown=0;
  //sprintf(buf," %d,%d \n",ev.keydown,ev.keycode);
  //printf("Got  (kbd): %s (%d) %s  \n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
  //printf("[events_read] %s len %d \n",buf,len);
  return len;

}
static uint32_t Canvas_x,Canvas_y;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  Canvas_x = io_read(AM_GPU_CONFIG).width ;
  Canvas_y = io_read(AM_GPU_CONFIG).height;
  //Log("GET dispinfo %d %d ",Canvas_x,Canvas_y);
  sprintf(buf,"WIDTH :%d\nHEIGHT:%d\n",Canvas_x,Canvas_y);
  return len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {   

  int x = offset % Canvas_x;  //计算起点
  int y = offset / Canvas_x;
  //printf("[fb write]x:%d y:%d len:%d \n",x,y,len);
  io_write(AM_GPU_FBDRAW,x,y, (uint32_t *)buf, len , 1, true);
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
#ifdef __ISA_AM_NATIVE__ 
struct timeval
{
#ifdef __USE_TIME_BITS64
  __time64_t tv_sec;		/* Seconds.  */
  __suseconds64_t tv_usec;	/* Microseconds.  */
#else
  long tv_sec;		/* Seconds.  */
  long tv_usec;	/* Microseconds.  */
#endif
};
#endif

uint64_t rtc_read(uintptr_t* addr){
  struct timeval *timeer = (struct timeval *)addr;
  size_t time = io_read(AM_TIMER_UPTIME).us;
  timeer->tv_usec = (time % 1000000);
  timeer->tv_sec  = (time / 1000000);
  // uint64_t lo = *(volatile uint32_t *)(RTC_ADDR );
  // uint64_t hi = *(volatile uint32_t *)(RTC_ADDR+4 );
  // uint64_t time  = (hi << 32) | lo;
  // //Log("get time %ld\n",time);
  return 0; 
}

#define KEYDOWN_MASK 0x8000


