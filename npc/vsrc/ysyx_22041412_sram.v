module ysyx_22041412_sram(
    input clk,
    input rst,
    output reg[63:0]pc,
    input [63:0]dnpc,
    output reg[31:0]imm_data,
    input stall,
    input jarl_en,
    input  ready_i,              // 
    input  valid_i,
    output reg valid_o,          // 发出读请求
    output reg ready_o,         
    output reg [7:0] r_size_i,
    input      [31:0]r_data_i, // 读数据
    output reg [63:0]r_addr_o  // 读地址

 );





 always @(posedge clk) begin
  if(rst)begin
    valid_o  <=0;
    ready_o  <=0;
  end
  else begin   //收到读指令请求
    if(ready_i==1'b1 && valid_o==1'b1 && !jarl_en && valid_i) begin      //与AXI握手并接收数据  触发跳转则本次消息作废
      imm_data <=r_data_i[31:0];
      pc <=r_addr_o;
      valid_o  <=0;
      ready_o  <=1;
    end
    else if(ready_i==1'b1 && valid_o==1'b1 && jarl_en && valid_i)begin
      imm_data <=32'b0;
      pc <=`ysyx_22041412_zero_word;
      valid_o  <=0;
      ready_o  <=1;
    end
    else if(ready_i==1'b0 && valid_o==1'b0 && ready_o==1'b0 && !stall)begin   //发出新请求
      valid_o <=1;
      ready_o <=0;
      r_size_i<='b00001111;
      r_addr_o<=dnpc;
    end
    else begin
      ready_o  <=0;
      imm_data <=32'b0;
    end
  end

 end
endmodule
