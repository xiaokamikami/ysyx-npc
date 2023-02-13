module ysyx_22041412_mcsr(
     input clk,
     input en,
     input [63:0]pc,
     input [2:0]addr,
     input [2:0]func3,
     input [63:0]data_i,
     output [63:0]data_o,
     output ready_o
 );

            // 0:mert
            // 1:ecall
            // 2:mstatus
            // 3:mtvec
            // 4:mepc
            // 5:mcause

reg [63:0]mcsr_reg[5:0];
reg ready;
initial begin
    mcsr_reg[2] = 64'ha00001800;
end

import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
initial set_csr_ptr(mcsr_reg);  //read gpr


reg [63:0]data_r;           
reg [63:0]data_w;           //待写入
wire [63:0]data;           
assign data=mcsr_reg[addr];
assign data_o=data_r;

assign ready_o=ready;
always @(posedge clk) begin
    if(en& !ready & func3!='b000)begin
        data_r<=mcsr_reg[addr];
        if(func3=='b001 | func3=='b101) data_w<=data_i;
        else if(func3=='b010 | func3=='b110) data_w<=data|data_i;
        else if(func3=='b011 | func3=='b111) data_w<=data& (~data_i);
        else data_w<=64'b0;
        ready<=1'b1;
        //$display("PC:%8h  Read:%h  addr:%d  data_i:%h  func3:%d",pc,data_r,addr,data_i,func3);
    end
    else if(en& !ready & addr=='b001)begin
        mcsr_reg[4]<=pc;
        mcsr_reg[5]<='h000b;
        data_r<=mcsr_reg[3];
        ready<=1'b1;
        //$display("PC:%8h call %h",pc,mcsr_reg[3]);
    end
    else if(en& !ready & addr=='b000)begin
        data_r<=mcsr_reg[4];
        ready<=1'b1;
        //$display("PC:%8h mert %h",pc,mcsr_reg[4]);
    end
    else if(en & ready & func3!='b000) begin    //�ӳ�һ��ִ��д��
        mcsr_reg[addr]<=data_w;
        ready<=1'b0;
        data_w<=64'b0;
        //$display("PC:%8h  write %h  addr:%d",pc,data_w,addr);
    end
    else begin
        ready<=1'b0;
        data_r<=64'b0;
    end

end

endmodule

