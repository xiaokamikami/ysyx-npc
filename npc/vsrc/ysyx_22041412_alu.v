`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_alu(
  input [63:0]scr1,
  input [63:0]scr2,
  input [6:0]opcode,
  input [2:0]func3,
  input func7,
  output [63:0]result
  );
  wire [4:0]Mode;
  wire [63:0]AU,BU,AY,BY;
  //wire [63:0]Muxsu;
  assign AU = scr1;
  assign BU = scr2;
  assign AY = (scr1[63]==0 )?{scr1}: ({scr1[63],~{scr1[62:0]}})+1;
  assign BY = (scr2[63]==0 )?{scr2}: ({scr2[63],~{scr2[62:0]}})+1;
  //ALU 模式选择   
  assign Mode = (opcode==`ysyx_22041412_R_type)?(func3=='b000)?(func7=='b0)?`ysyx_22041412_ADD:
                                                               (func7=='b1)?`ysyx_22041412_SUB:0:0:
                (opcode==`ysyx_22041412_I_type)?(func3=='b000)?`ysyx_22041412_UADD:
                                                (func3=='b011)?`ysyx_22041412_sltiu:0:
                (opcode==`ysyx_22041412_auipc)?`ysyx_22041412_aui:
                (opcode==`ysyx_22041412_lui)?`ysyx_22041412_li:
                0;

  //选择计算方式
  ysyx_22041412_MuxKeyWithDefault #(11, 5, 64)Mux_ALU (result,Mode,`ysyx_22041412_zero_word,{
    `ysyx_22041412_UADD,(AU + BU),
    `ysyx_22041412_ADD,(AY + BY),
    `ysyx_22041412_SUB,(AY - BY),
    `ysyx_22041412_NOR,(~(AU|BU)),
    `ysyx_22041412_AND,(AU & BU),
    `ysyx_22041412_OR ,(AU | BU),
    `ysyx_22041412_XOR,(AU ^ BU),
    `ysyx_22041412_SLL,(AU << BU),
    `ysyx_22041412_aui,(AY + BU),
    `ysyx_22041412_li,BU,
    `ysyx_22041412_sltiu,AU<<BU
  }); 
// always @(posedge clk) begin

// end
endmodule

