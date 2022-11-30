#include <common.h>
#include "syscall.h"
extern void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 0: Log("irq handle event ID = EVENT_NULL\n");break;
    case 1: Log("irq handle event ID = EVENT_YIELD \n");break;
    case 2: do_syscall(c);break;
    case 3: Log("irq handle event ID = EVENT_PAGEFAULT \n");break;
    case 4: Log("irq handle event ID = EVENT_ERROR \n");break;
    default: panic("Unhandled event ID = ERROR \n");break;
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
