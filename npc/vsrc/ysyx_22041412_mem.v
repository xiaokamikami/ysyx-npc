module ysyx_22041412_mem#(
    parameter ADDR_WIDTH =32,
    parameter DATA_WIDTH =64
)(
    input clk,
    input rst,
    //performance counter
    output [63:0]       cache_miss,
    output [63:0]       cache_hit,
    //mem <---> pip
    input [2:0]func3,
    input [ ADDR_WIDTH-1:0] addr,
    input [ DATA_WIDTH-1:0] wdata,
    input                   wen,

    input                      ex_ready_i,
    input                      mem_valid_i,
    output                     mem_ready_o,
    output [DATA_WIDTH-1:0]    r_data_o,

    input                      fence_i,
    //mem <---> axi

    input       r_ready_i,          // 数据操作完成
    output      r_valid_o,          // 发出读请求          
    input       r_last_i,
    output [7:0]r_len_o,
    input  [ DATA_WIDTH-1:0]r_data_i, // 读数据
    output [ ADDR_WIDTH-1:0]r_addr_o, // 读地址

    input       w_ready_i,          // 数据操作完成
    input       w_last_i,
    output      w_valid_o,          // 发出写请求
    output [2:0]w_size_o,
    output [7:0]w_len_o,
    output [ DATA_WIDTH-1:0]w_data_o, // 写数据
    output [ ADDR_WIDTH-1:0]w_addr_o // 写地址


);
/* import "DPI-C" function void mem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void mem_write(
  input longint waddr, input longint wdata, input byte wmask); */

/* wire [7:0]wmask; 
assign wmask =  (func3==3'b000)?8'd8:     //sb
                (func3==3'b001)?8'd16:    //sh
                (func3==3'b010)?8'd32:    //sw
                (func3==3'b011)?8'd64:    //sd
                0;    */

wire [63:0] cache_read_data;
wire  dcache_ready_o;
wire  dcache_fence_ready;

assign mem_ready_o = dcache_ready_o | (fence_i & dcache_fence_ready);

assign        r_data_o  =(~wen && mem_valid_i) ? (func3==3'b000)?{{56{cache_read_data[7]}},cache_read_data[7:0]}:    //lb
                                                 (func3==3'b001)?{{48{cache_read_data[15]}},cache_read_data[15:0]}:  //lh
                                                 (func3==3'b010)?{{32{cache_read_data[31]}},cache_read_data[31:0]}:  //lw
                                                 (func3==3'b011)?{cache_read_data[63:0]}:                            //ld
                                                 (func3==3'b100)?{{56{1'b0}},cache_read_data[7:0]}:                  //lbu
                                                 (func3==3'b101)?{{48{1'b0}},cache_read_data[15:0]}:                 //lhu
                                                 (func3==3'b110)?{{32{1'b0}},cache_read_data[31:0]}:                 //lwu
                                                 `ysyx_22041412_zero_word: `ysyx_22041412_zero_word;

ysyx_22041412_Dcache u_ysyx_22041412_Dcache(
    .clk                            ( clk                            ),
    .rst                            ( rst                            ),

    .cache_miss                     ( cache_miss                     ),
    .cache_hit                      ( cache_hit                      ),

    .cpu_req_addr                   ( addr                       ),
    .cpu_rw_en                      ( wen                        ),
    .cpu_write_data                 ( wdata                      ),
    .cpu_rw_size                    ( func3                      ),
    .cpu_read_data                  ( cache_read_data            ),
    .cpu_valid                      ( mem_valid_i                ),
    .cpu_ready                      ( dcache_ready_o             ),
    .fence_i                        ( fence_i                    ),
    .fence_ready                    ( dcache_fence_ready         ),

    .axi_w_ready_i                  ( w_ready_i                  ),
    .axi_w_valid_o                  ( w_valid_o                  ),
    .axi_w_last_i                   ( w_last_i                   ),
    .axi_w_len_o                    ( w_len_o                    ),
    .axi_w_data_o                   ( w_data_o                   ),
    .axi_w_addr_o                   ( w_addr_o                   ),
    .axi_w_size_o                   ( w_size_o                   ),
    .axi_r_ready_i                  ( r_ready_i                  ),
    .axi_r_valid_o                  ( r_valid_o                  ),
    .axi_r_last_i                   ( r_last_i                   ),
    .axi_r_len_o                    ( r_len_o                    ),
    .axi_r_data_i                   ( r_data_i                   ),
    .axi_r_addr_o                   ( r_addr_o                   )
);

endmodule
