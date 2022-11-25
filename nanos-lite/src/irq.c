#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 0: panic("irq handle event ID = %d\n", e.event);break;
    case 1: panic("irq handle event ID = %d\n", e.event);break;
    case 2: panic("irq handle event ID = %d\n", e.event);break;
    case 3: panic("irq handle event ID = %d\n", e.event);break;
    case 4: panic("irq handle event ID = %d\n", e.event);break;
    default: panic("Unhandled event ID = %d\n", e.event);break;
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
