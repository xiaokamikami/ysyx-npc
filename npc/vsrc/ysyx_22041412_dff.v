module ysyx_22041412_dff(
     input clk,
	 input [4:0]Ra,
	 input [4:0]Rb, 
	 input [4:0]Rw,
	 input Wen,
	 output [63:0]BusA,
	 output [63:0]BusB,
	 input [63:0]BusW,
	 input rst
 );
 reg [63:0]DataReg[31:0];
 /*   "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
 	  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  	  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
 	  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6" */
import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(DataReg);  //read gpr

wire write_en;
assign write_en = (!rst & Wen & Rw!=5'b0)?1:0;

always@(posedge clk)begin
	//if(rst==1'b0)begin
		//if(Wen & Rw!=5'b0)begin
		if(write_en)begin
			DataReg[Rw] <= BusW;
        	//$display("%lx  Write: addr:%d %16h",Rw,BusW);     //µ÷ÊÔ½Ó¿Ú
		
  	end
end
 assign BusA = (Ra==5'b0)?64'd0:DataReg[Ra];
 assign BusB = (Rb==5'b0)?64'd0:DataReg[Rb];
 
endmodule
