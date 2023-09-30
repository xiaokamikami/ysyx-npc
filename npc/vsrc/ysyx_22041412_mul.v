module ysyx_22041412_mul(
	input						clk,
	input						rst,
	input   					flush,			//冲刷流水线，放弃计算

	input						mul_vaild_i,	//乘法器请求 如果没有新的乘法输入，在乘法被接受的下一个周期要置低
	input		    [63:0]		multiplicand_i,	//被乘数
	input		    [63:0]		multiplier_i,	//乘数
	input						mulw_i,			//为高表示为32位计算
	input			[1:0]		mul_signed,		//2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；

	output  reg 		 	    mul_valid_o, 	//为高表示乘法器输出的结果有效
	output	reg 	[63:0]		result_hi_o, 	//高 xlen bits 结果
	output	reg		[63:0]		result_lo_o  	//低 xlen bits 结果
);



reg [63:0] 	multiplicand_r   	;
reg [63:0] 	multiplier_r  		;

reg     [1:0]     mul_datavaild_r;
reg 		  	  mul_mulvalid_r;
reg 	[63:0]    result_hio_r;
reg 	[63:0]    result_loo_r;


always @(posedge clk ) begin
	if (rst | flush) begin
    	mul_valid_o 	<= 	1'b0;
		result_hi_o		<= 	64'b0;
		result_lo_o		<=	64'b0;
    end
	else begin
		result_hi_o		<= 	result_hio_r;
		result_lo_o		<=	result_loo_r;
		mul_valid_o	    <= 	mul_mulvalid_r;
	end
end
//----------------------------计算部分------------------------------------//
		//启动计算
		always @(posedge clk ) begin
			if(rst | flush)begin
				multiplicand_r				<= 0;
				multiplier_r				<= 0;
				mul_datavaild_r[0]			<= 0;
			end else  begin
				multiplicand_r				<= (~mulw_i) ? multiplicand_i : {{32{1'b0}},multiplicand_i[31:0]} ;
				multiplier_r				<= (~mulw_i) ? multiplier_i   : {{32{1'b0}},multiplier_i  [31:0]} ;
				mul_datavaild_r[0]			<= mul_vaild_i;
			end
		end


wire [31:0] neg;
wire [31:0] zero;
wire [31:0] one;
wire [31:0] two;

genvar i;
			assign neg[0]  = multiplier_r[1];
			assign zero[0] = ((multiplier_r[1:0])==2'b00) ;
			assign two[0]  = (multiplier_r[1:0]==2'b10) ;
			assign one[0]  = !zero[0] & !two[0];
generate 
	for(i=1; i<32; i=i+1)begin:booth_encloop
			assign neg[i]  = multiplier_r[i*2+1];
			assign zero[i] = (multiplier_r[i*2+1:i*2-1]==3'b000) || (multiplier_r[i*2+1:i*2-1]==3'b111);
			assign two[i]  = (multiplier_r[i*2+1:i*2-1]==3'b100) || (multiplier_r[i*2+1:i*2-1]==3'b011);
			assign one[i]  = !zero[i] & !two[i];
	end
endgenerate



reg [127:0] prod 	[31:0];
wire [127:0] prod_w [31:0];
generate 
	for(i=0; i<32; i=i+1)begin:gen_prodloop
		ysyx_22041412_gen_prod u_gen_prod (
			.A    ( multiplicand_r       ),
			.neg  ( neg[i]  ),
			.zero ( zero[i] ),
			.one  ( one[i]  ),
			.two  ( two[i]  ),
			.prod ( prod_w[i] )
		);
		always @(posedge clk ) begin
			if(rst)begin
				prod[i] 			<= 0;
				mul_datavaild_r[1]	<= 0;
			end else  begin
				prod[i]				<=  prod_w[i];
				mul_datavaild_r[1]	<=	mul_datavaild_r[0];
			end
		end
	end
endgenerate




wire [127:0] s_lev01 [31:0];
wire [127:0] c_lev01 [31:0];
generate 
	for(i=0; i<10; i=i+1)begin:gen_1
			ysyx_22041412_csa #(.width(128)) csa_lev01(
				.op1( prod[i*3]   << (i*6+0)   ),
				.op2( prod[i*3+1] << (i*6+2)   ),
				.op3( prod[i*3+2] << (i*6+4 )  ),
				.S	( s_lev01[i]   		 	   ),
				.C	( c_lev01[i]               )
			);
			
	end
		
endgenerate
			ysyx_22041412_csa #(.width(128)) csa_lev01q(
				.op1( prod[30]   << (60)   ),
				.op2( prod[31] << (62)   ),
				.op3( 128'b0  ),
				.S	( s_lev01[10]   		 	  ),
				.C	( c_lev01[10]              )
			);






wire [127:0] s_lev02 [31:0];
wire [127:0] c_lev02 [31:0];
generate 
	for(i=0; i<3; i=i+1)begin:gen_2
			ysyx_22041412_csa #(.width(128)) csa_lev02(
				.op1( s_lev01[i*3]   		),
				.op2( s_lev01[i*3+1]    ),
				.op3( s_lev01[i*3+2]  	),
				.S	( s_lev02[i]   		),
				.C	( c_lev02[i]        )
			);

	end
				
endgenerate
			ysyx_22041412_csa #(.width(128)) csa_lev02q(
				.op1( s_lev01[9]     	),
				.op2( s_lev01[10]   	),
				.op3( 128'b0  ),
				.S	( s_lev02[3]   		),
				.C	( c_lev02[3]        )
			);	









wire [127:0] s_lev12 [31:0];
wire [127:0] c_lev12 [31:0];
generate 
	for(i=0; i<3; i=i+1)begin:gen_3
			ysyx_22041412_csa #(.width(128)) csa_lev12(
				.op1( c_lev01[i*3]   		<<1),
				.op2( c_lev01[i*3+1]  <<1  ),
				.op3( c_lev01[i*3+2]  <<1	),
				.S	( s_lev12[i]   		),
				.C	( c_lev12[i]        )
			);

	end
endgenerate
			ysyx_22041412_csa #(.width(128)) csa_lev12q(
				.op1( c_lev01[9]   <<1  	),
				.op2( c_lev01[10]  <<1 	),
				.op3( 128'b0  ),
				.S	( s_lev12[3]   		),
				.C	( c_lev12[3]        )
			);




	


wire [127:0] s_lev03 [31:0];
wire [127:0] c_lev03 [31:0];
generate 
	for(i=0; i<1; i=i+1)begin:gen_4
			ysyx_22041412_csa #(.width(128)) csa_lev03(
				.op1( s_lev02[i*3]   		),
				.op2( s_lev02[i*3+1]    ),
				.op3( s_lev02[i*3+2]  	),
				.S	( s_lev03[i]   		),
				.C	( c_lev03[i]        )
			);
	end
		
endgenerate

			ysyx_22041412_csa #(.width(128)) csa_lev03q(
				.op1( s_lev12[0]     	),
				.op2( s_lev12[1]   	),
				.op3( s_lev12[2]    ),
				.S	( s_lev03[1]   		),
				.C	( c_lev03[1]        )
			);





wire [127:0] s_lev13 [31:0];
wire [127:0] c_lev13 [31:0];
generate 
	for(i=0; i<1; i=i+1)begin:gen_5
			ysyx_22041412_csa #(.width(128)) csa_lev13(
				.op1( c_lev02[i*3] 		<<1),
				.op2( c_lev02[i*3+1]  <<1  ),
				.op3( c_lev02[i*3+2]  <<1	),
				.S	( s_lev13[i]   		),
				.C	( c_lev13[i]        )
			);
			
	end
		
endgenerate
			ysyx_22041412_csa #(.width(128)) csa_lev13q(
				.op1( c_lev12[0]   <<1  	),
				.op2( c_lev12[1]  <<1 	),
				.op3( c_lev12[2]  <<1  ),
				.S	( s_lev13[1]   		),
				.C	( c_lev13[1]        )
			);



wire [127:0] s_lev04 [31:0];
wire [127:0] c_lev04 [31:0];
ysyx_22041412_csa #(.width(128)) csa_lev04(
				.op1( s_lev03[0]   		),
				.op2( s_lev03[1]    ),
				.op3( s_lev13[0]  	),
				.S	( s_lev04[0]   		),//11
				.C	( c_lev04[0]        )
			);


wire [127:0] s_lev14 [31:0];
wire [127:0] c_lev14 [31:0];
ysyx_22041412_csa #(.width(128)) csa_lev14(
				.op1( c_lev03[0] 		<<1),
				.op2( c_lev03[1]  <<1  ),
				.op3( c_lev13[0]  <<1	),
				.S	( s_lev14[1]   		),
				.C	( c_lev14[1]        )
			);
			
ysyx_22041412_csa #(.width(128)) csa_lev34(
				.op1(s_lev13[1] 	),
				.op2( c_lev13[1]  <<1),
				.op3(128'b0 ),//11
				.S	( s_lev14[2]   		),
				.C	( c_lev14[2]        )
			);





wire [127:0] s_lev05 ;
wire [127:0] c_lev05;
ysyx_22041412_csa #(.width(128)) csa_lev05(
				.op1( s_lev04[0]   		),
				.op2( s_lev14[1]    ),
				.op3( s_lev14[2]  	),
				.S	( s_lev05  		),//11
				.C	( c_lev05        )
			);


wire [127:0] s_lev15 ;
wire [127:0] c_lev15 ;
ysyx_22041412_csa #(.width(128)) csa_lev15(
				.op1( c_lev04[0] 		<<1),
				.op2( c_lev14[1]  <<1  ),
				.op3( c_lev14[2]  <<1	),
				.S	( s_lev15   		),
				.C	( c_lev15       )
			);
			

wire [127:0] s_lev16 ;
wire [127:0] c_lev16; 
ysyx_22041412_csa #(.width(128)) csa_lev06(
				.op1( s_lev05 ),
				.op2( c_lev05  <<1  ),
				.op3( c_lev15  <<1	),
				.S	(s_lev16  		),
				.C	( c_lev16       )
			);	


		always @(posedge clk ) begin
			if(rst)begin
				{result_hio_r,result_loo_r}		<= 0;
				mul_mulvalid_r					<= 0;
			end else  begin
				{result_hio_r,result_loo_r}		<=  s_lev15+s_lev16+(c_lev16<<1);
				mul_mulvalid_r					<=	mul_datavaild_r[1];
			end
		end

endmodule
