//华莱士树乘法器 使用3-2压缩器 拆为四拍
module ysyx_22041412_mul(
	input						clk,
	input						rst,
	input   					flush,			//冲刷流水线，放弃计算

	input						mul_vaild_i,	//乘法器请求 如果没有新的乘法输入，在乘法被接受的下一个周期要置低
	input		    [63:0]		multiplicand_i,	//被乘数
	input		    [63:0]		multiplier_i,	//乘数
	input						mulw_i,			//为高表示为32位计算
	input			[1:0]		mul_signed,		//2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
	input						mul_mode,  //为1表示为长乘法
	output  reg 		 	    mul_valid_o, 	//为高表示乘法器输出的结果有效

	input						ready_i,
	//output	reg 	[63:0]		result_hi_o, 	//高 xlen bits 结果
	output	reg		[63:0]		result_lo_o  	//低 xlen bits 结果
);

// 被乘数信号声明
wire [129:0]multiplicand_abs;

// 乘数信号声明
wire [64:0]multiplier_abs;


reg [129:0]   multiplicand_r   	;
reg [66:0] 	  multiplier_r  	;



reg [129:0]   result;
wire [129:0]  product;
//根据符号信号和 W信号选择被乘数的值
assign multiplicand_abs[129:64] = (mulw_i | ~mul_signed[1]) ? 66'b0 : {66{multiplicand_i[63]}};
assign multiplicand_abs[63:32]  = (mulw_i) ? 32'b0 : multiplicand_i[63:32];
assign multiplicand_abs[31:0]   = multiplicand_i[31:0];

assign multiplier_abs  [64]     = (mulw_i | ~mul_signed[0]) ? 1'b0 : multiplier_i[63];
assign multiplier_abs  [63:32]  = (mulw_i) ? 32'b0 : multiplier_i[63:32];
assign multiplier_abs  [31:0]   = multiplier_i[31:0];

reg [1:0]state;
parameter IDLE   = 2'b00;
parameter DOING  = 2'b01;
parameter FINISH = 2'b10;
always@(posedge clk) begin
  if(rst)state<=IDLE;
  else if(state==IDLE)  state<= (mul_vaild_i & ~mul_valid_o) ? DOING : IDLE ;
  else if(state==DOING) state<= (~|multiplier_r ) ? FINISH :
  								(~mul_vaild_i) ? IDLE : DOING;
  else if(state==FINISH)state<= IDLE;
end
//----------------------------计算部分------------------------------------//


always @(posedge clk) begin
	if(rst)begin
			mul_valid_o         <= 1'b0;
			multiplicand_r		<= 0;
			multiplier_r		<= 0; //输入数值并扩展符号
	end else begin
		case (state)
		IDLE:begin
			if(mul_vaild_i & ~mul_valid_o)  begin
				multiplicand_r				<= multiplicand_abs;
				multiplier_r				<= {multiplier_abs[64],multiplier_abs,1'b0}; //输入数值并扩展符号
			end else if(ready_i)begin  //确保下级能接收后关闭信号
				mul_valid_o         <= 1'b0;
				multiplicand_r		<= 0;
				multiplier_r		<= 0; //输入数值并扩展符号
				result			    <= 0;
				result_lo_o         <= 0;
			end

		end
		DOING:begin
			if( |multiplier_r) begin  
				result          <= result + product;
				multiplicand_r  <= multiplicand_r << 2;  
				multiplier_r    <= multiplier_r >> 2;  
			end  
		end
		FINISH:begin
			mul_valid_o     <= 1'b1;
			result_lo_o     <= (~mul_mode)?result[63:0] :result[127:64];
			multiplicand_r	<= 0;
			multiplier_r    <= 0; //输入数值并扩展符号
		end
		default:;
		endcase
	end
end

		
  ysyx_22041412_booth_code #(130) code (
	        .multiplicand     ( multiplicand_r     ),
			.code             ( multiplier_r[2:0]  ),
            .product          ( product            )
  );



endmodule
