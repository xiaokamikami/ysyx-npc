module ysyx_22041412_sram#(
    parameter ADDR_WIDTH =64,
    parameter DATA_WIDTH =64,
    parameter DATA_DEPTH =65536
)(
    input clk,
    input [ ADDR_WIDTH-1:0] addr_r,
    input read_en,
    output reg[DATA_WIDTH-1:0] data_r,
    input [2:0]func3,
    input [ADDR_WIDTH-1:0] addr_w,
    input wead_en,
    input [DATA_WIDTH-1:0] data_w
);
import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void mem_write(
  input longint waddr, input longint wdata, input byte wmask);

wire [7:0]wmask; 
assign wmask =  (func3==3'b000)?8'b00000001: //sb
                (func3==3'b001)?8'b00000011: //sh
                (func3==3'b010)?8'b00001111: //sw
                (func3==3'b011)?8'b11111111:0;    //sd
always @(posedge clk) begin
    if (wead_en == 1'b1)begin      //写信号高有效
        mem_write(addr_w, data_w, wmask);   //写入
        //$display("%lx Write: addr:%16h %16h",addr_w[15:0],ram[addr_w[15:0]]);     调试接口
    end
    else if (read_en == 1'b1)begin    //读信号高有效
        mem_read(addr_r, data_r);    //读出
        //$display("%lx Read: addr:%16h %16h",addr_r[15:0],ram[addr_r[15:0]]);
    end
    else begin
        data_r = 64'h00000000;
    end
end

endmodule
