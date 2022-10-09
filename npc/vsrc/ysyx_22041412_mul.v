//³Ë³ý·¨Ä£¿é
module ysyx_22041412_mul(
    input clk,
    input en,
    input [63:0]rsA,
    input [63:0]rsB,
    input [2:0]func3,
    output [63:0]data
 );
reg[63:0]result;
assign data = result;
always@(posedge clk)begin 
    if(en)begin
        if (func3==3'b000)
            result =  rsA*rsB;
        else result=64'h00000000;
    end  
end

endmodule