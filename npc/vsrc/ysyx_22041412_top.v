`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_top(
    input wire clk,
    input wire rst,
    //EXE
    output wire [63:0]pip_pc,
    output wire [63:0]pip_dnpc,
    output wire [63:0]pip_mem_pc,
    output Ebreak,

    //performance counter
    output [63:0]       Icache_L1_miss,
    output [63:0]       Icache_L1_hit,
    output [63:0]       Dcache_L1_miss,
    output [63:0]       Dcache_L1_hit,

    // Advanced eXtensible Interface    AXI4总线接口
// 写地址通道
    input                               io_master_awready,
    output                              io_master_awvalid,
    output [AXI_ADDR_WIDTH-1:0]         io_master_awaddr,
    output [2:0]                        io_master_awprot,
    output [AXI_ID_WIDTH-1:0]           io_master_awid,
    output [AXI_USER_WIDTH-1:0]         io_master_awuser,
    output [7:0]                        io_master_awlen,
    output [2:0]                        io_master_awsize,
    output [1:0]                        io_master_awburst,
    output                              io_master_awlock,
    output [3:0]                        io_master_awcache,
    output [3:0]                        io_master_awqos,
    output [3:0]                        io_master_awregion,

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
    output [2:0]                        io_master_arprot,
    output [AXI_ID_WIDTH-1:0]           io_master_arid,
    output [AXI_USER_WIDTH-1:0]         io_master_aruser,
    output [7:0]                        io_master_arlen,
    output [2:0]                        io_master_arsize,
    output [1:0]                        io_master_arburst,
    output                              io_master_arlock,
    output [3:0]                        io_master_arcache,
    output [3:0]                        io_master_arqos,
    output [3:0]                        io_master_arregion,

// 读数据通道
    output                              io_master_rready,
    input                               io_master_rvalid,
    input  [1:0]                        io_master_rresp,
    input  [AXI_DATA_WIDTH-1:0]         io_master_rdata,
    input                               io_master_rlast,
    input  [AXI_ID_WIDTH-1:0]           io_master_rid,
    input  [AXI_USER_WIDTH-1:0]         io_master_ruser,



    input                               io_slave_awready,
    output                              io_slave_awvalid,
    output [31:0]                       io_slave_awaddr,
    output [3:0]                        io_slave_awid,
    output [7:0]                        io_slave_awlen,
    output [2:0]                        io_slave_awsize,
    output [1:0]                        io_slave_awburst,
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
    output [1:0]                        io_slave_arburst,
    output                              io_slave_rready,
    input                               io_slave_rvalid,
    input  [1:0]                        io_slave_rresp,
    input  [63:0]                       io_slave_rdata,
    input                               io_slave_rlast,
    input  [3:0]                        io_slave_rid
);
    parameter AXI_DATA_WIDTH    = 64;
    parameter AXI_ADDR_WIDTH    = 32;
    parameter AXI_ID_WIDTH      = 4;
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8;
    parameter AXI_USER_WIDTH    = 1;
    parameter PC_WIDTH          = 64;
assign pip_mem_pc = mem_pc;
assign Ebreak=(id_imm=='b000100000000000001110011)?1:0;

//axi
wire         r_valid;  // 请求有效
wire         r_ready;  // 访存完成
wire         w_valid;  // 请求有效
wire         w_ready;  // 访存完成

wire [AXI_DATA_WIDTH-1:0] axi_r_data; // 读数�?
wire [AXI_DATA_WIDTH-1:0] axi_w_data; // 写数�?
wire [AXI_ADDR_WIDTH-1:0] axi_r_addr; // 读地址
wire [AXI_ADDR_WIDTH-1:0] axi_w_addr; // 写地址


wire  [7:0] r_strb;   // 字节掩码
wire  [7:0] w_strb;   // 字节掩码
wire  [7:0] r_len_i;
wire  [7:0] w_len_i;
wire        r_last_o;
wire        w_last_o;

ysyx_22041412_axi axi4(
    .clk(clk),
    .rst(rst),

    .r_valid_i(r_valid),         //读请�?
    .w_valid_i(w_valid),         //写请�?
	.r_ready_o(r_ready),         //读数据结�?
    .w_ready_o(w_ready),         //写数据结�?
    .data_read_o(axi_r_data),    //数据输出
    .rw_w_data_i(axi_w_data),    //写数�?
    .w_addr_i(axi_w_addr),       //地址
    .r_addr_i(axi_r_addr),       //地址
    .w_size_i(w_strb),           //掩码
    .r_size_i(r_strb),           //掩码
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
    .axi_aw_user_o(io_master_awuser),   // 用户定义信号
    .axi_aw_len_o(io_master_awlen),    // 突发长度
    .axi_aw_size_o(io_master_awsize),   // 突发大小
    .axi_aw_burst_o(io_master_awburst),  // 突发类型
    .axi_aw_lock_o(io_master_awlock),   // 原子锁类�?
    .axi_aw_cache_o(io_master_awcache),  // 存储器类�?
    .axi_aw_qos_o(io_master_awqos),    // 服务质量
    .axi_aw_region_o(io_master_awregion), // 区域标识�?

    // 写数据通道
    .axi_w_ready_i(io_master_wready), // 从设备已准备好接收数据和字节选通信�?
    .axi_w_valid_o(io_master_wvalid), // 主设备给出的数据和字节选通信号有�?
    .axi_w_data_o(io_master_wdata),  // 写出的数�?
    .axi_w_strb_o(io_master_wstrb),  // 数据的字节选通信�?
    .axi_w_last_o(io_master_wlast),  // 标识是否是最后一次突发传�?
    .axi_w_user_o(io_master_wuser),  // 用户定义信号

    // 写响应通道
    .axi_b_ready_o(io_master_bready), // 主设备已准备好接收写响应信号
    .axi_b_valid_i(io_master_bvalid), // 从设备给出的写响应信号有�?
    .axi_b_resp_i(io_master_bresp),  // 写传输的状�?
    .axi_b_id_i(io_master_bid),    // 写响应ID
    .axi_b_user_i(io_master_buser),  // 用户定义信号

    // 读地址通道
    .axi_ar_ready_i(io_master_arready),  // 从设备已经准备好接收地址和相关信�?
    .axi_ar_valid_o(io_master_arvalid),  // 主设备给出的地址和相关信息有�?
    .axi_ar_addr_o(io_master_araddr),   // 读地址
    .axi_ar_prot_o(io_master_arprot),   // 保护类型
    .axi_ar_id_o(io_master_arid),     // 读地址ID
    .axi_ar_user_o(io_master_aruser),   // 用户定义信号
    .axi_ar_len_o(io_master_arlen),    // 突发长度
    .axi_ar_size_o(io_master_arsize),   // 突发大小（每次突发传输的大小�?
    .axi_ar_burst_o(io_master_arburst),  // 突发类型
    .axi_ar_lock_o(io_master_arlock),   // 原子锁类�?
    .axi_ar_cache_o(io_master_arcache),  // 存储器类�?
    .axi_ar_qos_o(io_master_arqos),    // 服务质量
    .axi_ar_region_o(io_master_arregion), // 区域标识�?

    // 读数据通道
    .axi_r_ready_o(io_master_rready), // 主设备已经准备好接收读取的数据和响应信息
    .axi_r_valid_i(io_master_rvalid), // 从设备给出的数据和响应信息有�?
    .axi_r_resp_i(io_master_rresp),  // 读传输的状�?
    .axi_r_data_i(io_master_rdata),  // 读出的数�?
    .axi_r_last_i(io_master_rlast),  // 标识是否是最后一次突发传�?
    .axi_r_id_i(io_master_rid),    // 读数据ID
    .axi_r_user_i(io_master_ruser)   // 用户定义信号
);
wire          if_ar_valid;                           //IF请求
wire          if_ar_ready;
wire   [127:0]if_ar_data;
wire   [31:0] if_ar_addr;

wire          mem_rw_valid;                           //MEM请求
wire          mem_rw_ready;
wire          mem_rw_wen;
wire   [63:0] mem_rw_r_data;
wire   [63:0] mem_rw_w_data;
wire   [31:0] mem_rw_addr;
wire    [7:0] mem_rw_len;
wire    [7:0] mem_rw_size;

ysyx_22041412_axi_Arbiter axi_Arbiter(
    .clk(clk),
    .rst(rst),
// if   
    .if_ar_valid(icache_ar_valid),                           //IF请求
    .if_ar_ready(icache_ar_ready),
    .if_ar_data (icache_ar_data),
    .if_ar_addr (icache_ar_addr),
    .if_ar_len  (icache_ar_len),
    .if_last_i  (icache_last_i),
// mem
    .mem_rw_valid   (mem_rw_valid),                         //MEM请求
    .mem_rw_ready   (mem_rw_ready),
    .mem_rw_wen     (mem_rw_wen),
    .mem_rw_r_data  (mem_rw_r_data),
    .mem_rw_w_data  (mem_rw_w_data),
    .mem_rw_addr    (mem_rw_addr),
    .mem_rw_len     (mem_rw_len),
    .mem_rw_size    (mem_rw_size),
    .mem_last_i     (),
// axi
    .r_valid_i(r_valid),         //读请�?
    .w_valid_i(w_valid),         //写请�?
	.r_ready_o(r_ready),         //读数据结�?
    .w_ready_o(w_ready),         //写数据结�?
    .data_read_o(axi_r_data),    //数据输出
    .rw_w_data_i(axi_w_data),    //写数�?
    .w_addr_i(axi_w_addr),       //地址
    .r_addr_i(axi_r_addr),       //地址
    .w_size_i(w_strb),           //掩码
    .r_size_i(r_strb),           //掩码
    .r_len_i(r_len_i),            //突发长度
    .w_len_i(w_len_i),            //突发长度
    .r_last_i(r_last_o),
    .w_last_i(w_last_o)
);


//DIFF-TEST
assign pip_pc  = wb_pc;
assign pip_dnpc= wb_dnpc;
//

wire          icache_ar_valid;                           //IF请求
wire          icache_ar_ready;
wire   [63:0] icache_ar_data;
wire   [31:0] icache_ar_addr;
wire    [7:0] icache_ar_len;
wire          icache_last_i;
ysyx_22041412_Icache Icache_L1(
    .clk(clk),
    .rst(rst),
//performance counter
    .cache_hit      (Icache_L1_hit),
    .cache_miss     (Icache_L1_miss),

//cpu       <---> icache
    .cpu_req_addr   (if_ar_addr),
    .cpu_valid      (if_ar_valid),
    .cpu_read_data  (if_ar_data),
    .cpu_ready      (if_ar_ready),
//icache    <---> AXI
    .axi_ready_i    (icache_ar_ready),        // 读有效等待接�?
    .axi_valid_o    (icache_ar_valid),        // 发出读请�?            
    .axi_r_last_i   (icache_last_i),          //传输结束标识
    .axi_r_len_i    (icache_ar_len),
    .axi_r_data_i   (icache_ar_data), 		  // 读数�?
    .axi_r_addr_o  	(icache_ar_addr)	      // 读地址
);
//IF 
wire [31:0]if_imm;

wire [PC_WIDTH-1:0]if_pc;
wire if_ready_o;

reg if_jr_ready;

ysyx_22041412_if IF_s1 (      //imm
    .clk(clk),
    .rst(rst),
    .pc(if_pc),
    .mem_dnpc(mem_dnpc),
	.imm_data(if_imm),
    .jarl_rady(if_jr_ready),


    //流水线握手信�?
    .ready_o(if_ready_o),       //准备好输出数据并更新pc�?
    .valid_i(id_vaild_o),

    //if <------->cache
    .ready_i(if_ar_ready),
    .valid_o(if_ar_valid),
    .r_data_i(if_ar_data),
    .r_addr_o(if_ar_addr)

  );


//ID
reg [31:0]id_imm;
reg [PC_WIDTH-1:0]id_pc;

wire [1:0]id_imm_V1Type;
wire [1:0]id_imm_V2Type;
wire id_mul_en;
wire [63:0]id_imm_data;
wire [2:0]id_func3;
wire id_func7;
wire [4:0]id_Ra,id_Rb,id_Rw;
wire [6:0]id_opcode;
wire [63:0]id_rsA;
wire [63:0]id_rsB;

wire id_vaild_o;
reg id_ready_o ;
assign id_vaild_o = ex_valid_o;
    wire csr_jar_en;
    wire [11:0]csr;
    wire [2:0]id_csr_id;
    wire id_csr_en;
    assign csr_jar_en=(id_csr_en&(id_csr_id==0 | id_csr_id==1))?1:0;
    assign csr =id_csr_en?id_imm_data[11:0]:0;
    assign id_csr_id=(csr==12'h000)?3'd1:   //ecall
                (csr==12'h302)?3'd0:   //mret
                (csr==12'h300)?3'd2:   //mstatus
                (csr==12'h305)?3'd3:   //mtvec
                (csr==12'h341)?3'd4:   //mepc
                (csr==12'h342)?3'd5:   //mcause
                0; 
    assign id_csr_en =  (id_opcode==`ysyx_22041412_Environment)?1:0;


ysyx_22041412_decode ID_decode( //opcode
	.instr(id_imm),
	.opcode(id_opcode),
	.func3(id_func3),
	.func7(id_func7),
	.Rs1(id_Ra),
	.Rs2(id_Rb),
	.Rd(id_Rw),
	.imme(id_imm_data),
    .V1Type(id_imm_V1Type),
    .V2Type(id_imm_V2Type),
    .Mul_en(id_mul_en)
);

always@(posedge clk )begin //IF ID
    if(if_ready_o & id_vaild_o)begin
        id_imm     <= if_imm;
        id_pc      <= if_pc;
        id_ready_o <= 1'b1;
    end else if( ~id_vaild_o )begin    //暂停 保持信号
        id_imm     <= id_imm;
        id_pc      <= id_pc;
        id_ready_o <= id_ready_o; 
    end else if(ex_valid_o) begin//没有新指�? 插入空泡
        id_imm     <= 32'b0;
        id_pc      <= `ysyx_22041412_zero_word;
        id_ready_o <= 1'b1;
    end 


end

//EXE
reg [1:0]ex_imm_V1Type;
reg [1:0]ex_imm_V2Type;
reg [63:0]ex_imm_data;
reg ex_mul_en;
reg [63:0]ex_v1;
reg [63:0]ex_v2;
reg [63:0]ex_rs2;
reg [4:0]ex_rw;
reg [4:0]ex_Ra,ex_Rb;
reg [2:0]ex_func3;
reg ex_func7;
reg [6:0]ex_opcode;
reg [PC_WIDTH-1:0]ex_pc;
wire [63:0]ex_v1_in;
wire [63:0]ex_v2_in;
wire [63:0]ex_rs2_in;
wire [63:0]ex_res;

wire [63:0]csr_data_o;
wire [63:0]csr_data_i;
reg ex_csr_jar_en;
reg ex_csr_en;
reg [2:0]ex_csr_id;

wire ex_wait;
wire ex_load_wait;
wire ex_mem_load_wait;
wire alu_ready_o;
wire ex_valid_o = ~ex_wait & alu_ready_o & ((ex_csr_en & csr_ready_o) | ~ex_csr_en ) & mem_valid_o ;
wire ex_ready_o = alu_ready_o & ((ex_csr_en & csr_ready_o) | ~ex_csr_en );

wire csr_ready_o;
assign csr_data_i = ex_v1;
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
                      (id_imm_V2Type==0 & id_Rb == ex_rw & id_Rb!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      (id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & (~mem_ram_en))?mem_res:
                      (id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))?mem_rdata:
                      (id_imm_V2Type==0 & id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & id_Rb!=0 & mem_reg_en)?wb_data
                      :id_rsB;
assign ex_rs2_in =  (id_Rb == ex_rw & id_Rb!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      (id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & ~mem_ram_en)?mem_res:
                      (id_Rb != ex_rw & id_Rb == mem_rw  & id_Rb!=0 & (sram_ready_o & mem_ram_en & ~mem_rw_type))?mem_rdata:
                      (id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & id_Rb!=0 & mem_reg_en)?wb_data
                      :id_rsB;


//需要旁路的数据还没算出�? 先暂�?    都和先写再读有关
assign ex_wait = ( (id_Ra != ex_rw & id_Ra == mem_rw) | (id_Rb != ex_rw & id_Rb == mem_rw )  & mem_rw!=0 & (~sram_ready_o & mem_ram_en & ~mem_rw_type)) 
                    // || ( (id_Ra == ex_rw | id_Rb == ex_rw) & ex_rw!=0 & (ex_opcode==`ysyx_22041412_load &  (~sram_ready_o & mem_ram_en & ~mem_rw_type)))
                    ?1'b1:1'b0;
assign ex_load_wait=(id_Ra == ex_rw | id_Rb == ex_rw) & ex_rw!=0 & (ex_opcode==`ysyx_22041412_load &  (~sram_ready_o & mem_ram_en & ~mem_rw_type))
                    ?1'b1:1'b0;
/*        always @(posedge clk) begin //ex级旁路的DEBUG 模块   临时使用
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
        else if ((id_Ra == ex_rw | id_Rb == ex_rw) & ex_rw!=0 & (ex_opcode==`ysyx_22041412_load &  (~sram_ready_o & mem_ram_en & ~mem_rw_type)))
            $display("id_pc=%8h ex_wait ex_load ex_pc=%8h mem_pc=%8h ",id_pc,ex_pc,wb_pc);
        


    end   
 */

ysyx_22041412_mcsr csr_reg(
     .clk(clk),
     .rst(rst),
     .en(ex_csr_en),
     .pc(ex_pc),
     .func3(ex_func3),
     .addr(ex_csr_id),
     .data_i(csr_data_i),
     .data_o(csr_data_o),
     .ready_o(csr_ready_o)
 );
ysyx_22041412_alu EXE_alu(          //ALU
    .clk(clk),
    .scr1(ex_v1),
    .scr2(ex_v2),
    .imm(ex_imm_data),
    .func3(ex_func3),
    .func7(ex_func7),
    .opcode(ex_opcode),
    .mul_en(ex_mul_en),

    .valid_i(ex_valid_o),
    .ready_i(id_ready_o),

    .ready_o(alu_ready_o),
    .result(ex_res)
);
always@(posedge clk)begin
    if(id_ready_o & ex_valid_o )begin
        ex_rw      <= id_Rw;
        ex_opcode  <= id_opcode;
        ex_func3   <= id_func3;
        ex_func7   <= id_func7;
        ex_imm_data<= id_imm_data;

        ex_pc      <= id_pc;
        ex_mul_en  <= id_mul_en;
        ex_v1      <= ex_v1_in;
        ex_v2      <= ex_v2_in;
        ex_rs2     <= ex_rs2_in;

        ex_Ra      <= id_Ra;
        ex_Rb      <= id_Rb;

        ex_imm_V1Type<= id_imm_V1Type;
        ex_imm_V2Type<= id_imm_V2Type;
        ex_csr_jar_en<=csr_jar_en;

        ex_csr_id  <=id_csr_id;
        ex_csr_en  <=id_csr_en;
        //if(id_pc!=0)$display("ex load PC:%8h",id_pc);
    end else if(mem_valid_o & ex_ready_o & ex_wait & ~ex_load_wait)begin
        ex_imm_data<= 0;
        ex_pc      <= 0;
        ex_rw      <= 0;
        ex_opcode  <= 0;
        ex_func3   <= 0;
        ex_Ra      <= 0;
        ex_Rb      <= 0;

        //$display("ex stall PC:%8h",ex_pc);
    end


end
//MEM
reg [4:0]mem_rw;
reg [6:0]mem_opcode;
reg [2:0]mem_func3;
reg mem_rw_type;
reg mem_ram_en;
reg mem_reg_en;
reg [31:0]mem_addr;
reg [63:0]mem_wdata;
reg [PC_WIDTH-1:0]mem_pc;
reg [PC_WIDTH-1:0]mem_dnpc;
reg [63:0]mem_imm_data;
reg [63:0]mem_temp;
reg [63:0]mem_res;

wire [63:0]mem_rdata;

wire mem_valid_o;
wire sram_ready_o;

assign mem_valid_o  = (sram_ready_o & mem_ram_en) | (~mem_ram_en);


ysyx_22041412_dram MEM_dram(        //SRAM
    .clk            (clk),
    .rst            (rst),

    .func3          (mem_func3),
    .addr           (mem_addr),
    .wdata          (mem_wdata),
    .r_data_o       (mem_rdata),

    .ex_ready_i     (ex_ready_o),
    .mem_valid_i    (mem_ram_en),
    .mem_ready_o    (sram_ready_o),
    .wen            (mem_rw_type),           //1 wt  0 read

    //mem <---> dcache
    .dcache_ready_i (mem_rw_ready),          // 读有效等待接�?
    .dcache_valid_o (mem_rw_valid),          // 发出读请�?
       
    .rw_wen         (mem_rw_wen),
    .wmask          (mem_rw_size),
    .w_data_o       (mem_rw_w_data),         // 写数�?
    .w_addr_o       (mem_rw_addr),           // 写地址
    .r_data_i       (mem_rw_r_data),         // 读数�?
    .r_addr_o       (mem_rw_addr)            // 读地址
);
always@(posedge clk)begin           
    if(mem_valid_o & ex_ready_o)begin
        mem_pc <=ex_pc;
        mem_rw <=ex_rw;
        mem_func3     <=ex_func3;
        mem_imm_data  <=ex_imm_data;
        mem_opcode    <=ex_opcode;
        mem_res       <=(ex_opcode == `ysyx_22041412_Environment)?csr_data_o : ex_res;
   
        
        if(ex_opcode == `ysyx_22041412_store)begin //w mem
            if_jr_ready<=0;
            mem_rw_type<=1;
            mem_ram_en <=1;
            mem_reg_en <=0;
            mem_addr   <=ex_res[31:0];
            mem_wdata  <=ex_rs2;
        end
        else if(ex_opcode == `ysyx_22041412_load)begin  //r mem 
            if_jr_ready<=0;
            mem_rw_type<=0;
            mem_ram_en <=1;
            mem_reg_en <=1;
            mem_addr   <=ex_res[31:0];
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
        else if(ex_opcode == `ysyx_22041412_B_type & ex_res[0]==1 )begin 
            mem_dnpc   <= ex_imm_data+ex_pc;
            if_jr_ready<=1'b1;
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end    
        else if (ex_opcode== `ysyx_22041412_B_type & ex_res[0]==0 )begin
            mem_dnpc   <=ex_pc+4;
            if_jr_ready<=1'b1;
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end   
        else if(ex_opcode == `ysyx_22041412_jal | ex_opcode==`ysyx_22041412_jalr)begin
            mem_dnpc   <= ex_res;
            if_jr_ready<=1'b1;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_reg_en <=1;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
        else if(ex_opcode == `ysyx_22041412_Environment & ex_csr_jar_en)begin
            mem_dnpc   <= csr_data_o;
            if_jr_ready<=1'b1;
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word; 
        end
        else begin
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_reg_en <=1;
            if_jr_ready<=0;
            mem_addr   <=32'b0;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
    end

end

//WB
reg wb_reg_en;

reg [4:0]wb_addr;
reg [63:0]wb_imm_data;
reg [63:0]wb_data;
reg [PC_WIDTH-1:0]wb_pc;
reg [63:0]wb_dnpc;
reg [6:0]wb_opcode;

always@(posedge clk)begin           
    if((sram_ready_o & mem_ram_en) | (~mem_ram_en))begin
        wb_pc<=mem_pc;
        wb_reg_en<=mem_reg_en;
        wb_opcode<=mem_opcode;
        wb_imm_data<=mem_imm_data;
        if(mem_opcode == 0)begin    // 如果因为这个diff出错 没有指令 但有PC的话 �? 那就是取值模块有问题
            wb_data<=`ysyx_22041412_zero_word;
            wb_dnpc<=`ysyx_22041412_zero_word;
            wb_addr<= 0;
        end
        else if(mem_opcode == `ysyx_22041412_jal | mem_opcode==`ysyx_22041412_jalr)begin
            wb_data<= mem_pc+4;
            wb_addr<= mem_rw;
            wb_dnpc<= mem_pc;
        end
        else if(mem_opcode == `ysyx_22041412_load)begin
            wb_addr<= mem_rw;
            wb_data<= mem_rdata;
            wb_dnpc<= mem_pc;
        end
        else if(!mem_reg_en)begin
            wb_addr<= 5'b0;
            wb_data<= `ysyx_22041412_zero_word;
            wb_dnpc<= mem_pc;
        end    
        else begin
            wb_addr<= mem_rw;
            wb_data<= mem_res;   
            wb_dnpc<= mem_pc;
        end 
    end

end



ysyx_22041412_dff M_reg (        //32*64bitREG
    .clk(clk),
    .rst(rst),
    .Ra(id_Ra),
    .Rb(id_Rb),  
    .Rw(wb_addr),
    .Wen(wb_reg_en),
    .BusA(id_rsA),
    .BusB(id_rsB),
    .BusW(wb_data)

);




    

endmodule