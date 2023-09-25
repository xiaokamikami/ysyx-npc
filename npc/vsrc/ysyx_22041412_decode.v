`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_decode(
	input  clk,
	input  [31:0]instr,
	input  [31:0]pc,
	output [6:0]opcode,
	output [2:0]func3,
	output func7,
	output [4:0]Rs1,
	output [4:0]Rs2,
	output [4:0]Rd,
	output [63:0]imme,
	output [1:0]V1Type,
	output [1:0]V2Type,
	output Mul_en,
	//output Ram_en,
	
	output reg[63:0] jal_pc,  //直接跳转命令 结果
	output reg       jal_ok,

	output [1:0]mem_mode,
	output [1:0]jump_mode
	);

	wire I_type;
	wire U_type;
	wire J_type;
	wire B_type;
	wire S_type;
	wire R_type;
	
	assign opcode=instr[6:0];
	assign func3=instr[14:12];
	assign func7=instr[30];

	assign Rs1=U_type?5'b00000:instr[19:15];
	assign Rs2=I_type?5'b00000:
			   U_type?5'b00000:instr[24:20];
	assign Rd =S_type?5'b00000:
			   B_type?5'b00000:instr[11:7];
	
	assign I_type=(instr[6:0]==`ysyx_22041412_jalr) | (instr[6:0]==`ysyx_22041412_load) | (instr[6:0]==`ysyx_22041412_I_type)|(instr[6:0]==`ysyx_22041412_RV64_I)|(instr[6:0]==`ysyx_22041412_Environment);
	assign U_type=(instr[6:0]==`ysyx_22041412_lui) | (instr[6:0]==`ysyx_22041412_auipc);
	assign J_type=(instr[6:0]==`ysyx_22041412_jal) ;
	assign B_type=(instr[6:0]==`ysyx_22041412_B_type);
	assign S_type=(instr[6:0]==`ysyx_22041412_store );
	assign R_type=(instr[6:0]==`ysyx_22041412_R_type)|(instr[6:0]==`ysyx_22041412_RV64_R);
	
	assign V1Type=(instr[6:0]==`ysyx_22041412_jal  )?`ysyx_22041412_v1pc:
				  (instr[6:0]==`ysyx_22041412_auipc)?`ysyx_22041412_v1pc:
				  ((instr[6:0]==`ysyx_22041412_Environment)&((func3=='b101)|(func3=='b110)|(func3=='b111)))?`ysyx_22041412_v1zim:
			    	`ysyx_22041412_v1rsa;	

	assign V2Type=  R_type?`ysyx_22041412_v2rsb:
					B_type?`ysyx_22041412_v2rsb:
				 	`ysyx_22041412_v2imm;

	assign Mul_en= R_type&(instr[25]=='b1)?`ysyx_22041412_mulen:1'b0;


	assign imme= I_type?{{52{instr[31]}},instr[31:20]} :
				 U_type?{{32{instr[31]}},instr[31:12],{12{1'b0}}} :
				 J_type?{{44{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0} :
				 B_type?{{52{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0} :
				 S_type?{{52{instr[31]}},instr[31:25],instr[11:7]} :
				 64'b0;

	assign jump_mode=(instr[6:0]==`ysyx_22041412_jalr)?`ysyx_22041412_j_jalr:
				     J_type                         ?`ysyx_22041412_j_jal :
					 B_type						    ?`ysyx_22041412_j_B   :
					                                 `ysyx_22041412_j_idle;

	assign mem_mode = (instr[6:0]==`ysyx_22041412_load) ?`ysyx_22041412_mem_load : 
	                   S_type                           ?`ysyx_22041412_mem_stor :`ysyx_22041412_mem_idle;



    always@(posedge clk)begin
		if(J_type==1'b1)begin
			jal_ok <= 1'b1;
			jal_pc <= imme+ {{32{1'b0}},pc};
		end else begin 
			jal_ok <= 1'b0;
			jal_pc <= jal_pc;
		end
	end
endmodule

