module ysyx_22041412_sram(
    input clk,
    input rst,
    output reg[63:0]pc,
    input [63:0]mem_pc,
    output reg[31:0]imm_data,
    input stall,
    input jarl_en,
    input jarl_rady,
    output reg jar_end,
    input valid_i,


    //axi
    input  ready_i,              // 读有效等待接收
    output valid,          // 发出读请求
    output reg ready_o,         
    output reg [7:0] r_size_i,
    input      [63:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o  // 读地址

 );
  reg valid_o;
assign valid = valid_o & !ready_i;
reg [63:0]dnpc;

 always @(posedge clk) begin
  if(rst)begin
    valid_o  <=0;
    ready_o  <=0;
    dnpc     <=64'h0000000080000000;
  end
  else begin   //收到读指令请求
    if(ready_i==1'b1 && valid_o==1'b1 && !stall) begin      //与AXI握手并接收数据 刷新dnpc
      imm_data <=r_data_i[31:0];
      pc[31:0] <=r_addr_o;
      dnpc     <= dnpc+4;
      valid_o  <=0;
      ready_o  <=1;
    end
    else if(ready_i==1'b0 && valid_o==1'b0 && ready_o==1'b0 && !stall && valid_i && !jarl_en)begin   //发出新请求
      valid_o  <=1;
      ready_o  <=0;
      r_size_i <='b00001111;
      r_addr_o <=dnpc[31:0];
    end
    else if(ready_i==1'b0 && valid_o==1'b0 && stall && jarl_rady) begin      //上一条指令是跳转指令 
      valid_o  <=1;
      ready_o  <=0;
      r_size_i <='b00001111;
      dnpc     <=mem_pc;
      r_addr_o <=mem_pc[31:0];
      jar_end  <=1;
    end
    else begin
      ready_o  <=0;
      jar_end  <=0;
      imm_data <=32'b0;
    end
  end

 end
endmodule
