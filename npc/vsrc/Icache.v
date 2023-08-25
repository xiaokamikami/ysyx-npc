// 16路相连cache  每路64行
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
    input  					axi_ready_i,        // 读有效等待接收
    output 					axi_valid,          // 发出读请求
    output  reg 			axi_ready_o,         
    output  reg [7:0] 		axi_r_size_i,
    input       [63:0]		axi_r_data_i, 		// 读数据
    output  reg [31:0]		axi_r_addr_o  		// 读地址
);
    parameter ram_widh         = 'd128
    parameter cache_size       = 'd1024;
    parameter cache_line_size  = 'd128;
    parameter cache_bank_size  = 'd16;
    parameter cache_pape_widh  = 'd8;
    parameter cpu_size         = 'd4;

`define IDLE         3'b000  
`define INST         3'b001  
`define RD_RAM       3'b010  
`define RD_CACHE     3'b011  
`define READY        3'b100 
/* 
    31     11 9    4 3      0                   127       0
   +---------+-------+--------+                 +---------+
   |   tag   | index | offset |                  cache_data
   +---------+-------+--------+                 +---------+   
*/      
wire [21:0] cache_tag
wire [5:0]  cache_index;
wire [3:0]  cache_offset;

wire  ram_rd_data [`ram_widh-1:0] ;        //CACHE读数据
wire  ram_rd_cen   ; 				   	   //CACHE读使能


assign cache_tag    = cpu_req_addr{31:11};
assign ram_rd_cen   = cpu_req_addr[10];
assign cache_index  = cpu_req_addr{9:4};
assign cache_offset = cpu_req_addr{3:0};

// tag 
reg [21:0] cache_tag_ram [6:0] [4:0]; //tag堆




reg [127:0] read_data;

assign cpu_read_data = (cache_offset=='b0000)?read_data[31:0] :
					   (cache_offset=='b0100)?read_data[63:32] :
					   (cache_offset=='d1000)?read_data[95:64] :
					   (cache_offset=='d1100)?read_data[127:96] ;
genvar index; //生成存储器
generate
    for(index=0; index<8; index=index+1) //例化16个1k ram模块
    begin: paper
        ysyx_22041412_S011HD1P_X32Y2D128 cache_ram1(
            CLK (clk),
            Q   (ram_rd_data[index]), 
            CEN (ram_rd_cen[0]), 
            WEN (1'b1), 
            A   (cache_index), 
            D   (128'b0)
        );
		ysyx_22041412_S011HD1P_X32Y2D128 cache_ram2(
            CLK (clk),
            Q   (ram_rd_data[index]), 
            CEN (ram_rd_cen[1]), 
            WEN (1'b1), 
            A   (cache_index), 
            D   (128'b0)
        );
    end
endgenerate



reg [6:0]ram_len;  //本次访问的行
reg hit;		   //命中标识
reg [5:0]tag_v;	   //命中位置
reg[3:0] switch;              //cache状态机 
reg[3:0] next_switch;



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
            if(cpu_valid) 
            	next_state = `INST;
            else 
            	next_state = `IDLE;
        end
        `INST:begin
			if(hit) 
				next_state = `READY;
			else 
				next_state = `RD_RAM;
        end
        `RD_RAM:begin

		end
        `READY:begin
			next_state = `IDLE;  
        end
        default: next_state = `IDLE;
        endcase
      end
    end


    always@(posedge clk)begin //cache执行状态机
      if(rst )begin

      end else begin
        case(state) 
        `IDLE: begin
			cpu_ready <= 1'b0;
			ram_len   <= cache_tag % 'd64;
        end
        `INST:begin  //检查相关位置的TAG是否命中
			if(hit)begin
				case (tag_v):
					'd0: read_data = ram_rd_data[0];
					'd1: read_data = ram_rd_data[1];
					'd2: read_data = ram_rd_data[2];
					'd3: read_data = ram_rd_data[3];
					'd4: read_data = ram_rd_data[4];
					'd5: read_data = ram_rd_data[5];
					'd6: read_data = ram_rd_data[6];
					'd7: read_data = ram_rd_data[7];
					default:begin
						read_data = 'd0;
					end
				endcase
			end 
        end
        `RD_RAM:begin	//没有命中，从AXI请求内存

		end
        `READY:begin
			cpu_ready <= 1'b1;
        end
        default: ;
        endcase
      end
    end



always (*)begin
    if(cache_tag_ram[ram_len][0]==cache_tag ) begin
				tag_v     = 'd0;
	end else if(cache_tag_ram[ram_len][1]==cache_tag ) begin
				tag_v     = 'd1;
	end else if(cache_tag_ram[ram_len][2]==cache_tag ) begin
				tag_v     = 'd2;
	end else if(cache_tag_ram[ram_len][3]==cache_tag ) begin
				tag_v     = 'd3;
	end else if(cache_tag_ram[ram_len][4]==cache_tag ) begin
				tag_v     = 'd4;
	end else if(cache_tag_ram[ram_len][5]==cache_tag ) begin
				tag_v     = 'd5;
	end else if(cache_tag_ram[ram_len][6]==cache_tag ) begin
				tag_v     = 'd6;
	end else if(cache_tag_ram[ram_len][7]==cache_tag ) begin
				tag_v     = 'd7;
	end else 	hit       = 1'b0;
end
endmodule