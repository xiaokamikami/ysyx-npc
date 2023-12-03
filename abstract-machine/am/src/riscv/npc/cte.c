#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;
static void set_csr(uint32_t csrid,uint8_t mask);
static void clear_csr(uint32_t csrid,uint8_t mask);
Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("m=%x 0=%x 1=%x 2=%x 3=%x r=%x\n",c->mcause,c->GPR1,c->GPR2,c->GPR3,c->GPR4,c->GPRx);
    switch (c->mcause) {
			case 0xb:
				if(c->GPR1 == -1)
					ev.event = EVENT_YIELD;
                else
                    ev.event = EVENT_SYSCALL;
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
    if(enable) {
        uint64_t temp;
        asm volatile (  
            "csrr %0, mstatus\n\t"  // 从 MIP 寄存器读取数据到 temp  
            "ori %0, %0, 1<<7\n\t"  // 设置 temp 的第七位  
            "csrw mstatus, %0\n\t"  // 将 temp 写回 MIP 寄存器  
            : "=r"(temp)  // 输出操作数  
        );
        set_csr(mie,MIP_MTIP);          // mie_MTIE
    }
    else {
        uint64_t temp;
        asm volatile (  
            "csrr %0, mstatus\n\t"  // 从 MIP 寄存器读取数据到 temp  
            "ori %0, %0, 1<<7\n\t"  // 设置 temp 的第七位  
            "csrw mstatus, %0\n\t"  // 将 temp 写回 MIP 寄存器  
            : "=r"(temp)  // 输出操作数  
        );     
        asm volatile("csrci mstatus,8");// mstatus_MIE
        clear_csr(mie,MIP_MTIP);        // mie_MTIE
    }
}

static void set_csr(uint32_t csrid,uint8_t mask) {
    if(csrid==mie) {
        if(mask==MIP_MTIP) {
            uint64_t temp;  
            asm volatile (  
                "csrr %0, mie\n\t"  // 从 MIE 寄存器读取数据到 temp  
                "ori %0, %0, 1<<7\n\t"  // 设置 temp 的第七位  
                "csrw mie, %0\n\t"  // 将 temp 写回 MIE 寄存器  
                : "=r"(temp)  // 输出操作数  
            );     
        }
    }
}
static void clear_csr(uint32_t csrid,uint8_t mask) {
    if(csrid==mie) {
        if(mask==MIP_MTIP) {
            uint64_t temp;  
            asm volatile (  
                "csrr %0, mie\n\t"  // 从 MIE 寄存器读取数据到 temp  
                "ori %0, %0, 0<<7\n\t"  // 设置 temp 的第七位  
                "csrw mie, %0\n\t"  // 将 temp 写回 MIE 寄存器  
                : "=r"(temp)  // 输出操作数  
            );     
        }
    }
}
