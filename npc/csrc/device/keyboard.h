#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__


#include <SDL2/SDL.h>
#include "macro.h"
void send_key(uint8_t scancode, bool is_keydown);
uint32_t key_dequeue();
void init_keymap();    


#endif
