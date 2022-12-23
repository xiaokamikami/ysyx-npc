#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  SDL_Surface *surface = NULL;
  FILE * fd = fopen(filename,"rb");
  if (fd==NULL) {
    return NULL;
  }
  fseek(fd, 0, SEEK_END);
  int size= ftell(fd);

  // 返回文件开头
  fseek(fd, 0, SEEK_SET);
    // 申请内存区间存储图片像素数据
  char* buf = malloc(size+1);
     // Read the file data into the buffer
  fread(buf, 1, size, fd);
  buf[size] = 0;
    // Load the image from the buffer
  surface = STBIMG_LoadFromMemory(buf, size);

  
  // 释放内存并关闭文件
  fclose(fd);
  free(buf);
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
