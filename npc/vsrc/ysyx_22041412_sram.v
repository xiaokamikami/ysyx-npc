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
reg [DATA_WIDTH-1:0] ram [DATA_DEPTH-1:0];  //����һ���洢��
//wire [63:0]r_addr; 
//assign r_addr = addr_r - 64'h80000000;
initial begin
    for(i=0; i<DATA_DEPTH;i=i+1) begin
        ram[i] = 64'b0;
    end
end

always @(posedge clk ) begin
    if (wead_en == 1'b1)begin      //д�źŸ���Ч
        ram[addr_w[15:0]] <= data_w;     //д��
        //$display("%lx Write: addr:%16h %16h",addr_w[15:0],ram[addr_w[15:0]]);     ���Խӿ�
    end
    else if (read_en == 1'b1)begin    //���źŸ���Ч
        data_r <= ram[addr_r[15:0]];     //����
        //$display("%lx Read: addr:%16h %16h",addr_r[15:0],ram[addr_r[15:0]]);
    end
    else begin
        data_r <= 64'h00000000;
    end
end

endmodule
