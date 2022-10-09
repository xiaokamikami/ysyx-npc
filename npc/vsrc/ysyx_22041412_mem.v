module ysyx_22041412_mem(
    input clk,
    input en,
    input [63:0]Addr,
	 output [31:0]Imm
 );
 reg [31:0]ImmMemory[134217727:0];     // 512K
 reg [31:0]Immaddr;
 initial begin
    //$readmemh("resource/test.txt", ImmMemory);
    $readmemh("resource/Imm_init.hex", ImmMemory);
 end
 always@(posedge clk)
  begin 
   if(en)
    Immaddr <= ImmMemory[Addr[26:0]];
  end  
 
 assign Imm = en?32'd0:Immaddr;

endmodule
