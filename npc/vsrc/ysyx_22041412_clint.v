module ysyx_22041412_clint(
input           clk,
input           rst,
input           mtime_en,
input  [1:0]    rw_mode,
input           rw_en,
input  [63:0]   data_w,
output          clint_ready,
output [63:0]   data_r,
output          clint_tag_id   //发生中断的序号 暂时只有mtime中断
     );

wire interrupt_mtime;
wire mtime_ready;
assign clint_tag_id = interrupt_mtime;
assign clint_ready = mtime_ready;

//
//

ysyx_22041412_mtime mtime (
    .clk        (clk),
    .rst        (rst),
    .enable     (mtime_en),

    .r_data_o   (data_r),
    .w_data_i   (data_w),
    .ready_o    (mtime_ready),

    .rw_en      (rw_en),
    .rw_mode    (rw_mode),  // 0 rtime 1 wtime 2 rcmp 3 wcmp

    .interrupt  (interrupt_mtime)
);

endmodule
