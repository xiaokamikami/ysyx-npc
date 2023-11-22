#ifndef _DEBUG_H_
#define _DEBUG_H_
#include "../color.h"
//*************debug**************//
//difftest开关
#define diff_en       1
//检查PC值的各种异常
//#define diff_pc       1
//检查零号寄存器异常
//#define diff_reg0     1
//限制运行时间 二选一 记上升沿次数或者记指令次数
//#define clk_count_end 1
//const uint32_t end_times =500;

//波形记录开关
//#define vcd_en        1
//debug波形的时钟地点
//#define debuge_time   7000
//debug波形的pc地址
//#define debuge_pc   0

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



