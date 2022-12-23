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

  // �����ļ���ͷ
  fseek(fd, 0, SEEK_SET);
    // �����ڴ�����洢ͼƬ��������
  char* buf = malloc(size+1);
     // Read the file data into the buffer
  fread(buf, 1, size, fd);
  buf[size] = 0;
    // Load the image from the buffer
  surface = STBIMG_LoadFromMemory(buf, size);

  
  // �ͷ��ڴ沢�ر��ļ�
  fclose(fd);
  free(buf);
  // ���ؽ�����ͼƬ
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
