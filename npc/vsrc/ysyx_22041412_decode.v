`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_decode(
	input [31:0]instr,
	output [6:0]opcode,
	output [2:0]func3,
	output func7,
	output [4:0]Rs1,
	output [4:0]Rs2,
	output [4:0]Rd,
	output [63:0]imme,
	output [3:0]Type
	);
	 
	wire I_type;
	wire U_type;
	wire J_type;
	wire B_type;
	wire S_type;
	wire [63:0]I_imme;
	wire [63:0]U_imme;
	wire [63:0]J_imme;
	wire [63:0]B_imme;
	wire [63:0]S_imme;
	
	
	assign opcode=instr[6:0];
	assign func3=instr[14:12];
	assign func7=instr[30];
	assign Rs1=instr[19:15];
	assign Rs2=instr[24:20];
	assign Rd =instr[11:7];
	
	assign I_type=(instr[6:0]==`ysyx_22041412_jalr) | (instr[6:0]==`ysyx_22041412_load) | (instr[6:0]==`ysyx_22041412_I_type);
	assign U_type=(instr[6:0]==`ysyx_22041412_lui) | (instr[6:0]==`ysyx_22041412_auipc);
	assign J_type=(instr[6:0]==`ysyx_22041412_jal) | (instr[6:0]==`ysyx_22041412_ebreak);
	assign B_type=(instr[6:0]==`ysyx_22041412_B_type);
	assign S_type=(instr[6:0]==`ysyx_22041412_store);

	assign Type= I_type?(instr[6:0]==`ysyx_22041412_jalr)?4'b1011:4'b0001 :
				 U_type?4'b0010 :
				 B_type?4'b0011 :
				 S_type?4'b0100 :
				 J_type?4'b1011 : 4'b0000;
						
	assign I_imme={{52{instr[31]}},instr[31:20]}; 
	assign U_imme={{32{instr[31]}},instr[31:12],{12{1'b0}}};
	assign J_imme={{44{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0};   
	assign B_imme={{52{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};
	assign S_imme={{59{instr[31]}},instr[11:7]}; 

	assign imme= I_type?I_imme :
				 U_type?U_imme :
				 J_type?J_imme :
				 B_type?B_imme :
				 S_type?S_imme : 64'b0;


endmodule

