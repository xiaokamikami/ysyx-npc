#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
using namespace std;

static uint64_t boot_time = 0;
static uint64_t get_time_internal() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec/ 1000;
  return us;
}
void rct_init(){
  //boot_time = get_time_internal();
}
uint64_t get_time() {
  uint64_t now = get_time_internal();
  //cout<< now <<endl;
  return now - boot_time;
}

static void serial_putc(char ch) {
  //cout << ch << endl;
  printf("%c",ch);
}

void serial_io_output() {
  assert(0);
}

void serial_io_input(long long wdata) {
  serial_putc((char)wdata);
}







