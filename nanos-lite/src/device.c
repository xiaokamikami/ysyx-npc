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
  else {
    sprintf(buf,"Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
    //memcpy(buf,keyname[ev.keycode],sizeof(keyname[ev.keycode]));
    Log("Got  (kbd): %s (%d) %s\n", keyname[ev.keycode], ev.keycode, ev.keydown ? "DOWN" : "UP");
    return ev.keycode;
  }

  return 0;
}
static int d_w=0;
static int d_h=0;
size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  int w = io_read(AM_GPU_CONFIG).width ;
  int h = io_read(AM_GPU_CONFIG).height;
  //Log("GET dispinfo %d %d ",w,h);
  sprintf(buf,"WIDTH :%d\nHEIGHT:%d\n",w,h);
  d_w = w;
  d_h = h;
  return len;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  Log("fb write x %ld,y %ld",offset,len);
  //int star_x= d_w/2-offset/2;
  //int star_y= d_h/2-len/2;
  if(offset ==0 )
    io_write(AM_GPU_FBDRAW,0,0, (uint32_t *)buf, d_w , d_h, true);
  else 
    io_write(AM_GPU_FBDRAW,0,0, (uint32_t *)buf, offset , len, true);
  Log("fb write end");
  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}


uint64_t rtc_read(void){
  uint64_t lo = *(volatile uint32_t *)(RTC_ADDR );
  uint64_t hi = *(volatile uint32_t *)(RTC_ADDR+4 );
  uint64_t time  = (hi << 32) | lo;
  //Log("get time %ld\n",time);
  return time ;
}

#define KEYDOWN_MASK 0x8000


