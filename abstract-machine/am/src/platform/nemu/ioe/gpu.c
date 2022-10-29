#include <am.h>
#include <nemu.h>
#include <string.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
int W=400;
int H=300;
uint32_t *fb= (uint32_t *)(uintptr_t)FB_ADDR;
void __am_gpu_init() {
  // int i;
  // int w = io_read(AM_GPU_CONFIG).width  ;  // TODO: get the correct width
  // int h = io_read(AM_GPU_CONFIG).height ;  // TODO: get the correct height
   
  // for (i = 0; i < w * h; i ++)fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
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
  _draw_rect(ctl->pixels,ctl->x,ctl->y,ctl->w,ctl->h);
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    //ctl->sync=0;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
