#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
#define N   32
int W=400;
int H=300;
void __am_gpu_init() {
  int i;
  int w = io_read(AM_GPU_CONFIG).width  ;  // TODO: get the correct width
  int h = io_read(AM_GPU_CONFIG).height ;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++)fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x=ctl->x,y=ctl->y,w=ctl->w,h=ctl->h;
  uint32_t * pixels=ctl->pixels;
  int cp_bytes = sizeof(uint32_t)*min(w,W-x);
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
    //ctl->sync=0;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
