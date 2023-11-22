// 一位恢复余数绝对值迭代 除法器
// 循环64次得出结果
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
output reg[63:0] div_result
);
wire [31:0]dividend_b ; //32位被除数
wire [31:0]divisor_b ;  //32位除数

wire [63:0]dividend_abs;
wire [63:0]divisor_abs;

reg  [127:0]dividend_r;
reg  [63:0]divisor_r; 
reg        div_valid_r;

reg [63:0]quotient;     //商
reg [64:0]remainder; 	//余数

reg       div_doing;//表示除法器正在计算  
reg [5:0] div_count;             // 循环计数器

reg       div_end;

//如果是有符号数且为负数的话，需要转为绝对值
assign dividend_b = (divw) ? (div_signed & dividend[31] )?  ~dividend[31:0] +1'b1 :  dividend[31:0] : 32'b0;
assign divisor_b  = (divw) ? (div_signed & divisor[31]  )?  ~divisor [31:0] +1'b1 :  divisor [31:0] : 32'b0;

assign dividend_abs = (div_signed & dividend[63])? ~dividend[63:0] +1'b1 :  dividend;
assign divisor_abs =  (div_signed & divisor[63]) ? ~divisor [63:0] +1'b1 :  divisor;



wire [64:0] dividend_sub;
assign dividend_sub  = dividend_r[127:63] - {{1'b0},divisor_r};
wire [32:0] dividend_sub_32;
assign dividend_sub_32 = dividend_r[95:63] - {{1'b0},divisor_r[31:0]};


always @(posedge clk)begin
    if(rst)begin
        div_doing<=  1'b0; 
    end else begin
        if(div_valid & ~div_doing)begin
            div_doing<=  1'b1;
        end else if(div_doing & out_valid)begin
            div_doing<=  1'b0;      
        end
        else begin
            div_doing<=  div_doing;   
        end
    end
end

reg dividend_signed;
reg divisor_signed;
wire quotient_signed;
wire remainder_signed;
assign quotient_signed  = ((dividend_signed & ~divisor_signed) || (~dividend_signed & divisor_signed)) ? 1'b1 :1'b0;
assign remainder_signed = dividend_signed;
//  always@(posedge clk)begin
//      if(out_valid)$display("DIV quotient %16h , remainder %16h",quotient,dividend_r);
//  end
always @(posedge clk)begin

    // if(div_valid & ~div_doing & divisor==64'b1)begin //除1的话直接给结果
    //     out_valid  <= 1'b1;
    //     div_result <=  div_mode ? 64'b0:
    //                              divw ? {{32{1'b0}},dividend_b}  : dividend;
    // end
    // else 
    if(div_valid & ~div_doing)begin   //初始化计算
        div_count  <= divw ? 'd31 : 'd63;
        dividend_r <=  (~divw) ? {{64{1'b0}},dividend_abs} : {{64{1'b0}},dividend_b,{32{1'b0}}};
        divisor_r  <=  (~divw) ? divisor_abs  : {{32{1'b0}},divisor_b };
        div_valid_r<=  1'b1;
        dividend_signed  <= divw ?  dividend[31] : dividend[63];
        divisor_signed   <= divw ?  divisor[31]  : divisor[63] ;
    end
    else if(div_valid_r & ~div_end & ~out_valid)begin //循环计算不同位置
        case (divw)
        'b1:begin   //32位模式
            if ( dividend_r[95:63] >= {{1'b0},divisor_r[31:0]}) begin  
                quotient[div_count] <= 1'b1;  
                dividend_r[95:64]   <=dividend_sub_32[31:0];
                dividend_r[63:0]    <=dividend_r[63:0] <<1 ;
            end  
            else begin  
                quotient[div_count] <= 1'b0;  
                dividend_r          <=dividend_r  <<1 ;
            end  
        end
        default :begin  //64位模式
            if ( dividend_r[127:63] >= {{1'b0},divisor_r}) begin  
                quotient[div_count] <= 1'b1;  
                dividend_r[127:64]  <=dividend_sub[63:0];
                dividend_r[63:0]    <=dividend_r[63:0] <<1 ;
            end  
            else begin  
                quotient[div_count] <= 1'b0;  
                dividend_r          <=dividend_r  <<1 ;
            end  
        end     
        endcase

        div_count  <= div_count - 1'b1;
        div_end    <= (div_count==0) ?1'b1 :1'b0;
       
    end else if(div_end)begin
        out_valid  <= 1'b1;
        div_end    <= 1'b0;
        div_result <=  div_mode ? (div_signed & remainder_signed  ) ? ((~dividend_r[127:64]) +1'b1): dividend_r[127:64]:
                                  (div_signed & quotient_signed   ) ? ((~quotient) +1'b1) : quotient;
        div_count  <= 6'd0;
    end 
    else if(out_valid)begin
        out_valid<= 1'b0;
        div_count<= 6'd0;
        dividend_r <=  128'b0;
        divisor_r  <=  64'b0;
        div_valid_r<=  1'b0;
    end
end

endmodule
