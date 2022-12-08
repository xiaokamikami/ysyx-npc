#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include "stdio.h"
SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  SDL_Surface img_o;
  printf("img load \n");
  FILE * fd = fopen(filename,"rb");
  if (!fd) {
    return NULL;
  }
  int size= fseek(fd, 0, SEEK_END);
  rewind(fd);
    // 申请内存区间存储图片像素数据
  unsigned char *buf = (unsigned char *)malloc(size);
  if (!buf) {
    fclose(fd);
    return NULL;
  }
  
  // 读取图片像素数据
  if (fread(buf, size, 1, fd) != 1) {
    free(buf);
    fclose(fd);
    return NULL;
  }
  // 解码图片像素数据
  SDL_Surface *surface = STBIMG_LoadFromMemory(buf, size);

  // 释放内存并关闭文件
  free(buf);
  fclose(fd);

  // 返回解码后的图片
  return surface;
}
int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
