#include <stdio.h>
#include "vga.h"
#include "device.h"
#include "io/map.h"

extern void exit_now();
#define VGA_W 400
#define VGA_H 300

SDL_Window *win = NULL;
SDL_Renderer *rdr = NULL;
SDL_Texture *txr = NULL;


static uint32_t *vgactl_port_base=NULL;
static Pixel *vmem = NULL;

static uint32_t screen_width() {
	return VGA_W;
}

static uint32_t screen_height() {
	return VGA_H;
}

static uint32_t screen_size() {
	return screen_width() * screen_height() * sizeof(uint32_t);
}

void update_vga() {
  SDL_UpdateTexture(txr, NULL, vmem, VGA_W * sizeof(Pixel));
  SDL_RenderClear(rdr);
  SDL_RenderCopy(rdr, txr, NULL, NULL);
  SDL_RenderPresent(rdr);
}

void init_vga() {
  // 写入屏幕信息，即width和height，各16比特位
  vgactl_port_base = (uint32_t *)new_space(8);
	vgactl_port_base[0] = (screen_width() << 16) | screen_height();
  add_mmio_map("vgactl", VGACTL_ADDR, vgactl_port_base, 8, NULL);
  //mmio_write(VGACTL_ADDR,4,(screen_width() << 16) | screen_height());
  
	vmem = (Pixel *)new_space(screen_size());
	add_mmio_map("vmem", FB_ADDR, vmem, screen_size(), NULL);
  // init SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {                               //初始化SDL图像
    printf("SDL could not be initialized: %s\n", SDL_GetError());
    assert(0);
  }
  printf("SLD init successful \n");
  
  win = SDL_CreateWindow("riscv64-npc",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,VGA_W,VGA_H,0);    //创建窗口
  if (!win) {
    printf("Window creation failed: %s\n", SDL_GetError());
    assert(0);
  }

  rdr = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);     //创建渲染器
  if (!rdr) {
    printf("Renderer creation failed: %s\n", SDL_GetError());
    assert(0);
  }

  txr = SDL_CreateTexture(rdr,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STATIC,VGA_W,VGA_H); //创建纹理
  if (!txr) {
    printf("Texture creation failed: %s\n", SDL_GetError());
    assert(0);
  }

  // init FB
  Pixel *p = NULL;
  for (int i = 0; i < VGA_H; ++i) {
    for (int j = 0; j < VGA_W; ++j) {
      p = &vmem[i * VGA_W + j];
      //printf("%p - %p = %p\n", (uint64_t *)p, (uint64_t *)ram, (uint64_t *)((uint8_t *)p - (uint8_t *)ram));
      p->b = 0x00;
      p->g = 0x00;
      p->r = 0x00;
      p->a = 0x00;
    }
  }
  update_vga();
  printf("init_vga \n");
}



