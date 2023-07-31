// 16组相连cache  
// cache 大小为16kb  能容纳 1024个块  块大小为16B
// 每组64 line 
// index位宽= 2log(64) =  6
// 每个cache块都可放到组号为(tag % 组数)中的任意行
module ysyx_22041412_Icache(
    input                   clk,
    input                   rst,
//cpu       <---> icache
    input       [31:0]      cpu_req_addr,
    input                   cpu_req_valid,
    output  reg [31:0]      cpu_data_read,
    output  reg             cpu_ready,
//icache    <---> AXI

);
    parameter ram_widh         = 'd128
    parameter cache_size       = 'd1024;
    parameter cache_line_size  = 'd64;
    parameter cache_bank_size  = 'd16;
    parameter cache_pape_widh  = 'd16;
    parameter cpu_size         = 'd4;

`define IDLE         2'b00  
`define INST         2'b01  
`define DATA         2'b10  
`define READY        2'b11 
/* 
    31     11 9    4 3      0                   127       0
   +---------+-------+--------+                 +---------+
   |   tag   | index | offset |                  cache_data
   +---------+-------+--------+                 +---------+   
*/      
wire [21:0] cache_tag
wire [5:0]  cache_index;
wire [3:0]  cache_offset;

assign cache_tag    = cpu_req_addr{31:10};
assign cache_index  = cpu_req_addr{9:4};
assign cache_offset = cpu_req_addr{3:0};

// 1'b1v + tag 
reg [21+1'b1:0] cache_tag_ram [`cache_line_size-1:0] [0:`cache_pape_widh-1]; //tag堆


wire ram_rd_data [`ram_widh-1:0] ;        //读数据
wire ram_rd_cen  [`cache_pape_widh-1:0] ; //读使能

wire [3:0]ram_len = cache_tag % 16 ;


genvar index; //生成存储器
generate
    for(index=0; index<16; index=index+1) //例化16个1k ram模块
    begin: paper
        ysyx_22041412_S011HD1P_X32Y2D128 cache_ram(
            CLK (clk),
            Q   (ram_rd_data), 
            CEN (ram_rd_cen[index]), 
            WEN (1'b1), 
            A   (cache_index), 
            D   (128'b0)
        );
    end
endgenerate



reg[2:0] switch;              //cache状态机 
reg[2:0] next_switch;

    always@(posedge clk)begin //状态机更新
      if(rst )begin
        state <= `IDLE;
      end else begin
        state <= next_state;
        switch<= next_switch;
      end
    end

    always@(*)begin //next state
      if(rst )begin
        next_state  = `IDLE;
      end else begin
        case(state) //写入状态机的控制 
        `IDLE: begin
            if(cpu_req_valid) next_state = `INST;
            else next_state = `IDLE;
        end
        `INST:begin
            
        end
        `DATA:begin
        end
        `READY:begin
        end
        default: next_state = `IDLE;
        endcase
      end
    end

    integer i;
    always@(posedge clk)begin //cache执行状态机
      if(rst )begin

      end else begin
        case(state) 
        `IDLE: begin
        end
        `INST:begin
            if(cache_tag_ram[i][ram_len])==cache_tag;
        end
        `DATA:begin
        end
        `READY:begin
        end
        default: ;
        endcase
      end
    end


endmodule