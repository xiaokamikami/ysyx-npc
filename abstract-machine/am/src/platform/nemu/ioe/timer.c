#include <am.h>
#include <nemu.h>
#include <stdio.h>
static uint64_t boot_time = 0;


static uint64_t read_time() {
  uint64_t lo = *(volatile uint32_t *)(RTC_ADDR );
  uint64_t hi = *(volatile uint32_t *)(RTC_ADDR+4 );
  //uint32_t lo = inl(RTC_ADDR);
  //uint32_t hi = inl(RTC_ADDR+4);
  uint64_t time = (hi << 32) | lo;
  //printf("get time %ld\n",boot_time);
  return time ;
}

void __am_timer_init() {
  boot_time = read_time();
  printf("init time\n");
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us =read_time();
  //printf("us:%d\n",uptime->us);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 10;
  rtc->minute = 10;
  rtc->hour   = 10;
  rtc->day    = 10;
  rtc->month  = 10;
  rtc->year   = 2022;
}
