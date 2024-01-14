`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_top(
    input wire clock,
    input wire reset,
    input      io_interrupt,
    //veriltor
    output wire [63:0]pip_pc,
    output wire       pip_interrupt_acpt,
    output reg  [4:0] pip_reg_addr,
    output reg  [63:0]pip_reg_data,
    output reg        pip_reg_en,
    output wire [63:0]pip_mem_pc,
    output Ebreak,

    //performance counter
    output [63:0]       Icache_L1_miss,
    output [63:0]       Icache_L1_hit,
    output [63:0]       Dcache_L1_miss,
    output [63:0]       Dcache_L1_hit,

    output [63:0]       IFU_Pred_miss,
    output [63:0]       IFU_Pred_hit,

// Advanced eXtensible Interface    AXI4总线接口
    // 写地址通道
    input                               io_master_awready,
    output                              io_master_awvalid,
    output [AXI_ADDR_WIDTH-1:0]         io_master_awaddr,
    output [AXI_ID_WIDTH-1:0]           io_master_awid,
    output [AXI_USER_WIDTH-1:0]         io_master_awuser,
    output [7:0]                        io_master_awlen,
    output [2:0]                        io_master_awsize,
    output [1:0]                        io_master_awburest,

    // 写数据通道
    input                               io_master_wready,
    output                              io_master_wvalid,
    output [AXI_DATA_WIDTH-1:0]         io_master_wdata,
    output [AXI_STRB_WIDTH-1:0]         io_master_wstrb,
    output                              io_master_wlast,
    output [AXI_USER_WIDTH-1:0]         io_master_wuser,

    // 写响应通道
    output                              io_master_bready,
    input                               io_master_bvalid,
    input  [1:0]                        io_master_bresp,
    input  [AXI_ID_WIDTH-1:0]           io_master_bid,
    input  [AXI_USER_WIDTH-1:0]         io_master_buser,

    // 读地址通道
    input                               io_master_arready,
    output                              io_master_arvalid,
    output [AXI_ADDR_WIDTH-1:0]         io_master_araddr,

    output [AXI_ID_WIDTH-1:0]           io_master_arid,
    output [AXI_USER_WIDTH-1:0]         io_master_aruser,
    output [7:0]                        io_master_arlen,
    output [2:0]                        io_master_arsize,
    output [1:0]                        io_master_arburest,

    // 读数据通道
    output                              io_master_rready,
    input                               io_master_rvalid,
    input  [1:0]                        io_master_rresp,
    input  [AXI_DATA_WIDTH-1:0]         io_master_rdata,
    input                               io_master_rlast,
    input  [AXI_ID_WIDTH-1:0]           io_master_rid,
    input  [AXI_USER_WIDTH-1:0]         io_master_ruser,

    // 从机
    input                               io_slave_awready,
    output                              io_slave_awvalid,
    output [31:0]                       io_slave_awaddr,
    output [3:0]                        io_slave_awid,
    output [7:0]                        io_slave_awlen,
    output [2:0]                        io_slave_awsize,
    output [1:0]                        io_slave_awburest,
    input                               io_slave_wready,
    output                              io_slave_wvalid,
    output [63:0]                       io_slave_wdata,
    output [7:0]                        io_slave_wstrb,
    output                              io_slave_wlast,
    output                              io_slave_bready,
    input                               io_slave_bvalid,
    input  [1:0]                        io_slave_bresp,
    input  [3:0]                        io_slave_bid,
    input                               io_slave_arready,
    output                              io_slave_arvalid,
    output [31:0]                       io_slave_araddr,
    output [3:0]                        io_slave_arid,
    output [7:0]                        io_slave_arlen,
    output [2:0]                        io_slave_arsize,
    output [1:0]                        io_slave_arburest,
    output                              io_slave_rready,
    input                               io_slave_rvalid,
    input  [1:0]                        io_slave_rresp,
    input  [63:0]                       io_slave_rdata,
    input                               io_slave_rlast,
    input  [3:0]                        io_slave_rid,
//ICACHE SRAM
    //SRAM0
    output [5:0]                        io_sram0_addr,
    output                              io_sram0_cen,
    output                              io_sram0_wen,
    output [127:0]                      io_sram0_wmask,
    output [127:0]                      io_sram0_wdata,
    input  [127:0]                      io_sram0_rdata,
    //SRAM1
    output [5:0]                        io_sram1_addr,
    output                              io_sram1_cen,
    output                              io_sram1_wen,
    output [127:0]                      io_sram1_wmask,
    output [127:0]                      io_sram1_wdata,
    input  [127:0]                      io_sram1_rdata,
    //SRAM2
    output [5:0]                        io_sram2_addr,
    output                              io_sram2_cen,
    output                              io_sram2_wen,
    output [127:0]                      io_sram2_wmask,
    output [127:0]                      io_sram2_wdata,
    input  [127:0]                      io_sram2_rdata,
    //SRAM3
    output [5:0]                        io_sram3_addr,
    output                              io_sram3_cen,
    output                              io_sram3_wen,
    output [127:0]                      io_sram3_wmask,
    output [127:0]                      io_sram3_wdata,
    input  [127:0]                      io_sram3_rdata,
//DCACHE SRAM
    //SRAM4
    output [5:0]                        io_sram4_addr,
    output                              io_sram4_cen,
    output                              io_sram4_wen,
    output [127:0]                      io_sram4_wmask,
    output [127:0]                      io_sram4_wdata,
    input  [127:0]                      io_sram4_rdata,
    //SRAM5
    output [5:0]                        io_sram5_addr,
    output                              io_sram5_cen,
    output                              io_sram5_wen,
    output [127:0]                      io_sram5_wmask,
    output [127:0]                      io_sram5_wdata,
    input  [127:0]                      io_sram5_rdata,
    //SRAM6
    output [5:0]                        io_sram6_addr,
    output                              io_sram6_cen,
    output                              io_sram6_wen,
    output [127:0]                      io_sram6_wmask,
    output [127:0]                      io_sram6_wdata,
    input  [127:0]                      io_sram6_rdata,
    //SRAM7
    output [5:0]                        io_sram7_addr,
    output                              io_sram7_cen,
    output                              io_sram7_wen,
    output [127:0]                      io_sram7_wmask,
    output [127:0]                      io_sram7_wdata,
    input  [127:0]                      io_sram7_rdata,

);
    parameter AXI_DATA_WIDTH    = 64;
    parameter AXI_ADDR_WIDTH    = 32;
    parameter AXI_ID_WIDTH      = 4;
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8;
    parameter AXI_USER_WIDTH    = 1;
    parameter PC_WIDTH          = 64;

//DIFF-TEST
assign pip_pc      = wb_pc;
assign pip_mem_pc  = mem_pc;
assign Ebreak=(id_imm=='b000100000000000001110011)?1:0;

always @(posedge clock) begin
    pip_reg_addr <= wb_addr;
    pip_reg_data <= wb_data;
    pip_reg_en   <= wb_reg_en;
end
assign pip_interrupt_acpt = wb_interrupt_acpt;
//



//axi
wire         r_valid;  // 请求有效
wire         r_ready;  // 访存完成
wire         w_valid;  // 请求有效
wire         w_ready;  // 访存完成

wire [AXI_DATA_WIDTH-1:0] axi_r_data; // 读数据
wire [AXI_ADDR_WIDTH-1:0] axi_r_addr; // 读地址
wire [AXI_DATA_WIDTH-1:0] axi_w_data; // 写数据
wire [AXI_ADDR_WIDTH-1:0] axi_w_addr; // 写地址

wire  [2:0] r_size;   // 突发宽度
wire  [2:0] w_size;   // 突发宽度
wire  [7:0] r_len_i;
wire  [7:0] w_len_i;
wire        r_last_o;
wire        w_last_o;

ysyx_22041412_axi axi4(
    .clk(clock),
    .rst(reset),

    .r_valid_i(r_valid),         //读请�?
    .w_valid_i(w_valid),         //写请�?
	.r_ready_o(r_ready),         //读数据结�?
    .w_ready_o(w_ready),         //写数据结�?
    .data_read_o(axi_r_data),    //数据输出
    .rw_w_data_i(axi_w_data),    //写数�?
    .w_addr_i(axi_w_addr),       //地址
    .r_addr_i(axi_r_addr),       //地址
    .w_size_i(w_size),           //掩码
    .r_size_i(r_size),           //掩码
    .r_len_i(r_len_i),           //突发长度
    .w_len_i(w_len_i),           //突发长度
    .r_last_o(r_last_o),
    .w_last_o(w_last_o),
    // 写地址通道
    .axi_aw_ready_i(io_master_awready),  // 从设备已准备好接收地址和相关的控制信号
    .axi_aw_valid_o(io_master_awvalid),  // 主设备给出的地址和相关的控制信号有效
    .axi_aw_addr_o(io_master_awaddr),    // 写地址
    .axi_aw_prot_o(io_master_awprot),   // 保护类型
    .axi_aw_id_o(io_master_awid),     // 写地址ID
    .axi_aw_user_o(),   // 用户定义信号
    .axi_aw_len_o(io_master_awlen),    // 突发长度
    .axi_aw_size_o(io_master_awsize),   // 突发大小
    .axi_aw_burst_o(io_master_awburst),  // 突发类型
    .axi_aw_lock_o(),   // 原子锁类�?
    .axi_aw_cache_o(),  // 存储器类�?
    .axi_aw_qos_o(),    // 服务质量
    .axi_aw_region_o(), // 区域标识�?

    // 写数据通道
    .axi_w_ready_i(io_master_wready), // 从设备已准备好接收数据和字节选通信�?
    .axi_w_valid_o(io_master_wvalid), // 主设备给出的数据和字节选通信号有�?
    .axi_w_data_o(io_master_wdata),  // 写出的数�?
    .axi_w_strb_o(io_master_wstrb),  // 数据的字节选通信�?
    .axi_w_last_o(io_master_wlast),  // 标识是否是最后一次突发传�?
    .axi_w_user_o(),  // 用户定义信号

    // 写响应通道
    .axi_b_ready_o(io_master_bready), // 主设备已准备好接收写响应信号
    .axi_b_valid_i(io_master_bvalid), // 从设备给出的写响应信号有�?
    .axi_b_resp_i(io_master_bresp),  // 写传输的状�?
    .axi_b_id_i(io_master_bid),    // 写响应ID
    .axi_b_user_i(),  // 用户定义信号

    // 读地址通道
    .axi_ar_ready_i(io_master_arready),  // 从设备已经准备好接收地址和相关信�?
    .axi_ar_valid_o(io_master_arvalid),  // 主设备给出的地址和相关信息有�?
    .axi_ar_addr_o(io_master_araddr),   // 读地址
    .axi_ar_prot_o(io_master_arprot),   // 保护类型
    .axi_ar_id_o(io_master_arid),     // 读地址ID
    .axi_ar_user_o(),   // 用户定义信号
    .axi_ar_len_o(io_master_arlen),    // 突发长度
    .axi_ar_size_o(io_master_arsize),   // 突发大小（每次突发传输的大小�?
    .axi_ar_burst_o(io_master_arburst),  // 突发类型
    .axi_ar_lock_o(),   // 原子锁类�?
    .axi_ar_cache_o(),  // 存储器类�?
    .axi_ar_qos_o(),    // 服务质量
    .axi_ar_region_o(), // 区域标识�?

    // 读数据通道
    .axi_r_ready_o(io_master_rready), // 主设备已经准备好接收读取的数据和响应信息
    .axi_r_valid_i(io_master_rvalid), // 从设备给出的数据和响应信息有�?
    .axi_r_resp_i(io_master_rresp),  // 读传输的状�?
    .axi_r_data_i(io_master_rdata),  // 读出的数�?
    .axi_r_last_i(io_master_rlast),  // 标识是否是最后一次突发传�?
    .axi_r_id_i(io_master_rid),    // 读数据ID
    .axi_r_user_i()   // 用户定义信号
);                        
wire          if_ar_ready;
wire   [31:0] if_ar_data;
wire   [31:0] if_ar_addr;
wire          if_read_vaild;//IF请求

wire          mem_r_valid;                           //MEM 读请求
wire          mem_r_ready;
wire   [63:0] mem_r_data;
wire   [31:0] mem_r_addr;
wire    [7:0] mem_r_len;
//wire    [2:0] mem_r_size;
wire          mem_r_last;
wire          mem_w_valid;                           //MEM 写请求
wire          mem_w_ready;
wire   [63:0] mem_w_data;
wire   [31:0] mem_w_addr;
wire    [7:0] mem_w_len;
wire    [2:0] mem_w_size;
wire          mem_w_last;
ysyx_22041412_axi_Arbiter axi_Arbiter(
    .clk(clock),
    .rst(reset),
// if   
    .if_ar_valid(icache_ar_valid),                           //IF请求
    .if_ar_ready(icache_ar_ready),
    .if_ar_data (icache_ar_data),
    .if_ar_addr (icache_ar_addr),
    .if_ar_len  (icache_ar_len),
    .if_last_i  (icache_last_i),
// mem
    //READ
    .mem_r_valid   (mem_r_valid),                         //MEM请求
    .mem_r_ready   (mem_r_ready),
    .mem_r_data    (mem_r_data),
    .mem_r_addr    (mem_r_addr),
    .mem_r_len     (mem_r_len),
    .mem_r_last_i  (mem_r_last),
    //WRIT
    .mem_w_valid   (mem_w_valid),                         //MEM请求
    .mem_w_ready   (mem_w_ready),
    .mem_w_data    (mem_w_data),
    .mem_w_addr    (mem_w_addr),
    .mem_w_len     (mem_w_len),
    .mem_w_size    (mem_w_size),
    .mem_w_last_i  (mem_w_last),
// axi
    .r_valid_i(r_valid),         //读请�?
    .w_valid_i(w_valid),         //写请�?
	.r_ready_o(r_ready),         //读数据结�?
    .w_ready_o(w_ready),         //写数据结�?
    .data_read_o(axi_r_data),    //数据输出
    .rw_w_data_i(axi_w_data),    //写数�?
    .w_addr_i(axi_w_addr),       //地址
    .r_addr_i(axi_r_addr),       //地址
    .w_size_i(w_size),           //掩码
    .r_size_i(r_size),           //掩码
    .r_len_i(r_len_i),            //突发长度
    .w_len_i(w_len_i),            //突发长度
    .r_last_i(r_last_o),
    .w_last_i(w_last_o)
);

wire          icache_ar_valid;                           //IF请求
wire          icache_ar_ready;
wire   [63:0] icache_ar_data;
wire   [31:0] icache_ar_addr;
wire    [7:0] icache_ar_len;
wire          icache_last_i;
ysyx_22041412_Icache Icache_L1(
    .clk(clock),
    .rst(reset),
//performance counter
    .cache_hit      (Icache_L1_hit),
    .cache_miss     (Icache_L1_miss),

//icache    <---> sram
    .io_sram0_addr(io_sram0_addr),
    .io_sram0_cen(io_sram0_cen),
    .io_sram0_wen(io_sram0_wen),
    .io_sram0_wmask(io_sram0_wmask),
    .io_sram0_wdata(io_sram0_wdata),
    .io_sram0_rdata(io_sram0_rdata),

    .io_sram1_addr(io_sram1_addr),
    .io_sram1_cen(io_sram1_cen),
    .io_sram1_wen(io_sram1_wen),
    .io_sram1_wmask(io_sram1_wmask),
    .io_sram1_wdata(io_sram1_wdata),
    .io_sram1_rdata(io_sram1_rdata),

    .io_sram2_addr(io_sram2_addr),
    .io_sram0_cen(io_sram2_cen),
    .io_sram2_wen(io_sram2_wen),
    .io_sram2_wmask(io_sram2_wmask),
    .io_sram2_wdata(io_sram2_wdata),
    .io_sram2_rdata(io_sram2_rdata),

    .io_sram3_addr(io_sram3_addr),
    .io_sram3_cen(io_sram3_cen),
    .io_sram3_wen(io_sram3_wen),
    .io_sram3_wmask(io_sram3_wmask),
    .io_sram3_wdata(io_sram3_wdata),
    .io_sram3_rdata(io_sram3_rdata),
//cpu       <---> icache
    .cpu_req_addr   (if_ar_addr),
    .cpu_read_imm   (if_ar_data),
    .cpu_ready      (if_ar_ready),
    .cpu_read_vaild (if_read_vaild),

    .fence_i        (if_fence_i),            
    .fence_ready    (if_fence_ready),
//icache    <---> AXI
    .axi_ready_i    (icache_ar_ready),        // 读有效等待接�?
    .axi_valid_o    (icache_ar_valid),        // 发出读请�?            
    .axi_r_last_i   (icache_last_i),          // 传输结束标识
    .axi_r_len_i    (icache_ar_len),
    .axi_r_data_i   (icache_ar_data), 		  // 读数�?
    .axi_r_addr_o  	(icache_ar_addr)	      // 读地址
);
//IF 
wire [31:0]if_imm;
wire [31:0]interrupt_mepc;
wire [PC_WIDTH-1:0]if_pc;
wire if_ready_o;
wire if_fence_i;
wire if_fence_ready;
wire if_interrupt_acpt;//指示本条指令为中断接管取出的
reg if_jr_ready;
reg if_jr_hit;
//快速译码
wire      if_decode_jal;
wire      if_decode_jarl;
wire      if_decode_jump_b;
wire      if_decode_fence_i;




//IFU
ysyx_22041412_if IF_s1 (      //imm
    .clk(clock),
    .rst(reset),
    .pred_miss_count     (IFU_Pred_miss),
    .pred_hit_count      (IFU_Pred_hit),

    .pc            (if_pc[31:0]),
	.imm_data      (if_imm),
//interrupt
    .interrupt_en  (csr_interrupt_accepted), // 触发硬件中断
    .interrupt_pc  (trap_pc),
    .interrupt_accepted(if_interrupt_acpt),//接管中断成功标识
    .interrupt_mepc(interrupt_mepc),

    .mem_dnpc      (mem_dnpc),
    .jarl_rady     (if_jr_ready),
    .jal_pc        (jal_pc[31:0]),
    .jal_ok        (jal_ok),
    .jal_b_hit     (if_jr_hit),
    .fence_i       (if_fence_i),            
    .fence_ready   (if_fence_ready),
    //流水线握手
    .ready_o       (if_ready_o),       //准备好输出数据并更新pc
    .valid_i       (id_vaild_o),

    //快速译码
    .if_decode_jal (if_decode_jal),
    .if_decode_jarl(if_decode_jarl),
    .if_decode_jump_b(if_decode_jump_b),
    .if_decode_fence_i(if_decode_fence_i),

    //if <------->cache
    .ready_i       (if_ar_ready),
    .r_data_i      (if_ar_data),
    .r_addr_o      (if_ar_addr),
    .if_read_vaild (if_read_vaild)
  );


//ID
reg [31:0]id_imm;
reg [PC_WIDTH-1:0]id_pc;
reg      id_decode_jal;
reg      id_decode_jarl;
reg      id_decode_jump_b;
reg      id_decode_fence_i;

wire [1:0]id_imm_V1Type;
wire [1:0]id_imm_V2Type;
wire [63:0]id_imm_data;
wire [2:0]id_func3;
wire id_func7;
wire [4:0]id_Ra,id_Rb,id_Rw;
wire [6:0]id_opcode;
wire [63:0]id_rsA;
wire [63:0]id_rsB;
wire [1:0] id_jump_mode;
wire [1:0] id_mem_mode;
wire [4:0] id_alu_mode;
wire id_mul_en;
wire id_div_en;
wire [1:0]id_rv64_en;
wire id_fence_i;
wire [PC_WIDTH-1:0]jal_pc;
wire       jal_ok;
wire       id_Handle;
reg        id_interrupt_acpt;
wire id_vaild_o;
reg id_ready_o ;
assign id_vaild_o = ex_valid_o;
//**************csr decode*****************//
localparam mstatus = 'h1;
localparam mie     = 'h2;
localparam mtvec   = 'h3;
localparam mepc    = 'h4;
localparam mcause  = 'h5;
localparam mip     = 'h6;

localparam ecall   = 'hb;
localparam mret    = 'hc;
    wire csr_jar_en;
    wire [11:0]csr;
    wire [3:0]id_csr_id;
    wire id_csr_en;
    assign id_csr_en = id_Handle;
    assign csr = id_csr_en ? id_imm_data[11:0]:0;

    assign id_csr_id = (id_csr_en )?(csr==12'h300)?mstatus: //mstatus
                                    (csr==12'h304)?mie:     //mie
                                    (csr==12'h305)?mtvec:   //mtvec
                                    (csr==12'h341)?mepc:    //mepc
                                    (csr==12'h342)?mcause:  //mcause
                                    (csr==12'h344)?mip:     //mip
                                    (csr==12'h000)?ecall:   //ecall
                                    (csr==12'h302)?mret:    //mret
                                    'd0:'d0; 
    assign csr_jar_en= id_csr_en ? (id_csr_id == ecall || id_csr_id == mret ) ? 1'b1 : 1'b0 : 1'b0;


ysyx_22041412_decode ID_decode( //opcode
    .clk(clock),
	.instr(id_imm),
    .pc   (id_pc[31:0]),
    .decode_jal    (id_decode_jal),
    .decode_jarl   (id_decode_jarl),
    .decode_jump_b (id_decode_jump_b),
    .decode_fence_i(id_decode_fence_i),

    //output 
	.opcode(id_opcode),
	.func3(id_func3),
	.func7(id_func7),
	.Rs1(id_Ra),
	.Rs2(id_Rb),
	.Rd(id_Rw),
	.imme(id_imm_data),
    .V1Type(id_imm_V1Type),
    .V2Type(id_imm_V2Type),
    .Alu_Mode(id_alu_mode),

    .Mul_en(id_mul_en),
    .Div_en(id_div_en),
    .RV64_en(id_rv64_en),
    .FENCE_i(id_fence_i),
    .Handle(id_Handle),
    .jal_pc (jal_pc),
    .jal_ok (jal_ok),

    .mem_mode (id_mem_mode),
    .jump_mode(id_jump_mode)
);

always@(posedge clock )begin //IF ID
    if(if_ready_o & id_vaild_o)begin
        id_imm     <= if_imm;
        id_pc      <= if_pc;
        id_ready_o <= 1'b1;
        id_decode_jal    <= if_decode_jal;
        id_decode_jarl   <= if_decode_jarl;
        id_decode_jump_b <= if_decode_jump_b;
        id_decode_fence_i<= if_decode_fence_i;
        id_interrupt_acpt<= if_interrupt_acpt;
    end else if( ~id_vaild_o )begin    //暂停 保持信号
        id_imm     <= id_imm;
        id_pc      <= id_pc;
        id_ready_o <= id_ready_o;
        id_decode_jal    <= id_decode_jal;
        id_decode_jarl   <= id_decode_jarl;
        id_decode_jump_b <= id_decode_jump_b;
        id_decode_fence_i<= id_decode_fence_i;
        id_interrupt_acpt<= id_interrupt_acpt;
    end else if(ex_valid_o) begin//没有新指令? 插入空泡
        id_imm     <= 32'b0;
        id_pc      <= `ysyx_22041412_zero_word;
        id_ready_o <= 1'b1;
        id_decode_jal    <= 1'b0;
        id_decode_jarl   <= 1'b0;
        id_decode_jump_b <= 1'b0;
        id_decode_fence_i<= 1'b0;
        id_interrupt_acpt<= 1'b0;
    end else begin
        id_imm     <= 32'b0;
        id_pc      <= `ysyx_22041412_zero_word;     
        id_ready_o <= 1'b0;
        id_decode_jal    <= 1'b0;
        id_decode_jarl   <= 1'b0;
        id_decode_jump_b <= 1'b0;
        id_decode_fence_i<= 1'b0;
        id_interrupt_acpt<= 1'b0;
    end


end

//EXE
reg [63:0]ex_imm_data;
reg [63:0]ex_v1;
reg [63:0]ex_v2;
reg [63:0]ex_rs2;
reg [4:0]ex_rw;
reg [2:0]ex_func3;
reg ex_func7;
reg [6:0]ex_opcode;
reg [PC_WIDTH-1:0]ex_pc;
reg [1:0] ex_jump_mode;
reg [1:0] ex_mem_mode;
reg [4:0] ex_alu_mode;
reg ex_mul_en;
reg ex_div_en;
reg [1:0]ex_rv64_en;
reg ex_fence_i;

wire [63:0]ex_v1_in;
wire [63:0]ex_v2_in;
wire [63:0]ex_rs2_in;
wire [63:0]ex_res;

wire [63:0]csr_data_o;
wire [63:0]csr_data_i;
reg ex_csr_jar_en;
reg ex_csr_en;
reg ex_interrupt_acpt;
reg [3:0]ex_csr_id;

wire ex_wait;
wire ex_load_wait;
wire alu_ready_o;
wire ex_valid_o = ~ex_wait & alu_ready_o & ((ex_csr_en & csr_ready_o) | ~ex_csr_en ) & mem_valid_o & ~ex_load_wait ;
wire ex_ready_o = alu_ready_o & ((ex_csr_en & csr_ready_o) | ~ex_csr_en );

wire csr_ready_o;
assign csr_data_i = if_interrupt_acpt ? {{32{1'b0}},interrupt_mepc} : ex_v1;
//数据旁路
assign ex_v1_in = (id_imm_V1Type==`ysyx_22041412_v1pc)?id_pc:
                  (id_imm_V1Type==`ysyx_22041412_v1zim)?{{59{1'b0}},id_Ra}:
                      (id_imm_V1Type==0 & (id_Ra == ex_rw) & id_Ra!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      (id_imm_V1Type==0 & (id_Ra != ex_rw) & id_Ra == mem_rw  & id_Ra!=0 & (~mem_ram_en))?mem_res:
                      (id_imm_V1Type==0 & (id_Ra != ex_rw) & id_Ra == mem_rw  & id_Ra!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))?mem_rdata:
                      (id_imm_V1Type==0 & (id_Ra != mem_rw) & id_Ra != ex_rw  & id_Ra == wb_addr & id_Ra!=0 & mem_reg_en==1'b1)?wb_data
                      :id_rsA;
assign ex_v2_in = (id_imm_V2Type==`ysyx_22041412_v2imm)?id_imm_data:
                  //(id_imm_V2Type==`ysyx_22041412_v2csr)?csr_data_o:
                      ex_rs2_in;
assign ex_rs2_in =  (id_Rb == ex_rw & id_Rb!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:           //取当前alu计算的数据   
                      (id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & ~mem_ram_en)?mem_res:         //取之前alu计算的数据
                      (id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))?mem_rdata: //取ram读的数据
                      (id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & id_Rb!=0 & mem_reg_en)?wb_data                 //取准备写入REG的数据
                      :id_rsB;


//需要旁路的数据还没从MEM取出   先stall   
assign ex_wait = ( ((id_Ra != ex_rw & id_Ra == mem_rw) | (id_Rb != ex_rw & id_Rb == mem_rw ))  & mem_rw!=0 & (~sram_ready_o & mem_ram_en & ~mem_rw_type)) 
                    ?1'b1:1'b0;
assign ex_load_wait=  ( (id_Ra == ex_rw | id_Rb == ex_rw) & ex_rw!=0 & ex_opcode==`ysyx_22041412_load )
                     ?1'b1:1'b0;
/*   always @(posedge clock) begin //ex级旁路的DEBUG 模块   临时使用
        if(id_imm_V1Type==0 & id_Ra == ex_rw & ex_rw!=0 & ex_opcode!=`ysyx_22041412_load )       
            $display("id_pc=%8h  ex_v1 = ex_res   -->pc=%16h",id_pc,ex_pc);
        else if(id_imm_V1Type==0 & id_Ra != ex_rw & id_Ra == mem_rw  & mem_rw!=0 & (~mem_ram_en))
            $display("id_pc=%8h  ex_v1 = mem_res  -->pc=%16h %16h",id_pc,mem_pc,mem_res);
        else if(id_imm_V1Type==0 & id_Ra != ex_rw & id_Ra == mem_rw  & mem_rw!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))
            $display("id_pc=%8h  ex_v1 = mem_data -->pc=%16h %16h",id_pc,mem_pc,mem_rdata);
        else if(id_imm_V1Type==0 & id_Ra != ex_rw & id_Ra == mem_rw  & mem_rw!=0 & (~sram_ready_o & mem_ram_en & ~mem_rw_type))
            $display("id_pc=%8h  ex_v1 = mem_data -->pc=%16h %16h ex_wait",id_pc,mem_pc,mem_rdata);
        else if(id_imm_V1Type==0 & id_Ra != mem_rw & id_Ra != ex_rw  & id_Ra == wb_addr & id_Ra!=0 & mem_reg_en)
            $display("id_pc=%8h  ex_v1 = wb_data  -->pc=%16h %16h",id_pc,wb_pc,wb_data);


        if(id_imm_V2Type==0 & id_Rb == ex_rw & ex_rw!=0 & ex_opcode!=`ysyx_22041412_load )       
            $display("id_pc=%8h  ex_v2 = ex_res   -->pc=%8h",id_pc,ex_pc);
        else if(id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & (~mem_ram_en))
            $display("id_pc=%8h  ex_v2 = mem_res  -->pc=%8h ",id_pc,mem_pc);
        else if(id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))
            $display("id_pc=%8h  ex_v2 = mem_data -->pc=%8h ",id_pc,mem_pc);
        else if(id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & (~sram_ready_o & mem_ram_en & ~mem_rw_type))
            $display("id_pc=%8h  ex_v2 = mem_data -->pc=%8h ex_wait",id_pc,mem_pc);
        else if(id_imm_V2Type==0 & id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & wb_addr!=0 & mem_reg_en)
            $display("id_pc=%8h  ex_v2 = wb_data  -->pc=%8h ",id_pc,wb_pc);

        if((id_Ra != ex_rw & id_Ra == mem_rw) | (id_Rb != ex_rw & id_Rb == mem_rw )  & mem_rw!=0 & (~sram_ready_o & mem_ram_en & ~mem_rw_type))
            $display("id_pc=%8h ex_wait mem_load  ex_pc=%8h mem_pc=%8h ",id_pc,ex_pc,wb_pc);
        else if ((id_Ra == ex_rw | id_Rb == ex_rw) & ex_rw!=0 & ex_opcode==`ysyx_22041412_load)
            $display("id_pc=%8h ex_wait ex_load ex_pc=%8h mem_pc=%8h ",id_pc,ex_pc,wb_pc);
        
    end    */
  
wire clint_mtime_en;
wire csr_interrupt_accepted;
wire [31:0]trap_pc;
ysyx_22041412_mcsr csr_reg(
    .clk(clock),
    .rst(reset),
     .en(ex_csr_en),
     .pc(ex_pc),
     .func3(ex_func3),
     .addr(ex_csr_id),
     .data_i(csr_data_i),
     .data_o(csr_data_o),
     .mtvec_o(trap_pc),
    //interrupt
     .interrupt_mtime_en(clint_mtime_en),
     .interrupt_tag_i   (clint_tag_id),
     .interrupt_accept  (csr_interrupt_accepted),
     .interrupt_accepted(if_interrupt_acpt),
     .valid_i(ex_valid_o),
     .ready_o(csr_ready_o)
 );
ysyx_22041412_alu EXE_alu(          //ALU
    .clk(clock),
    .rst(reset),
    .scr1(ex_v1),
    .scr2(ex_v2),
    .imm(ex_imm_data),
    .func3(ex_func3),
    .Mode(ex_alu_mode),
    .mul_en(ex_mul_en),
    .div_en(ex_div_en),
    .rv64_en(ex_rv64_en),

    .valid_i(ex_valid_o),
    .ready_i(id_ready_o),

    .ready_o(alu_ready_o),
    .result(ex_res)
);
always@(posedge clock)begin
    if(id_ready_o & ex_valid_o )begin
        ex_rw      <= id_Rw;
        ex_opcode  <= id_opcode;
        ex_func3   <= id_func3;
        ex_func7   <= id_func7;
        ex_imm_data<= id_imm_data;
        ex_alu_mode<= id_alu_mode;
        ex_pc      <= id_pc;
        ex_v1      <= ex_v1_in;
        ex_v2      <= ex_v2_in;
        ex_rs2     <= ex_rs2_in;

        ex_mul_en  <= id_mul_en;
        ex_div_en  <= id_div_en;
        ex_rv64_en <= id_rv64_en;
        ex_fence_i <= id_fence_i;

        ex_csr_jar_en<= csr_jar_en;
        ex_csr_id    <= id_csr_id;
        ex_csr_en    <= id_csr_en;

        ex_mem_mode  <= id_mem_mode;
        ex_jump_mode <= id_jump_mode;
        ex_interrupt_acpt <= id_interrupt_acpt;
        //if(id_pc!=0)$display("ex load PC:%8h",id_pc);
    end 
    else if(mem_valid_o & ex_ready_o & (ex_wait|ex_load_wait))begin  //ex load 类暂停 当 mem开始执行后，清空这条指令，使旁路指向MEM read_data
        ex_imm_data  <= 0;
        ex_pc        <= 0;
        ex_rw        <= 0;
        ex_opcode    <= 0;
        ex_func3     <= 0;
        ex_mem_mode  <= 0;
        ex_jump_mode <= 0;
        ex_alu_mode  <= 0;
        ex_csr_jar_en<= 0;
        ex_csr_id    <= 0;
        ex_csr_en    <= 0;
        ex_interrupt_acpt <= 0;
        //$display("ex stall PC:%8h",ex_pc);
    end


end
//MEM
reg [4:0]mem_rw;
reg [2:0]mem_func3;
reg mem_rw_type;
reg mem_ram_en;
reg mem_reg_en;
reg [31:0]mem_addr;
reg [63:0]mem_wdata;
reg [PC_WIDTH-1:0]mem_pc;
reg [PC_WIDTH-1:0]mem_dnpc;
reg [63:0]mem_temp;
reg [63:0]mem_res;
reg [1:0] mem_jump_mode;
reg [1:0] mem_mem_mode;
reg mem_fence_i;
reg mem_interrupt_acpt;
wire [63:0]mem_rdata;
wire mem_valid_o;
wire sram_ready_o;
wire[63:0] mem_tip_data_o;
wire       mem_tip_rw;
wire       mem_tip_en;
wire       mem_tip_ready;
wire       mem_tip_addr;
assign mem_valid_o  = (sram_ready_o & mem_ram_en) | (~mem_ram_en) ;

ysyx_22041412_mem u_ysyx_22041412_mem(
    .clk(clock),
    .rst(reset),

    //cache
    .cache_miss  ( Dcache_L1_miss  ),
    .cache_hit   ( Dcache_L1_hit   ),

    .io_sram0_addr(io_sram4_addr),
    .io_sram0_cen(io_sram4_cen),
    .io_sram0_wen(io_sram4_wen),
    .io_sram0_wmask(io_sram4_wmask),
    .io_sram0_wdata(io_sram4_wdata),
    .io_sram0_rdata(io_sram4_rdata),

    .io_sram1_addr(io_sram5_addr),
    .io_sram1_cen(io_sram5_cen),
    .io_sram1_wen(io_sram5_wen),
    .io_sram1_wmask(io_sram5_wmask),
    .io_sram1_wdata(io_sram5_wdata),
    .io_sram1_rdata(io_sram5_rdata),

    .io_sram2_addr(io_sram6_addr),
    .io_sram0_cen(io_sram6_cen),
    .io_sram2_wen(io_sram6_wen),
    .io_sram2_wmask(io_sram6_wmask),
    .io_sram2_wdata(io_sram6_wdata),
    .io_sram2_rdata(io_sram6_rdata),

    .io_sram3_addr(io_sram7_addr),
    .io_sram3_cen(io_sram7_cen),
    .io_sram3_wen(io_sram7_wen),
    .io_sram3_wmask(io_sram7_wmask),
    .io_sram3_wdata(io_sram7_wdata),
    .io_sram3_rdata(io_sram7_rdata),

    .func3       ( mem_func3       ),
    .addr        ( mem_addr        ),
    .wdata       ( mem_wdata       ),
    .wen         ( mem_rw_type     ),     //1 wt 0 read
    .ex_ready_i  ( ex_ready_o      ),
    .mem_valid_i ( mem_ram_en      ),
    .mem_ready_o ( sram_ready_o    ),
    .r_data_o    ( mem_rdata       ),
    .fence_i     ( mem_fence_i     ),

    //tip
    .tip_data_i  (clint_data_r),
    .tip_data_o  (mem_tip_data_o),   
    .tip_rw      (mem_tip_rw),
    .tip_en      (mem_tip_en),
    .tip_ready   (clint_ready),
    .tip_addr_o  (mem_tip_addr),
    //axi
    .r_ready_i   ( mem_r_ready   ),
    .r_valid_o   ( mem_r_valid   ),
    .r_last_i    ( mem_r_last    ),
    .r_data_i    ( mem_r_data    ),
    .r_addr_o    ( mem_r_addr    ),
    .r_len_o     ( mem_r_len     ),

    .w_ready_i   ( mem_w_ready   ),
    .w_last_i    ( mem_w_last    ),
    .w_valid_o   ( mem_w_valid   ),
    .w_size_o    ( mem_w_size    ),
    .w_len_o     ( mem_w_len     ),
    .w_data_o    ( mem_w_data    ),
    .w_addr_o    ( mem_w_addr    )
);
always @(*)begin
    if(ex_jump_mode == `ysyx_22041412_j_B | (ex_csr_jar_en & csr_ready_o) )begin //条件分支  与 ECALL
        mem_dnpc   = (~ex_csr_jar_en & ex_res[0])? (ex_imm_data+ex_pc) : 
                     ex_csr_jar_en ? csr_data_o       :ex_pc+4 ;
        if_jr_ready=1'b1;
        if_jr_hit  = ex_csr_jar_en ? 1'b0 : ex_res[0] ; //1 hit   0 not
    end else if(ex_jump_mode==`ysyx_22041412_j_jalr)begin
        mem_dnpc   = ex_res&(~64'h00000001);
        if_jr_ready=1'b1 ;
        if_jr_hit  =1'b1;
    end else begin
        mem_dnpc   =64'b0;
        if_jr_ready=1'b0 ;
        if_jr_hit  =1'b0;
    end
end


always@(posedge clock)begin           
    if(mem_valid_o & ex_ready_o)begin
        mem_pc        <=ex_pc;
        mem_rw        <=ex_rw;
        mem_func3     <=ex_func3;
        mem_res       <=ex_csr_en?csr_data_o : ex_res;
        mem_jump_mode <=ex_jump_mode;
        mem_mem_mode  <=ex_mem_mode;
        mem_rw_type   <= (ex_mem_mode ==`ysyx_22041412_mem_stor)  ? 1'b1 : 1'b0;
        mem_ram_en    <= (ex_mem_mode == `ysyx_22041412_mem_stor || ex_mem_mode == `ysyx_22041412_mem_load || ex_fence_i) ? 1'b1 :1'b0;
        mem_fence_i   <= ex_fence_i;
        mem_interrupt_acpt <= ex_interrupt_acpt | ex_csr_jar_en;
        if(ex_mem_mode == `ysyx_22041412_mem_stor || ex_mem_mode == `ysyx_22041412_mem_load)begin //mem  dram
            mem_reg_en <=(ex_mem_mode == `ysyx_22041412_mem_load)?1'b1 : 1'b0;
            mem_addr   <=ex_res[31:0];
            mem_wdata  <=(ex_mem_mode ==`ysyx_22041412_mem_stor)?ex_rs2:`ysyx_22041412_zero_word;
        end
        else begin
            mem_reg_en <= (ex_jump_mode == `ysyx_22041412_j_B | ex_csr_jar_en)?1'b0 :1'b1;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
    end else if(sram_ready_o & mem_ram_en & ~ex_ready_o) begin
            mem_rw_type   <=0;
            mem_ram_en    <=0;
            mem_reg_en    <=0;
            mem_pc        <=0;
            mem_rw        <=0;
            mem_func3     <=0;

            mem_res       <=0;
            mem_mem_mode  <=0;
            mem_jump_mode <=0;
    end

end

//WB
reg wb_reg_en;

reg [4:0]wb_addr;
reg [63:0]wb_data;
reg [PC_WIDTH-1:0]wb_pc;
reg wb_interrupt_acpt;
always@(posedge clock)begin          
    if((sram_ready_o & mem_ram_en) | (~mem_ram_en))begin
        wb_pc         <=mem_pc;
        wb_reg_en     <=mem_reg_en;
        wb_interrupt_acpt <= mem_interrupt_acpt | mem_tip_en;
        //  if( mem_reg_en & mem_rw==0 & mem_pc!=0)begin    // 如果因为这个diff出错 没有指令 但有PC的话 �? 那就是取值模块有问题
        //     $display("WB  GET PC  NOT IMM");
        // end  

        if(mem_jump_mode == `ysyx_22041412_j_jal | mem_jump_mode==`ysyx_22041412_j_jalr)begin
            wb_data<= mem_pc+4;
            wb_addr<= mem_rw;
        end
        else if(mem_mem_mode == `ysyx_22041412_mem_load)begin
            wb_addr<= mem_rw;
            wb_data<= mem_rdata;
        end    
        else begin
            wb_addr<= mem_reg_en ? mem_rw : 5'b00000;
            wb_data<= mem_res;   

        end 

    end else begin
        wb_pc      <= 0;
        wb_reg_en  <= 0;
        wb_addr    <= 0;
        wb_data    <= 0;   

    end

end



ysyx_22041412_dff M_reg (        //32*64bitREG
    .clk(clock),
    .rst(reset),
    .Ra(id_Ra),
    .Rb(id_Rb),  
    .Rw(wb_addr),
    .Wen(wb_reg_en),
    .BusA(id_rsA),
    .BusB(id_rsB),
    .BusW(wb_data)

);
wire       clint_tag_id;//clint发生的中断标记
wire [63:0]clint_data_r;
wire [63:0]clint_data_w = mem_tip_data_o;
wire [1:0] clint_rw_mode = { mem_tip_rw, mem_tip_addr};
wire       clint_addr    = mem_tip_addr;
wire       clint_rw_en   = mem_tip_en;
wire       clint_ready;
ysyx_22041412_clint clint(
    .clk(clock),
    .rst(reset),
    .mtime_en       (clint_mtime_en),

    .rw_mode        (clint_rw_mode),
    .rw_en          (clint_rw_en),
    .clint_ready    (clint_ready),
    .data_w         (clint_data_w),
    .data_r         (clint_data_r),

    .clint_tag_id   (clint_tag_id)//当前发生的中断序号 暂时只有mtime中断
);

endmodule
