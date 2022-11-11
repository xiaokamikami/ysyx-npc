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
	output V1Type,
	output V2Type,
	output Mul_en
	//output Ram_en,
	//output Jup_en
	);

	wire I_type;
	wire U_type;
	wire J_type;
	wire B_type;
	wire S_type;
	wire R_type;
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
	
	assign I_type=(instr[6:0]==`ysyx_22041412_jalr) | (instr[6:0]==`ysyx_22041412_load) | (instr[6:0]==`ysyx_22041412_I_type)|(instr[6:0]==`ysyx_22041412_RV64_I);
	assign U_type=(instr[6:0]==`ysyx_22041412_lui) | (instr[6:0]==`ysyx_22041412_auipc);
	assign J_type=(instr[6:0]==`ysyx_22041412_jal) | (instr[6:0]==`ysyx_22041412_ebreak);
	assign B_type=(instr[6:0]==`ysyx_22041412_B_type);
	assign S_type=(instr[6:0]==`ysyx_22041412_store);
	assign R_type=(instr[6:0]==`ysyx_22041412_R_type)|(instr[6:0]==`ysyx_22041412_RV64_R);
	
	assign V2Type= I_type?(instr[6:0]==`ysyx_22041412_jalr)?(func3=='b000)?`ysyx_22041412_v2rsb:`ysyx_22041412_v2imm:
						(instr[6:0]==`ysyx_22041412_load)?`ysyx_22041412_v2imm:`ysyx_22041412_v2imm:
				 U_type?`ysyx_22041412_v2imm :
				 B_type?`ysyx_22041412_v2rsb :
				 S_type?`ysyx_22041412_v2imm :
				 R_type?`ysyx_22041412_v2rsb:
				 J_type?(instr[6:0]==`ysyx_22041412_jal)?`ysyx_22041412_v2rsb:`ysyx_22041412_v2rsb:
				 `ysyx_22041412_v2rsb;
	assign V1Type= U_type?`ysyx_22041412_v1pc:`ysyx_22041412_v1rsa;
	assign Mul_en= (instr[25]=='b1)?`ysyx_22041412_mulen:1'b0;
	// assign Ram_en= S_type?1'b1:
	// 			   I_type?(instr[6:0]==`ysyx_22041412_load)?1'b1:1'b0:1'b0;
	// assign Jup_en=B_type?1'b1:
	// 			  I_type?(instr[6:0]==`ysyx_22041412_jalr)?'b1:1'b0:1'b0;
	assign I_imme={{52{instr[31]}},instr[31:20]}; 
	assign U_imme={{32{instr[31]}},instr[31:12],{12{1'b0}}};
	assign J_imme={{44{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0};   
	assign B_imme={{52{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};
	assign S_imme={{52{instr[31]}},instr[31:25],instr[11:7]}; 
	assign imme= I_type?I_imme :
				 U_type?U_imme :
				 J_type?J_imme :
				 B_type?B_imme :
				 S_type?S_imme : 64'b0;


endmodule

