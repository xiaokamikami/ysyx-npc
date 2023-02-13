module ysyx_22041412_mem(
    input clk,
    input [63:0]Addr,
	 output [31:0]Imm
 );
 //reg [31:0]ImmMemory[134217727:0];     // 512K
 initial begin
    //$readmemh("resource/Imm.bin", ImmMemory);
    //$readmemh("resource/Imm_init.hex", ImmMemory);
 end


import "DPI-C" function void ram_read(
  input longint raddr, output int rdata);


reg[31:0]imm_data;
assign Imm = imm_data;

 always @(posedge clk) begin
  ram_read(Addr,imm_data);
 end
endmodule
