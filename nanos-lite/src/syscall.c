#include <common.h>
#include "syscall.h"
#include "memory.h"
#include "fs.h"
#include "device.h"


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  a[4] = c->GPRx;
  switch (a[0]) {
    case SYS_exit:Log("sys_exit");halt(0);break;
    case SYS_yield:Log("sys_yield");yield();break;
    case SYS_open :c->GPRx=fs_open((char *)a[1],a[2],a[3]);
                  //Log("sys_open %s",(char *)a[1]);
                  break;
    case SYS_close://Log("sys_close %ld",a[1]);
                  c->GPRx=0; break;
    case SYS_read :c->GPRx=fs_read(a[1],(void *)a[2],a[3]);break;
    case SYS_write:c->GPRx=fs_write(a[1],(void *)a[2],a[3]);break;
    case SYS_brk: //Log("sys_brk end_brk=%lx",a[1]);
                  c->GPRx=0;break;
    case SYS_lseek://Log("sys_lseek  fd=%ld,offset=%ld,whence=%ld",a[1],a[2],a[3]);
                  c->GPRx=fs_lseek(a[1],a[2],a[3]);break;
    case SYS_gettimeofday:c->GPRx=rtc_read();break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
