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
wire [31:0]dividend_b ; //32位补码形式
wire [31:0]divisor_b ; //32位补码形式

reg  [63:0]dividend_r;
reg  [63:0]divisor_r; 
reg        div_valid_r;

reg [63:0]quotient;     //商
reg [63:0]remainder; 	//余数

reg       div_doing;//表示除法器正在计算  

assign div_result = div_mode ? remainder : quotient;

assign dividend_b = (divw) ? dividend[31:0] : 32'b0;
assign divisor_b  = (divw) ? divisor [31:0] : 32'b0;

always @(posedge clk)begin
    if(div_valid & ~div_doing)begin
        dividend_r <=  (~divw) ? dividend : {{32{1'b0}},dividend_b[31:0]};
        divisor_r  <=  (~divw) ? divisor  : {{32{1'b0}},divisor_b [31:0]};
        div_valid_r<=  1'b1;
    end else begin
        div_valid_r<=  1'b0;
    end
end


always @(posedge clk)begin
    if(div_valid & ~div_doing)begin
        div_doing<=  1'b1;
    end else if(div_doing & out_valid)begin
        div_doing<=  1'b0;      
    end
    else begin
        div_doing<=  div_doing;   
    end
end



wire [1:0]div_case;
assign div_case = {divw,div_signed};

always @(posedge clk)begin
    if(div_valid_r)begin
        case (div_case)
        'b00:begin
            quotient <= (dividend_r / divisor_r);
            remainder<= (dividend_r % divisor_r) ;
        end
        'b01:begin
            quotient <= ($signed(dividend_r) / $signed(divisor_r));
            remainder<= ($signed(dividend_r) % $signed(divisor_r)); 
        end    
        'b10:begin
            quotient <= {{32{1'b0}},(dividend_b / divisor_b)};
            remainder<= {{32{1'b0}},(dividend_b % divisor_b)};           
        end
        'b11:begin
            quotient <= {{32{1'b0}},($signed(dividend_b) / $signed(divisor_b))};
            remainder<= {{32{1'b0}},($signed(dividend_b) % $signed(divisor_b))}; 
        end
        endcase

        out_valid<= 1'b1;
    end  else begin
        quotient <= 0 ;
        remainder<= 0 ; 
        out_valid<= 1'b0;
    end
end

endmodule