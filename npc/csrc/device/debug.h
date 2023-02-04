#ifndef _DEBUG_H_
#define _DEBUG_H_
#include "../color.h"
//debug
#define diff_en         //difftest开关
//#define vcd_en          //波形记录
#define DEVICE_ENABLE

//device
#define CONFIG_HAS_KEYBOARD
#define CONFIG_HAS_VGA
#define CONFIG_HAS_TIMER
#define CONFIG_HAS_USART

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

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      isa_reg_display();\
      assert(cond); \
    } \
  } while (0)

#endif // !1



