#include <common.h>
#include "syscall.h"
#include "memory.h"
#include "fs.h"
#include "device.h"
#include <proc.h>
extern void naive_uload(PCB *pcb, const char *filename);
//#define SYSCALL_LOG
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  a[4] = c->GPRx;
  //Log("sys_ %d \n",a[0]);   //根据调用频率 对系统调用重新排了序  
  switch (a[0]) {
    case SYS_write:
                  #ifdef SYSCALL_LOG
                    //Log("[sys_wirte] fd:%d",a[1]);
                  #endif // DEBUG
                  c->GPRx=fs_write(a[1],(void *)a[2],a[3]);
                  break;
    case SYS_open :
                  #ifdef SYSCALL_LOG
                    Log("[sys_open] %s",(char *)a[1]);
                  #endif
                  c->GPRx=fs_open((char *)a[1],a[2],a[3]);
                  break;
    case SYS_read :
                  #ifdef SYSCALL_LOG
                    Log("[sys_read]  fd=%ld,whence=%ld",a[1],a[3]);
                  #endif
                  c->GPRx=fs_read(a[1],(void *)a[2],a[3]);
                  break;
    case SYS_lseek: 
                  #ifdef SYSCALL_LOG//调用太频繁了 关掉
                    //Log("[sys_lseek]  fd=%ld,offset=%ld,whence=%ld",a[1],a[2],a[3]);
                  #endif
                  c->GPRx=fs_lseek(a[1],a[2],a[3]);
                  break;
    case SYS_gettimeofday:
                  #ifdef SYSCALL_LOG
                     //Log("[sys_gettimeofday] end_brk=%lx",a[1]);
                  #endif
                  c->GPRx=rtc_read((void*) a[2]);
                  break;
    case SYS_brk: 
                  #ifdef SYSCALL_LOG
                    Log("[sys_brk] end_brk");
                  #endif
                  c->GPRx=0;
                  break;              
    case SYS_close: //关闭一个文件
                  #ifdef SYSCALL_LOG
                    Log("[sys_close] %ld",a[1]);
                  #endif
                  c->GPRx=fs_close(a[1]); 
                  break;   
    case SYS_exit:Log("[sys_exit]");halt(0);
                  break;      
    case SYS_yield:Log("sys_yield");yield();
                  break;          
    case SYS_execve:
                  #ifdef SYSCALL_LOG
                  #endif
                  naive_uload(NULL, (const char *)a[1]);
                  c->GPRx = 0;
                  break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
