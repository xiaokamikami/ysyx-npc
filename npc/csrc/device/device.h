#ifndef __DEVICE_H__
#define __DEVICE_H__

#include <SDL2/SDL.h>
#include <stdbool.h>
#include <cassert>
#include "macro.h"

#include "keyboard.h"
#include "vga.h"

#include "../difftests/memory.h"
#include "debug.h"

#define CONFIG_ISA64 1

uint32_t serial_io_output();
void serial_io_input(long long wdata);
void init_device();

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
#define SYNC_ADDR       (VGACTL_ADDR + 4)
#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, " 0x%016" PRIx64, " 0x%08" PRIx32)

typedef word_t vaddr_t;
#define FMT_PADDR MUXDEF(PMEM64, " 0x%016" PRIx64, " 0x%08" PRIx32)
typedef uint16_t ioaddr_t;

void rct_init();
uint64_t get_time();
void device_update();

#endif




