//CPUģ��
/* verilator lint_off UNUSED */
`include "vsrc/ysyx_22041412_define.v"

module ysyx_22041412_cpu (
  input clk,
  output [63:0]CP_PC,
  output [63:0]CP_NPC,
  output [31:0]CP_IMM,
  output Ebreak
);
  wire [31:0]Imm;
  //END
  assign CP_IMM=Imm;
  assign Ebreak=(Imm=='b000100000000000001110011)?1:0;

  ysyx_22041412_pipeline pip(
    .clk(clk),
    .pip_pc(CP_PC),
    .pip_dnpc(CP_NPC),
    .pip_imm(Imm)
);


endmodule
