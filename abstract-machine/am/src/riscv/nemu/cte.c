#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
//csr id
#define mie 0x304
//csr mask
#define MIP_MTIP 0x07
static Context* (*user_handler)(Event, Context*) = NULL;
static void set_csr(uint32_t csrid,uint8_t mask);
static void clear_csr(uint32_t csrid,uint8_t mask);
Context* __am_irq_handle(Context *c) {
  //printf("irq_handle \n");
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
			case 0xb:
				switch(c->GPR1){
					case -1:ev.event = EVENT_YIELD;break;
					default:ev.event = EVENT_SYSCALL;break;
				}
                c->mepc+=4;
				break;
            case 0x8000000000000007: // M TIME interrupt
                ev.event = EVENT_IRQ_TIMER;
                printf("EVENT_IRQ_TIMER\n");
                break;
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
    if(enable) {
        asm volatile("csrsi mstatus,1 << 3");// mstatus_MIE
        set_csr(mie,MIP_MTIP);          // mie_MTIE
    }
    else {
        asm volatile("csrci mstatus,1 << 3");// mstatus_MIE    
        clear_csr(mie,MIP_MTIP);        // mie_MTIE
    }
}

static void set_csr(uint32_t csrid,uint8_t mask) {
    if(csrid==mie) {
        if(mask==MIP_MTIP) {
            asm volatile("li x10,(1 << 7)");// mstatus_MIE   
            asm volatile("csrs mie,x10");// mstatus_MIE    
        }
    }
}
static void clear_csr(uint32_t csrid,uint8_t mask) {
    if(csrid==mie) {
        if(mask==MIP_MTIP) {
            asm volatile("li x10,(1 << 7)");// mstatus_MIE   
            asm volatile("csrc mie,x10");// mstatus_MIE    
        }
    }
}