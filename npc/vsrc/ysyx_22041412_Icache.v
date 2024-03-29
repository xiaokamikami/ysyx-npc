// 组相连cache  每组128行
// 由于RAM模型是128bit*64的，所以每路需要两个RAM作拼接
// cache 大小为16kb  能容纳 1024个块  块大小为16B
// index位宽= 2log(64) =  6
// 每个cache块都可放到组号为(tag % 组数)中的任意行


//2023/9/23  为了满足五期要求，从16KB
module ysyx_22041412_Icache(
    input                   clk,
    input                   rst,
    
//performance counter
    output reg [63:0]       cache_miss,
    output reg [63:0]       cache_hit,



//cpu       <---> icache
    input       [31:0]      cpu_req_addr,
    output      [31:0]      cpu_read_imm,
    output  reg             cpu_ready,
    input                   cpu_read_vaild,      // 数据请求

    input                   fence_i,            
    output  reg             fence_ready,
//icache    <---> AXI
    input  					  axi_ready_i,        // 读有效等待接收
    output 					  axi_valid_o,        // 发出读请求      
    input                     axi_r_last_i,       // 传输结束标识
    output  reg [7:0] 		  axi_r_len_i,
    input       [63:0]		  axi_r_data_i, 	  // 读数据
    output  reg [31:0]		  axi_r_addr_o        // 读地址
);
`define  ram_widh         'd128;
`define  cache_size       'd1024;
`define  cache_line_size  'd128;
`define  cache_bank_size  'd16;
`define  cache_pape_widh  'd8;
`define  cpu_size         'd4;

`define BUST_1           3'b000
`define BUST_2           3'b001
`define BUST_4           3'b010
`define BUST_8           3'b011 

`define ICACHE_IDLE         3'b000  
`define ICACHE_INST         3'b001  
`define ICACHE_RD_CACHE     3'b010  
`define ICACHE_RD_RAM       3'b100
`define ICACHE_W_WAIT       3'b101
`define ICACHE_FENCE        3'b111
reg [127:0]      cpu_read_data;
assign cpu_read_imm = (cache_offset == 'h0) ? cpu_read_data[31:0]  :
                      (cache_offset == 'h4) ? cpu_read_data[63:32] :
                      (cache_offset == 'h8) ? cpu_read_data[95:64] :
                      (cache_offset == 'hc) ? cpu_read_data[127:96]: 32'b0;
/* 
    31     11 9    4 3      0                   127       0
   +---------+-------+--------+                 +---------+
   |   tag   | index | offset |                  cache_data
   +---------+-------+--------+                 +---------+   
*/      
wire [20:0] cache_tag;
wire [6:0]  cache_index;
wire [3:0]  cache_offset;
reg  [6:0]  cache_write_index;
wire [127:0]  ram_rd_data [3:0][1:0];   //CACHE读数据

reg [1:0]  fence_page;       //返回cache页计数
reg [6:0]  fence_write_index;//返回cache地址计数
reg        fence_wait;
assign cache_tag    = cpu_req_addr[31:11];
assign cache_index  = (write_en!=4'b0000) ? cache_write_index :cpu_req_addr[10:4] ;
assign cache_offset = cpu_req_addr[3:0];

reg [20:0] cache_tag_ram [127:0][3:0]; //tag 寄存器堆
//reg [1:0]  cache_fwen_ct [127:0][3:0]; //tag 访问计数
reg        cache_v_ram   [127:0][3:0]; //tag  V


reg [127:0] write_data;
reg [3:0]   write_en  ;

genvar index; //生成存储器
generate
    for(index=0; index<4; index=index+1) //例化8个1k ram模块
    begin: paper
        ysyx_22041412_S011HD1P_X32Y2D128 cache_ram1(
            .CLK (clk),
            .Q   (ram_rd_data[index][0]), 
            .CEN (~(~cache_index[6] & (cpu_read_vaild | write_en [index]))), 
            .WEN (~(~cache_index[6] & write_en [index])), 
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
		    ysyx_22041412_S011HD1P_X32Y2D128 cache_ram2(
            .CLK (clk),
            .Q   (ram_rd_data[index][1]), 
            .CEN (~(cache_index[6] & (cpu_read_vaild | write_en [index]))), 
            .WEN (~(cache_index[6] & write_en [index])), 
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
    end
endgenerate

reg [3:0]tag_v;	   //命中位置
wire[1:0]tag_v_w;  //译码到二进制的命中位置

reg bust_num;  //axi bust 计数

reg [2:0] state;  //cache状态机
reg [2:0] next_state;

    reg fence_i_ld;
    always@(posedge clk)begin
      if(fence_i) fence_i_ld<=1'b1;
      else if(fence_ready) fence_i_ld<=1'b0;
    end

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
            if(cpu_read_vaild & ~cpu_ready & ~cache_hiter & write_en==4'b0000) begin
                next_state = `ICACHE_RD_CACHE;
            end else if (fence_i_ld)begin
                next_state = `ICACHE_FENCE;
                $display("%lx Icache fence_i start");
            end
            else next_state = `ICACHE_IDLE;
        end
        `ICACHE_RD_CACHE:begin
			if(tag_v != 4'b0000 ) 
				next_state = `ICACHE_IDLE;
			else 
				next_state = (~cpu_read_vaild)?`ICACHE_IDLE:`ICACHE_RD_RAM;
        end
        `ICACHE_RD_RAM:begin
            if(axi_r_last_i )
                next_state = `ICACHE_IDLE;
            else 
                next_state = `ICACHE_RD_RAM;
            end
        `ICACHE_FENCE:begin
            next_state = (fence_ready)?`ICACHE_IDLE:`ICACHE_FENCE;
            if(fence_ready) $display("%lx Icache Fence_i  succful");
        end
        default: begin 
            next_state  = `ICACHE_IDLE;
        end
        endcase
      end
    end
    
    always @( *) begin  //命中判断
      if(rst)begin
        tag_v = 4'b0000;
      end else if(cpu_read_vaild)begin
        tag_v = { (cache_tag_ram[cache_index][2'd3]==cache_tag & cache_v_ram[cache_index][2'd3]==1'b1),(cache_tag_ram[cache_index][2'd2]==cache_tag & cache_v_ram[cache_index][2'd2]==1'b1),
                  (cache_tag_ram[cache_index][2'd1]==cache_tag & cache_v_ram[cache_index][2'd1]==1'b1),(cache_tag_ram[cache_index][2'd0]==cache_tag & cache_v_ram[cache_index][2'd0]==1'b1)};
      end else begin
        tag_v = 4'b0000;
      end
    end
    assign  tag_v_w =   (tag_v== 'b0001) ?'d0 :
                        (tag_v== 'b0010) ?'d1 :
                        (tag_v== 'b0100) ?'d2 : 
                        (tag_v== 'b1000) ?'d3 : 'd0 ;

    always @(*) begin
        case (state)
        `ICACHE_IDLE : begin
            if(cpu_read_vaild & cache_hiter) begin
                cpu_read_data = cache_read_data;
                cpu_ready     = 1'b1; 
            end else begin
                cpu_ready     = 1'b0;
                cpu_read_data = 128'b0;
            end
        end
        `ICACHE_RD_CACHE : begin
            if(tag_v !=4'b0000 )begin
                cpu_read_data = ram_rd_data[tag_v_w][cache_index[6]];
                cpu_ready     = 1'b1; 
            end else begin
                cpu_ready     = 1'b0;
                cpu_read_data = 128'b0;
            end
        end
        `ICACHE_RD_RAM : begin
            if(axi_valid_o & axi_ready_i & axi_r_last_i )begin
                cpu_read_data = {axi_r_data_i,write_data[63:0]};
                cpu_ready     = 1'b1;
            end else begin
                cpu_ready     = 1'b0;
                cpu_read_data = 128'b0;
            end
        end
        default: begin
            cpu_ready       = 1'b0;
            cpu_read_data   = 128'b0;
        end
        endcase
    end


    //针对某一个地址的调试器

/*      wire[31:0] debug_addr = 'h83005000;
    always @(posedge clk) begin
      if({cpu_req_addr[31:4]} ==debug_addr[31:4]  & tag_v !=4'b0000) 
        $display("\33[1;33mIcache hit  read addr: %8h data:%32h\033[0m",cpu_req_addr , ram_rd_data[tag_v_w][cache_index[6]]);    
      else if({cpu_req_addr[31:4]} ==debug_addr[31:4] & axi_r_last_i )
        $display("\33[1;31mIcache get  AXI4  %8h offset %h : %32h\033[0m",cpu_req_addr,cache_offset,{axi_r_data_i,write_data[63:0]});

    end    */

    reg [127:0]     cache_read_data;//上次请求的cache_line数据
    reg [31:0]      cache_read_addr;//上次请求的cache_addr
    wire            cache_hiter = (cache_read_addr[31:4]==cpu_req_addr[31:4]) ? 1'b1 : 1'b0;
    always@(posedge clk)begin //cache执行状态机
      if(rst )begin
          axi_valid_o <= 1'b0;
          cache_hit   <= 64'b0;
          cache_miss  <= 64'b0;
          cache_read_data<= 128'b0;
          cache_read_addr<= 32'b0;
      end else begin
        case(state) 
        `ICACHE_IDLE: begin
          axi_valid_o    <= 1'b0;
          write_en       <= 4'b0000;
          write_data     <= 128'b0;
          fence_ready    <= 1'b0;
          if(~fence_i) begin
                cache_read_data   <= cache_read_data;
                cache_read_addr   <= cache_read_addr;
          end else begin
                fence_write_index <= 7'b00000000;
                fence_page        <= 2'b00;
                cache_read_data   <= 128'b0;
                cache_read_addr   <= 32'b0;
          end
        end
        `ICACHE_RD_CACHE:begin //检查相关位置的TAG是否命中 如果命中 则从cache赋值
          if(tag_v !=4'b0000 )begin
            cache_read_data <= ram_rd_data[tag_v_w][cache_index[6]];
            cache_read_addr <= cpu_req_addr;
            cache_hit       <= cache_hit+1;

          end else begin
            cache_miss <= cache_miss+1;
            
            axi_valid_o   <= 1'b1;    //发起申请
            axi_r_len_i   <= 8'd1;
            axi_r_addr_o  <= {cpu_req_addr[31:4],4'b0000};
          end

        end
        `ICACHE_RD_RAM:begin	//没有命中，从AXI请求内存
          if(axi_valid_o & axi_ready_i & ~bust_num)begin
            bust_num    <= 'b1;
            write_data[63:0]     <= axi_r_data_i;  //接收第一次bust的数据
          end else if(axi_valid_o & axi_ready_i & axi_r_last_i & bust_num )begin
            bust_num             <= 1'b0;
            axi_valid_o          <= 1'b0;
            axi_r_len_i          <= 8'b0;
            write_data[127:64]   <= axi_r_data_i;  //写回cache
            cache_read_data      <= {axi_r_data_i,write_data[63:0]};
            cache_read_addr      <= cpu_req_addr;
            cache_write_index    <= cpu_req_addr[10:4];
            write_en             [cache_write_point]              <= 1'b1;
            cache_v_ram          [cache_index][cache_write_point] <= 1'b1;
            cache_tag_ram        [cache_index][cache_write_point] <= cache_tag;
            //$display("Icache not: %8h : %32h",cpu_req_addr,{axi_r_data_i,write_data[63:0]});
          end 
		end
        `ICACHE_FENCE:begin   //ICACHE的FENCE很简单，循环把数据有效位全部清了就行
          if(~fence_ready)begin
            cache_v_ram [fence_write_index][fence_page] <= 1'b0 ;  //清掉脏数据位 并标记为无效数据  
            fence_ready       <= (fence_write_index=={7{1'b1}} & fence_page==2'b11 )  ?1'b1 : 1'b0;
            fence_write_index <= fence_write_index+1;
            fence_page        <= (fence_write_index=={7{1'b1}}) ? (fence_page +1'b1) :fence_page; 
            //$display("\33[1;33mIcache Fence_i succful  index:%d  pape:%1h\033[0m",fence_write_index,fence_page );
          end
        end
        default: ;
        endcase
      end
    end

wire [1:0] cache_write_point;
assign cache_write_point = cache_rodom_cnt;  //伪随机替换

// //没存满数据的话，先存空的line  评价为没啥用  可能对经常切换线程的任务有用
// assign cache_write_point  = (~cache_v_ram[cache_index][0]) ? 2'd0 :
//                             (~cache_v_ram[cache_index][1]) ? 2'd1 :
//                             (~cache_v_ram[cache_index][2]) ? 2'd2 :
//                             (~cache_v_ram[cache_index][3]) ? 2'd3 : cache_rodom_cnt;

// 替换最近不常用数据，如果没有，那就随机替换   在循环跑分测试中效果不好  对真实任务有效
// assign cache_write_point  = (cache_fwen_ct[cache_index][0] > (cache_fwen_ct[cache_index][1] & cache_fwen_ct[cache_index][2]  & 
//                                                               cache_fwen_ct[cache_index][3] )) ? 2'd0  :
//                             (cache_fwen_ct[cache_index][1] > (cache_fwen_ct[cache_index][2] & cache_fwen_ct[cache_index][3] ) ) ? 2'd1  :
//                             (cache_fwen_ct[cache_index][2] > cache_fwen_ct[cache_index][3] ) ? 2'd2  : 2'd3  ;


//伪随机替换计数器
reg [1:0] cache_rodom_cnt;
always @(posedge clk) begin
  if(rst)begin
    cache_rodom_cnt <= 0;
  end else begin
    cache_rodom_cnt <= cache_rodom_cnt+1;
  end 
end
endmodule
