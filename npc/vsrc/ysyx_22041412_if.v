`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_if(
    input clk,
    input rst,
//performance counter
    output reg [63:0]       pred_miss_count,
    output reg [63:0]       pred_hit_count,

    output reg[31:0]pc,
    output reg[31:0]imm_data,
//interrupt
    input       interrupt_en, // 触发硬件中断
    input [31:0]interrupt_pc,  //中断入口地址
    output reg  interrupt_accepted,//接管中断标识
    output reg[31:0] interrupt_mepc,//中断返回地址


    input jarl_rady,
    input valid_i,  //ID OK
    output reg ready_o,  

    //跳转处理部分
    //跳转处理部分
    //input   jump_hit,          //1 分支结果为跳转   0不跳    为分支预测预留的引脚
    //跳转处理部分       
    //input   jump_hit,          //1 分支结果为跳转   0不跳    为分支预测预留的引脚
    input [31:0]jal_pc,
    input       jal_ok  ,
    input       jal_b_hit,        //1 分支结果为跳转   0不跳    为分支预测使用的引脚
    input [PC_WIDTH-1:0]mem_dnpc,        //其他跳转的结果

    output reg  fence_i,
    input       fence_ready,
    //ifu   ----> decode //输出提前解码的指令
    output      if_decode_jal,
    output      if_decode_jarl,
    output      if_decode_jump_b,
    output      if_decode_fence_i,
    //ifu   <---> cache 
    input       ready_i,        // 读有效等待接收

       
    input      [31:0]r_data_i,  // 读数据
    output reg [31:0]r_addr_o,  // 读地址

    output reg if_read_vaild   //IFU读cache
 );
parameter PC_WIDTH = 64;
`define IF_IDLE         3'b000  
`define IF_WORK         3'b001 
`define IF_WAIT         3'b010 //其他跳转处理
`define IF_BRANCH       3'b100 //条件分支的处理
`define IF_INTER        3'b101 //中断的取指令等待区
`define IF_FENCE        3'b111 //FENCE I

reg  [2:0] state;            //状态机 
reg  [31:0]dnpc;
//-------------快速解码部分 BEGIN----------------------
assign      if_decode_jal     = jal;
assign      if_decode_jarl    = jarl;
assign      if_decode_jump_b  = jump_b;
assign      if_decode_fence_i = fence_i;
wire jump;
wire jump_b;
wire jal;
wire jarl;
wire ecall;
assign fence_i  = (imm_data[6:0]==`ysyx_22041412_FENCE) ? imm_data[12] : 1'b0;
assign jal      = (imm_data[6:0]==`ysyx_22041412_jal)   ? 1'b1:1'b0;  //直接跳转命令  可以直接出结果 由 译码部分计算
assign jarl     = (imm_data[6:0]==`ysyx_22041412_jalr)  ? 1'b1:1'b0;  //直接跳转  但是需要等读取寄存器
assign ecall    = (imm_data[6:0]==`ysyx_22041412_Environment & (imm_data[31:20]==12'b00000000000 || imm_data[31:20]==12'b001100000010))? 1'b1 : 1'b0;
              //ECALL MRET
assign jump_b =(imm_data[6:0]==`ysyx_22041412_B_type) ? 1'b1 : 1'b0 ;           //这段可以用分支预测
assign jump= (jump_b  | jarl | ecall ) ? 1'b1 : 1'b0;
  //针对循环的预测
    wire [31:0]B_pc  ;
    wire jump_pred   ;
    reg jump_pred_ld ;  //暂存的本次预测结果  1为直接跳  0为不跳
    assign B_pc		=	jump_b ? ( {{20{imm_data[31]}},imm_data[7],imm_data[30:25],imm_data[11:8],1'b0} + pc[31:0] ) : 32'b0;  //B类指令的目标地址
    /* 
      一条for翻译成汇编是
      xxx：
      ....
      bne loopnnum , xxx:
      如果xxx地址比当前pc小就可以认为跳，只有最后一次循环退出才会预测错一次
     */
    assign jump_pred = jump_b ? (B_pc < pc[31:0]) ?1'b1 :1'b0:1'b0;
//-------------快速解码部分 END ----------------------

    reg branch_op;
    reg branch_ok;
    wire pred_hit =  (jump_pred_ld & jal_b_hit) | (~jump_pred_ld & ~jal_b_hit);
    wire pred_miss=  ~pred_hit;

    reg [31:0]pred_pc;//分支预测器取到的数据暂留
    reg       pred_imm_ready_ld;
    reg       pred_result_ready_ld;
    reg       pred_falt_ld;

    wire[31:0]pred_miss_pc = pred_result_ready_ld ? pred_pc : mem_dnpc[31:0];
    wire      pred_imm_ready = (pred_imm_ready_ld | ready_i ) ;
    wire      pred_result_ready = (pred_result_ready_ld | jarl_rady);
    wire      pred_falt = (pred_falt_ld | pred_miss);


  always@(posedge clk)begin //IFU状态机
    if(rst )begin
      state <= `IF_WORK;
    end else begin
      case (state)
        `IF_IDLE: begin
            state<= valid_i ? `IF_WORK : `IF_IDLE;
        end
        `IF_WORK:begin
            state <=(valid_i & jump ) ? jump_b  ? `IF_BRANCH 
                                                : `IF_WAIT 
                                      : fence_i ? `IF_FENCE  
                                                : `IF_WORK;
        end
        `IF_BRANCH:begin
            state <= (valid_i & pred_result_ready & pred_imm_ready ) ? jump_b ? `IF_BRANCH:
                                                                       jump   ? `IF_WAIT  :
                                                                                `IF_WORK 
                                                                      : `IF_BRANCH;
        end
        `IF_WAIT:begin
            state <= jarl_rady ? `IF_WORK : `IF_WAIT;
        end
        `IF_FENCE:begin
            state <= fence_ready ? `IF_WORK :`IF_FENCE;
        end
        default: ;
      endcase
    end
  end

    always@(*)begin //负责转发cache的数据
        case (state)
            `IF_WORK: begin
                if (ready_i & ~last_stall & interrupt_contrl)begin
                    imm_data = r_data_i;
                    pc[31:0] = r_addr_o;
                    ready_o  = 1'b1;
                end else if(last_stall & interrupt_contrl)begin
                    imm_data = last_imm;
                    pc[31:0] = last_pc;
                    ready_o  = 1'b1;   
                end else begin
                    imm_data = 32'b0;
                    pc[31:0] = 32'b0;
                    ready_o  = 1'b0;
                end
            end
            `IF_BRANCH: begin
                if (valid_i & pred_result_ready & pred_imm_ready & ~pred_falt)begin
                    imm_data = r_data_i;
                    pc[31:0] = r_addr_o;
                    ready_o  = 1'b1;
                end else begin
                    imm_data = 32'b0;
                    pc[31:0] = 32'b0;
                    ready_o  = 1'b0;
                end
            end
            default : begin
                    imm_data = 32'b0;
                    pc[31:0] = 32'b0;
                    ready_o  = 1'b0;
            end
        endcase
    end


 reg [31:0]last_imm;
 reg [31:0]last_pc;
 reg last_stall;
 reg wait_jal;
 
 //接收中断请求
 reg interrupt_ld;
 wire interrupt_contrl = (~interrupt_en || interrupt_en & interrupt_ld);
 always @(posedge clk) begin
    if (rst) begin
        interrupt_accepted <= 1'b0;
    end else begin
        if(interrupt_en & ~interrupt_ld)begin
            interrupt_accepted <= !ready_i;
            interrupt_ld       <= !ready_i;
        end else if(interrupt_en & interrupt_ld & ready_o)begin//中断后第一条指令发出后关掉接管信号
            interrupt_accepted <= 1'b0;
            interrupt_ld       <= interrupt_ld;
        end
        else if(~interrupt_en) begin
            interrupt_accepted <= 1'b0;
            interrupt_ld       <= 1'b0;
        end
    end
 end

 always @(posedge clk) begin   //IFU  DNPC控制  -->> ICACHE
  if(rst)begin
    if_read_vaild  <= 1'b1;
    dnpc           <= 32'h80000004;
    r_addr_o       <= 32'h80000000;
  end  else begin   
    case (state)
        `IF_IDLE: begin
            if_read_vaild  <= 1'b0;
            interrupt_mepc <= 32'b0; 
            dnpc           <= dnpc;
        end
        `IF_WORK:begin//普通取指模式
          pred_falt_ld        <= 1'b0;
          pred_imm_ready_ld   <= 1'b0;
          pred_result_ready_ld<= 1'b0;
          if(~valid_i & ready_i)begin //如果发出请求后ID暂停，需要先缓存下来数据
            last_imm       <= r_data_i;
            last_pc        <= r_addr_o;
            last_stall     <= 1'b1;
            if_read_vaild  <= 1'b0;
          end
         //每次取回指令后发出一条新的指令请求，地址递增+4
         if(valid_i & ((ready_i & ~wait_jal) | last_stall) & interrupt_contrl)begin
            if_read_vaild  <= (~jump & ~jal) ? 1'b1 : jump_b;
            wait_jal       <= jal;
            r_addr_o       <= jump_pred ? B_pc :dnpc;
            pred_pc        <= jump_b ? jump_pred ? B_pc : dnpc : 32'b0;
            jump_pred_ld   <= jump_pred;
            dnpc           <= dnpc+4;
            last_stall     <= 1'b0;
          end
          else if (wait_jal & jal_ok & interrupt_contrl)begin
            wait_jal       <= 1'b0;
            if_read_vaild  <= 1'b1;
            r_addr_o       <= jal_pc;
            dnpc           <= jal_pc+4;
            last_stall     <= 1'b0;
          end else if(interrupt_en & ~interrupt_ld) begin  //中断挂起未接管
            if_read_vaild <= !ready_i;
            if (ready_i) begin
                r_addr_o      <= interrupt_pc;
                dnpc          <= interrupt_pc + 4;
                interrupt_mepc<= r_addr_o;
            end
         end
        end
        `IF_WAIT:begin       //等待分支指令给出新地址
          last_stall       <=1'b0;
          if(jarl_rady) begin
            if_read_vaild  <= 1'b1;
            r_addr_o       <= mem_dnpc[31:0];
            dnpc           <= mem_dnpc[31:0]+4;
            //$display("IFU JUMP JARL/B PC %8h",mem_dnpc[31:0]);
          end
        end
        `IF_BRANCH:begin    //条件分支的处理
            last_stall     <=1'b0;
            if(ready_i) begin
                pred_imm_ready_ld <= 1'b1;
            end else begin
                pred_imm_ready_ld <= pred_imm_ready;
            end
            if(jarl_rady) begin// 结果出来了
                if(pred_hit) begin
                    pred_hit_count <= pred_hit_count+1 ;
                    //命中 直接让流水线动起来
                    pred_falt_ld<= 1'b0;
                    pred_pc     <= pred_pc;
                end
                else  begin
                    pred_miss_count <= pred_miss_count+1;
                    //MISS 需清空预取数据重新取
                    pred_falt_ld <= 1'b1;
                    pred_pc      <= mem_dnpc[31:0];
                end
                pred_result_ready_ld<= 1'b1;
            end
            else begin
                jump_pred_ld<= jump_pred_ld;
            end
            if( valid_i & pred_result_ready & pred_imm_ready)begin
                if_read_vaild  <= (~jump & ~jal) ? 1'b1 : jump_b;
                wait_jal       <= jal;
                r_addr_o       <= jump_pred ? B_pc 
                                            : pred_falt ? pred_miss_pc
                                            : pred_pc+4;

                pred_pc        <= jump_b ? jump_pred ? B_pc : 
                                           pred_falt ? pred_miss_pc : pred_pc+4 
                                         : 32'b0;

                dnpc           <= pred_falt ? pred_miss_pc+4 : pred_pc+8;
                jump_pred_ld   <= jump_pred;
                last_stall     <= 1'b0;

                pred_falt_ld        <= 1'b0;
                pred_imm_ready_ld   <= 1'b0;
                pred_result_ready_ld<= 1'b0;
            end
        end
        `IF_FENCE:begin    //等待cache处理完fence
   
        end
        default: ;  
    endcase

  end

 end
endmodule
