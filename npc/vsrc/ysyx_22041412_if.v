module ysyx_22041412_if(
    input clk,
    input rst,
    output reg[63:0]pc,

    output reg[31:0]imm_data,

    input jarl_rady,
    input valid_i,
    output reg ready_o,  

    //快速译码的信号
    //JUMP RES
    //input   jump_hit,          //1 分支结果为跳转   0不跳    为分支预测预留的引脚
    input [31:0]jal_pc,
    input       jal_ok  ,
    input [63:0]mem_dnpc,        //其他跳转的结果

    output reg  fence_i,
    input       fence_ready,
    //ifu   <---> cache 
    input      ready_i,          // 读有效等待接收
    output reg valid_o,          // 发出读请求
       
    input      [127:0]r_data_i, // 读数据
    output reg [31:0]r_addr_o,  // 读地址

    output reg if_read_vaild,
    output reg if_read_clean,   //令已发出的cache请求作废
    input      cache_clear      //作废成功cache进入IDLE
 );
`define IF_IDLE         3'b000  
`define IF_LINE         3'b001 
`define IF_WAIT         3'b010  
`define FENCE           3'b100 


`define CACHE_IDLE      3'b000
`define CACHE_VAILD     3'b001 //正常预取
`define CACHE_WAIT      3'b010 //等jarl结果
`define CACHE_BRENCH    3'b100 //条件分支的处理
`define CACHE_CLEAN     3'b101 //FENCE I

reg  [2:0]   state;              //状态机 
reg  [2:0]   cache_state;
reg  [127:0] read_imm_data;
wire [31:0]  imm_data_4mux1;
wire [3:0]   pc_offset;
assign pc_offset = dnpc[3:0];
assign imm_data_4mux1  = (pc_offset==4'b0000)?read_imm_data[31:0] :
					               (pc_offset==4'b0100)?read_imm_data[63:32] :
					               (pc_offset==4'b1000)?read_imm_data[95:64] :
					               (pc_offset==4'b1100)?read_imm_data[127:96] :0;

//-------------快速解码部分 BEGIN----------------------
wire jump ;
wire jump_b;
wire jal ;
wire jarl;
wire ecall ;
assign fence_i  = (imm_data[6:0]==`ysyx_22041412_FENCE) ? imm_data[12] : 1'b0;
assign jal  = ( imm_data[6:0]==`ysyx_22041412_jal) ?1'b1:1'b0;  //直接跳转命令  可以直接出结果 由 译码部分计算
assign jarl = ( imm_data[6:0]==`ysyx_22041412_jalr)?1'b1:1'b0;  //直接跳转  但是需要等读取寄存器
assign ecall= (imm_data[6:0]==`ysyx_22041412_Environment & (imm_data[31:20]==12'b00000000000 || imm_data[31:20]==12'b001100000010))? 1'b1 : 1'b0;
              //ECALL MRET
assign jump_b =(imm_data[6:0]==`ysyx_22041412_B_type) ?1'b1 :1'b0 ;           //这段可以用分支预测
assign jump= (jal | jump_b  | jarl | ecall ) ? 1'b1 :1'b0;
  //针对循环的预测
    wire [31:0]B_pc  ;
    wire jump_mode   ;
    reg jump_mode_l  ;  //暂存的本次预测结果  1为直接跳  0为不跳
    assign B_pc		=	jump_b?{{20{imm_data[31]}},imm_data[7],imm_data[30:25],imm_data[11:8],1'b0} : 32'b0;  //B类指令的目标地址
    /* 
      一条for翻译成汇编是
      xxx：
      ....
      bne loopnnum , xxx:
      如果xxx地址比当前pc小就可以认为跳，只有最后一次循环退出才会预测错一次
     */
    assign jump_mode = jump_b? (B_pc < pc[31:0]) ?1'b1 :1'b0:1'b0;
//-------------快速解码部分 END ----------------------

wire one_line;
reg [31:0]dnpc;
reg       dnpc_v;  //dnpc的有效符号
reg [27:0]get_pc;  //指令流目前存放的基地址

assign one_line =(dnpc[31:4]==get_pc & dnpc_v) ? 1'b1:1'b0;

reg imm_ready;


  always@(posedge clk)begin   //Cache取值流状态机
    if(rst)begin
      cache_state<=`CACHE_VAILD;
    end
    case (cache_state)
    `CACHE_VAILD:begin
      cache_state <= jump ?`CACHE_WAIT : fence_i ?`CACHE_CLEAN :  `CACHE_VAILD;
    end
    `CACHE_WAIT:begin
      cache_state <= valid_o?`CACHE_VAILD : fence_i ?`CACHE_CLEAN : `CACHE_WAIT;  
    end
    `CACHE_BRENCH:begin        //B
    end
    `CACHE_CLEAN:begin        //fence.i 
       cache_state <= fence_ready ?`CACHE_VAILD : `CACHE_CLEAN;  
    end
    default:;
    endcase
  end
  reg wait_ok;
  reg [31:0]jump_pc;
    always@(posedge clk)begin     //为IFU预取下一个指令槽 128bit
    if(rst)begin    //启动！
        get_pc    <= {28{1'b0}};
        valid_o   <= 1'b1;
        r_addr_o  <= 32'h80000000;
        imm_ready <= 0;
        wait_ok   <= 0;
    end else begin
      case (cache_state)
      `CACHE_VAILD:begin   //等待接收新的指令
        wait_ok       <= 0;
        if_read_clean <= (jal | jarl | ecall |jump_b |fence_i);//遇到直接跳转指令必须清掉预取指令  fence_i 也是
        if(ready_i==1'b1 & ~imm_ready & ~one_line)begin
          valid_o  <= 0 ;
          imm_ready<= 1 ;
          read_imm_data  <= r_data_i;
          if_read_vaild  <= 1;
          dnpc_v         <= 1;
          get_pc         <= r_addr_o[31:4];
          //$display("IF get Cache pc %8h  %32h",r_addr_o,r_data_i);
        end  else if(~valid_o & imm_ready & ~jump)begin
          valid_o  <= 1 ;
          imm_ready<= 0 ;     
          r_addr_o <= {get_pc+1'b1,4'b0000};//取地址指向下一个LINE
          if_read_vaild  <= 0;
        end  
        if(jump) begin 
          valid_o   <= 1'b0;
          imm_ready <= 1'b0;
        end
      end
      `CACHE_WAIT:begin   //等待ICACHE结束废弃的指令预取
        dnpc_v    <= 0;
        get_pc    <= 0;
        if_read_clean  <= ~cache_clear;
        //imm_ready <= 1'b0;
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
      `CACHE_BRENCH:begin        //条件分支的预测
      end
      `CACHE_CLEAN:begin        //fence.i  结束后，重新申请新的指令
        valid_o        <= fence_ready; 
        r_addr_o       <= dnpc;
        dnpc_v         <= 0;
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
          state <=(jump & ~jal) ? `IF_WAIT : fence_i ?`CACHE_CLEAN : `IF_LINE;
        end
        `IF_WAIT:begin
          state <= jarl_rady ? `IF_LINE :`IF_WAIT;
        end
        `CACHE_CLEAN:begin
          state <= fence_ready ? `IF_LINE :`CACHE_CLEAN;
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
            imm_data       <={32{1'b0}};
            ready_o        <= 0;
            dnpc           <= mem_dnpc[31:0];
            //$display("IFU JUMP JARL/B PC %8h",mem_dnpc[31:0]);
          end  else if (valid_i)begin
            ready_o        <= 0;            
          end
        end
        `CACHE_CLEAN:begin    //等待cache处理完fence
          if (valid_i)begin
            ready_o          <= 0;
            imm_data         <={32{1'b0}};            
          end      
        end
        default: ;  
    endcase

  end

 end
endmodule
