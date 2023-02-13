#ifndef _COLOR_H_
#define _COLOR_H_

#define NONE                  "\e[0m"           //�����ɫ����֮��Ĵ�ӡΪ���������֮ǰ�Ĳ���Ӱ��
#define BLACK                 "\e[0;30m"         //���
#define L_BLACK             "\e[1;30m"            //���ڣ�ƫ�Һ�
#define RED                     "\e[0;31m"      //��죬����
#define L_RED                 "\e[1;31m"        //�ʺ�
#define GREEN                "\e[0;32m"         //���̣�����
#define L_GREEN            "\e[1;32m"           //����
#define BROWN               "\e[0;33m"          //��ƣ�����
#define YELLOW              "\e[1;33m"          //�ʻ�
#define BLUE                    "\e[0;34m"      //����������
#define L_BLUE                "\e[1;34m"        //������ƫ�׻�
#define PURPLE               "\e[0;35m"         //��ۣ����ۣ�ƫ����
#define L_PURPLE           "\e[1;35m"           //���ۣ�ƫ�׻�
#define CYAN                   "\e[0;36m"       //����ɫ
#define L_CYAN               "\e[1;36m"         //������ɫ
#define GRAY                   "\e[0;37m"       //��ɫ
#define WHITE                  "\e[1;37m"       //��ɫ�������һ�㣬�������󣬱�boldС
#define BOLD                    "\e[1m"         //��ɫ������
#define UNDERLINE         "\e[4m"               //�»��ߣ���ɫ��������С
#define BLINK                   "\e[5m"         //��˸����ɫ��������С
#define REVERSE            "\e[7m"              //��ת�������屳��Ϊ��ɫ������Ϊ��ɫ
#define HIDE                     "\e[8m"        //����
#define CLEAR                  "\e[2J"          //���
#define CLRLINE               "\r\e[K"          //�����

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE
#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"
#define log_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
    log_write(__VA_ARGS__); \
  } while (0)

#endif
