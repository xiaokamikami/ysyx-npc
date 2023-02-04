#include <am.h>
#include <nemu.h>
#include <string.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
int W=400;
int H=300;
uint32_t *fb= (uint32_t *)(uintptr_t)FB_ADDR;
static uint32_t vga_width, vga_height;
void __am_gpu_init() {
  
  vga_width = io_read(AM_GPU_CONFIG).width  ;  // TODO: get the correct width
  vga_height = io_read(AM_GPU_CONFIG).height ;  // TODO: get the correct height
  //int i;
  //for (i = 0; i < vga_width * vga_height; i ++)fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = vga_width * vga_height * sizeof(uint32_t)
  };
}
void _draw_rect(const uint32_t *pixels, int x, int y, int w, int h) {
  int c, r;
  for (r = y; r < y + h; r++){
    for (c = x; c < x + w; c++){
      fb[c+r*W] = pixels[(r-y)*w+(c-x)];
    }
  }
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  //_draw_rect(ctl->pixels,ctl->x,ctl->y,ctl->w,ctl->h);

    // ??x,y??????w*h????????
  uint32_t x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (w == 0 || h == 0) return;
  uint32_t *fb = (uint32_t *)FB_ADDR;
  uint32_t *pixels = (uint32_t *)ctl->pixels;
  for (uint32_t j = 0; j < h; ++j)
    for (uint32_t i = 0; i < w; ++i) {
      fb[(y + j) * vga_width + (x + i)] = pixels[j * w + i];
    }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    //ctl->sync=0;
  }  
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
