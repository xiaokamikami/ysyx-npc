module ysyx_22041412_sram#(
    parameter ADDR_WIDTH =64,
    parameter DATA_WIDTH =64,
    parameter DATA_DEPTH =65536
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
//wire [63:0]r_addr; 
//assign r_addr = addr_r - 64'h80000000;
initial begin
    for(i=0; i<DATA_DEPTH;i=i+1) begin
        ram[i] = 64'b0;
    end
end

always @(posedge clk ) begin
    if (wead_en == 1'b1)begin      //写信号高有效
        ram[addr_w[15:0]] <= data_w;     //写入
        //$display("%lx Write: addr:%16h %16h",addr_w[15:0],ram[addr_w[15:0]]);     调试接口
    end
    else if (read_en == 1'b1)begin    //读信号高有效
        data_r <= ram[addr_r[15:0]];     //读出
        //$display("%lx Read: addr:%16h %16h",addr_r[15:0],ram[addr_r[15:0]]);
    end
    else begin
        data_r <= 64'h00000000;
    end
end

endmodule
