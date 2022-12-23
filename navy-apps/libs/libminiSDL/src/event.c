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
// �������а���������
static int kb_len = sizeof(keyname) / sizeof(keyname[0]);

// ��¼���а�����״̬
static uint8_t key_state[sizeof(keyname) / sizeof(keyname[0])] = {0};

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  

  if (NDL_PollEvent(buf, 1)) {
    int pos = 0,key=0;
    sscanf(buf," %d,%d",&pos,&key);

    // �ж��ǰ������»���̧��
    // ev->type ָ��event����
    // ev->key.type ָ������event������
    key_state[key] = pos;
    ev->key.type = key_state[key];
    ev->type = ev->key.type;

    ev->key.keysym.sym = key;

    return 1;
  }

  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  while (SDL_PollEvent(event) == 0);
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //printf("[SDL_GetKeyState] entering and return\n");
  if (numkeys != NULL)
    *numkeys = sizeof(key_state) / sizeof(uint8_t);
  return key_state;
}
