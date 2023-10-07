// 组相连cache  每组128行
// 由于RAM模型是128bit*64的，所以每路需要两个RAM作拼接
// cache 大小为16kb  能容纳 1024个块  块大小为16B
// index位宽= 2log(64) =  6
// 每个cache块都可放到组号为(tag % 组数)中的任意行

//2023/9/23  为了满足五期要求，从16KB减为8KB
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
`define DCACHE_CACHE        3'b001
`define DCACHE_WTBACK       3'b001

`define DCACHE_DEVICE       3'b010
`define DCACHE_RAM          3'b010  
`define DCACHE_W_CACHE      3'b100


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
reg  [127:0]  write_data;
reg  [127:0]  wrtie_strb;
reg  [3:0]    write_en  ;

reg           rw_strb_en;
wire [127:0]  rw_strb;  //写cache掩码 
wire [63:0]   rw_strb_64; //8字节对齐的掩码
wire          rw_offset;
wire [127:0]  ram_rd_data [3:0][1:0];   //CACHE读数据

//掩码计算
assign  rw_offset  =cache_offset[3];   
  //通过掩码控制写入的数据长度    
assign  rw_strb_64 = (cpu_rw_size==3'b000)?{{56{1'b0}},{8{1'b1}}}  <<cache_offset[2:0]*8:  //sb
                     (cpu_rw_size==3'b001)?{{48{1'b0}},{16{1'b1}}} <<cache_offset[2:0]*8:  //sh
                     (cpu_rw_size==3'b010)?{{32{1'b0}},{32{1'b1}}} <<cache_offset[2:0]*8:  //sw
                     (cpu_rw_size==3'b011)?{64{1'b1}}              <<cache_offset[2:0]*8:  //sd
                     {64{1'b0}} ;                        
assign  rw_strb   = (~rw_strb_en) ? (~cache_offset[3]) ? {{64{1'b0}},rw_strb_64}:  //低64位
                                                         {rw_strb_64,{64{1'b0}}}:  //高64位
                                   {128{1'b1}};

wire [63:0] cache_read_data;
assign cache_read_data = (~rw_offset)?ram_rd_data[tag_v_w][cache_index[6]][63:0]:ram_rd_data[tag_v_w][cache_index[6]][127:64];

wire [127:0] cache_write_data;
assign cache_write_data = (~rw_offset)?{{64{1'b0}},cpu_write_data}:{cpu_write_data,{64{1'b0}}}; 




// TAG + V + D 
reg [20:0] cache_tag_ram [127:0][3:0]; //tag 寄存器堆
reg [1:0]  cache_fwen_ct [127:0][3:0]; //tag 访问计数
reg        cache_v_ram   [127:0][3:0]; //tag  V  标识数据是否有效
reg        cache_d_ram   [127:0][3:0]; //tag  D  标识数据是否为dirty的
wire        device    ;     //指示本次地址访问的是否为外设
assign      device    =  (cache_tag[20:13]>='b1000_0011)?1'b1 :1'b0;   // 80000000---87FFFFFF  为访问程序内存     device 为1时 视为访问外设



reg [63:0] write_back_data;  //需要回写的数据
reg [27:0] write_back_addr;


genvar index; //生成存储器    与ICACHE不同的是 需要加入写掩码引脚
generate
    for(index=0; index<4; index=index+1) //例化16个1k ram模块    
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

reg [3:0] tag_v;	 //命中位置
wire[1:0]tag_v_w;  //译码到二进制的命中位置

    always @(*) begin  //命中判断
      if(rst)begin
        tag_v = 4'b0000;
      end else if(cpu_valid)begin
        tag_v = { (cache_tag_ram[cache_index][2'd3]==cache_tag ),(cache_tag_ram[cache_index][2'd2]==cache_tag ),
                  (cache_tag_ram[cache_index][2'd1]==cache_tag ),(cache_tag_ram[cache_index][2'd0]==cache_tag )};
      end else begin
        tag_v = 4'b0000;
      end
    end
    assign  tag_v_w =   (tag_v== 'b0001) ?'d0 :
                        (tag_v== 'b0010) ?'d1 :
                        (tag_v== 'b0100) ?'d2 : 
                        (tag_v== 'b1000) ?'d3 : 'd0 ;



//写DRAM =  axi读后cache写，读DRAM= axi读或cache读   读写外设=axi读写  返回数据=axi写
//解耦后  写状态机控制 写外设和返回数据    读状态机控制 读写dram和读外设

reg bust_rd;  //axi bust rd计数
reg [2:0] rd_state;  //cache状态机
reg [2:0] rd_next_state;

reg [2:0] wr_state;  //cache状态机


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
          if(cpu_valid   & ~device & ~cache_rd_ready) //读写内存
            rd_next_state = `DCACHE_CACHE;
          else if(cpu_valid  & (device & ~cpu_rw_en) & ~cache_rd_ready )  //读外设 不用等命中了直接访问AXI
            rd_next_state = `DCACHE_RAM;
          else 
            rd_next_state = `DCACHE_IDLE;
        end
        // `DCACHE_INST:begin
        //   if(cpu_valid)
        //     rd_next_state = `DCACHE_CACHE;
        //   else
        //     rd_next_state = `DCACHE_IDLE;
        // end
        `DCACHE_CACHE:begin
			    if(tag_v != 4'b0000 ) //命中了就不用再读axi了
				    rd_next_state = `DCACHE_IDLE;
			    else if(~axi_w_valid_o)
				    rd_next_state = `DCACHE_RAM;
          else rd_next_state =  `DCACHE_CACHE;
        end
        `DCACHE_RAM:begin
          if(axi_r_last_i & (device || ~cpu_rw_en) )
            rd_next_state = `DCACHE_IDLE;
          else if(axi_r_last_i & cpu_rw_en & ~device)
            rd_next_state = `DCACHE_W_CACHE; 
          else 
            rd_next_state = `DCACHE_RAM;
		    end
        `DCACHE_W_CACHE:begin
            rd_next_state = `DCACHE_IDLE;
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
          write_en        <= 4'b0000;  //清空cache的写入开关
          write_data      <= 128'b0;
          cache_rd_ready  <= 1'b0;
          cpu_read_data   <= 0;  
          rw_strb_en      <= 0;
          if(cpu_valid & device & ~cpu_rw_en & ~cache_rd_ready )begin    //读外设  直接发起AXI请求
              axi_r_valid_o <= 1'b1;
              axi_r_len_o   <= 8'd0;   //外设 不支持突发传输
              axi_r_addr_o  <= cpu_req_addr;    
          end 
          
        end
        `DCACHE_CACHE:begin //检查相关位置的TAG是否命中 如果命中 则从cache赋值
          if(tag_v !=4'b0000)begin      //操作命中的区域  如写则将数据标记为dirty
                  cpu_read_data                               <= (~cpu_rw_en)?(cache_read_data >> (cache_offset[2:0] *8)) :0;  //通过移位将数据对齐到合适的地址上
                  write_en             [tag_v_w]              <= cpu_rw_en;
                  write_data                                  <= cpu_rw_en   ?(cache_write_data<< (cache_offset[2:0] *8)) :0;  //写回cache 8字节对齐
                  cache_d_ram          [cache_index][tag_v_w] <= cpu_rw_en ? 1'b1 : cache_d_ram          [cache_index][tag_v_w];
                  cache_rd_ready                              <= 1'b1;   
                  cache_hit                                   <= cache_hit+1;

//近期最少使用计数
            cache_fwen_ct[cache_index][0] <=(tag_v_w=='d0 && cache_fwen_ct[cache_index][0]!='b00) ?cache_fwen_ct[cache_index][0]-1'b1:
                                            (tag_v_w!='d0 && cache_fwen_ct[cache_index][0]!='b11) ?cache_fwen_ct[cache_index][0]+1'b1:cache_fwen_ct[cache_index][0];

            cache_fwen_ct[cache_index][1] <=(tag_v_w=='d1 && cache_fwen_ct[cache_index][1]!='b00) ?cache_fwen_ct[cache_index][1]-1'b1:
                                            (tag_v_w!='d1 && cache_fwen_ct[cache_index][1]!='b11) ?cache_fwen_ct[cache_index][1]+1'b1:cache_fwen_ct[cache_index][1];
                                            
            cache_fwen_ct[cache_index][2] <=(tag_v_w=='d2 && cache_fwen_ct[cache_index][2]!='b00) ?cache_fwen_ct[cache_index][2]-1'b1:
                                            (tag_v_w!='d2 && cache_fwen_ct[cache_index][2]!='b11) ?cache_fwen_ct[cache_index][2]+1'b1:cache_fwen_ct[cache_index][2];
                                            
            cache_fwen_ct[cache_index][3] <=(tag_v_w=='d3 && cache_fwen_ct[cache_index][3]!='b00) ?cache_fwen_ct[cache_index][3]-1'b1:
                                            (tag_v_w!='d3 && cache_fwen_ct[cache_index][3]!='b11) ?cache_fwen_ct[cache_index][3]+1'b1:cache_fwen_ct[cache_index][3]; 

                  //if(~cpu_rw_en)$display("\033[1;34mDCACHE hit  Read  addr:%8h offset %h size %h ,data:%16h \033[0m",cpu_req_addr,cache_offset,cpu_rw_size,cache_read_data);         
                  //else$display("\033[1;35mDCACHE hit  Write addr:%8h offset %h size %h ,data:%32h \033[0m",cpu_req_addr,cache_offset,cpu_rw_size,cache_write_data<< (cache_offset[2:0] *8));
          end else if(~axi_w_valid_o)begin
              //没有命中且数据返回完毕，发起AXI请求
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

                  //if(~device)$display("Dcache get  AXI4  %8h offset %h : %32h",cpu_req_addr,cache_offset,{axi_r_data_i,write_data[63:0]});
                  //if(cache_d_ram [cache_index][cache_write_point]==1'b1) $display("\33[1;31mDcache dirty data %8h : %32h\033[0m",{cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0},ram_rd_data  [cache_write_point][cache_index[6]]);
                  //if(device) $display("Dcache Read Device %8h",cpu_req_addr);

                  axi_r_valid_o        <= 1'b0;
                  axi_r_len_o          <= 8'b0; 
                  cpu_read_data        <= (device)?axi_r_data_i:
                                          (~rw_offset & ~cpu_rw_en)?( write_data[63:0]>> (cache_offset[2:0] *8)) :
                                          (rw_offset  & ~cpu_rw_en)?( axi_r_data_i    >> (cache_offset[2:0] *8)) : 64'b0;  //更新接口数据
                  axi_r_addr_o         <= 32'b0;
                  cache_rd_ready       <= (device || ~cpu_rw_en)?1'b1 : 1'b0;
                  cache_fwen_ct        [cache_index][cache_write_point] <= 2'b00;
                  if(~device)begin
                    write_data         <= {axi_r_data_i,write_data[63:0]} ;  //写回cache
                    write_en             [cache_write_point]              <= 1'b1;
                    cache_tag_ram        [cache_index][cache_write_point] <= cache_tag;
                    cache_v_ram          [cache_index][cache_write_point] <= 1'b1;
                    cache_d_ram          [cache_index][cache_write_point] <= (cpu_rw_en)?1'b1:1'b0;
                  end

            end else  begin
                  write_data[63:0]          <= axi_r_data_i;  //接收第一次bust的数据
            end
          end
		    end
        `DCACHE_W_CACHE:begin
          //$display("Dcache axi write cache: %8h offset %h : %32h ",cpu_req_addr,cache_offset,cache_write_data);
          write_data         <= (cache_write_data<< (cache_offset[2:0] *8)); ;  //写回cache
          rw_strb_en         <= 1'b0;
          cache_rd_ready     <= 1'b1;
        end

        default: ;
        endcase
      end
    end


    //针对某一个地址的调试器
/*       wire[31:0] debug_addr = 'h81b75f40;
    always @(posedge clk) begin
      if({cpu_req_addr[31:4],{4{1'b0}}} == debug_addr& cpu_rw_en & tag_v !=8'b00000000) 
        $display("\33[1;33mDcache tag  write addr: %8h data:%32h\033[0m",cpu_req_addr , cache_write_data);
      else if({cpu_req_addr[31:4],{4{1'b0}}} ==debug_addr & ~cpu_rw_en & tag_v !=8'b00000000) 
        $display("\33[1;33mDcache tag  read addr: %8h data:%32h\033[0m",cpu_req_addr , cache_read_data);    
      else if({cpu_req_addr[31:4],{4{1'b0}}} ==debug_addr & axi_r_last_i )
        $display("\33[1;31mDcache get  AXI4  %8h offset %h : %32h\033[0m",cpu_req_addr,cache_offset,{axi_r_data_i,write_data[63:0]});
      else if({cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0} ==debug_addr & axi_r_valid_o & cache_d_ram [cache_index][cache_write_point])
        $display("\33[1;31mDcache tag  tihuan start addr: %8h data:%32h\033[0m",{cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0} , ram_rd_data  [cache_write_point][cache_index[6]]);
      else if(axi_w_addr_o ==debug_addr & axi_w_ready_i)
        $display("\33[1;31mDcache tag  tihuan succful: %8h data:%16h\033[0m",axi_w_addr_o , axi_w_data_o);
    end  
 */
    always@(posedge clk)begin //状态机更新
      if(rst )begin
        wr_state <= `DCACHE_IDLE;
      end else begin
        case (wr_state)
          `DCACHE_IDLE: begin
            if(cpu_valid & device & cpu_rw_en & ~cache_wr_ready)  //写外设
              wr_state <= `DCACHE_DEVICE;
            else if(cpu_valid & axi_r_valid_o & cache_d_ram [cache_index][cache_write_point])  //有需要回写的数据
              wr_state <= `DCACHE_WTBACK;
            else 
              wr_state <= `DCACHE_IDLE;
          end
          `DCACHE_WTBACK:begin
            if(axi_w_ready_i & axi_w_last_i) 
              wr_state <= `DCACHE_IDLE;
            else wr_state <=`DCACHE_WTBACK;
          end
          `DCACHE_DEVICE:begin
            if(axi_w_ready_i & axi_w_last_i) 
              wr_state <= `DCACHE_IDLE;
            else 
              wr_state <= `DCACHE_DEVICE; 
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
            if(cpu_valid & device & cpu_rw_en & ~cache_wr_ready)begin  //写外设
              axi_w_valid_o<= 1'b1;
              axi_w_data_o <= cpu_write_data;
              axi_w_addr_o <= cpu_req_addr;   //写外设不用对齐
              axi_w_len_o  <= 'b0;            //写外设不用突发传输
              axi_w_size_o <= cpu_rw_size;
              //$display("\33[1;33mDcache waite device \033[0m" );
            end
            else if(cpu_valid & axi_r_valid_o & cache_d_ram [cache_index][cache_write_point])begin  //有需要回写的数据   在发起AXI读请求时就决定了替换对象，所以提前写回数据
              axi_w_valid_o    <= 1'b1;
              //write_back_addr  <={cache_tag_ram[cache_index][cache_write_point],cache_index};
              {write_back_data,axi_w_data_o}     <= ram_rd_data[cache_write_point][cache_index[6]] ;
              axi_w_addr_o     <= {cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0};   
              axi_w_len_o      <= 'd1;
              axi_w_size_o     <= `BUST_8;
              //$display("\33[1;31mDcache wtback start: %8h data:%32h\033[0m",{cache_tag_ram[cache_index][cache_write_point] ,cache_index ,4'b0} , ram_rd_data  [cache_write_point][cache_index[6]]);
            end else begin
              cache_wr_ready <= 1'b0;
              axi_w_valid_o  <= 1'b0;
              axi_w_data_o   <= 64'b0;
              axi_w_addr_o   <= 32'b0;
              axi_w_size_o   <= 3'b0;
            end
        end
        `DCACHE_WTBACK:begin
          if( axi_w_ready_i & ~axi_w_last_i )begin
              axi_w_data_o  <= write_back_data;
              axi_w_valid_o <= 1'b1;
          end else if(axi_w_ready_i & axi_w_last_i )begin
              axi_w_valid_o  <= 1'b0;
              axi_w_data_o   <= 64'b0;
              axi_w_addr_o   <= 32'b0;
              axi_w_size_o   <= 3'b0;     
              //$display("\33[1;33mDcache wtback succful: %8h data:%32h\033[0m",axi_w_addr_o , axi_w_data_o);         
            end

        end
        `DCACHE_DEVICE:begin
          if(axi_w_ready_i)begin
              axi_w_data_o  <= 64'b0;
              axi_w_addr_o  <= 32'b0;
              axi_w_valid_o <= 1'b0;
              axi_w_len_o   <= 8'b0;
              cache_wr_ready<= 1'b1;
              //$display("\33[1;33mDcache waite device \033[0m" );
          end //else               $display("\33[1;33mDcache waite device error \033[0m" );
        end
        default:;
        endcase
      end
    end




wire [1:0] cache_write_point;
reg  [1:0] cache_write_point_l1;
reg  [1:0] cache_rodom_cnt;
//assign cache_write_point = cache_rodom_cnt;

// //没存满数据的话，先存空的line  评价为没啥用
// assign cache_write_point  = (~cache_v_ram[cache_index][0]) ? 3'd0 :
//                             (~cache_v_ram[cache_index][1]) ? 3'd1 :
//                             (~cache_v_ram[cache_index][2]) ? 3'd2 :
//                             (~cache_v_ram[cache_index][3]) ? 3'd3 :
//                             (~cache_v_ram[cache_index][4]) ? 3'd4 :
//                             (~cache_v_ram[cache_index][5]) ? 3'd5 :
//                             (~cache_v_ram[cache_index][6]) ? 3'd6 :
//                             (~cache_v_ram[cache_index][7]) ? 3'd7 : cache_rodom_cnt;

// 替换最近不常用数据，如果没有，那就随机替换   在循环跑分测试中效果不好  对真实任务有效
assign cache_write_point  = (cache_fwen_ct[cache_index][0] > (cache_fwen_ct[cache_index][1] & cache_fwen_ct[cache_index][2]  & 
                                                              cache_fwen_ct[cache_index][3] )) ? 2'd0  :
                            (cache_fwen_ct[cache_index][1] > (cache_fwen_ct[cache_index][2] & cache_fwen_ct[cache_index][3] ) ) ? 2'd1  :
                            (cache_fwen_ct[cache_index][2] > cache_fwen_ct[cache_index][3] ) ? 2'd2  : 2'd3  ;
//伪随机替换计数器
always @(posedge clk) begin
  if(rst)begin
    cache_rodom_cnt <= 0;
  end else if(~axi_r_valid_o) begin
    cache_rodom_cnt <= cache_rodom_cnt+1;
  end 
end





endmodule