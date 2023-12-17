module ysyx_22041412_clint(
input           clk,
input           rst,
input           mtime_en,
input  [1:0]    rw_mode,
input  [63:0]   data_w,


output [63:0]   data_r,
output          clint_tag_id   //发生中断的序号 暂时只有mtime中断
     );


assign clint_tag_id = interrupt_mtime;

wire interrupt_mtime;
//
//

ysyx_22041412_mtime mtime (
    .clk        (clk),
    .rst        (rst),
    .enable     (mtime_en),

    .r_data_o   (data_r),
    .w_data_i   (data_w),
    .rw_mode    (rw_mode),  // 0 none 1 rtime 2 rcmp 3 wcmp

    .interrupt  (interrupt_mtime)
);

endmodule
