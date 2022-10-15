module ysyx_22041412_mul(
    input clk,
    input en,
    input [63:0]rsA,
    input [63:0]rsB,
    input [2:0]func3,
    output [63:0]data
 );
wire [63:0]ua;
wire [63:0]ub;
assign ua = ({rsA[63],~{rsA[62:0]}})+1;
assign ub = ({rsB[63],~{rsB[62:0]}})+1;
reg[63:0]result;
assign data = result;
always@(posedge clk)begin 
    if(en)begin
        if (func3==3'b000)
            result =  rsA*rsB;
        else if (func3==3'b100)
            result =  rsA/rsB;
        else if (func3==3'b110)begin
            result = rsA - ((rsA/rsB)*rsB);
        end
        else result=64'h00000000;
    end  
end

endmodule