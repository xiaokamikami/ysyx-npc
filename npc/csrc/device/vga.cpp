#include <stdio.h>
#include <cassert>
#include "vga.h"
#include "device.h"

extern void exit_now();
SDL_Window *win = NULL;
SDL_Renderer *rdr = NULL;
SDL_Texture *txr = NULL;
Pixel *fb=NULL;
uint32_t *vga_rom=NULL;

void vga_init() {
   fb = (Pixel * )FB_ADDR;
   vga_rom= (uint32_t * )VGACTL_ADDR;
   

  // init SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {                               //初始化SDL图像
    printf("SDL could not be initialized: %s\n", SDL_GetError());
    assert(0);
  }
  else {
    printf("SDL video init \n");
  }

  win = SDL_CreateWindow("riscv64-npc",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,VGA_H,VGA_V,0);    //创建窗口
  if (!win) {
    printf("Window creation failed: %s\n", SDL_GetError());
    assert(0);
  }

  rdr = SDL_CreateRenderer(win, -1, SDL_RENDERER_SOFTWARE);     //创建渲染器
  if (!rdr) {
    printf("Renderer creation failed: %s\n", SDL_GetError());
    assert(0);
  }

  txr = SDL_CreateTexture(rdr,SDL_PIXELFORMAT_ARGB8888,SDL_TEXTUREACCESS_STATIC,VGA_H,VGA_V); //创建纹理
  if (!txr) {
    printf("Texture creation failed: %s\n", SDL_GetError());
    assert(0);
  }



}



void update_vga() {
  SDL_UpdateTexture(txr, NULL, fb, VGA_H * sizeof(Pixel));
  SDL_RenderClear(rdr);
  SDL_RenderCopy(rdr, txr, NULL, NULL);
  SDL_RenderPresent(rdr);
}