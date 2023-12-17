module ysyx_22041412_mtime(
input               clk,
input               rst,

input               enable,
input  [1:0]        rw_mode,  // 0 none 1 rtime 2 rcmp 3 wcmp
input  [63:0]       w_data_i,
output reg[63:0]    r_data_o,
output              interrupt
     );
reg [63:0]mtime;
reg [63:0]mtimecmp;

assign  interrupt = enable ? (mtime >= mtimecmp) : 1'b0;
wire upcmptime = (rw_mode == 'd3);

always @(*) begin
    if(enable)begin
        case (rw_mode)
            'd1: r_data_o =  {32'b0,mtime[63:32]};
            'd2: r_data_o =  mtimecmp;
            default: r_data_o = 64'b0;
        endcase
    end else begin
        r_data_o = 64'b0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        mtime     <= 64'b0;
    end else if(enable) begin
        mtime     <= mtime + 1'b1;
    end
end

always @(posedge clk) begin
    if (rst) begin
        mtimecmp <= 64'b0;
    end else if(enable && upcmptime) begin
        mtimecmp <= mtimecmp + w_data_i;
    end
end

endmodule
