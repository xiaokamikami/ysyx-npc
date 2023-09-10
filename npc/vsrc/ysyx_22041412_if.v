module ysyx_22041412_if(
    input clk,
    input rst,
    output reg[63:0]pc,
    input [63:0]mem_dnpc,
    output reg[31:0]imm_data,

    input jarl_rady,
    input valid_i,
    output reg ready_o,  

    //cache 
    input      ready_i,          // 读有效等待接收
    output reg valid_o,          // 发出读请求
       
    input      [31:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o  // 读地址

 );
`define IF_IDLE         3'b000  
`define IF_VAILD        3'b001  
`define IF_WAIT         3'b010  
`define IF_STALL        3'b100  
reg [2:0] state;              //状态机 

wire jar ;
wire jal ;
assign jal= (r_data_i[6:0]==`ysyx_22041412_jal)?1'b1:1'b0;
assign jar= (r_data_i[6:0]==`ysyx_22041412_jalr | r_data_i[6:0]==`ysyx_22041412_jal | r_data_i[6:0]==`ysyx_22041412_B_type 
            | (r_data_i[6:0]==`ysyx_22041412_Environment & (r_data_i[31:20]==12'b00000000000 || r_data_i[31:20]==12'b001100000010)) )? 1'b1 : 1'b0;




  always@(posedge clk)begin //状态机更新
    if(rst )begin
      state <= `IF_IDLE;
    end else begin
      case (state)
        `IF_IDLE: begin
          if( valid_i) state<= `IF_VAILD;
        end
        `IF_VAILD:begin
          if(ready_i==1'b1 && valid_i==1'b1 && ~jar)    state<= `IF_VAILD;
          else if(ready_i==1'b1 && valid_i==1'b1 && jar)state<= `IF_WAIT;
          else if(~valid_i)  state<= `IF_IDLE;
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
          if(ready_o && valid_i==1'b0)begin //上一条指令还没被取走，继续ready
            ready_o  <=1;
          end else begin
            valid_o  <=0;
            ready_o  <=0;
          end
        end
        `IF_VAILD:begin
          if(ready_i==1'b1 && valid_i==1'b1  && ~jar) begin      //与cache握手并接收数据 刷新dnpc
            imm_data <=r_data_i;
            pc[31:0] <=r_addr_o;
            r_addr_o <=r_addr_o+4;
            ready_o  <=1;
            valid_o  <=1;
            //$display("IF Read: addr:%8h :%8h",r_addr_o,r_data_i);
          end else if(ready_i==1'b1 && valid_i==1'b1 && jar) begin      //与cache握手并接收数据 刷新dnpc 并暂停请求
            imm_data <=r_data_i;
            pc[31:0] <=r_addr_o;
            ready_o  <=1;
            valid_o  <=0;
          end else if(~valid_i )begin  //暂停信号
            ready_o  <=ready_o;   
            valid_o  <=0;        
          end else  begin     //第一次进入时，打开请求
            ready_o  <=0; 
            valid_o  <=1;
          end
        end
        `IF_WAIT:begin              //等待分支指令给出新地址
          if(jarl_rady) begin
            valid_o  <=0;
            ready_o  <=1;
            r_addr_o <=mem_dnpc[31:0];
          end else if(ready_o && valid_i==1'b0)begin //上一条指令还没被取走，继续ready
            ready_o  <=1;
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
