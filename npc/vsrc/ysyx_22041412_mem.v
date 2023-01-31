module ysyx_22041412_mem(
    input clk,
    input [63:0]Addr,
	 output reg [31:0]Imm
 );
 reg [31:0]ImmMemory[134217727:0];     // 512K
 initial begin
    //$readmemh("resource/imm.bin", ImmMemory);
    $readmemh("resource/Imm_init.hex", ImmMemory);
 end
 always @(*) begin
    Imm = ImmMemory[Addr[26:0]];
 end
endmodule
