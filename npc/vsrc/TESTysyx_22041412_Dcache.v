// 组相连cache  每组128行
// 由于RAM模型是128bit*64的，所以每路需要两个RAM作拼接
// cache 大小为16kb  能容纳 1024个块  块大小为16B
// index位宽= 2log(64) =  6
// 每个cache块都可放到组号为(tag % 组数)中的任意行
module ysyx_22041412_Dcache(
    input                   clk,
    input                   rst,
    
//performance counter
    output reg [63:0]       cache_miss,
    output reg [63:0]       cache_hit,



//cpu       <---> dcache
    input                   cpu_rw_en;          //本次操作的类型  1w  0r
    input       [31:0]      cpu_req_addr,
    input                   cpu_valid,
    input       [63:0]      cpu_write_data,
    input       [7:0]       cpu_rw_len,            //读\写  的长度指示
    output  reg [63:0]      cpu_read_data,
    output  reg             cpu_ready,   
//dcache    <---> AXI
    //AXI WRITE
    input  					        axi_w_ready_i,      // 读有效等待接收
    output 					        axi_w_valid_o,      // 发出读请求      
    input                   axi_w_last_i,       // 传输结束标识
    output  reg [7:0] 		  axi_w_len_i,        // 传输的长度
    output  reg [2:0] 		  axi_w_strb_i,       // 传输的掩码    
    input       [63:0]		  axi_w_data_i, 	  	// 读数据
    output  reg [31:0]		  axi_w_addr_o  		  // 读地址
    //AXI READ
    input  					        axi_r_ready_i,        // 读有效等待接收
    output 					        axi_r_valid_o,        // 发出读请求      
    input                   axi_r_last_i,       // 传输结束标识
    output  reg [7:0] 		  axi_r_len_i,        // 传输的长度
    input       [63:0]		  axi_r_data_i, 	  	// 读数据
    output  reg [31:0]		  axi_r_addr_o  		  // 读地址
);
`define  ram_widh         'd128;
`define  cache_size       'd1024;
`define  cache_line_size  'd128;
`define  cache_bank_size  'd16;
`define  cache_pape_widh  'd8;
`define  cpu_size         'd4;

`define DCACHE_IDLE         3'b000  
`define DCACHE_INST         3'b001  
`define DCACHE_CACHE        3'b010  
`define DCACHE_RAM          3'b100  
`define DCACHE_WTBACK       3'b101
/* 
   1  31     11 9    4 3      0                   127       0
   +----------+-------+--------+                 +---------+
   V |  tag   | index | offset |                  cache_data
   +----------+-------+--------+                 +---------+   
*/      
wire [20:0] cache_tag;
wire [6:0]  cache_index;
wire [3:0]  cache_offset;

wire [127:0]  ram_rd_data [7:0][1:0];   //CACHE读数据

assign cache_tag    = cpu_req_addr[31:11];
assign cache_index  = cpu_req_addr[10:4];
assign cache_offset = cpu_req_addr[3:0];

reg [127:0] write_data;
reg [127:0] wrtie_strb;
reg [7:0]   write_en  ;


reg [20:0] cache_tag_ram [127:0][7:0]; //tag 寄存器堆
reg        cache_v_ram   [127:0][7:0]; //tag  V  标识数据是否为dirty的

wire        device    ;     //指示本次地址访问的是否为外设
assign      device    =  (cache_tag[20:16]>'b10001)?1'b1 :1'b0;   // 80000000---87FFFFFF  为访问程序内存     device 为1时 视为访问外设

wire [127:0]rw_strb;  //写掩码 地址8字节对齐 只有两种情况
wire        rw_offset;
assign  rw_strb   = (cache_offset=='d0 || cache_offset=='d4 )  ?{64{1'b0},64{1'b1}} :
                    (cache_offset=='d8 || cache_offset=='d12 ) ?{64{1'b1},64{1'b0}} : 128'b0 ;      //全为0的情况 写掩码不正确
assign  rw_offset  =(cache_offset=='d8 || cache_offset=='d12 ) ?1'b1 : 1'b0 ;   

reg [127:0] write_back_data;  //需要回写的数据
reg [27:0]  write_back_addr;
reg         write_back_en;

genvar index; //生成存储器    与ICACHE不同的是 需要加入写掩码引脚
generate
    for(index=0; index<8; index=index+1) //例化16个1k ram模块    
    begin: paper
        ysyx_22041412_S011HD1P_X32Y2D128_BW cache_ram1(
            .CLK (clk),
            .Q   (ram_rd_data[index][0]), 
            .CEN (~(~cache_index[6] & (cpu_valid | write_en [index]))), 
            .WEN (~(~cache_index[6] & write_en [index])), 
            .BWEN(~rw_strb),  //低位有效
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
		    ysyx_22041412_S011HD1P_X32Y2D128_BW cache_ram2(
            .CLK (clk),
            .Q   (ram_rd_data[index][1]), 
            .CEN (~(cache_index[6] & (cpu_valid | write_en [index]))), 
            .WEN (~(cache_index[6] & write_en [index])), 
            .BWEN(~rw_strb),  //低位有效
            .A   (cache_index[5:0]), 
            .D   (write_data)
        );
    end
endgenerate

reg[7:0] tag_v;	   //命中位置
wire[2:0]tag_v_w;  //译码到二进制的命中位置


reg bust_num;  //axi bust 计数

reg [2:0] state;  //cache状态机
reg [2:0] next_state;




    always@(posedge clk)begin //状态机更新
      if(rst )begin
        state <= `DCACHE_IDLE;
      end else begin
        state <= next_state;
      end
    end

    always@(*)begin //next state
      if(rst )begin
        next_state  = `DCACHE_IDLE;
      end else begin
        case(state) //写入状态机的控制 
        `DCACHE_IDLE: begin
          if(cpu_valid & ~device) 
            next_state = `DCACHE_INST;
          else if(cpu_valid & device)  //读外设 不用等命中了直接访问AXI
            next_state = `DCACHE_RD_RAM;
          else 
            next_state = `DCACHE_IDLE;
        end
        `DCACHE_INST:begin
          if(cpu_valid)
            next_state = `DCACHE_CACHE;
          else
            next_state = `DCACHE_IDLE;
        end
        `DCACHE_CACHE:begin
			    if(tag_v != 8'b00000000 ) 
				    next_state = `DCACHE_IDLE;
			    else 
				    next_state = `DCACHE_RD_RAM;
        end
        `DCACHE_RAM:begin
          if(axi_r_last_i )
            next_state = `DCACHE_IDLE;
          else 
            next_state = `DCACHE_RAM;
		    end
        `DCACHE_WTBACK:begin
			    next_state = `DCACHE_IDLE;  
        end
        default: begin 
          next_state  = `DCACHE_IDLE;
        end
        endcase
      end
    end
    
    always @(posedge clk) begin  //命中判断
      if(rst)begin
        tag_v <= 8'b00000000;
      end else if(cpu_valid)begin
        tag_v <= {(cache_tag_ram[cache_index][3'd7]==cache_tag ),(cache_tag_ram[cache_index][3'd6]==cache_tag ),
                  (cache_tag_ram[cache_index][3'd5]==cache_tag ),(cache_tag_ram[cache_index][3'd4]==cache_tag ),
                  (cache_tag_ram[cache_index][3'd3]==cache_tag ),(cache_tag_ram[cache_index][3'd2]==cache_tag ),
                  (cache_tag_ram[cache_index][3'd1]==cache_tag ),(cache_tag_ram[cache_index][3'd0]==cache_tag )};
      end else begin
        tag_v <= 8'b00000000;
      end
    end
    assign  tag_v_w =   (tag_v== 'b00000001) ?'d0 :
                        (tag_v== 'b00000010) ?'d1 :
                        (tag_v== 'b00000100) ?'d2 : 
                        (tag_v== 'b00001000) ?'d3 :
                        (tag_v== 'b00010000) ?'d4 : 
                        (tag_v== 'b00100000) ?'d5 :
                        (tag_v== 'b01000000) ?'d6 : 
                        (tag_v== 'b10000000) ?'d7 : 'd0 ;


    // input  					        axi_w_ready_i,      // 读有效等待接收
    // output 					        axi_w_valid_o,      // 发出读请求      
    // input                   axi_w_last_i,       // 传输结束标识
    // output  reg [7:0] 		  axi_w_len_i,        // 传输的长度
    // output  reg [2:0] 		  axi_w_strb_i,       // 传输的掩码    
    // input       [63:0]		  axi_w_data_i, 	  	// 读数据
    // output  reg [31:0]		  axi_w_addr_o  		  // 读地址
    always@(posedge clk)begin //cache执行状态机
      if(rst )begin
			    cpu_ready   <= 1'b0;
          axi_valid_o <= 1'b0;

          cache_hit   <= 64'b0;
          cache_miss  <= 64'b0;
      end else begin
        case(state) 
        `DCACHE_IDLE: begin
          axi_valid_o     <= 1'b0;
          write_en        <= 8'b00000000;  //清空cache的写入开关
          write_data      <= 128'b0;
          cpu_ready       <= 1'b0;
          cpu_read_data   <= 0;
          
        end
        `DCACHE_INST:begin  
          cpu_ready        <= 1'b0;
          cpu_read_data    <= 128'b0;
        end
        `DCACHE_RD_CACHE:begin //检查相关位置的TAG是否命中 如果命中 则从cache赋值
          if( cpu_rw_en==1'b0 & tag_v !=8'b00000000)begin //从命中部位读取数据
                  cpu_read_data <= ram_rd_data[tag_v_w][cache_index[6]];
                  cpu_ready <= 1'b1;  
                  cpu_ready <= 1'b1;   
                  cache_hit <= cache_hit+1;
                  //$display("DCACHE hit  Read cache addr:%8h ",cpu_req_addr[31:0]);
          end else if(cpu_rw_en & tag_v !=8'b00000000)begin      //写入cache 到命中的区域  同时将数据标记为dirty
                  write_en             [tag_v_w]              <= 1'b1;
                  write_data                                  <= (~rw_offset)?{64'b0,cpu_write_data}:{cpu_write_data,64'b0,};  //写回cache 8字节对齐
                  cache_tag_ram        [cache_index][tag_v_w] <= cache_tag;
                  cache_v_ram          [cache_index][tag_v_w] <= 1'b1;
                  cpu_ready <= 1'b1;   
                  cache_hit <=cache_hit+1;
          end else begin

            //没有命中，发起AXI请求
            if(~cpu_rw_en)begin
              axi_valid_o   <= 1'b1;
              axi_r_len_i   <= cpu_rw_len;
              axi_r_addr_o  <= {cpu_req_addr[31:4],4'b0000};
            end else begin
              axi_w_valid_o <= 1'b1;
              axi_w_len_i   <= cpu_rw_len;
              axi_w_addr_o  <= cpu_req_addr;    //写入不对齐
            end

            cpu_ready  <= 1'b0;  
            cache_miss <= cache_miss+1;

          end
        end
        `DCACHE_RD_RAM:begin	//处理AXI事务

          if(axi_valid_o & axi_ready_i & ~bust_num)begin
            bust_num    <= 'b1;
            write_data[63:0]          <= axi_r_data_i;  //接收第一次bust的数据
            cpu_read_data [63:0]      <= axi_r_data_i;  //
          end else if(axi_valid_o & axi_ready_i & axi_r_last_i & bust_num)begin  //dcache在回写时需要将脏数据重新写回DDR    目前的策略是 ： 先把数据返回给流水线，cache再进入返回模式，将缓存的数据写回DDR
            bust_num             <= 1'b0;
            axi_valid_o          <= 1'b0;
            axi_r_len_i          <= 8'b0;
            write_data[127:64]        <= axi_r_data_i;  //写回cache
            cpu_read_data [127:64]    <= axi_r_data_i;  //更新接口数据
            cpu_ready                 <= 1'b1;      

              if(write_en[cache_write_point] ==1'b1)     begin   //装填需要回写的数据
                write_back_data      <=ram_rd_data  [cache_write_point][cache_index[6]]; 
                write_back_addr      <=cache_tag_ram[cache_index][cache_write_point];
                write_back_en        <=1'b1
              end else begin
                write_back_en        <=1'b0;
              end

            write_en             [cache_write_point]              <= 1'b1;
            cache_tag_ram        [cache_index][cache_write_point] <= cache_tag;


            //$display("DCACHE not: %8h : %32h",cpu_req_addr,{axi_r_data_i,write_data[63:0]});
          end

		    end
        `DCACHE_WTBACK:begin      //写回数据
          if()begin

          end
        end
        default: ;
        endcase
      end
    end


//在空闲时返回脏数据    需要在cache内再做一个仲裁器，没有访问请求的时候写回数据
    always @(posedge clk)begin

    end



//伪随机替换计数器
reg [2:0] cache_write_point;
always @(posedge clk) begin
  if(rst)begin
    cache_write_point <= 0;
  end else begin
    cache_write_point <= cache_write_point+1;
  end 
end
endmodule