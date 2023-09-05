// 组相连cache  每组128行
// 由于RAM模型是128bit*64的，所以每路需要两个RAM作拼接
// cache 大小为16kb  能容纳 1024个块  块大小为16B
// index位宽= 2log(64) =  6
// 每个cache块都可放到组号为(tag % 组数)中的任意行
module ysyx_22041412_Icache(
    input                   clk,
    input                   rst,
//cpu       <---> icache
    input       [31:0]      cpu_req_addr,
    input                   cpu_valid,
    output      [31:0]      cpu_read_data,
    output  reg             cpu_ready,
//icache    <---> AXI
    input  					        axi_ready_i,        // 读有效等待接收
    output 					        axi_valid_o,          // 发出读请求      
    input                   axi_r_last_i,       //传输结束标识
    output  reg [7:0] 		  axi_r_len_i,
    input       [63:0]		  axi_r_data_i, 		// 读数据
    output  reg [31:0]		  axi_r_addr_o  		// 读地址
);
`define  ram_widh         'd128;
`define  cache_size       'd1024;
`define  cache_line_size  'd128;
`define  cache_bank_size  'd16;
`define  cache_pape_widh  'd8;
`define  cpu_size         'd4;

`define ICACHE_IDLE         3'b000  
`define ICACHE_INST         3'b001  
`define ICACHE_RD_CACHE     3'b010  
`define ICACHE_RD_RAM       3'b100  
`define ICACHE_READY        3'b101
/* 
    31     11 9    4 3      0                   127       0
   +---------+-------+--------+                 +---------+
   |   tag   | index | offset |                  cache_data
   +---------+-------+--------+                 +---------+   
*/      
wire [20:0] cache_tag;
wire [6:0]  cache_index;
wire [3:0]  cache_offset;

wire [127:0]  ram_rd_data [7:0][1:0];   //CACHE读数据

assign cache_tag    = cpu_req_addr[31:11];
assign cache_index  = cpu_req_addr[10:4];
assign cache_offset = cpu_req_addr[3:0];

reg [20:0] cache_tag_ram [127:0][7:0]; //tag 寄存器堆
reg        cache_v_ram   [127:0][7:0]; //tag  V

reg [127:0] read_data;
reg [127:0] write_data;
reg         write_en  [7:0];
assign cpu_read_data = (cache_offset==4'b0000)?read_data[31:0] :
					             (cache_offset==4'b0100)?read_data[63:32] :
					             (cache_offset==4'b1000)?read_data[95:64] :
					             (cache_offset==4'b1100)?read_data[127:96] :0;
genvar index; //生成存储器
generate
    for(index=0; index<8; index=index+1) //例化16个1k ram模块
    begin: paper
        ysyx_22041412_S011HD1P_X32Y2D128 cache_ram1(
            .CLK (clk),
            .Q   (ram_rd_data[index][0]), 
            .CEN (~(~cache_index[6] & (cpu_valid | write_en [index]))), 
            .WEN (~(~cache_index[6] & write_en [index])), 
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
		    ysyx_22041412_S011HD1P_X32Y2D128 cache_ram2(
            .CLK (clk),
            .Q   (ram_rd_data[index][1]), 
            .CEN (~(cache_index[6] & (cpu_valid | write_en [index]))), 
            .WEN (~(cache_index[6] & write_en [index])), 
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
    end
endgenerate


reg hit;//命中标识
wire[7:0] tag_v;	   //命中位置

reg bust_num;  //axi bust 计数

reg [2:0] state;  //cache状态机
reg [2:0] next_state;

assign tag_v = {(cache_tag_ram[cache_index][3'd7]==cache_tag ),(cache_tag_ram[cache_index][3'd6]==cache_tag ),
                (cache_tag_ram[cache_index][3'd5]==cache_tag ),(cache_tag_ram[cache_index][3'd4]==cache_tag ),
                (cache_tag_ram[cache_index][3'd3]==cache_tag ),(cache_tag_ram[cache_index][3'd2]==cache_tag ),
                (cache_tag_ram[cache_index][3'd1]==cache_tag ),(cache_tag_ram[cache_index][3'd0]==cache_tag )};



    always@(posedge clk)begin //状态机更新
      if(rst )begin
        state <= `ICACHE_IDLE;
      end else begin
        state <= next_state;
      end
    end

    always@(*)begin //next state
      if(rst )begin
        next_state  = `ICACHE_IDLE;
      end else begin
        case(state) //写入状态机的控制 
        `ICACHE_IDLE: begin
          if(cpu_valid) 
            next_state = `ICACHE_INST;
          else next_state = `ICACHE_IDLE;
        end
        `ICACHE_INST:begin
          if(cpu_valid)
            next_state = `ICACHE_RD_CACHE;
          else next_state = `ICACHE_IDLE;
        end
        `ICACHE_RD_CACHE:begin
			    if(hit ) 
				    next_state = `ICACHE_IDLE;
			    else 
				    next_state = `ICACHE_RD_RAM;
        end
        `ICACHE_RD_RAM:begin
          if(axi_r_last_i )
            next_state = `ICACHE_IDLE;
          else 
            next_state = `ICACHE_RD_RAM;
		    end
        `ICACHE_READY:begin
			    next_state = `ICACHE_IDLE;  
        end
        default: begin 
          next_state  = `ICACHE_IDLE;
        end
        endcase
      end
    end


    always@(posedge clk)begin //cache执行状态机
      if(rst )begin
			    cpu_ready   <= 1'b0;
          axi_valid_o <= 1'b0;
      end else begin
        case(state) 
        `ICACHE_IDLE: begin
			    cpu_ready   <= 1'b0;
          axi_valid_o <= 1'b0;
          hit         <= 1'b0;
          write_en[cache_write_point_last]  <= 1'b0;
          write_data                        <= 128'b0;
        end
        `ICACHE_INST:begin  //检查相关位置的TAG是否命中
            if(tag_v!= 'b00000000) hit<=1'b1;
            else hit<=1'b0;
        end
        `ICACHE_RD_CACHE:begin
          if(hit )begin
            case (tag_v)
              'b00000001: read_data <= (~cache_index[6])?ram_rd_data[0][0]:ram_rd_data[0][1];
              'b00000010: read_data <= (~cache_index[6])?ram_rd_data[1][0]:ram_rd_data[1][1];
              'b00000100: read_data <= (~cache_index[6])?ram_rd_data[2][0]:ram_rd_data[2][1];
              'b00001000: read_data <= (~cache_index[6])?ram_rd_data[3][0]:ram_rd_data[3][1];
              'b00010000: read_data <= (~cache_index[6])?ram_rd_data[4][0]:ram_rd_data[4][1];
              'b00100000: read_data <= (~cache_index[6])?ram_rd_data[5][0]:ram_rd_data[5][1];
              'b01000000: read_data <= (~cache_index[6])?ram_rd_data[6][0]:ram_rd_data[6][1];
              'b10000000: read_data <= (~cache_index[6])?ram_rd_data[7][0]:ram_rd_data[7][1];
              default:begin
                read_data <= 128'd0;
              end
            endcase
            cpu_ready <= 1'b1;  
       
            //$display("Icache hit Read: addr:%8h %32h",cpu_req_addr[31:0],read_data);
          end else begin
            cpu_ready <= 1'b0;  
          end
        end
        `ICACHE_RD_RAM:begin	//没有命中，从AXI请求内存
          axi_valid_o   <= 1'b1;
          axi_r_len_i   <= 8'd128;
          axi_r_addr_o  <= {cpu_req_addr[31:4],4'b0000};
          if(axi_valid_o & axi_ready_i & ~bust_num)begin
            bust_num    <= 'b1;
            write_data[63:0]          <= axi_r_data_i;  //接收第一次bust的数据
            read_data [63:0]          <= axi_r_data_i;  //
          end else if(axi_valid_o & axi_ready_i & axi_r_last_i & bust_num)begin
            bust_num             <= 1'b0;
            axi_valid_o          <= 1'b0;
            axi_r_len_i          <= 8'b0;
            write_data[127:64]        <= axi_r_data_i;  //写回cache
            read_data [127:64]        <= axi_r_data_i;  //更新接口数据
            write_en             [cache_write_point]          <= 1'b1;
            cache_tag_ram        [cache_index][cache_write_point] <= cache_tag;
            cache_v_ram          [cache_index][cache_write_point] <= 1'b1;
            cpu_ready                                         <= 1'b1;
            //$display("Icache not Read: addr:%8h %32h",cpu_req_addr,{axi_r_data_i,write_data[63:0]});
          end

		    end
        `ICACHE_READY:begin

        end
        default: ;
        endcase
      end
    end



reg [2:0] cache_write_point;
reg [2:0] cache_write_point_last;
always @(posedge clk) begin
  if(rst)begin
    cache_write_point <= 0;
  end else begin
    cache_write_point_last <= cache_write_point;
    cache_write_point      <= cache_write_point+1;
  end 
end
endmodule