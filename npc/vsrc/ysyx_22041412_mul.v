module ysyx_22041412_mul(
    input clk,
    input en,
    input [63:0]rsA,
    input [63:0]rsB,
    input [2:0]func3,
    input w_en,
    output [63:0]data
 );
wire [63:0]ua;
wire [63:0]ub;
assign ua = (w_en=='b1)?{{32{1'b0}},rsA[31:0]}:rsA;
assign ub = (w_en=='b1)?{{32{1'b0}},rsB[31:0]}:rsB;
reg[63:0]result;
reg[63:0]tx;
assign data =tx;
always@(posedge clk)begin 
    if(en)begin
        if (func3==3'b000)
            result =  rsA*rsB;
        else if (func3==3'b100)
            result =  rsA/rsB;
        else if (func3==3'b100)
            result = $signed(ua/ub);  
        else if (func3==3'b101)
            result = ua/ub; 
        else if (func3==3'b110)
            result = $signed(ua%ub); 
        else if (func3==3'b111)
            result = ua%ub;
        else result=64'h00000000;
    end
    if(func3=='b110) tx={{32{result[31]}},result[31:0]};
    else tx =result;
end

endmodule