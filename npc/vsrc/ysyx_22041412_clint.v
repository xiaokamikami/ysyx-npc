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

    .r_data_o   (),
    .rw_mode    (),  // 0 none 1 rtime 2 rcmp 3 wcmp
    .r_data_o   (),
    .interrupt(interrupt_mtime)
);

endmodule
