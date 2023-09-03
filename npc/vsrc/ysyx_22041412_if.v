module ysyx_22041412_if(
    input clk,
    input rst,
    output reg[63:0]pc,
    input [63:0]mem_pc,
    output reg[31:0]imm_data,
    input stall,
    input jarl_rady,
    input valid_i,


    //axi
    input      ready_i,        // 读有效等待接收
    output reg valid_o,          // 发出读请求
    output reg ready_o,         
    input      [31:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o  // 读地址

 );
`define IF_IDLE         3'b000  
`define IF_VAILD        3'b001  
`define IF_WAIT         3'b010  
`define IF_STALL        3'b100  
reg [2:0] state;              //状态机 

wire jar ;
assign jar= (r_data_i[6:0]==`ysyx_22041412_jalr | r_data_i[6:0]==`ysyx_22041412_jal | r_data_i[6:0]==`ysyx_22041412_B_type | (r_data_i[6:0]==`ysyx_22041412_Environment & r_data_i[31:20]==(12'h000|12'h001)))? 1'b1 : 1'b0;

  always@(posedge clk)begin //状态机更新
    if(rst )begin
      state <= `IF_IDLE;
    end else begin
      case (state)
        `IF_IDLE: begin
          if(~stall ) state<= `IF_VAILD;
        end
        `IF_VAILD:begin
          if(ready_i==1'b1 && valid_o==1'b1 && ~jar)    state<= `IF_VAILD;
          else if(ready_i==1'b1 && valid_o==1'b1 && jar)state<= `IF_WAIT;
        end
        `IF_WAIT:begin
          if(jarl_rady)  state <= `IF_VAILD;
        end
        default: begin 
        ;
        end
      endcase
    end
  end




 always @(posedge clk) begin
  if(rst)begin
    valid_o  <=0;
    ready_o  <=0;
    r_addr_o <=32'h80000000;
  end
  else begin   
    case (state)
        `IF_IDLE: begin
          valid_o  <=0;
          ready_o  <=0;
        end
        `IF_VAILD:begin
          if(ready_i==1'b1 && valid_o==1'b1 && ~stall && ~jar) begin      //与cache握手并接收数据 刷新dnpc
            imm_data <=r_data_i[31:0];
            pc[31:0] <=r_addr_o;
            r_addr_o <=r_addr_o+4;
            ready_o  <=1;
            valid_o  <=1;
          end else if(ready_i==1'b1 && valid_o==1'b1 && ~stall && jar) begin      //与cache握手并接收数据 刷新dnpc 并暂停请求
            imm_data <=r_data_i[31:0];
            pc[31:0] <=r_addr_o;
            ready_o  <=1;
            valid_o  <=0;
          end else if(~stall )begin
            ready_o  <=0;   
            valid_o  <=1;        
          end else  begin 
            ready_o  <=0; 
            valid_o  <=0;
          end
        end
        `IF_WAIT:begin              //等待分支指令给出新地址
          if(jarl_rady) begin
            valid_o  <=1;
            ready_o  <=0;
            r_addr_o <=mem_pc[31:0];
          end else begin
            valid_o  <=0;
            ready_o  <=0;             
          end
        end
        default: begin 
        ;
        end    
    endcase

  end

 end
endmodule
