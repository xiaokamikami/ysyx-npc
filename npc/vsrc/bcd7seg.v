module bcd7seg(
  input  [3:0] num,//段选信号
  output reg [6:0] a_g
);
// detailed implementation ...

always@(num)begin
    case(num)        //用case语句实现组合逻辑
			4'h0: a_g[6:0] = ~7'b0000001; //共阳极数码管
			4'h1: a_g[6:0] = ~7'b1001111;
			4'h2: a_g[6:0] = ~7'b0010010;
			4'h3: a_g[6:0] = ~7'b0000110;
			4'h4: a_g[6:0] = ~7'b1001100;
			4'h5: a_g[6:0] = ~7'b0100100;
			4'h6: a_g[6:0] = ~7'b0100000;
			4'h7: a_g[6:0] = ~7'b0001111;
			4'h8: a_g[6:0] = ~7'b0000010;
			4'h9: a_g[6:0] = ~7'b0000100;
			4'ha: a_g[6:0] = ~7'b0001000;
			4'hb: a_g[6:0] = ~7'b1100000;
			4'hc: a_g[6:0] = ~7'b0110001;	
			4'hd: a_g[6:0] = ~7'b1000010;
			4'he: a_g[6:0] = ~7'b0110000;
			default: a_g[6:0] = ~7'b0111000;
    endcase

end
endmodule
