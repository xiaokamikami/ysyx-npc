#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("m=%x 0=%x 1=%x 2=%x 3=%x r=%x\n",c->mcause,c->GPR1,c->GPR2,c->GPR3,c->GPR4,c->GPRx);
    switch (c->mcause) {
			case 0xb:
				switch(c->GPR1){
					case -1:ev.event = EVENT_YIELD;break;
					default:ev.event = EVENT_SYSCALL;break;
				}
				break;
      default: ev.event = EVENT_ERROR; break;
    }
    
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  c->mepc+=4;
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

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
