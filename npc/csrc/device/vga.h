#ifndef __VGA_H__
#define __VGA_H__

#include <SDL2/SDL.h>


// for SDL texture
typedef struct Pixel
{
    uint8_t b;
    uint8_t g;
    uint8_t r;
    uint8_t a;
} Pixel;

void init_vga();
void update_vga();
#endif
