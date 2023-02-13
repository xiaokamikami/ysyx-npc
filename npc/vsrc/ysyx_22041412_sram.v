module ysyx_22041412_sram(
    input clk,
    input [63:0]Addr,
    input ready_i,
   output valid_o,
	 output [31:0]Imm
 );
reg valid;
assign valid_o = valid;
 //reg [31:0]ImmMemory[134217727:0];     // 512K
initial begin
  valid=1;
    //$readmemh("resource/Imm.bin", ImmMemory);
    //$readmemh("resource/Imm_init.hex", ImmMemory);
end


import "DPI-C" function void ram_read(
  input longint raddr, output int rdata);

reg[31:0]imm_data;
assign Imm = imm_data;

 always @(posedge clk) begin
  if(ready_i==1'b1) begin
    ram_read(Addr,imm_data);

  end

 end
endmodule
