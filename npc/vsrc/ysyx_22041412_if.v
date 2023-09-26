module ysyx_22041412_if(
    input clk,
    input rst,
    output reg[63:0]pc,

    output reg[31:0]imm_data,

    input jarl_rady,
    input valid_i,
    output reg ready_o,  

    //JUMP RES
    //input   jump_hit,          //1 分支结果为跳转   0不跳    为分支预测预留的引脚
    input [31:0]jal_pc,
    input       jal_ok  ,
    input [63:0]mem_dnpc,        //其他跳转的结果
    //cache 
    input      ready_i,          // 读有效等待接收
    output reg valid_o,          // 发出读请求
       
    input      [127:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o,  // 读地址

    output reg if_read_vaild,
    output reg if_read_clean,   //令已发出的cache请求作废
    input      cache_clear      //作废成功cache进入IDLE
 );
`define IF_IDLE         3'b000  
//`define IF_VAILD        3'b001  
`define IF_LINE         3'b010 
`define IF_WAIT         3'b100  
`define FENCE           3'b101 


`define CACHE_IDLE      2'b00
`define CACHE_VAILD     2'b01
`define CACHE_WAIT      2'b10
`define CACHE_CLEAN     2'b11

reg [2:0] state;              //状态机 
reg [1:0] cache_state;
reg [127:0]read_imm_data;
wire [31:0]r_data_4mux1;
wire [31:0]imm_data_4mux1;
wire [3:0] offset;
wire [3:0] pc_offset;
assign pc_offset     = dnpc[3:0];
assign r_data_4mux1  = (pc_offset==4'b0000)?r_data_i[31:0] :
					             (pc_offset==4'b0100)?r_data_i[63:32] :
					             (pc_offset==4'b1000)?r_data_i[95:64] :
					             (pc_offset==4'b1100)?r_data_i[127:96] :0;
assign imm_data_4mux1  = (pc_offset==4'b0000)?read_imm_data[31:0] :
					               (pc_offset==4'b0100)?read_imm_data[63:32] :
					               (pc_offset==4'b1000)?read_imm_data[95:64] :
					               (pc_offset==4'b1100)?read_imm_data[127:96] :0;


wire jump ;
wire jal ;
assign jal= ( imm_data[6:0]==`ysyx_22041412_jal)?1'b1:1'b0;  //直接跳转命令  可以直接出结果 由 译码部分计算
assign jump= (jal | imm_data[6:0]==`ysyx_22041412_B_type  | imm_data[6:0]==`ysyx_22041412_jalr |
              (imm_data[6:0]==`ysyx_22041412_Environment & (imm_data[31:20]==12'b00000000000 || imm_data[31:20]==12'b001100000010)) )? 1'b1 : 1'b0;

reg jump_mode;  //1为直接跳  0为计算后跳



wire one_line;
reg [31:0]dnpc;
reg       dnpc_v;  //dnpc的有效符号
reg [27:0]get_pc;  //指令流目前存放的基地址

assign one_line =(dnpc[31:4]==get_pc & dnpc_v) ? 1'b1:1'b0;

reg imm_ready;


  always@(posedge clk)begin   //Cache取值流状态机
    if(rst)begin
      cache_state<=`CACHE_IDLE;
    end
    case (cache_state)
    `CACHE_IDLE:begin
      cache_state <= valid_o?`CACHE_VAILD :`CACHE_IDLE;   //只有启动时会处在这个阶段
      end
    `CACHE_VAILD:begin
      cache_state <= jump ?`CACHE_WAIT : `CACHE_VAILD;
    end
    `CACHE_WAIT:begin
      cache_state <= valid_o?`CACHE_VAILD : `CACHE_WAIT;  
    end
    `CACHE_CLEAN:begin        //fence.i 
    end
    default:;
    endcase
  end
  reg wait_ok;
  reg [31:0]jump_pc;
    always@(posedge clk)begin     //为IFU预取下一个指令槽 128bit
    if(rst)begin
        get_pc   <= {28{1'b0}};
    end else begin
      case (cache_state)
      `CACHE_IDLE:begin //只有启动时会处在这个阶段
          valid_o   <=valid_i;
          r_addr_o  <=dnpc;
          imm_ready <=0;
          wait_ok   <= 0;
        end
      `CACHE_VAILD:begin   //等待接收新的指令
        wait_ok       <= 0;
        if_read_clean <= jump;
        if(ready_i==1'b1 & ~imm_ready & ~one_line)begin
          valid_o  <= 0 ;
          imm_ready<= 1 ;
          read_imm_data  <=r_data_i;
          if_read_vaild  <= 1;
          dnpc_v         <= 1;
          get_pc         <= r_addr_o[31:4];
          //$display("IF get Cache pc %8h  %32h",r_addr_o,r_data_i);
        end  else if(~valid_o & imm_ready & ~jump)begin
          valid_o  <= 1 ;
          imm_ready<= 0 ;     
          r_addr_o <= {get_pc+1'b1,4'b0000};
          if_read_vaild  <= 0;
        end  else if(jump)valid_o<= 1'b0;
      end
      `CACHE_WAIT:begin   //CPU在等跳转指令
        imm_ready <= 1'b0;
        dnpc_v    <= 0;
        get_pc    <= 0;
        if_read_clean  <= ~cache_clear;

        if(((jarl_rady ) || ( jal_ok))  && cache_clear)begin
          wait_ok  <= 1'b1;
          valid_o  <= 1'b1;
          r_addr_o <= jarl_rady  ? mem_dnpc[31:0] : jal_pc;
          jump_pc  <= jarl_rady  ? mem_dnpc[31:0] : jal_pc;
        end else if((((jarl_rady ) || ( jal_ok))  && ~cache_clear))begin
          wait_ok  <= 1'b1;
          valid_o  <= 1'b0; 
          r_addr_o <= r_addr_o;     
          jump_pc  <= jarl_rady  ? mem_dnpc[31:0] : jal_pc;
        end else begin
          valid_o  <= (wait_ok   && cache_clear)?1'b1: 1'b0;
          r_addr_o <= (wait_ok   && cache_clear)?jump_pc : r_addr_o;
        end


      end
      `CACHE_CLEAN:begin        //fence.i 
      end
      default:;
      endcase
    end
  end
  // always @(posedge clk) begin
  //    $display("IF clk 1 oneline=%d state=%b jar %b",one_line,state,jar);
  // end  


  always@(posedge clk)begin //IFU状态机
    if(rst )begin
      state <= `IF_IDLE;
    end else begin
      case (state)
        `IF_IDLE: begin
          state<= valid_i ? `IF_LINE : `IF_IDLE;
        end
        `IF_LINE:begin
          state <=(jump & ~jal) ? `IF_WAIT : `IF_LINE;
        end
        `IF_WAIT:begin
          state <= jarl_rady? `IF_LINE :`IF_WAIT;
        end
        default: ;
        
      endcase
    end
  end

 always @(posedge clk) begin   //IFU ---> ID
  if(rst)begin
    ready_o  <=0;
    dnpc     <=32'h80000000;
  end  else begin   
    case (state)
        `IF_IDLE: begin
          ready_o       <=0;
          imm_data      <= 0;

        end
        `IF_LINE:begin
          if(valid_i & one_line & ~jump )begin
            imm_data <=imm_data_4mux1;
            pc[31:0] <=dnpc;
            dnpc     <=dnpc+4;
            ready_o  <=1;
            //$display("IFU Read one line : addr:%8h :%8h",dnpc,imm_data_4mux1);           
          end else if(jal & jal_ok) begin
            imm_data         <={32{1'b0}};
            dnpc             <= jal_pc;
            ready_o          <=0;
            //$display("IFU JUMP JAL PC %8h",jal_pc);
          end
           else if (valid_i)begin
            ready_o        <=0;
          end
        end
        `IF_WAIT:begin              //等待分支指令给出新地址
          if(jarl_rady ) begin
            imm_data         <={32{1'b0}};
            ready_o        <= 0;
            dnpc           <= mem_dnpc[31:0];
            //$display("IFU JUMP JARL/B PC %8h",mem_dnpc[31:0]);
          end  else if (valid_i)begin
            ready_o        <= 0;            
          end
        end
        default: ;  
    endcase

  end

 end
endmodule
