#include <isa.h>
#include "local-include/interrupt.h"
#include "local-include/reg.h"
//检查有无中断满足触发条件
bool update_interrupt() {
    IFDEF(CONFIG_MTIME,update_clint());
    if (csrR_id(mip) == 0x80)//挂起时钟中断 默认直接接管
    {
        csrW_id(mie,0);
        return 1;
    }
    return 0;
}
//中断程序处理完毕
void end_interrupt() {
    csrW_id(mip,0);
    IFDEF(CONFIG_MTIME,csrW_id(mie,0x80));
}

bool get_mask_mstatus() {
    return true;
}