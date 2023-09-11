module ysyx_22041412_axi_Arbiter #(
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input clk,
    input rst,
// if   
    input          if_ar_valid,                           //IF请求
    output         if_ar_ready,
    output  [63:0] if_ar_data,
    input   [31:0] if_ar_addr,
    input    [7:0] if_ar_len,
    output         if_last_i,
// mem
    input          mem_rw_valid,                          //MEM请求
    output         mem_rw_ready,
    input          mem_rw_wen,
    output  [63:0] mem_rw_r_data,
    input   [63:0] mem_rw_w_data,
    input   [31:0] mem_rw_addr,
    input    [7:0] mem_rw_len,
    input    [7:0] mem_rw_size,
    output         mem_last_i,
// axi
    output                               r_valid_i,          //读请求
    output                               w_valid_i,          //写请求
	  input                                r_ready_o,          //读数据结束
    input                                w_ready_o,          //写数据结束
    input   [AXI_DATA_WIDTH-1:0]         data_read_o,        //数据输出
    output  [AXI_DATA_WIDTH-1:0]         rw_w_data_i,        //写数据
    output  [AXI_ADDR_WIDTH-1:0]         w_addr_i,           //写地址
    output  [AXI_ADDR_WIDTH-1:0]         r_addr_i,           //读地址
    output  [7:0]                        w_size_i,           //写掩码
    output  [7:0]                        r_size_i,           //读掩码
    output  [7:0]                        r_len_i,            //读突发长度
    output  [7:0]                        w_len_i,            //写突发长度
    input                                r_last_i,
    input                                w_last_i
);
//读通道常通 IF , MEM有读请求则在本次IF结束后立刻处理
`define AXI_IDLE         3'b000     //空闲
`define MEMW             3'b001     //选通MEM写
`define MEMR             3'b010     //选通MEM读
`define IF               3'b100     //选通IF
reg[2:0] rd_switch;          //读通道选择器状态  
reg[2:0] rd_next_switch;
reg[1:0] rd_state;           //读通道状态机
reg[1:0] rd_next_state;

reg[2:0] wr_switch;          //写通道选择器状态  
reg[2:0] wr_next_switch;
reg[1:0] wr_state;           //写通道状态机
reg[1:0] wr_next_state;
`define IDLE         2'b00  
`define BUSY         2'b01     
//`define DONE         2'b100     


//------------读通道   Read transmission---------------------\\
    always@(posedge clk)begin //状态机更新
      if(rst )begin
        rd_state <= `IDLE;
      end else begin
        rd_state <= rd_next_state;
        rd_switch<= rd_next_switch;
      end
    end
    always@(*)begin //next state
      if(rst )begin
        rd_next_state  = `IDLE;
        rd_next_switch = 'b0000;
      end else begin
        case(rd_state) //写入状态机的控制 
        `IDLE: begin
              if(mem_rw_valid & ~mem_rw_wen )begin
                rd_next_state  = `BUSY;
                rd_next_switch =  `MEMR;
              end 
              else if(if_ar_valid)begin
                rd_next_state  = `BUSY;
                rd_next_switch = `IF;
              end else begin   
                rd_next_state  = `IDLE;
                rd_next_switch = `AXI_IDLE;
              end
        end
        `BUSY:  begin  //数据传输中
          if((r_ready_o & r_last_i))begin   //传输结束了
            //if(mem_rw_valid & ~mem_rw_wen )begin  //IF结束了，检查一下有没有MEM请求
            //  rd_next_state  = `BUSY;
            // rd_next_switch = `MEMR;
            //end else if(if_ar_valid)begin            //IF有请求就继续连接IF
            //  rd_next_state  = `BUSY;
            //  rd_next_switch = `IF;     
            //end else begin
              rd_next_state  = `IDLE;
              rd_next_switch = `AXI_IDLE;             
            //end
          end else if(~r_valid_i) begin//传输被取消
              rd_next_state  = `IDLE;
              rd_next_switch = `AXI_IDLE;   
          end else begin
            rd_next_state = `BUSY; //保持传输状态
            rd_next_switch= rd_switch;
          end
        end
        default: rd_next_state = `IDLE;
        endcase
      end
    end

//------------写通道   Write transmission---------------------\\
  always@(posedge clk)begin
    if(mem_rw_valid & mem_rw_wen )begin
      wr_switch <= `MEMW ;
    end else begin
      wr_switch <= `AXI_IDLE ;
    end

  end

assign if_ar_data  =(rd_switch==`IF)   ?data_read_o: 0;
assign if_ar_ready =(rd_switch==`IF)   ?r_ready_o  : 0;
assign if_last_i   =(rd_switch==`IF)   ?r_last_i   : 0;
assign mem_rw_ready=(rd_switch==`MEMR )?r_ready_o  :
                    (wr_switch==`MEMW )?w_ready_o  : 0;
assign mem_rw_r_data=(rd_switch==`MEMR)?data_read_o: 0;
//读通道
assign r_valid_i   =(rd_switch==`MEMR) ? mem_rw_valid : 
                    (rd_switch==`IF)   ? if_ar_valid  : 0 ;  //读请求
assign r_addr_i    =(rd_switch==`MEMR) ? mem_rw_addr  :
                    (rd_switch==`IF)   ? if_ar_addr   : 0 ;  //读地址
assign r_size_i    =(rd_switch==`MEMR) ? mem_rw_size  :
                    (rd_switch==`IF)   ? 'b1111_1111  : 0 ;  //读位宽
assign r_len_i     =(rd_switch==`MEMR) ? mem_rw_len   :
                    (rd_switch==`IF)   ?  if_ar_len   : 0 ;  //读长度
 
//写通道
assign w_valid_i   =(wr_switch == `MEMW)? mem_rw_valid : 0;            //写请求
assign rw_w_data_i =(wr_switch == `MEMW)? mem_rw_w_data: 0;            //写数据
assign w_size_i    =(wr_switch == `MEMW)? mem_rw_size  : 0;            //掩码
assign w_addr_i    =(wr_switch == `MEMW)? mem_rw_addr  : 0;            //地址
assign w_len_i     =(wr_switch == `MEMW)? mem_rw_len   : 0;            //突发长度

endmodule
