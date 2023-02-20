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

always @(posedge clk) begin
  if(rst)begin
    if_ar_ready<=0;
    mem_rw_ready<=0;

    r_valid_i <=0;            //读请求
    w_valid_i <=0;            //写请求
    rw_w_data_i<=64'0;        //写数据
    w_addr_i<=32'0;           //地址
    r_addr_i<=32'0;           //地址
    w_size_i<=8'b0;           //掩码
    r_size_i<=8'b0;           //掩码
    r_len_i<=8'b0;            //突发长度
    w_len_i<=8'b0;            //突发长度
  end
  else begin
    if(mem_rw_valid)begin                 
        if(mem_rw_wen)begin      //MEM写
            if(w_ready_o)begin    //写结束
                w_addr_i    <=0;
                rw_w_data_i <=0;
                w_size_i    <=0;
                w_len_i     <=0;

                mem_rw_ready<=1;
                w_valid_i   <=0;
            end
            else begin
                w_addr_i    <=mem_rw_addr;
                rw_w_data_i <=mem_rw_w_data;
                w_size_i    <=mem_rw_size;
                w_len_i     <=mem_rw_len;

                mem_rw_ready<=0;
                w_valid_i<=mem_rw_valid;
            end
        end
        else begin                //MEM读
            if(r_ready_o)begin      //读结束
                mem_rw_r_data<= data_read_o;
                r_size_i <=0;
                r_len_i  <=0;

                mem_rw_ready <=1;
                r_valid_i<=0;   
            end
            else begin
                r_addr_i <=mem_rw_addr;
                r_size_i <=mem_rw_len;
                r_len_i  <=mem_rw_size;

                mem_rw_ready <=0;
                r_valid_i<=mem_rw_valid;
            end
        end
    end
    else if(if_ar_valid)begin   //IF请求 只有读
        if(r_ready_o)begin
            if_ar_data<= data_read_o;

            if_ar_ready <=1;
            r_valid_i<=0;  
        end
        else begin
            r_addr_i <=if_ar_addr;
            r_size_i <=if_ar_len;
            r_len_i  <=if_ar_size;

            if_ar_ready <=0;
            r_valid_i<=if_ar_valid;
            
        end
    end
    else begin  //没有请求
        if_ar_ready<=0;
        mem_rw_ready<=0;

        r_valid_i <=0;            //读请求
        w_valid_i <=0;            //写请求
        rw_w_data_i<=64'0;        //写数据
        w_addr_i<=32'0;           //地址
        r_addr_i<=32'0;           //地址
        w_size_i<=8'b0;           //掩码
        r_size_i<=8'b0;           //掩码
        r_len_i<=8'b0;            //突发长度
        w_len_i<=8'b0;            //突发长度
    end
  end
end

endmodule
