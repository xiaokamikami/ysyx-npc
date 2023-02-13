#include <NDL.h>
#include <SDL.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}
// 计算所有按键的数量
static int kb_len = sizeof(keyname) / sizeof(keyname[0]);

// 记录所有按键的状态
static uint8_t key_state[sizeof(keyname) / sizeof(keyname[0])] = {0};

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  
  if (NDL_PollEvent(buf, 64)) {
    //printf("buf %s \n",buf);
    char keys[10]={};
    sscanf(buf+3,"%s",keys);
    //printf("keys %s\n",keys);
    // ev->type 指明event类型
    // ev->key.type 指明键盘event的类型
    for (int key = 0; key < kb_len; ++key) {      //遍历按键名字
      if (strcmp(keys, keyname[key]) == 0) {
        ev->key.keysym.sym = key;
        // 判断是按键按下还是抬起
        ev->key.type= (buf[1] == 'd') ? SDL_KEYDOWN : SDL_KEYUP;
        ev->type = ev->key.type;
        key_state[key] = ev->type;
        //printf("event get:%d %d \n",key_state[key],ev->key.keysym.sym);
        break;
      }

    }
    
    return 1;
  }

  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  printf("[SDL_WaitEvent]:please push key \n");
  while (SDL_PollEvent(event) == 0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("[SDL_PeepEvents]\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //printf("[SDL_GetKeyState] entering and return\n");
  if (numkeys != NULL)
    *numkeys = sizeof(key_state) / sizeof(uint8_t);
  return key_state;

}
