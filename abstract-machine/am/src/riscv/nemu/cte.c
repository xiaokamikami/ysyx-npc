#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  //printf("irq_handle \n");
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case EVENT_NULL: ev.event = EVENT_NULL; break;
      case -1: ev.event = EVENT_YIELD; break;
      case 1: ev.event = EVENT_SYSCALL; break;
      case EVENT_PAGEFAULT: ev.event = EVENT_PAGEFAULT; break;
      case EVENT_ERROR :ev.event = EVENT_ERROR; break;
      default: ev.event = EVENT_ERROR; break;
    }
    
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry

  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  
  // register event handler
  user_handler = handler;
  //printf("cte_init \n");
  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
