module ysyx_22041412_booth_code #(DATA_WIDTH = 64)(
    input  [DATA_WIDTH-1:0] multiplicand   , 
    input  [2:0]  code           , 
    output [DATA_WIDTH-1:0] product  
);

/* booth两位运算规则操作
0	0	0	不需要加（+0）
0	0	1	补码加 X（补)
0	1	0	补码加 X（补)
0	1	1	补码加 2X（补左移)
1	0	0	补码减 2X（补左移)
1	0	1	补码减 X（补)
1	1	0	补码减 X（补)
1	1	1	不需要加（+0） */

// 被乘法数符号
wire sign = multiplicand[DATA_WIDTH-1];

// 部分积结果生成，有乘数的低3位决定
reg [DATA_WIDTH:0]op1; //符号位拓展和补1，取反等操作
reg op2;       //是否要＋1的负数补码补充

always @(*)begin
	case (code)
		3'b000: op1= { (DATA_WIDTH+ 1 ){1'b0}};
		3'b001: op1= { sign, multiplicand    };
		3'b010: op1= { sign, multiplicand    };
		3'b011: op1= { multiplicand, 1'b0    };
		3'b100: op1= {~multiplicand, 1'b1    };
		3'b101: op1= {~sign, ~multiplicand   };
		3'b110: op1= {~sign, ~multiplicand   };
		default: op1= { (DATA_WIDTH + 1 ){1'b0}};
		endcase		
end          	

always @(*)begin
	case (code)
		3'b000: op2= 1'b0;
		3'b001: op2= 1'b0;
		3'b010: op2= 1'b0;
		3'b011: op2= 1'b0;
		3'b100: op2= 1'b1;
		3'b101: op2= 1'b1;
		3'b110: op2= 1'b1;
		default: op2= 1'b0;
		endcase		
end          	

assign product = op1[DATA_WIDTH-1:0] + {{DATA_WIDTH-1{1'b0}},op2};
endmodule
