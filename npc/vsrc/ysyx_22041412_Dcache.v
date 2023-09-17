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
    input                   cpu_rw_en,          //本次操作的类型  1w  0r
    input       [31:0]      cpu_req_addr,
    input                   cpu_valid,
    input       [63:0]      cpu_write_data,
    input       [2:0]       cpu_rw_size,         //每次突发的大小 = 0-7   +1 字节
    output  reg [63:0]      cpu_read_data,
    output                  cpu_ready,   
//dcache    <---> AXI
    //AXI WRITE
    input  					        axi_w_ready_i,      // 写有效
    output 	reg			        axi_w_valid_o,      // 发出读请求      
    input                   axi_w_last_i,       // 传输结束标识
    output  reg [7:0] 		  axi_w_len_o,        // 传输的长度   
    output  reg [63:0]		  axi_w_data_o, 	  	// 写数据
    output  reg [31:0]		  axi_w_addr_o,  		  // 写地址
    output  reg [2:0]       axi_w_size_o,
    //AXI READ
    input  					        axi_r_ready_i,      // 读有效等待接收
    output 	reg		          axi_r_valid_o,      // 发出读请求      
    input                   axi_r_last_i,       // 传输结束标识
    output  reg [7:0] 		  axi_r_len_o,        // 传输的长度
    input       [63:0]		  axi_r_data_i, 	  	// 读数据
    output  reg [31:0]		  axi_r_addr_o  		  // 读地址
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


`define DCACHE_IDLE         3'b000 
`define DCACHE_INST         3'b001  

`define DCACHE_WTBACK       3'b010
`define DCACHE_CACHE        3'b010  

`define DCACHE_RAM          3'b100  
`define DCACHE_DEVICE       3'b100

`define DCACHE_W_CACHE      3'b101  


reg cache_rd_ready;
reg cache_wr_ready;
assign cpu_ready = cache_rd_ready | cache_wr_ready ; 
/* 
   1  31     11 9    4 3      0                   127       0
   +----------+-------+--------+                 +---------+
   V |  tag   | index | offset |                  cache_data
   +----------+-------+--------+                 +---------+   
*/      
wire [20:0] cache_tag;
wire [6:0]  cache_index;
wire [3:0]  cache_offset;

assign cache_tag    = cpu_req_addr[31:11];
assign cache_index  = cpu_req_addr[10:4];
assign cache_offset = cpu_req_addr[3:0];

// sram接口
reg [127:0]   write_data;
reg [127:0]   wrtie_strb;
reg [7:0]     write_en  ;
reg           rw_strb_en;
wire [127:0]  rw_strb;  //写cache掩码 
wire          rw_offset;
wire [127:0]  ram_rd_data [7:0][1:0];   //CACHE读数据
//

// 通过掩码控制写入的数据长度                //低64位
assign  rw_strb   =(~rw_strb_en) ? (~cache_offset[3]) ? (cpu_rw_size==3'b000)?{{120{1'b0}},{8{1'b1}}} :  //sb
                                                        (cpu_rw_size==3'b001)?{{112{1'b0}},{16{1'b1}}}:  //sh
                                                        (cpu_rw_size==3'b010)?{{96{1'b0}},{32{1'b1}}} :  //sw
                                                        (cpu_rw_size==3'b011)?{{64{1'b0}},{64{1'b1}}} :  //sd
                                                        128'b0 : 
                                                        // 高64位
                                                        (cpu_rw_size==3'b000)?{{8{1'b1}},{120{1'b0}}} :  //sb
                                                        (cpu_rw_size==3'b001)?{{16{1'b1}},{112{1'b0}}}:  //sh
                                                        (cpu_rw_size==3'b010)?{{32{1'b1}},{96{1'b0}}} :  //sw
                                                        (cpu_rw_size==3'b011)?{{64{1'b1}},{64{1'b0}}} :  //sd
                                                        128'b0 :
                                   {128{1'b1}};

assign  rw_offset  =(~cache_offset[3])  ?1'b0 : 1'b1 ;   


reg [20:0] cache_tag_ram [127:0][7:0]; //tag 寄存器堆
reg        cache_v_ram   [127:0][7:0]; //tag  V  标识数据是否为dirty的

wire        device    ;     //指示本次地址访问的是否为外设
assign      device    =  (cache_tag[20:16]>'b10001)?1'b1 :1'b0;   // 80000000---87FFFFFF  为访问程序内存     device 为1时 视为访问外设



reg [127:0] write_back_data;  //需要回写的数据
reg [27:0]  write_back_addr;


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



//写DRAM =  axi读后cache写，读DRAM= axi读或cache读   读写外设=axi读写  返回数据=axi写
//解耦后  写状态机控制 写外设和返回数据    读状态机控制 读写dram和读外设

reg bust_rd;  //axi bust rd计数
reg [2:0] rd_state;  //cache状态机
reg [2:0] rd_next_state;

reg [2:0] wr_state;  //cache状态机

wire [63:0] cache_read_data;
assign cache_read_data = (~rw_offset)?ram_rd_data[tag_v_w][cache_index[6]][63:0]:ram_rd_data[tag_v_w][cache_index[6]][127:64];

wire [63:0]  cache_w_data;
assign cache_w_data = (~rw_offset) ? (rw_strb[63:0] &  cpu_write_data) : (rw_strb[127:64] &  cpu_write_data) ;//根据掩码 提取出需要的数据
wire [127:0] cache_write_data;
assign cache_write_data = (~rw_offset)?{64'b0,cpu_write_data}:{cpu_write_data,64'b0}; 

    always@(posedge clk)begin //状态机更新
      if(rst )begin
        rd_state <= `DCACHE_IDLE;
      end else begin
        rd_state <= rd_next_state;
      end
    end

    always@(*)begin //next state
      if(rst )begin
        rd_next_state  = `DCACHE_IDLE;
      end else begin
        case(rd_state) //状态机的控制 
        `DCACHE_IDLE: begin
          if(cpu_valid   & ~device) //读写内存
            rd_next_state = `DCACHE_INST;
          else if(cpu_valid  & (device & ~cpu_rw_en))  //读外设 不用等命中了直接访问AXI
            rd_next_state = `DCACHE_DEVICE;
          else 
            rd_next_state = `DCACHE_IDLE;
        end
        `DCACHE_INST:begin
          if(cpu_valid)
            rd_next_state = `DCACHE_CACHE;
          else
            rd_next_state = `DCACHE_IDLE;
        end
        `DCACHE_CACHE:begin
			    if(tag_v != 8'b00000000 ) //命中了就不用再读axi了
				    rd_next_state = `DCACHE_IDLE;
			    else 
				    rd_next_state = `DCACHE_RAM;
        end
        `DCACHE_RAM:begin
          if(axi_r_last_i )
            rd_next_state = `DCACHE_IDLE;
          else 
            rd_next_state = `DCACHE_RAM;
		    end

        default: begin 
          rd_next_state  = `DCACHE_IDLE;
        end
        endcase
      end
    end
    
    always@(posedge clk)begin //cache执行状态机
      if(rst )begin
			    cache_rd_ready<= 1'b0;
          axi_r_valid_o <= 1'b0;

          cache_hit     <= 64'b0;
          cache_miss    <= 64'b0;
      end else begin
        case(rd_state) 
        `DCACHE_IDLE: begin
          axi_r_valid_o   <= 1'b0;
          write_en        <= 8'b00000000;  //清空cache的写入开关
          write_data      <= 128'b0;
          cache_rd_ready  <= 1'b0;
          cpu_read_data   <= 0;  
          rw_strb_en      <= 0;
          if(cpu_valid & device & ~cpu_rw_en)begin    //读外设  直接发起AXI请求
              axi_r_valid_o <= 1'b1;
              axi_r_len_o   <= 8'd0;   //外设 不支持突发传输
              axi_r_addr_o  <= cpu_req_addr;    
          end 
          
        end
        `DCACHE_INST:begin  
          cache_rd_ready   <= 1'b0;
          cpu_read_data    <= 64'b0;
          rw_strb_en       <= 0;
        end
        `DCACHE_CACHE:begin //检查相关位置的TAG是否命中 如果命中 则从cache赋值
          if( ~cpu_rw_en & tag_v !=8'b00000000)begin //从命中部位读取数据
                  cpu_read_data <= (cache_read_data>> (cache_offset[2:0] *8));  //通过移位将数据对齐到合适的地址上
                  cache_rd_ready<= 1'b1;  
                  cache_hit     <= cache_hit+1;
                  $display("DCACHE hit  Read cache addr:%8h offset %h ,data:%16h ",cpu_req_addr,cache_offset,cache_read_data);
          end else if(cpu_rw_en & tag_v !=8'b00000000)begin      //写入cache 到命中的区域  同时将数据标记为dirty
                  write_en             [tag_v_w]              <= 1'b1;
                  write_data                                  <= (cache_write_data>> (cache_offset[2:0] *8));  //写回cache 8字节对齐
                  cache_tag_ram        [cache_index][tag_v_w] <= cache_tag;
                  cache_v_ram          [cache_index][tag_v_w] <= 1'b1;
                  cache_rd_ready                              <= 1'b1;   
                  cache_hit                                   <= cache_hit+1;
                  $display("DCACHE hit  Write cache addr:%8h offset %h ,data:%16h ",cpu_req_addr,cache_offset,cpu_write_data);
          end else begin
              //没有命中，发起AXI请求
              axi_r_valid_o   <= 1'b1;
              axi_r_len_o     <= 8'd1;
              axi_r_addr_o    <= {cpu_req_addr[31:4],4'b0000};
              rw_strb_en      <= 1'b1;
              cache_rd_ready  <= 1'b0;  
              cache_miss      <= cache_miss+1;
          end
        end
        `DCACHE_RAM:begin	//从AXI申请读数据

          if(axi_r_valid_o & axi_r_ready_i )begin
            if(axi_r_last_i )begin  //最后一次传输       //如果不是外设操作，需要根据dirty 装填需要回写的数据

                  if(~device)$display("Dcache not: %8h : %32h",cpu_req_addr,{axi_r_data_i,write_data[63:0]});
                  else $display("Dcache Read Device %8h",cpu_req_addr);

                  axi_r_valid_o        <= 1'b0;
                  axi_r_len_o          <= 8'b0; 
                  cpu_read_data        <= (~rw_offset & ~cpu_rw_en)?({write_data[63:0]}:{axi_r_data_i}>> (cache_offset[2:0] *8)) : 64'b0;  //更新接口数据
                  cache_rd_ready       <= 1'b1;
                  if(~device)begin
                    write_data         <= (~rw_offset & cpu_rw_en)?{axi_r_data_i,cpu_write_data} :
                                          (rw_offset  & cpu_rw_en)?{cpu_write_data,write_data[63:0]} :{axi_r_data_i,write_data[63:0]} ;  //写回cache
                    write_en             [cache_write_point]              <= 1'b1;
                    cache_tag_ram        [cache_index][cache_write_point] <= cache_tag;
                    cache_v_ram          [cache_index][cache_write_point] <= 1'b0;
                  end

            end else  begin
                  write_data[63:0]          <= axi_r_data_i;  //接收第一次bust的数据
            end
          end

		    end
        default: ;
        endcase
      end
    end

    always@(posedge clk)begin //状态机更新
      if(rst )begin
        wr_state <= `DCACHE_IDLE;
      end else begin
        case (wr_state)
          `DCACHE_IDLE: begin
            if(cpu_valid & device & cpu_rw_en)  //写外设
              wr_state <= `DCACHE_WTBACK;
            else if(cpu_valid & axi_r_last_i & write_en[cache_write_point])  //有需要回写的数据
              wr_state <= `DCACHE_WTBACK;
            else wr_state <=`DCACHE_IDLE;
          end
          `DCACHE_WTBACK:begin
            if(axi_w_last_i) 
              wr_state <= `DCACHE_IDLE;
            else wr_state <=`DCACHE_WTBACK;
          end
          default:;
        endcase

      end
    end

//在空闲时返回脏数据   基于解耦的axi接口， 负责设备写和返回脏数据操作
    always @(posedge clk)begin
      if(rst)begin
        axi_w_valid_o  <= 1'b0;
        axi_w_data_o   <= 64'b0;
        axi_w_addr_o   <= 32'b0;
        axi_w_size_o   <= 3'b0;
        cache_wr_ready <= 1'b0;
      end else begin
        case (wr_state)
        `DCACHE_IDLE:begin
          cache_wr_ready <= 1'b0;
          axi_w_valid_o  <= 1'b0;
          axi_w_data_o   <= 64'b0;
          axi_w_addr_o   <= 32'b0;
          axi_w_size_o   <= 3'b0;
            if(cpu_valid & device & cpu_rw_en)begin  //写外设
              axi_w_valid_o<= 1'b1;
              axi_w_data_o <= cpu_write_data;
              axi_w_addr_o <= cpu_req_addr;   //写外设不用对齐
              axi_w_len_o  <= 'b0;            //写外设不用突发传输
              axi_w_size_o <= cpu_rw_size;
            end
            else if(cpu_valid & axi_r_last_i & write_en[cache_write_point])begin  //有需要回写的数据
              axi_w_valid_o    <= 1'b1;
              write_back_data  <=ram_rd_data  [cache_write_point][cache_index[6]]  ; 
              //write_back_addr  <={cache_tag_ram[cache_index][cache_write_point],cache_index};
              axi_w_data_o     <= ram_rd_data[cache_write_point][cache_index[6]][63:0] ;
              axi_w_addr_o     <= {cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0};   
              axi_w_len_o      <= 'd1;
              axi_w_size_o     <= `BUST_8;
            end
        end
        `DCACHE_WTBACK:begin
          if(axi_w_valid_o & axi_w_ready_i)begin
            if(axi_w_last_i)begin
              axi_w_data_o  <= 64'b0;
              axi_w_addr_o  <= 32'b0;
              axi_w_valid_o <= 1'b0;
              axi_w_len_o   <= 8'b0;
              cache_wr_ready<= (device==1'b1)? 1'b1 : 1'b0;
              $display("Dcache wtback succful: %8h ",axi_w_addr_o);
            end else begin
              axi_w_data_o  <= write_back_data[127:64];
              axi_w_valid_o <= 1'b1;
              cache_wr_ready<= 1'b0;
            end
          end
        end
        default:;
        endcase
      end
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