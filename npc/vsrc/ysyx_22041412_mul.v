module ysyx_22041412_mul(
    input clk,
    input en,
    input [63:0]rsA,
    input [63:0]rsB,
    input [2:0]func3,
    input w_en,
    output reg ready,
    output wire [63:0]result
 );
wire [63:0]ua;
wire [63:0]ub;
assign ua = (w_en=='b1)?{{32{1'b0}},rsA[31:0]}:rsA;
assign ub = (w_en=='b1)?{{32{1'b0}},rsB[31:0]}:rsB;
reg[63:0]data;
assign result =data;
always@(posedge clk)begin 
    if(en & !ready)begin
        if (func3==3'b000)
            data <=  rsA*rsB;
        else if (func3==3'b100)
            data <=  rsA/rsB;
        else if (func3==3'b100)
            data <= $signed(ua/ub);  
        else if (func3==3'b101)
            data <= ua/ub; 
        else if (func3==3'b110)
            data <= $signed(ua%ub); 
        else if (func3==3'b111)
            data <= ua%ub;
        else data<=64'h00000000;

        ready   <=1'b1;
    end
    else begin
        ready <=1'b0;
        data  <=`ysyx_22041412_zero_word;
    end
end

endmodule