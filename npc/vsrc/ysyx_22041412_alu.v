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
  wire [63:0]Muxsu;
  reg  [63:0]Alusu;
  assign result =Alusu;
  assign AU = scr1;
  assign BU = scr2;
  assign AY = (scr1[63]==0 )?{scr1[63:0]}: ({scr1[63],~{scr1[62:0]}})+1;
  assign BY = (scr2[63]==0 )?{scr2[63:0]}: ({scr2[63],~{scr2[62:0]}})+1;
  //ALU 模式选择   
  assign Mode = (opcode==`ysyx_22041412_R_type)?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:
                                                               (func7=='b1)?`ysyx_22041412_SUB:0:
                                                (func3=='b001)?`ysyx_22041412_slli:
                                                (func3=='b100)?`ysyx_22041412_XOR:
                                                (func3=='b101)?`ysyx_22041412_SRA:
                                                (func3=='b110)?`ysyx_22041412_OR:
                                                (func3=='b111)?`ysyx_22041412_AND:0:
                (opcode==`ysyx_22041412_RV64_R )?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:
                                                                (func7=='b1)?`ysyx_22041412_SUB:0:
                                                 (func3=='b001)?`ysyx_22041412_slli:0:
                (opcode==`ysyx_22041412_I_type )?(func3=='b000)?`ysyx_22041412_UADD:
                                                (func3=='b001)?`ysyx_22041412_slli:
                                                (func3=='b011)?`ysyx_22041412_slt:
                                                (func3=='b100)?`ysyx_22041412_xori:
                                                (func3=='b101)?`ysyx_22041412_srai:
                                                (func3=='b111)?`ysyx_22041412_AND:0:
                (opcode==`ysyx_22041412_RV64_I)?(func3=='b000)?`ysyx_22041412_UADD:
                                                (func3=='b001)?`ysyx_22041412_slli:
                                                (func3=='b101)?`ysyx_22041412_sraiw:0:
                (opcode==`ysyx_22041412_auipc)?`ysyx_22041412_aui:
                (opcode==`ysyx_22041412_lui)?`ysyx_22041412_li:
                (opcode==`ysyx_22041412_load||opcode==`ysyx_22041412_store)?`ysyx_22041412_UADD:
                0;

  //选择计算方式
  ysyx_22041412_MuxKeyWithDefault #(15, 5, 64)Mux_ALU (Muxsu,Mode,`ysyx_22041412_zero_word,{
    `ysyx_22041412_UADD,(AU + BU),
    `ysyx_22041412_ADD,(AY + BY),
    `ysyx_22041412_SUB,(AY - BY),
    `ysyx_22041412_NOR,(~(AU|BU)),
    `ysyx_22041412_AND,(AU & BU),
    `ysyx_22041412_OR ,(AU | BU),
    `ysyx_22041412_XOR,(AU ^ BU),
    `ysyx_22041412_SLL,(AU << BU[5:0]),
    `ysyx_22041412_slli,(AU << BU[5:0]),
    `ysyx_22041412_SRA,(AU >> BU[5:0]),
    `ysyx_22041412_srai,$signed(AY >> BU[5:0]),
    `ysyx_22041412_sraiw,{{32{AU[31]}},$signed(AY[31:0] >> BU[5:0])},
    `ysyx_22041412_aui,(AY + BU),
    `ysyx_22041412_li, BU,
    `ysyx_22041412_xori,(AU ^ BY)
  });

always @(*) begin
  if(Mode == `ysyx_22041412_slt)begin
    if(func3 ==3'b010)begin
      if(AY<BY)
        Alusu=1;
      else
        Alusu=0;    
    end
    else if(func3 ==3'b011) begin 
      if(AU<BU)
        Alusu=1;
      else
        Alusu=0;
    end
    else  Alusu=0;
  end
  else if(opcode==`ysyx_22041412_RV64_R||opcode==`ysyx_22041412_RV64_I ) begin
    Alusu = {{32{Muxsu[31]}},Muxsu[31:0]};
  end
  else
    Alusu = Muxsu;
end
endmodule

