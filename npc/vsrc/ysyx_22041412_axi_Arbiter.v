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
    output  reg    if_ar_ready,
    input          if_ar_wen_w,
    output  reg[63:0] if_ar_data,
    input   [31:0] if_ar_addr,
    input    [7:0] if_ar_len,
    input    [7:0] if_ar_size,

// mem
    input          mem_rw_valid,                          //MEM请求
    output  reg    mem_rw_ready,
    input          mem_rw_wen,
    output  reg[63:0] mem_rw_r_data,
    input   [63:0] mem_rw_w_data,
    input   [31:0] mem_rw_addr,
    input    [7:0] mem_rw_len,
    input    [7:0] mem_rw_size,

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
    output  [7:0]                        w_len_i             //写突发长度
);
`define AXI_IDLE         3'b000     //空闲
`define MEMW             3'b001     //选通MEM写
`define MEMR             3'b010     //选通MEM读
`define IF               3'b100     //选通IF
reg[2:0] switch;          //选择器状态  
reg[2:0] next_switch;

`define IDLE         2'b00  
`define BUSY         2'b01     
//`define DONE         2'b100     
reg[1:0] state;       //状态机
reg[1:0] next_state;

    always@(posedge clk)begin
      if(rst )begin
        state <= `IDLE;
      end else begin
        state <= next_state;
        switch<= next_switch;
      end
    end
    //next state
    always@(*)begin
      if(rst )begin
        next_state  = `IDLE;
        next_switch = 'b0000;
      end else begin
        case(state) //写入状态机的控制 
        `IDLE: begin
              if(mem_rw_valid & mem_rw_wen )begin    //基于1234顺序选择本次传输的对象
                next_state  = `BUSY;
                next_switch =  `MEMW;   
              end else if(mem_rw_valid & ~mem_rw_wen )begin
                next_state  = `BUSY;
                next_switch =  `MEMR;
              end 
              else if(if_ar_valid)begin
                next_state  = `BUSY;
                next_switch = `IF;
              end else begin   
                next_state  = `IDLE;
                next_switch = `AXI_IDLE;
              end
        end
        `BUSY:  begin                       //数据传输中
          if(r_ready_o || w_ready_o )begin    
            next_state = `IDLE;//ddr结束传输
            next_switch= `AXI_IDLE;
          end else begin
            next_state = `BUSY;//传输状态
            next_switch= switch;
          end
        end
        default: next_state = `IDLE;
        endcase
      end
    end


assign if_ar_data  =(switch==`IF)   ?data_read_o: 0;
assign if_ar_ready =(switch==`IF)   ?r_ready_o  : 0;

assign mem_rw_ready=(switch==`MEMR )?r_ready_o:
                    (switch==`MEMW )?w_ready_o: 0;

//读通道
assign r_valid_i   =(switch==`MEMR) ? mem_rw_valid :                //读请求
                    (switch==`IF)   ? if_ar_valid  : 0;
assign r_addr_i    =(switch==`MEMR) ? mem_rw_addr  :                //读地址
                    (switch==`IF)   ? if_ar_addr   : 0;
assign r_size_i    =(switch==`MEMR) ? mem_rw_size  : 
                    (switch==`IF)   ? if_ar_size   : 0;
assign r_len_i     =(switch==`MEMR) ? mem_rw_len   : 
                    (switch==`IF)   ? if_ar_len    : 0;

//写通道
assign w_valid_i   =(switch == `MEMW)? mem_rw_valid : 0;            //写请求
assign rw_w_data_i =(switch == `MEMW)? mem_rw_w_data: 0;            //写数据
assign w_size_i    =(switch == `MEMW)? mem_rw_size  : 0;            //掩码
assign w_addr_i    =(switch == `MEMW)? mem_rw_addr  : 0;            //地址
assign w_len_i     =(switch == `MEMW)? mem_rw_len   : 0;            //突发长度

endmodule
