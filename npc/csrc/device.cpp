#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
using namespace std;

static uint64_t boot_time = 0;

 

static uint64_t get_time_internal() {

  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
    // cout<< get_time <<endl;
  uint64_t us = now - boot_time;

  return us;
}

static void serial_putc(char ch) {
  cout << ch << endl;
}

 void serial_io_output() {
  assert(0);
}

void serial_io_input(long long wdata) {
  putc((uint8_t)wdata, stderr);
  
}







