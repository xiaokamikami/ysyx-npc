module ysyx_22041412_mcsr(
     input clk,
     input rst,

     input en,
     input [63:0]pc,
     input [2:0]addr,
     input [2:0]func3,
     input [63:0]data_i,
     output [63:0]data_o,

     input  valid_i,
     output reg ready_o
 );

            // 0:mert
            // 1:ecall
            // 2:mstatus
            // 3:mtvec
            // 4:mepc
            // 5:mcause

reg [63:0]mcsr_reg[5:0];



import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
initial set_csr_ptr(mcsr_reg);  //read gpr


reg [63:0]data_r;           
reg [63:0]data_w;           //待写入
wire [63:0]data;           
assign data=mcsr_reg[addr];
assign data_o=data_r;


always @(posedge clk) begin
    if(rst) begin
        mcsr_reg[2] = 64'ha00001800;
    end 
    else if(en& !ready_o & func3!='b000 )begin
        data_r<=mcsr_reg[addr];
        if(func3=='b001 | func3=='b101) data_w<=data_i;
        else if(func3=='b010 | func3=='b110) data_w<=data|data_i;
        else if(func3=='b011 | func3=='b111) data_w<=data& (~data_i);
        ready_o<=1'b1;
        //$display("\033[1;36mMcsr PC:%8h  Read:%h  addr:%d  data_i:%h  func3:%d\033[0m",pc,mcsr_reg[addr],addr,data_i,func3);
    end
    else if(en& !ready_o & addr=='b001 )begin
        mcsr_reg[4]<=pc;
        mcsr_reg[5]<='h000b;
        data_r<=mcsr_reg[3];
        ready_o<=1'b1;
        //$display("PC:%8h call %h",pc,mcsr_reg[3]);
    end
    else if(en& !ready_o & addr=='b000 )begin
        data_r<=mcsr_reg[4];
        ready_o<=1'b1;
        //$display("PC:%8h mert %h",pc,mcsr_reg[4]);
    end
    // else if( ) begin    //write csr reg

    //     //$display("PC:%8h  write %h  addr:%d",pc,data_w,addr);
    // end
    else if(valid_i)begin
        ready_o<=1'b0;
        data_r<=64'b0;
    end

end
   always @(posedge clk)begin
     if(rst)begin
     end else if(en & func3!='b000 & ready_o & valid_i)begin
        mcsr_reg[addr]<=data_w;
     end
   end
endmodule

