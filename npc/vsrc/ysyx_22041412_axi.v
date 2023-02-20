
`include "vsrc/ysyx_22041412_define.v"

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

`define IDLE         2'b00      //AXI空闲

`define AWREADY      2'b01      
`define WREADY       2'b10      
`define BVALID       2'b11

`define ARREADY      2'b01      
`define RVALID       2'b10



module ysyx_22041412_axi # (
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clk,
    input                               rst,

    //Interface with CPU
    input                               r_valid_i,          //读请求
    input                               w_valid_i,          //写请求
	  output reg                          r_ready_o,          //读数据结束
    output reg                          w_ready_o,          //写数据结束
    output reg [AXI_DATA_WIDTH-1:0]     data_read_o,        //数据输出
    input  [AXI_DATA_WIDTH-1:0]         rw_w_data_i,        //写数据
    input  [AXI_ADDR_WIDTH-1:0]         w_addr_i,           //地址
    input  [AXI_ADDR_WIDTH-1:0]         r_addr_i,           //地址
    input  [7:0]                        w_size_i,           //掩码
    input  [7:0]                        r_size_i,           //掩码
    input  [7:0]                        r_len_i,            //突发长度
    input  [7:0]                        w_len_i,            //突发长度
 
    // Advanced eXtensible Interface    AXI4总线接口
    // 写地址通道
    input                               axi_aw_ready_i,  // 从设备已准备好接收地址和相关的控制信号
    output                              axi_aw_valid_o,  // 主设备给出的地址和相关的控制信号有效
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,   // 写地址
    output [2:0]                        axi_aw_prot_o,   // 保护类型
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,     // 写地址ID
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,   // 用户定义信号
    output [7:0]                        axi_aw_len_o,    // 突发长度
    output [2:0]                        axi_aw_size_o,   // 突发大小
    output [1:0]                        axi_aw_burst_o,  // 突发类型
    output                              axi_aw_lock_o,   // 原子锁类型
    output [3:0]                        axi_aw_cache_o,  // 存储器类型
    output [3:0]                        axi_aw_qos_o,    // 服务质量
    output [3:0]                        axi_aw_region_o, // 区域标识符

    // 写数据通道
    input                               axi_w_ready_i, // 从设备已准备好接收数据和字节选通信号
    output                              axi_w_valid_o, // 主设备给出的数据和字节选通信号有效
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,  // 写出的数据
    output [AXI_STRB_WIDTH-1:0]         axi_w_strb_o,  // 数据的字节选通信号
    output                              axi_w_last_o,  // 标识是否是最后一次突发传输
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,  // 用户定义信号

    // 写响应通道
    output                              axi_b_ready_o, // 主设备已准备好接收写响应信号
    input                               axi_b_valid_i, // 从设备给出的写响应信号有效
    input  [1:0]                        axi_b_resp_i,  // 写传输的状态
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,    // 写响应ID
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,  // 用户定义信号

    // 读地址通道
    input                               axi_ar_ready_i,  // 从设备已经准备好接收地址和相关信息
    output                              axi_ar_valid_o,  // 主设备给出的地址和相关信息有效
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,   // 读地址
    output [2:0]                        axi_ar_prot_o,   // 保护类型
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,     // 读地址ID
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,   // 用户定义信号
    output [7:0]                        axi_ar_len_o,    // 突发长度
    output [2:0]                        axi_ar_size_o,   // 突发大小（每次突发传输的大小）
    output [1:0]                        axi_ar_burst_o,  // 突发类型
    output                              axi_ar_lock_o,   // 原子锁类型
    output [3:0]                        axi_ar_cache_o,  // 存储器类型
    output [3:0]                        axi_ar_qos_o,    // 服务质量
    output [3:0]                        axi_ar_region_o, // 区域标识符

    // 读数据通道
    output                              axi_r_ready_o, // 主设备已经准备好接收读取的数据和响应信息
    input                               axi_r_valid_i, // 从设备给出的数据和响应信息有效
    input  [1:0]                        axi_r_resp_i,  // 读传输的状态
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,  // 读出的数据
    input                               axi_r_last_i,  // 标识是否是最后一次突发传输
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,    // 读数据ID
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i   // 用户定义信号
);
    

    // ------------------State Machine------------------TODO
    
    // 写通道状态切换
    
    reg[1:0] aw_state;
    reg[1:0] aw_next_state;

    always@(posedge clk)begin
      if(rst == `ysyx_22041412_RstEnable)begin
        aw_state <= `IDLE;
      end else begin
        aw_state <= aw_next_state;
      end
    end

    always@(*)begin
      if(rst == `ysyx_22041412_RstEnable )begin
        aw_next_state = `IDLE;
      end 
      else begin
        case(aw_state)
          `IDLE: begin
          if(w_valid_i == `ysyx_22041412_True)begin
              aw_next_state = `AWREADY;
            end else begin
              aw_next_state = `IDLE;
            end
          end
          `AWREADY:  begin
            if(axi_aw_ready_i == `ysyx_22041412_True)begin
                aw_next_state = `WREADY;
              end else begin
                aw_next_state = `AWREADY;
              end
            end
          `WREADY:   begin
            if(axi_w_ready_i == `ysyx_22041412_True)begin
                aw_next_state = `BVALID; 
              end else begin
                aw_next_state = `WREADY;
              end
            end
          `BVALID:   begin
            if(w_ready_o == `ysyx_22041412_True)begin    
                aw_next_state = `IDLE; 
              end else begin
                aw_next_state = `BVALID; 
              end
            end
          default: aw_next_state = `IDLE;
          endcase
        end
    end

    // 读通道状态切换
    reg[1:0] ar_state;
    reg[1:0] ar_next_state;

    always@(posedge clk)begin
      if(rst == `ysyx_22041412_RstEnable)begin
        ar_state <= `IDLE;
      end else begin
        ar_state <= ar_next_state;
      end
    end
    
    //next state
    always@(*)begin
      if(rst == `ysyx_22041412_RstEnable)begin
        ar_next_state = `IDLE;
      end else begin
        case(ar_state)
        `IDLE: begin
          if(r_valid_i == `ysyx_22041412_True)begin
            ar_next_state = `ARREADY;
          end else begin
            ar_next_state = `IDLE;
          end
        end
        `ARREADY:  begin
          if(axi_ar_ready_i == `ysyx_22041412_True)begin
            ar_next_state = `RVALID;
          end else begin
            ar_next_state = `ARREADY;
          end
        end
        `RVALID:   begin
          if(axi_r_valid_i == `ysyx_22041412_False && axi_r_ready_o == `ysyx_22041412_False && r_ready_o == `ysyx_22041412_True)begin
            ar_next_state = `IDLE;
          end else begin
            ar_next_state = `RVALID;
            end
          end
        default: ar_next_state = `IDLE;
        endcase
      end
    end
    // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      =  8'b0 ;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = 0;
    assign axi_aw_addr_o    = 0;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = 0;
    assign axi_aw_size_o    = 0;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // 写数据通道
    //assign axi_w_valid_o    = w_state_write;
    //assign axi_w_data_o     = rw_w_data_i ;
    //assign axi_w_strb_o     = rw_size_i;
    //assign axi_w_last_o     = 1'b0;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    //assign axi_b_ready_o    = w_state_resp;



    // ------------------Read Transaction------------------

    // Read address channel signals
    //assign axi_ar_valid_o   = r_state_addr;
    //assign axi_ar_addr_o    = rw_addr_i;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    //assign axi_ar_len_o     = axi_len;                                                                          
    //assign axi_ar_size_o    = axi_size;
    //assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    //assign axi_r_ready_o    = r_state_read;
    always@(posedge clk)begin  
        if(rst == `ysyx_22041412_RstEnable )begin
            //Interface with AXI Adress Write Chanal
            axi_ar_len_o    <=  r_len_i;//uncertain
            axi_ar_size_o   <=  'b0;
            axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
            axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
            axi_ar_valid_o  <=  `ysyx_22041412_False;
            axi_ar_addr_o   <=  'b0;
            //Interface with AXI Date  Write Chanal
           // axi_r_strb_o    <=  r_size_i;
            axi_r_ready_o   <=  `ysyx_22041412_False;
            r_ready_o       <=  `ysyx_22041412_False;
            data_read_o     <=  `ysyx_22041412_zero_word;
        end else begin
            case(ar_state)
            `IDLE: begin         
                axi_r_ready_o   <=  `ysyx_22041412_False;                                                                  
                data_read_o     <=  data_read_o;
                r_ready_o       <=  `ysyx_22041412_False;
                if( r_valid_i == `ysyx_22041412_True)begin
                    //Interface with AXI Adress Read            Chanal
                    axi_ar_len_o    <= r_len_i;//uncertain;   
                    if (r_size_i == 8'b0001 || r_size_i == 8'b0010 || r_size_i == 8'b0100 || r_size_i == 8'b1000 ||
                        r_size_i == 8'b00010000 || r_size_i == 8'b00100000 || r_size_i == 8'b01000000 || r_size_i == 8'b10000000) begin
                        axi_ar_size_o   <=  `AXI_SIZE_BYTES_1;
                    end else if (r_size_i == 8'b00000011 || r_size_i == 8'b00001100 ||r_size_i == 8'b11000000 || r_size_i == 8'b00110000) begin
                        axi_ar_size_o   <=  `AXI_SIZE_BYTES_2;
                    end else if (r_size_i == 8'b00001111 || r_size_i == 8'b11110000)begin
                        axi_ar_size_o   <=  `AXI_SIZE_BYTES_4;
                    end else 
                        axi_ar_size_o   <=  `AXI_SIZE_BYTES_8;

                    //axi_ar_size_o   <=  3'b011;//r_size_i;
                    
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <= `ysyx_22041412_True;
                    axi_ar_addr_o   <= r_addr_i; 
                end 
                else begin  
                    axi_ar_len_o    <= r_len_i;//uncertain;     
                    axi_ar_size_o   <=  'b0;
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <= `ysyx_22041412_False;
                    axi_ar_addr_o   <= 32'b0; 
                end
            end
            `ARREADY:  begin
                if(axi_ar_ready_i == `ysyx_22041412_True)begin  //
                //Interface with AXI Adress Read            Chanal
                    axi_ar_addr_o   <=  32'b0;
                    axi_ar_len_o    <=  r_len_i;//uncertain
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR;
                    axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <=  `ysyx_22041412_False;
                //Interface with AXI Date   Read            Chanal
                    axi_r_ready_o   <=  `ysyx_22041412_True;
                end 
                else begin
                    axi_ar_addr_o   <=  axi_ar_addr_o;
                    axi_ar_len_o    <=  r_len_i;//uncertain
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR;
                    axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <=  `ysyx_22041412_True;
                //Interface with AXI Date   Read            Chanal
                    axi_r_ready_o   <=  `ysyx_22041412_False;
                end
            end
            `RVALID:  begin
                
                if(axi_r_valid_i == `ysyx_22041412_True && axi_r_last_i == `ysyx_22041412_True && axi_r_ready_o == `ysyx_22041412_True)begin
                    r_ready_o <= axi_r_valid_i;
                    data_read_o <= axi_r_data_i;
                    axi_r_ready_o <= `ysyx_22041412_False;
                    //rresp<= axi_r_resp_i   ; 
                end else if((axi_ar_len_o!=0)&&axi_r_valid_i == `ysyx_22041412_True) begin
                    data_read_o <= axi_r_data_i;
                    r_ready_o <= axi_r_valid_i;
                end else if(axi_r_valid_i == `ysyx_22041412_False //read response
                    && axi_r_ready_o == `ysyx_22041412_False 
                    && r_ready_o == `ysyx_22041412_True) begin 
                    r_ready_o  <= `ysyx_22041412_False;
                     //           <= axi_r_resp_i   ;           
                end
            end
            default:;
            endcase
            
        end
    end
endmodule