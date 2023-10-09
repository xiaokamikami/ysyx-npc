#include <am.h>
#include <nemu.h>
#include <string.h>
//#include <stdio.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
static uint32_t vga_width =400;
static uint32_t vga_height=300;
//uint32_t *fb= (uint32_t *)(uintptr_t)FB_ADDR;
void __am_gpu_init() {
  
  vga_width = inl(VGACTL_ADDR)>>16  ;  // TODO: get the correct width
  vga_height = inl(VGACTL_ADDR)&0x0000ffff ;  // TODO: get the correct height
  //int i;
  //for (i = 0; i < vga_width * vga_height; i ++)fb[i] = i;   //初始化线条
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  //vga_width = inl(VGACTL_ADDR)>>16  ;  // TODO: get the correct width
  //vga_height = inl(VGACTL_ADDR)&0x0000ffff ;  // TODO: get the correct height
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = vga_width, .height = vga_height,
    .vmemsz = vga_width * vga_height * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (w == 0 || h == 0) return;
  uint32_t *fb = (uint32_t *)FB_ADDR;
  uint32_t *pixels = (uint32_t *)ctl->pixels;
  memcpy(fb + ((y * vga_width)  + x ),pixels ,w*4*h);
  // for (uint32_t j = 0; j < h; ++j)
  //   for (uint32_t i = 0; i < w; ++i) {
  //     fb[(y + j) * vga_width + (x + i)] = pixels[j * w + i];
  //   }
  //printf("GPU FB OK\n");
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}


void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}