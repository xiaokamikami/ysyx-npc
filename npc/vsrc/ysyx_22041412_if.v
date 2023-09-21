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
       
    input      [127:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o  // 读地址

 );
`define IF_IDLE         3'b000  
`define IF_VAILD        3'b001  
`define IF_LINE         3'b010 
`define IF_WAIT         3'b100  
 
reg [2:0] state;              //状态机 

reg [127:0]read_imm_data;
wire [31:0]r_data_4mux1;
wire [31:0]imm_data_4mux1;
wire [3:0] offset;
wire [3:0] pc_offset;
assign offset        = r_addr_o[3:0];
assign pc_offset     = dnpc[3:0];
assign r_data_4mux1  = (offset==4'b0000)?r_data_i[31:0] :
					             (offset==4'b0100)?r_data_i[63:32] :
					             (offset==4'b1000)?r_data_i[95:64] :
					             (offset==4'b1100)?r_data_i[127:96] :0;
assign imm_data_4mux1  = (pc_offset==4'b0000)?read_imm_data[31:0] :
					               (pc_offset==4'b0100)?read_imm_data[63:32] :
					               (pc_offset==4'b1000)?read_imm_data[95:64] :
					               (pc_offset==4'b1100)?read_imm_data[127:96] :0;


wire jar ;
wire jal ;
assign jal= (r_data_i[6:0]==`ysyx_22041412_jal)?1'b1:1'b0;
assign jar= (imm_data[6:0]==`ysyx_22041412_jalr | imm_data[6:0]==`ysyx_22041412_jal | imm_data[6:0]==`ysyx_22041412_B_type 
            | (imm_data[6:0]==`ysyx_22041412_Environment & (imm_data[31:20]==12'b00000000000 || imm_data[31:20]==12'b001100000010)) )? 1'b1 : 1'b0;
wire one_line;
reg [31:0]dnpc;
reg       dnpc_v;  //dnpc的有效符号
reg [27:0]get_pc;  //指令流目前存放的基地址

assign one_line =(dnpc[31:4]==get_pc) ? 1'b1:1'b0;


  always@(posedge clk)begin //状态机更新
    if(rst )begin
      state <= `IF_IDLE;
    end else begin
      case (state)
        `IF_IDLE: begin
          if( valid_i) state<= `IF_VAILD;
        end
        `IF_VAILD:begin
          if( valid_i==1'b1 && one_line && dnpc_v && ~jar)        state<= `IF_LINE;
          else if(ready_i==1'b1 && valid_i==1'b1 && ~one_line && ~jar)            state<= `IF_VAILD;
          else if(jar)                                                            state<= `IF_WAIT;
          else if(~valid_i)                                                       state<= `IF_IDLE;
        end
        `IF_LINE:begin
          if(~one_line && ~jar) state <= `IF_VAILD;
          else if(jar)          state <= `IF_WAIT;
        end
        `IF_WAIT:begin
          if(jarl_rady)  state <= `IF_VAILD;
        end
        default: begin ;
        end
      endcase
    end
  end


/* always @(posedge clk) begin
    $display("IF clk 1 oneline=%d state=%b jar %b",one_line,state,jar);
end  */



 always @(posedge clk) begin
  if(rst)begin
    valid_o  <=0;
    ready_o  <=0;
    dnpc     <=32'h80000000;
  end
  else if(valid_i)begin   
    case (state)
        `IF_IDLE: begin
          if(ready_o && valid_i==1'b0)begin //上一条指令还没被取走，继续ready
            ready_o  <=1;
          end else begin
            valid_o  <=0;
            ready_o  <=0;
            dnpc_v   <=0;
          end
        end
        `IF_VAILD:begin
          if(ready_i==1'b1 && valid_i==1'b1 && ~jar) begin      //与cache握手并接收数据 刷新dnpc
            read_imm_data <=r_data_i;
            imm_data <=r_data_4mux1;
            pc[31:0] <=dnpc;
            get_pc   <=dnpc[31:4];
            dnpc     <=dnpc+4;
            dnpc_v   <=1'b1;
            ready_o  <=1;
            valid_o  <=0;
            //$display("IF Read get line : addr:%8h :%8h ",r_addr_o,r_data_i);
          end else if(ready_i==1'b1 && valid_i==1'b1 && jar) begin      //与cache握手并接收数据 刷新dnpc 并暂停请求
            read_imm_data <=r_data_i;
            imm_data <=r_data_4mux1;
            pc[31:0] <=dnpc;
            get_pc   <=dnpc[31:4];
            dnpc_v   <=0;
            ready_o  <=1;
            valid_o  <=0;
          end else if(~valid_i )begin  //暂停信号
            ready_o  <=ready_o;   
            valid_o  <=0;        
          end else  begin     //第一次进入时，打开请求
            ready_o  <=0; 
            valid_o  <=1;
            r_addr_o <= dnpc;
          end
        end
        `IF_LINE:begin
          if(valid_i & one_line & ~jar )begin
            imm_data <=imm_data_4mux1;
            pc[31:0] <=dnpc;
            dnpc     <=dnpc+4;
            ready_o  <=1;
            valid_o  <=0;
            //$display("IF Read one line : addr:%8h :%8h",dnpc,imm_data_4mux1);           
          end else begin
            ready_o  <=0;
            valid_o  <=0;
            dnpc_v   <=1'b0;
          end
        end
        `IF_WAIT:begin              //等待分支指令给出新地址
          if(jarl_rady) begin
            valid_o  <=0;
            ready_o  <=0;
            r_addr_o <=mem_dnpc[31:0];
            dnpc     <=mem_dnpc[31:0];
            dnpc_v   <=0;
            imm_data <=0;
            get_pc   <=0;
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
