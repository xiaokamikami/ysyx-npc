`define     ysyx_22041412_zero_word     64'b0
`define		ysyx_22041412_lui			7'b0110111
`define		ysyx_22041412_auipc			7'b0010111
`define		ysyx_22041412_jal			7'b1101111
`define		ysyx_22041412_jalr			7'b1100111
`define		ysyx_22041412_load			7'b0000011
`define		ysyx_22041412_store			7'b0100011
`define		ysyx_22041412_B_type		7'b1100011
`define		ysyx_22041412_I_type		7'b0010011
`define		ysyx_22041412_R_type		7'b0110011
`define		ysyx_22041412_Environment   7'b1110011
`define	    ysyx_22041412_RV64_I        7'b0011011
`define	    ysyx_22041412_RV64_R        7'b0111011
`define     ysyx_22041412_FENCE         7'b0001111


//////////////////////////////////////////////////////////
`define 	ysyx_22041412_IDLE  		5'b00000
`define 	ysyx_22041412_ADD  			5'b00001
`define 	ysyx_22041412_UADD  		5'b00010
`define 	ysyx_22041412_SUB  			5'b00011
`define 	ysyx_22041412_li  			5'b00100
`define 	ysyx_22041412_slt  			5'b00101
`define     ysyx_22041412_beq           5'b10110
`define 	ysyx_22041412_XOR  			5'b00111
`define 	ysyx_22041412_OR   			5'b01000
`define 	ysyx_22041412_NOR   		5'b01001
`define 	ysyx_22041412_AND  			5'b01010

`define 	ysyx_22041412_sll  			5'b01011
`define 	ysyx_22041412_sra  			5'b01100
`define     ysyx_22041412_srl           5'b01101
`define 	ysyx_22041412_sllw  		5'b01110
`define     ysyx_22041412_sraw          5'b01111
`define     ysyx_22041412_srlw          5'b10000
`define     ysyx_22041412_sraiw         5'b10001
`define 	ysyx_22041412_srliw  		5'b10010
`define 	ysyx_22041412_slliw  		5'b10011

`define 	ysyx_22041412_B_jump        5'b10100
`define 	ysyx_22041412_MUL           5'b10101
`define 	ysyx_22041412_DIV           5'b10110
`define 	ysyx_22041412_RV64_DIV      5'b11000  
`define 	ysyx_22041412_RV64_MUL      5'b11001   

`define 	ysyx_22041412_abnormal      5'b11110
`define     ysyx_22041412_jalrj         5'b11111

/////////////////////////////////////////////
`define     ysyx_22041412_v2csr         2'b10
`define     ysyx_22041412_v2imm         2'b01
`define     ysyx_22041412_v2rsb         2'b00

`define     ysyx_22041412_v1zim         2'b10
`define     ysyx_22041412_v1pc          2'b01
`define     ysyx_22041412_v1rsa         2'b00

`define     ysyx_22041412_mulen         1'b1

`define     ysyx_22041412_RstEnable     1'b1
`define     ysyx_22041412_True          1'b1
`define     ysyx_22041412_False         1'b0


`define     ysyx_22041412_j_idle          2'b00
`define     ysyx_22041412_j_jalr          2'b01
`define     ysyx_22041412_j_jal           2'b10
`define     ysyx_22041412_j_B             2'b11


`define     ysyx_22041412_mem_idle        2'b00
`define     ysyx_22041412_mem_load        2'b01
`define     ysyx_22041412_mem_stor        2'b10



`define ANSI_FG_BLACK   "\33[1;30m"
`define ANSI_FG_RED     "\33[1;31m"
`define ANSI_FG_GREEN   "\33[1;32m"
`define ANSI_FG_YELLOW  "\33[1;33m"
`define ANSI_FG_BLUE    "\33[1;34m"
`define ANSI_FG_MAGENTA "\33[1;35m"
`define ANSI_FG_CYAN    "\33[1;36m"
`define ANSI_FG_WHITE   "\33[1;37m"
`define ANSI_BG_BLACK   "\33[1;40m"
`define ANSI_BG_RED     "\33[1;41m"
`define ANSI_BG_GREEN   "\33[1;42m"
`define ANSI_BG_YELLOW  "\33[1;43m"
`define ANSI_BG_BLUE    "\33[1;44m"
`define ANSI_BG_MAGENTA "\33[1;35m"
`define ANSI_BG_CYAN    "\33[1;46m"
`define ANSI_BG_WHITE   "\33[1;47m"
`define ANSI_NONE       "\33[0m"
