#include <am.h>
#include <nemu.h>
#include <amdev.h>
#include <stdio.h>
#define KEYDOWN_MASK 0x8000

//更新键盘事件 与掩码进行与运算得到type  与非得到键码
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int k = *(volatile uint32_t *)(KBD_ADDR);
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  //if(kbd->keydown==true)
  kbd->keycode = k & ~KEYDOWN_MASK;
  //else if(kbd->keydown==false)kbd->keycode = k & ~KEYDOWN_MASK;
  //else kbd->keycode=AM_KEY_NONE;
}
