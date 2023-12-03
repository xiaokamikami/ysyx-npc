module ysyx_22041412_mcsr(
     input clk,
     input rst,

     input en,
     input [63:0]pc,
     input [3:0]addr,
     input [2:0]func3,
     input [63:0]data_i,
     output [63:0]data_o,

     input  valid_i,
     //input  interrupt_id,
     output reg ready_o
 );

            // 0:mret
            // 1:ecall
            // 2:mstatus
            // 3:mtvec
            // 4:mepc
            // 5:mcause
localparam mstatus = 1;
localparam mie     = 2;
localparam mtvec   = 3;
localparam mepc    = 4;
localparam mcause  = 5;
localparam mip     = 6;


localparam ecall   = 10;
localparam mret    = 11;
//    mstatus, mie, mtvec , mepc, mcause, mip
reg [63:0]mcsr_reg[7:0];



import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
initial set_csr_ptr(mcsr_reg);  //read gpr


reg [63:0]data_r;           
reg [63:0]data_w;           //待写入
wire [63:0]data;           
assign data=mcsr_reg[addr[2:0]];
assign data_o=data_r;


always @(posedge clk) begin
    if(rst) begin
        mcsr_reg[mstatus] = 64'ha00001800;
    end
    else if(en) begin
        if(!ready_o & func3!='b000 )begin
            data_r <= data;
            if(func3=='b001 | func3=='b101) data_w <= data_i;
            else if(func3=='b010 | func3=='b110) data_w <= data|data_i;
            else if(func3=='b011 | func3=='b111) data_w <= data& (~data_i);
            ready_o<=1'b1;
            //$display("\033[1;36mMcsr PC:%8h  Read:%h  addr:%d   data_r:%h data_i:%h  func3:%d\033[0m",pc,mcsr_reg[addr[2:0]],addr,data,data_i,func3);
        end
        else if(!ready_o & addr==ecall )begin//mret
            mcsr_reg[mepc]  <=pc;
            mcsr_reg[mcause]<='h000b;
            data_r          <=mcsr_reg[mtvec];
            ready_o         <=1'b1;
            //$display("PC:%8h ecall",pc);
        end
        else if(!ready_o & addr==mret )begin//ecall
            data_r <=mcsr_reg[mepc];
            ready_o<=1'b1;
            //$display("PC:%8h mert %h",pc,mcsr_reg[4]);
        end 
        else if(valid_i)begin
            ready_o <=1'b0;
            data_r  <=64'b0;
        end
    end
    else if(valid_i)begin
        ready_o <=1'b0;
        data_r  <=64'b0;
    end

    if(en & func3!='b000 & ready_o & valid_i)begin
        mcsr_reg[addr[2:0]]<=data_w;
        //$display("PC:%8h write csr id%h  %h",pc,addr[2:0],data_w);
    end
end

endmodule

