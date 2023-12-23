module ysyx_22041412_mcsr(
     input clk,
     input rst,

     input         en,
     input  [63:0] pc,
     input  [3:0]  addr,
     input  [2:0]  func3,
     input  [63:0] data_i,
     output reg[63:0] data_o,
     output [31:0] mtvec_o, //tarp入口地址
     output        interrupt_mtime_en,
     input         interrupt_tag_i,

     output        interrupt_accept,// to core
     input         interrupt_accepted,// core acpt interrupt

     input         valid_i,
     output reg    ready_o
 );

            // 0:mret
            // 1:ecall
            // 2:mstatus
            // 3:mtvec
            // 4:mepc
            // 5:mcause
localparam mstatus = 'h1;
localparam mie     = 'h2;
localparam mtvec   = 'h3;
localparam mepc    = 'h4;
localparam mcause  = 'h5;
localparam mip     = 'h6;

localparam ecall   = 'hb;
localparam mret    = 'hc;
//    mstatus, mie, mtvec , mepc, mcause, mip
reg [63:0]mcsr_reg[7:0];

assign interrupt_mtime_en = mcsr_reg[mie][7];//使能mtime
assign mtvec_o            = mcsr_reg[mtvec][31:0];
import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
initial set_csr_ptr(mcsr_reg);  //read gpr

wire [2:0]addr_r = addr[2:0];
wire [63:0]data_r;
reg  [63:0]data_w;           //待写入

assign interrupt_accept = ~csr_busy & mcsr_reg[mie][7] & mcsr_reg[mip][7];
always @(*) begin
    if(en)begin
        data_o  = data_r;
        ready_o = 1'b1;
    end 
    else if(interrupt_tag_i & mcsr_reg[mie][7])begin
        data_o  = mcsr_reg[mtvec];
        ready_o = 1'b0; 
    end
    else begin
        data_o  = 64'b0;
        ready_o = 1'b0; 
    end
end
reg csr_busy;
always @(posedge clk) begin
    if(rst) begin
        mcsr_reg[mstatus] <= 64'ha00001800;
        write_en          <= 1'b0;
        csr_busy          <= 1'b0;
    end
    else if(en) begin // 异常指令处理
        if(func3!='b000 )begin
            if(func3=='b001 | func3=='b101) data_w <= data_i;
            else if(func3=='b010 | func3=='b110) data_w <= data_r|data_i;
            else if(func3=='b011 | func3=='b111) data_w <= data_r& (~data_i);
            write_en <=1'b1;
            w_addr   <=addr_r;
            //$display("\033[1;36mMcsr PC:%8h  Read:%h  addr:%d   data_r:%h data_i:%h  func3:%d\033[0m",pc,mcsr_reg[addr_r],addr,data_r,data_i,func3);
        end
        else if(addr==ecall )begin//ecall
            mcsr_reg[mepc]  <=pc;
            mcsr_reg[mcause]<='h000b;
            write_en        <=1'b0;
            csr_busy        <=1'b1;
            //$display("PC:%8h ecall",pc);
        end
        else if(addr==mret )begin//mret
            write_en        <=1'b0;
            csr_busy        <=1'b0;
            if(interrupt_accept)begin
                mcsr_reg[mstatus][7] <= 1'b0;//clear mpie
                mcsr_reg[mstatus][3] <= 1'b1;//set mie
                mcsr_reg[mcause]     <= 64'h0; //set cause of mtime interrupt
                mcsr_reg[mip][7]     <= 1'b0;// 取消挂起的mtime中断 
            end
            //$display("PC:%8h mert %h",pc,mcsr_reg[4]);
        end
    end
    //中断相关  待优化
    else if(~csr_busy & interrupt_tag_i & mcsr_reg[mie][7] & ~interrupt_accept)begin // MTIME INTERRUPT
        mcsr_reg[mstatus][3] <= 1'b0;//clear mie
        mcsr_reg[mstatus][7] <= 1'b1;//set mpie
        mcsr_reg[mcause]     <= 64'h8000000000000007; //set cause of mtime interrupt
        mcsr_reg[mip][7]     <= 1'b1;// 挂起mtime中断
    end else if(interrupt_accepted) begin//core 接管中断 记录mepc
        mcsr_reg[mepc]   <= data_i;
        //$display("get set mepc %h",data_i);
    end

    else begin
        write_en    <=1'b0;    
        w_addr      <=3'b0;
    end
end




reg write_en;
reg [2:0]w_addr;

always@(posedge clk)begin
	if(write_en)begin
		mcsr_reg[w_addr] <= data_w;
        //$display("PC:%8h write csr id%h  %h",pc,w_addr,data_w); 
  	end
end
assign data_r= mcsr_reg[addr_r];

endmodule

