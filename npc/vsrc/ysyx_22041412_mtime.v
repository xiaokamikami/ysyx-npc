module ysyx_22041412_mtime(
input               clk,
input               rst,

input               enable,
input  [1:0]        rw_mode,  // 0 rtime 1 wtime 2 rcmp 3 wcmp
input               rw_en,
input  [63:0]       w_data_i,
output reg[63:0]    r_data_o,
output              ready_o,
output              interrupt
     );
reg [63:0]mtime;
reg [63:0]mtimecmp;

assign  interrupt = enable ? (mtime >= mtimecmp) : 1'b0;
wire upcmptime = (rw_mode == 'd3);
reg r_ready;
reg w_ready;
assign ready_o = r_ready | w_ready;
always @(posedge clk) begin//读控制
    if(rw_en & !rw_mode[1])begin
        r_data_o <= (rw_mode[0] == 0) ? {32'b0,mtime[63:32]} : mtimecmp;
        r_ready  <= 1'b1;
        //$display("get mtimecmp %h",mtimecmp);
    end else begin
        r_data_o <= 64'b0;
        r_ready  <= 1'b0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        mtimecmp <= 64'b0;
    end else if(rw_en & upcmptime & ~w_ready) begin
        mtimecmp <= mtimecmp + w_data_i;
        w_ready  <= 1'b1;
        //$display("update mtime = %h",mtimecmp + w_data_i);
    end else begin
        w_ready <= 1'b0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        mtime     <= 64'b0;
    end else if(enable) begin
        mtime     <= mtime + 1'b1;
    end
end


endmodule
