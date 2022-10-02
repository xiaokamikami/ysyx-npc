module ysyx_22041412_sram#(
    parameter ADDR_WIDTH =8,
    parameter DATA_WIDTH =64,
    parameter DATA_DEPTH =4096
)(
    input clk,
    input [ ADDR_WIDTH-1:0] addr_r,
    input read_en,
    output reg[DATA_WIDTH-1:0] data_r,

    input [ADDR_WIDTH-1:0] addr_w,
    input wead_en,
    input [DATA_WIDTH-1:0] data_w
);
integer i;
reg [DATA_WIDTH-1:0] ram [DATA_DEPTH-1:0];  //定义一个存储器

initial begin
    for(i=0; i<DATA_DEPTH;i=i+1) begin
        ram[i] = 64'b0;
    end
end
always @(posedge clk ) begin
    if (wead_en == 1'b1) begin     //写信号高有效
        ram[addr_w[11:0]] <= data_w;     //写入
    end
    else if (read_en == 1'b1) begin    //读信号高有效
        data_r <= ram[addr_r[11:0]];     //读出
    end
    else begin
        data_r <= data_r;
    end
end

endmodule