#ifndef __VGA_H__
#define __VGA_H__

#include <SDL2/SDL.h>
#define VGA_H 320
#define VGA_V 200

// for SDL texture
typedef struct Pixel
{
    uint8_t b;
    uint8_t g;
    uint8_t r;
    uint8_t a;
} Pixel;

extern void vga_init();

#endif
