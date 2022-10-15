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
// integer i;
// initial begin
//     for(i=0; i<DATA_DEPTH;i=i+1) begin
//          mem_write(64'h80000000+i, 64'h00000000, 8'b11111111);   //写入
//     end
// end
wire [63:0]sram_data_r;

wire [7:0]wmask; 
assign wmask =  (func3==3'b000)?8'b00000001:    //sb
                (func3==3'b001)?8'b00000011:    //sh
                (func3==3'b010)?8'b00001111:    //sw
                (func3==3'b011)?8'b11111111:    //sd
                0;  
assign data_r = (func3==3'b000)?{{56{sram_data_r[7]}},sram_data_r[7:0]}:   //lb
                (func3==3'b001)?{{48{sram_data_r[15]}},sram_data_r[15:0]}:  //lh
                (func3==3'b010)?{{32{sram_data_r[31]}},sram_data_r[31:0]}:  //lw
                (func3==3'b011)?{sram_data_r[63:0]}:                        //ld
                (func3==3'b100)?{{56{1'b0}},sram_data_r[7:0]}:              //lbu
                (func3==3'b101)?{{48{1'b0}},sram_data_r[15:0]}:             //lhu
                (func3==3'b110)?{{32{1'b0}},sram_data_r[31:0]}:             //lwu
                0;                     
always @(posedge clk) begin
    if (wead_en == 1'b1)begin      //写信号高有效
        mem_write(addr_w, data_w, wmask);   //写入
        //$display("%lx Write: addr:%16h %16h",addr_w[63:0],data_w[63:0]);     //调试接口
    end
    else if (read_en == 1'b1)begin    //读信号高有效
        mem_read(addr_r, sram_data_r);    //读出
        //$display("%lx Read: addr:%16h %16h",addr_r[63:0],sram_data_r[63:0]);
    end
    else begin
        data_r = 64'h00000000;
    end
end

endmodule
