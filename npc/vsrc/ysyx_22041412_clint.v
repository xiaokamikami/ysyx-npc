module ysyx_22041412_clint(
input           clk,
input           rst,
input           mtime_en,
input           minterrupt_en,
input           interrupt_time,

output [31:0]   mtime_data,
output          clint_en,
output          clint_id   //中断序号 暂时只有mtime中断
     );

wire interrupt_vector;// 中断来源标识
assign interrupt_vector = interrupt_mtime;

wire interrupt_mtime;
//
//

ysyx_22041412_mtime mtime (
    .clk        (clk),
    .rst        (rst),
    .enable     (mtime_en),
    .upcmptime  (),//更新time cmp值

    .mtime_h    (mtime_data),
    .interrupt  (interrupt_mtime)
);

endmodule
