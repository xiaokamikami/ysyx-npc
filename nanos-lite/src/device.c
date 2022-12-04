#include <common.h>
#include "device.h"
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
  
  return 0;
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}


uint64_t rtc_read(void){
  uint64_t lo = *(volatile uint32_t *)(RTC_ADDR );
  uint64_t hi = *(volatile uint32_t *)(RTC_ADDR+4 );
  //uint32_t lo = inl(RTC_ADDR);
  //uint32_t hi = inl(RTC_ADDR+4);
  uint64_t time  = (hi << 32) | lo;
  //Log("get time %ld\n",time);
  return time ;
}

#define KEYDOWN_MASK 0x8000

void input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int k = *(volatile uint32_t *)(KBD_ADDR);
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  if(kbd->keydown==true){
    kbd->keycode = k & ~KEYDOWN_MASK;
    //printf("k=%ld\n",k);  // down??code
    //printf("keycode = %d\n",kbd->keycode);
  }
  else kbd->keycode = AM_KEY_NONE;
}
