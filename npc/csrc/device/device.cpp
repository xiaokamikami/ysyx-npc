#include <sys/time.h>
#include <iostream>
#include <cassert>
#include <stdio.h>
#include "device.h"
#include "io/map.h"
#include "../main.h"
extern void exit_now();
using namespace std;
extern bool sdl_exit;
static uint64_t boot_time = 0;
static uint64_t sys_time_ns=0;
#define GHZ_1 1000000000 //HZ
//#define TIME_HARD 1             //模拟真实时钟
extern vluint64_t main_time;
static uint64_t get_time_internal() {     //get liunx sys time
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec/ 1000;
  return us;
}
void rct_init(){
  #ifdef TIME_HARD
    boot_time = 0; 
  #else
    boot_time = get_time_internal();
  #endif 
}
uint64_t get_time() {
  uint64_t now_us;
  #ifdef TIME_HARD
     now_us=(main_time)/1000;

    return now_us;
  #else
    now_us = get_time_internal();
    return now_us - boot_time;
  #endif 

}

static void serial_putc(char ch) {
  printf("%c",ch);
}

uint32_t serial_io_output() {
  //uint32_t key = key_dequeue();
  //if(key!=0 )printf("get key code %d \n",key_dequeue());
  return key_dequeue();
}

void serial_io_input(long long wdata) {
  serial_putc((char)wdata);
}


void device_update() {
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {

      #ifdef SDL_KEYBOARD
        // If a key was pressed
        case SDL_KEYDOWN:{
          uint8_t k = event.key.keysym.scancode;
          bool is_keydown = (event.key.type == SDL_KEYDOWN);
          send_key(k, is_keydown);
          //printf("get key code %d \n",k);
          break;
        }
        case SDL_KEYUP: {
          uint8_t k = event.key.keysym.scancode;
          bool is_keydown = (event.key.type == SDL_KEYDOWN);
          send_key(k, is_keydown);
          //printf("get key code %d \n",k);
          break;
        }
      #endif

      #ifdef SDL_VGA  
        case SDL_QUIT:
          sdl_exit=1;
          printf("\nDevice :SDL_QUIT \n ");
          //exit_now();
          break;
      #endif

      default: break;
    }
  }
}

void init_device() {

	init_map();
	//IFDEF(CONFIG_HAS_SERIAL, init_serial());
	//IFDEF(CONFIG_HAS_TIMER, init_timer());
  IFDEF(CONFIG_HAS_KEYBOARD, init_keymap());
	IFDEF(CONFIG_HAS_VGA, init_vga());
	//IFDEF(CONFIG_HAS_AUDIO, init_audio());

}
