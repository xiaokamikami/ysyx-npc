// ������ģ��
module ysyx_22041412_reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

/* // ʹ�ô�����ģ���ʾ��
module example(
  input clk,
  input rst,
  input [3:0] in,
  output [3:0] out
);
  // λ��Ϊ1����, ��λֵΪ1'b1, дʹ��һֱ��Ч
  Reg #(1, 1'b1) i0 (clk, rst, in[0], out[0], 1'b1);
  // λ��Ϊ3����, ��λֵΪ3'b0, дʹ��Ϊout[0]
  Reg #(3, 3'b0) i1 (clk, rst, in[3:1], out[3:1], out[0]);
endmodule */
