#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static uint32_t boot_time = 0;
int Event_fp;
int Fb_fp;
uint32_t NDL_GetTicks() {
  //return sys ms
  struct timeval time;
  gettimeofday(&time,NULL);
  //uint32_t time_s= time.tv_sec;
  //uint64_t time_us=time.tv_usec;
  uint32_t time_ms=time.tv_usec/1000;
  //printf("NDL time ms = %d \n",time_ms-boot_time);
  return time_ms-boot_time;
}


int NDL_PollEvent(char *buf, int len) {
  int ret = read(Event_fp,buf,len);
  return ret;
}
int Canvas_x=0,Canvas_y=0;
void NDL_OpenCanvas(int *w, int *h) {
  FILE* disp = fopen("/proc/dispinfo","r+");
  char disps[63];
  fread(disps,1,sizeof(disps),disp);
  fclose(disp);
  //printf("disp buf \n%s\n",disps);
  sscanf(disps,"%*[A-z] :%d\n%*[A-z] :%d",&Canvas_x,&Canvas_y);
  if(*w==0 && *h==0){
    *w=Canvas_x;
    *h=Canvas_y;
  }
  

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  printf("[NDL_OpenCanvas]Canvas_x %d Canvas_y %d screen_w %d screen_h %d\n",Canvas_x,Canvas_y,screen_w,screen_h);
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h){
    printf("[NDL_DrawRect] %d %d %d %d\n",x,y,w,h);
    //x += (screen_w - Canvas_x) / 2;
    //y += (screen_h - Canvas_y) / 2;

    lseek(Fb_fp, w+x, SEEK_SET);

    write(Fb_fp, pixels, h+ y);

}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  //if(flags == 1){
    boot_time = NDL_GetTicks();
    printf("init time\n");
  //}
  //else if(flags == 2){
    Event_fp = open("/dev/events",0,0);
    printf("init enent\n");
  //}
  //else if(flags == 3){
    Fb_fp = open("/dev/fb",0,0);
    printf("init fd\n");
  //}

  return 0;
}

void NDL_Quit() {
}
