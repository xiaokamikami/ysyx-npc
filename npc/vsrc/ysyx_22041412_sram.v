module ysyx_22041412_sram#(
    parameter ADDR_WIDTH =64,
    parameter DATA_WIDTH =64,
    parameter DATA_DEPTH =65536
)(
    input clk,
    input [2:0]func3,
    input [ ADDR_WIDTH-1:0] addr,
    input wen,
    output reg[DATA_WIDTH-1:0] data
);
import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void mem_write(
  input longint waddr, input longint wdata, input byte wmask);

wire [63:0]sram_data_r;
wire [7:0]wmask; 
assign wmask =  (func3==3'b000)?8'b00000001:    //sb
                (func3==3'b001)?8'b00000011:    //sh
                (func3==3'b010)?8'b00001111:    //sw
                (func3==3'b011)?8'b11111111:    //sd
                0;  
                 
always @(posedge clk) begin
    if(wen == 1'b1)begin      //写信号高有效
        mem_write(addr, data, wmask);   //写入
        data <= (func3==3'b000)?{{56{sram_data_r[7]}},sram_data_r[7:0]}:   //lb
                (func3==3'b001)?{{48{sram_data_r[15]}},sram_data_r[15:0]}:  //lh
                (func3==3'b010)?{{32{sram_data_r[31]}},sram_data_r[31:0]}:  //lw
                (func3==3'b011)?{sram_data_r[63:0]}:                        //ld
                (func3==3'b100)?{{56{1'b0}},sram_data_r[7:0]}:              //lbu
                (func3==3'b101)?{{48{1'b0}},sram_data_r[15:0]}:             //lhu
                (func3==3'b110)?{{32{1'b0}},sram_data_r[31:0]}:             //lwu
                0;   
        //$display("%lx Write: addr:%16h %16h",addr_w[63:0],data_w[63:0]);     //调试接口
    end
    else begin    //读信号高有效
        mem_read(addr, sram_data_r);    //读出
        //$display("%lx Read: addr:%16h %16h",addr_r[63:0],sram_data_r[63:0]);
    end
end

endmodule
