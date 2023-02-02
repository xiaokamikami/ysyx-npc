#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
#include "debug.h"
#include "device.h"
extern void exit_now();
using namespace std;
extern bool sdl_exit;
static uint64_t boot_time = 0;
static uint64_t get_time_internal() {
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec/ 1000;
  return us;
}
void rct_init(){
  boot_time = get_time_internal();
}
uint64_t get_time() {
  uint64_t now = get_time_internal();
  return now - boot_time;
}

static void serial_putc(char ch) {
  printf("%c",ch);
}

uint32_t serial_io_output() {
  uint32_t key = key_dequeue();
  //if(key!=0 )printf("get key code %d \n",key_dequeue());
  return key;
}

void serial_io_input(long long wdata) {
  serial_putc((char)wdata);
}


void device_update() {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        //sdl_exit=1;
        exit_now();
        break;
    #ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        //printf("get key code %d \n",k);
        break;
      }
    #endif
      default: break;
    }
  }
}

