module sreg_r(              //?????
    input clk,
    input areset,  // async active-high reset to zero
    input load,
    input ena[1:0],
    input [7:0] data,
    output reg [7:0] q); 
    always@(posedge clk,posedge areset)begin
        if(areset) begin
            q<=0;
        end
        else if(load)begin
            q <=data;
        end
        else begin
            case(ena[1:0])
                2'b01: q <= {1'b0,q[7:1]};   //??
                2'b10: q <= {q[6:0],1'b0};  //??
            default: q <= q ;
            endcase
        end
    end
endmodule
