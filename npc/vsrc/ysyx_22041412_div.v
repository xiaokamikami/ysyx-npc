module ysyx_22041412_div (
input       clk,
input       rst,

input [63:0]dividend,  //被除数（ xlen 表示要实现的位数，ysyx 中是 64）
input [63:0]divisor,   //除数

input       div_valid, //为高表示输入的数据有效，如果没有新的除法输入，在除法被接受的下一个周期要置低
input       divw     , //为高表示为32位计算
input       div_signed,//表示是不是有符号除法，为高表示是有符号除法
input       div_mode,  //为0 的话本次取商，为1取余
     
output reg       out_valid,//为高表示除法器输出了有效结果
output [63:0]    div_result
);

reg  [63:0]dividend_r;
reg  [63:0]divisor_r; 
reg        div_valid_r;

reg [63:0]quotient;     //商
reg [63:0]remainder; 	//余数

assign div_result = div_mode ? remainder : quotient;

always @(posedge clk)begin
    dividend_r <=  (~divw) ? dividend : {{32{1'b0}},dividend[31:0]};
    divisor_r  <=  (~divw) ? divisor  : {{32{1'b0}},divisor [31:0]};
    div_valid_r<=  div_valid;
end




always @(posedge clk)begin
    if(div_valid_r & ~div_signed)begin
        quotient <= dividend/divisor;
        remainder<= (dividend%divisor) ;
        out_valid<= 1'b1;
    end else if(div_valid_r & div_signed)begin
        quotient <= $signed (dividend/divisor) ;
        remainder<= $signed ((dividend%divisor) ) ;
        out_valid<= 1'b1;
    end else begin
        quotient <= 0 ;
        remainder<= 0 ; 
        out_valid<= 1'b0;
    end
end

endmodule