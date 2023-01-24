module ysyx_22041412_mcsr(
     input clk,
     output reg
 );
reg [63:0]mtvec; //（Machine Trap Vector）它保存发生异常时处理器需要跳转到的地址。
reg [63:0]mepc; //（Machine Exception PC）它指向发生异常的指令。
reg [63:0]mcause; //（Machine Exception Cause）它指示发生异常的种类。
reg [15:0]mie; //（Machine Interrupt Enable）它指出处理器目前能处理和必须忽略的中断。
reg [15:0]mip; //（Machine Interrupt Pending）它列出目前正准备处理的中断。
reg [63:0]mtval; //（Machine Trap Value）它保存了陷入（trap）的附加信息：地址例外中出错的地址、发生非法指令例外的指令本身，对于其他异常，它的值为 0。
reg [63:0]mscratch; //（Machine Scratch）它暂时存放一个字大小的数据。
reg [63:0]mstatus; //（Machine Status）它保存全局中断使能，以及许多其他的状态

endmodule

