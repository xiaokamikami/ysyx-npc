#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
int screen_w = 0, screen_h = 0;
static int canvas_x = 0, canvas_y = 0;
static uint32_t boot_time = 0;
int Event_fp;
int Fb_fp;
//获取系统时间
uint32_t NDL_GetTicks() {
  //return sys ms
  struct timeval time;
  gettimeofday(&time,NULL);
  //uint32_t time_s= time.tv_sec;
  //uint64_t time_us=time.tv_usec;
  //uint32_t time_ms=time.tv_usec/1000;
  //printf("NDL time ms = %d \n",time_ms-boot_time);
  return ((time.tv_sec * 1000) + (time.tv_usec / 1000));;
}

//获取键盘事件
int NDL_PollEvent(char *buf, int len) {
  //if(ret>0)printf("ret = %d \n",ret);
  return read(Event_fp,buf,len);
}

//申请一个画布，用于刷新屏幕
void NDL_OpenCanvas(int *w, int *h) {
  if (*w == 0) *w = screen_w;
  if (*h == 0) *h = screen_h;
  canvas_x = *w; canvas_y = *h;

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

  printf("[NDL_OpenCanvas]Canvas_x %d Canvas_y %d screen_w %d screen_h %d\n",canvas_x,canvas_y,screen_w,screen_h);
}

//往显存写入像素
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h){

    //局中对齐  计算图像刷新起点
    x+=(screen_w -canvas_x )/2;  
    y+=(screen_h -canvas_y )/2;

    //printf("[NDL_DrawRect] %d %d %d %d\n",x,y,w,h);
    
    //循环写显存 一次写一行
    for (int i = 0; i < h; ++ i) {   
      #ifdef __ISA_NATIVE__
      lseek(Fb_fp, ((y + i) * screen_w + x) * sizeof(uint32_t), SEEK_SET);
      write(Fb_fp, pixels + i * w, w * sizeof(uint32_t));
      #else
      lseek(Fb_fp, ((y + i) * screen_w + x) , SEEK_SET);//先修改offset为起点
      write(Fb_fp, pixels + i * w, w );                 //写数据
      #endif
  }

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
extern void SDL_Init();
//初始化外设
int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  //if(flags == 1){
    boot_time = NDL_GetTicks();
    printf("[NDL_Init]init time\n");
  //}
  //else if(flags == 2){
    Event_fp = open("/dev/events",0);
    printf("[NDL_Init]init enent\n");
  //}
  //else if(flags == 3){
    Fb_fp = open("/dev/fb",0);
    printf("[NDL_Init]init fd\n");
  //}
    int disp = open("/proc/dispinfo",0);
    char disps[64];
    read(disp,disps,sizeof(disps));
    close(disp);
    sscanf(disps,"%*[A-z] :%d\n%*[A-z] :%d",&screen_w,&screen_h);

  return 0;
}

void NDL_Quit() {
  printf("[NDL_Quit] \n");
}
