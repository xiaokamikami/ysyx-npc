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

	output [4:0]Alu_Mode,// 指示ALU本次计算类型
	///  一些特别指令的单独使能
	output Mul_en,
	output Div_en,
	output [1:0]RV64_en,
	output FENCE_i,
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

	wire Handle;
	assign Handle = (instr[6:0]==`ysyx_22041412_Environment)?1'b1:1'b0;

	assign opcode=instr[6:0];
	assign func3=instr[14:12];
	assign func7=instr[30];

	assign Rs1=U_type?5'b00000:instr[19:15];
	assign Rs2=I_type?5'b00000:
			   U_type?5'b00000:instr[24:20];
	assign Rd =S_type?5'b00000:
			   B_type?5'b00000:instr[11:7];

	wire I_Imm;
	wire RV64_I_IMM;
	wire R_Imm;
	wire RV64_R_IMM;

	assign RV64_I_IMM = (instr[6:0]==`ysyx_22041412_RV64_I) ?1'b1:1'b0;
	assign I_Imm = (instr[6:0]==`ysyx_22041412_I_type) ? 1'b1 : 1'b0;
	assign RV64_R_IMM = (instr[6:0]==`ysyx_22041412_RV64_R) ?1'b1:1'b0;
	assign R_Imm = (instr[6:0]==`ysyx_22041412_R_type) ? 1'b1 : 1'b0;

	wire Jarl;
	assign Jarl = (instr[6:0]==`ysyx_22041412_jalr)?1'b1 : 1'b0;
	wire Li;
	wire Auipc;
	assign Li    = (instr[6:0]==`ysyx_22041412_lui) ? 1'b1 :1'b0 ;
	assign Auipc = (instr[6:0]==`ysyx_22041412_auipc) ? 1'b1:1'b0;

	wire Load;
	assign Load = (instr[6:0]==`ysyx_22041412_load)? 1'b1 : 1'b0;

	assign I_type=(Jarl| Load |I_Imm |RV64_I_IMM|Handle) ;
	assign U_type=(Li | Auipc);
	assign J_type=(instr[6:0]==`ysyx_22041412_jal) ;
	assign B_type=(instr[6:0]==`ysyx_22041412_B_type);
	assign S_type=(instr[6:0]==`ysyx_22041412_store );
	assign R_type=(RV64_R_IMM)|(R_Imm);  

	assign V1Type=(instr[6:0]==`ysyx_22041412_jal |instr[6:0]==`ysyx_22041412_auipc )?`ysyx_22041412_v1pc:
				  (Handle&((func3=='b101)|(func3=='b110)|(func3=='b111)))?`ysyx_22041412_v1zim:
			    	`ysyx_22041412_v1rsa;	

	assign V2Type=  (R_type | B_type)?`ysyx_22041412_v2rsb:
				 	`ysyx_22041412_v2imm;

	assign imme= ({{64{I_type}}}  &{{52{instr[31]}},instr[31:20]} ) |
				 ({{64{U_type}}}  &{{32{instr[31]}},instr[31:12],{12{1'b0}}} ) |
				 ({{64{J_type}}}  &{{44{instr[31]}},instr[19:12],instr[20],instr[30:21],1'b0} )|
				 ({{64{B_type}}}  &{{52{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0} )|
				 ({{64{S_type}}}  &{{52{instr[31]}},instr[31:25],instr[11:7]}) |
				 64'b0;  

	assign Mul_en = R_type&(instr[25]=='b1) & (func3[2]==0)?`ysyx_22041412_mulen:1'b0;//func3==3'b000 | func3==3'b001 | func3==3'b010 | func3==3'b011
	assign Div_en = R_type&(instr[25]=='b1) & (func3[2]==1)?`ysyx_22041412_mulen:1'b0;

	assign RV64_en  = (RV64_R_IMM)?2'b10 :
					  (RV64_I_IMM)?2'b01 : 2'b00;
	assign FENCE_i  = (instr[6:0]==`ysyx_22041412_FENCE) ? func3[0] : 1'b0;
	assign jump_mode=(Jarl)                         ?`ysyx_22041412_j_jalr:
				     J_type                         ?`ysyx_22041412_j_jal :
					 B_type						    ?`ysyx_22041412_j_B   :
					                                 `ysyx_22041412_j_idle;

	assign mem_mode =  Load 	?`ysyx_22041412_mem_load : 
	                   S_type   ?`ysyx_22041412_mem_stor :`ysyx_22041412_mem_idle;



 
  //ALU mode  
  assign Alu_Mode  = (R_Imm)?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:`ysyx_22041412_SUB:
                             (func3=='b001)?`ysyx_22041412_sll:
                             (func3=='b010)?`ysyx_22041412_slt:
                             (func3=='b011)?`ysyx_22041412_slt:
                             (func3=='b100)?`ysyx_22041412_XOR:
                             (func3=='b101)?(func7=='b0)?`ysyx_22041412_srl:`ysyx_22041412_sra:
                             (func3=='b110)?`ysyx_22041412_OR:
                             (func3=='b111)?`ysyx_22041412_AND:0:

                (RV64_R_IMM )?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:`ysyx_22041412_SUB:
                              (func3=='b001)?`ysyx_22041412_sllw:
                              (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srlw:`ysyx_22041412_sraw:0:

                (I_Imm )?(func3=='b000)?`ysyx_22041412_UADD:
                         (func3=='b001)?`ysyx_22041412_sll:
                         (func3=='b010)?`ysyx_22041412_slt:
                         (func3=='b011)?`ysyx_22041412_slt:
                         (func3=='b100)?`ysyx_22041412_XOR:
                         (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srl:`ysyx_22041412_sra:
                         (func3=='b110)?`ysyx_22041412_OR:
                         (func3=='b111)?`ysyx_22041412_AND:0:
				(B_type)?`ysyx_22041412_B_jump:
                (RV64_I_IMM)?(func3=='b000)?`ysyx_22041412_UADD:
                             (func3=='b001)?`ysyx_22041412_slliw:
                             (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srliw:`ysyx_22041412_sraiw:0:

                (Auipc)?`ysyx_22041412_UADD:
                (Li  )?`ysyx_22041412_li:
                ( (mem_mode!='b00 ) |opcode==`ysyx_22041412_jalr)?`ysyx_22041412_UADD:
                0;
	//提前计算出Jal的地址
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

