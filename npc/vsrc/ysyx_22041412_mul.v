module ysyx_22041412_mul(
    input clk,
    input en,
    input [63:0]rsA,
    input [63:0]rsB,
    input [2:0]func3,
    input rv64_en,
    input ready_i,
    output reg ready_o,
    output [63:0]result
 );
wire [31:0]rsAW;
wire [31:0]rsBW;
assign rsAW = rsA[31:0];
assign rsBW = rsB[31:0];


reg[63:0]data;
assign result =data;

always@(posedge clk)begin 
    if(en & !ready_o & !rv64_en)begin
        if (func3==3'b000)
            data <=  rsA*rsB;
        else if (func3==3'b100)
            data <= ($signed(rsA)/$signed(rsB));  
        else if (func3==3'b101)
            data <= rsA/rsB; 
        else if (func3==3'b110)
            data <= ($signed(rsA)%$signed(rsB)); 
        else if (func3==3'b111)
            data <= rsA%rsB;
        else data<=64'h00000000;

        ready_o   <=1'b1;
    end
    else if(en & !ready_o  & rv64_en)begin
        if (func3==3'b000)
            data <=  rsA*rsB;
        else if (func3==3'b100)
            data <= {{32{1'b0}},($signed(rsAW)/$signed(rsBW))};  
        else if (func3==3'b101)
            data <= {{32{1'b0}},rsAW/rsBW}; 
        else if (func3==3'b110)
            data <= {{32{1'b0}},($signed(rsAW)%$signed(rsBW))}; 
        else if (func3==3'b111)
            data <= {{32{1'b0}},rsAW%rsBW};
        else data<=64'h00000000;

        ready_o   <=1'b1;
    end
    else begin
        ready_o <=1'b0;
        data    <=`ysyx_22041412_zero_word;
    end
end

endmodule