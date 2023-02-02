#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <SDL2/SDL.h>
#include <stdbool.h>
#include "macro.h"
#include "keyboard.h"
#include "vga.h"

extern uint32_t serial_io_output();
extern void serial_io_input(long long wdata);

#define MMIO_BASE 0xb0000000
#define DEVICE_BASE 0xb0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

void rct_init();
uint64_t get_time();
void device_update();

#endif




