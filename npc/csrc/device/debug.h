#ifndef _DEBUG_H_
#define _DEBUG_H_
#include "../color.h"
//*************debug**************//
//#define diff_en 1        //difftest开关
//#define vcd_en  1        //波形记录
//#define end_time 200
//*************device*************//
#define SDL_VGA 1
#define SDL_KEYBOARD 1 






#define DEVICE_ENABLE 1
#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_HAS_VGA 1
#define CONFIG_HAS_TIMER 1
#define CONFIG_HAS_USART 1

#define FPS 30

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define LogR(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_RED) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define LogG(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_GREEN) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)
extern void isa_reg_display();
#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      isa_reg_display();\
      assert(cond); \
    } \
  } while (0)

#endif // !1



