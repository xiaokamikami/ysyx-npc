#include <common.h>
#include "syscall.h"
static int i=0;
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  a[4] = c->GPRx;
  switch (a[0]) {
    case SYS_exit:Log("sys_exit");halt(0);break;
    case SYS_yield:Log("sys_yield");yield();c->GPRx=0;break;
    case SYS_write://Log("sys_write buf=%lx,len=%lx",a[2],a[3]);
    if(a[1]==1){
      //for (; a[3]>0; a[3]--)
      //{putch(a[2]);}
      putch(a[2]);
    }
    else if(a[1]==2){
      //for (; a[3]>0; a[3]--)
      //{putch(a[2]);}
      putch(a[2]);
    }
    i++;
    c->GPRx=i;
    if((a[3]-i)==0)i=0;
            break;
    case SYS_brk: break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
