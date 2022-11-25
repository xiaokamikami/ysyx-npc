#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 0: printf("irq handle event ID = %d\n", e.event);break;
    case 1: printf("irq handle event ID = %d\n", e.event);break;
    case 2: printf("irq handle event ID = %d\n", e.event);break;
    case 3: printf("irq handle event ID = %d\n", e.event);break;
    case 4: printf("irq handle event ID = %d\n", e.event);break;
    default: panic("Unhandled event ID = %d\n", e.event);break;
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
