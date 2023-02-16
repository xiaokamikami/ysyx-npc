module ysyx_22041412_sram(
    input clk,
    input [63:0]Addr,
    output[31:0]Imm,

    input stall,

    input  ready_i,          // 访存完成
    output valid_o,          // 发出读请求
    output reg[7:0] r_size_i,
    input  [31:0]r_data_i, // 读数据
    output reg [63:0]r_addr_o  // 读地址

 );



reg[31:0]imm_data;
reg valid;
assign valid_o = valid;
assign Imm = imm_data;

 always @(posedge clk) begin
    if(ready_i==1'b1 && valid_o==1'b1) begin
      imm_data <=r_data_i[31:0];
      valid  <=0;
    end
    else if(ready_i==1'b0 )begin
      valid <=1;
      r_size_i<='b00000011;
      r_addr_o<=Addr;
    end
    else begin
      valid  <=0;
      imm_data <=imm_data;
    end
 end
endmodule
