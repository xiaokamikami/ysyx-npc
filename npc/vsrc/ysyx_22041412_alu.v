`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_alu(
  input clk,
  input [63:0]scr1,
  input [63:0]scr2,
  input [63:0]imm,
  input [6:0]opcode,
  input [2:0]func3,
  input func7,
  input mul_en,
  output stall,
  output [63:0]result
  );
  wire [4:0]Mode;
  wire [63:0]AU,BU,AY,BY;

  
  wire mul_ready;

  assign stall = (!mul_ready&mul_en)?1:0;
  wire [63:0]mux_result;
  wire [63:0]mul_result;
  reg  [63:0]Alusu;
  assign result =Alusu;
  assign AU = scr1;
  assign BU = scr2;
  assign AY = ({scr1[63],~{scr1[62:0]}})+1;
  assign BY = ({scr2[63],~{scr2[62:0]}})+1;

  wire rv64i_en;
  wire rv64r_en;
  assign rv64r_en = (opcode==`ysyx_22041412_RV64_R)?1'b1:1'b0;
  assign rv64i_en = (opcode==`ysyx_22041412_RV64_I)?1'b1:1'b0;
 
  ysyx_22041412_mul mul (        //mul
    .clk(clk),
    .en(mul_en),
    .w_en(rv64r_en),
    .rsA(scr1),
    .rsB(scr2),
    .func3(func3),
    .ready_o(mul_ready),
    .result(mul_result)
  );





  //ALU mode  
  assign Mode = (opcode==`ysyx_22041412_R_type)?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:`ysyx_22041412_SUB:
                                                (func3=='b001)?`ysyx_22041412_sll:
                                                (func3=='b010)?`ysyx_22041412_slt:
                                                (func3=='b011)?`ysyx_22041412_slt:
                                                (func3=='b100)?`ysyx_22041412_XOR:
                                                (func3=='b101)?(func7=='b0)?`ysyx_22041412_srl:`ysyx_22041412_sra:
                                                (func3=='b110)?`ysyx_22041412_OR:
                                                (func3=='b111)?`ysyx_22041412_AND:0:

                (opcode==`ysyx_22041412_RV64_R )?(func3=='b000)?(func7=='b0)?`ysyx_22041412_UADD:`ysyx_22041412_SUB:
                                                 (func3=='b001)?`ysyx_22041412_sllw:
                                                 (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srlw:`ysyx_22041412_sraw:0:

                (opcode==`ysyx_22041412_I_type )?(func3=='b000)?`ysyx_22041412_UADD:
                                                (func3=='b001)?`ysyx_22041412_sll:
                                                (func3=='b010)?`ysyx_22041412_slt:
                                                (func3=='b011)?`ysyx_22041412_slt:
                                                (func3=='b100)?`ysyx_22041412_XOR:
                                                (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srl:`ysyx_22041412_sra:
                                                (func3=='b110)?`ysyx_22041412_OR:
                                                (func3=='b111)?`ysyx_22041412_AND:0:

                (opcode==`ysyx_22041412_RV64_I)?(func3=='b000)?`ysyx_22041412_UADD:
                                                (func3=='b001)?`ysyx_22041412_slliw:
                                                (func3=='b101)?(func7 =='b0)?`ysyx_22041412_srliw:`ysyx_22041412_sraiw:0:
                (opcode==`ysyx_22041412_auipc)?`ysyx_22041412_UADD:
                (opcode==`ysyx_22041412_lui)?`ysyx_22041412_li:
                (opcode==`ysyx_22041412_load|opcode==`ysyx_22041412_store|opcode==`ysyx_22041412_jal|opcode==`ysyx_22041412_jalr)?`ysyx_22041412_UADD:
                0;

  //基本运算
  ysyx_22041412_MuxKeyWithDefault #(17, 5, 64)Mux_ALU (mux_result,Mode,`ysyx_22041412_zero_word,{
    `ysyx_22041412_UADD,(AU + BU),
    `ysyx_22041412_ADD,(AY + BY),
    `ysyx_22041412_SUB,($signed(AU) - BU),
    `ysyx_22041412_NOR,(~(AU|BU)),
    `ysyx_22041412_AND,(AU & BU),
    `ysyx_22041412_OR ,(AU | BU),
    `ysyx_22041412_XOR,(AU ^ BU),
    `ysyx_22041412_sll,(AU << BU[5:0]),
    `ysyx_22041412_srl,(AU >> BU[5:0]),
    `ysyx_22041412_sra,($signed(AU) >>> BU[5:0]),
    `ysyx_22041412_sllw,{{32{1'b0}},(AU[31:0] << BU[4:0])},
    `ysyx_22041412_srlw,{{32{1'b0}},(AU[31:0] >> BU[4:0])},
    `ysyx_22041412_sraw,{{32{1'b0}},($signed(AU[31:0]) >>> BU[4:0])},//{{32{1'b0}},$signed(AU[31:0] >>> BU[4:0])},                   //可能有问题
    `ysyx_22041412_srliw,(BU[5]==0)?{{32{1'b0}},(AU[31:0] >> BU[4:0])}:AU,
    `ysyx_22041412_slliw,(BU[5]==0)?{{32{1'b0}},(AU[31:0] << BU[4:0])}:AU,
    `ysyx_22041412_sraiw,(BU[5]==0)?{{32{1'b0}},($signed(AU[31:0]) >>> BU[4:0])}:AU,
    `ysyx_22041412_li,BU
  });


always @(*) begin
  if(Mode == `ysyx_22041412_slt)begin
    if(func3 ==3'b010)begin
      if($signed(AU-BU)<0) Alusu=1;
      else Alusu=0;    
    end
    else if(func3 ==3'b011) begin //sltu
      if(AU<BU)Alusu=1;
      else Alusu=0;
    end
    else  Alusu=0;
  end
  else if(opcode==`ysyx_22041412_B_type)begin
    if ((func3 == 3'b000)&& (AU==BU))             Alusu=1;
    else if(func3 == 3'b001 && (AU!=BU))          Alusu=1;    //bne
    else if(func3 == 3'b100 && ($signed(AU)<$signed(BU)))  Alusu=1;
    else if(func3 == 3'b101 && ~($signed(AU)<$signed(BU))) Alusu=1; 
    else if(func3 == 3'b110 && (AU < BU))         Alusu=1;
    else if(func3 == 3'b111 && (AU >= BU))        Alusu=1;
    else Alusu=0;     
  end
  else if(opcode==`ysyx_22041412_jalr)begin
    Alusu = mux_result&(~64'h00000001);
    //$display("jarl =%h",Alusu);
  end
  else if(rv64i_en) begin
    if((Mode==`ysyx_22041412_srliw | Mode==`ysyx_22041412_sraiw |Mode==`ysyx_22041412_slliw) & BU[5]==1) Alusu = mux_result;
    else Alusu = {{32{mux_result[31]}},mux_result[31:0]};
    //$display("bu5=%d , result=%h",BU[5],Alusu);
  end
  else if(rv64r_en & !mul_en) begin
    Alusu = {{32{mux_result[31]}},mux_result[31:0]};
    //$display("shift=%d  zext=%d, result=%h",BU[4:0],mux_result[31],mux_result);
  end
  else if(rv64r_en & mul_en)begin
    Alusu = {{32{mul_result[31]}},mul_result[31:0]};
  end
  else if(!rv64r_en & !rv64i_en & mul_en)begin
    Alusu = mul_result;
  end
  else if(opcode==`ysyx_22041412_Environment)begin
    Alusu=0; 
  end
  else
    Alusu = mux_result;
end
endmodule

