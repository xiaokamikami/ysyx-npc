`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_alu(
  input clk,
  input rst,
  input [63:0]scr1,
  input [63:0]scr2,
  input [63:0]imm,
  input [6:0]opcode,
  input [2:0]func3,
  input func7,

  input mul_en,
  input div_en,
  input [1:0]rv64_en, // 00 无 //01 RVI //10 RVR 
  //input [4:0]Mode,
  input  ready_i,
  
  input  valid_i,
  output ready_o,
  output [63:0]result

  );
  wire [4:0]Mode;
  wire [63:0]AU,BU,AY,BY;

  wire mul_ready_o;
  wire div_ready_o;
  wire mul_doing;
  reg  mul_wait;
  assign ready_o = (mul_en)? mul_ready_o & mul_wait: 
                   (div_en)? div_ready_o : 
                   (~mul_en & ~div_en )  ? 1'b1 : 1'b0;  //ready o 握手

  always@(posedge clk)begin
      if(mul_doing)begin
        mul_wait <= 1'b1;
      end else if(mul_ready_o) begin
        mul_wait <= 1'b0;
      end
  end
  wire [63:0]mux_result;
  wire [63:0]mul_result_hi;
  wire [63:0]mul_result_lo;
  wire [63:0]div_result;
  reg  [63:0]Alusu;
  assign result =Alusu;
  assign AU = scr1;
  assign BU = scr2;
  assign AY = ({scr1[63],~{scr1[62:0]}})+1;
  assign BY = ({scr2[63],~{scr2[62:0]}})+1;

  wire      mul_mode;
  wire      div_mode;
  wire [1:0]mul_signed;		//2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
  wire      div_signed;
  wire      mul_vaild;
  wire      div_vaild;
  
  //计算乘除法器的运算符号位和32模式开关
  assign mul_signed = (func3==3'b000 || func3==3'b001) ? 2'b11:
                      (func3==3'b010 )                 ? 2'b10: 2'b00;
  assign mul_vaild  =  mul_en & ready_i;
  assign mul_mode   =  func3[0];

  assign div_signed = (func3==3'b100 || func3==3'b110) ? 1'b1 : 1'b0;
  assign div_vaild  =  div_en & ready_i;
  assign div_mode   = (func3[2:1]==2'b11)? 1'b1 :1'b0;  //为1是取余  0除法


  ysyx_22041412_mul mul (        //mul
    .clk  (clk),
    .rst  (rst),
    .flush(1'b0),   //暂时不用

    .mul_vaild_i   (mul_en ),
    .multiplicand_i(AU),
    .multiplier_i  (BU),
    .mulw_i        (rv64_en[1]),
    .mul_signed    (mul_signed),
    .mul_mode      (mul_mode),
    .mul_valid_o   (mul_ready_o),
    .mul_doing     (mul_doing),
    .ready_i       (valid_i),//下级准备接收的信号
    //.result_hi_o   (),
    .result_lo_o   (mul_result_lo)
  );

ysyx_22041412_div div(
    .clk  (clk),
    .rst  (rst),

    .dividend      (AU),  //被除数（ xlen 表示要实现的位数，ysyx 中是 64）
    .divisor       (BU),   //除数

    .div_valid     (div_en), //为高表示输入的数据有效，如果没有新的除法输入，在除法被接受的下一个周期要置低
    .divw          (rv64_en[1]), //为高表示为32位计算
    .div_signed    (div_signed),//表示是不是有符号除法，为高表示是有符号除法
    .div_mode      (div_mode),  //为0 的话本次取商，为1取余
     
    .out_valid     (div_ready_o),//为高表示除法器输出了有效结果
    .div_result    (div_result)
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
        Alusu= ($signed(AU-BU)<0) ? 64'b1 :64'b0;
      end
      else if(func3 ==3'b011) begin //sltu
        Alusu=(AU<BU) ? 64'b1 : 64'b0;
      end
      else  Alusu=0;
    end
    else if(opcode==`ysyx_22041412_B_type)begin     //条件分支
      if ((func3 == 3'b000)&& (AU==BU))             Alusu=1;
      else if(func3 == 3'b001 && (AU!=BU))          Alusu=1;    //bne
      else if(func3 == 3'b100 && ($signed(AU)<$signed(BU)))  Alusu=1;
      else if(func3 == 3'b101 && ~($signed(AU)<$signed(BU))) Alusu=1; 
      else if(func3 == 3'b110 && (AU < BU))         Alusu=1;
      else if(func3 == 3'b111 && (AU >= BU))        Alusu=1;
      else Alusu=0;  
      //$display("ALU B ");
    end
    else if(opcode==`ysyx_22041412_jalr)begin
      Alusu = mux_result&(~64'h00000001);
      //$display("jarl =%h",Alusu);
    end
    else if(rv64_en[0]==1'b1) begin
      if((Mode==`ysyx_22041412_srliw | Mode==`ysyx_22041412_sraiw |Mode==`ysyx_22041412_slliw) & BU[5]==1) Alusu = mux_result;
      else Alusu = {{32{mux_result[31]}},mux_result[31:0]};
      //$display("bu5=%d , result=%h",BU[5],Alusu);
    end
    else if(rv64_en[1]==1'b1) begin
      Alusu = (mul_en & mul_ready_o) ?  {{32{mul_result_lo[31]}},mul_result_lo[31:0]} :
              (div_en & div_ready_o) ?  {{32{div_result[31]}},div_result[31:0]      } :
                                        {{32{mux_result[31]}},mux_result[31:0]      };
    end
    else if(rv64_en[1]==1'b0 & (mul_en | div_en) )begin
      Alusu = (mul_en & mul_ready_o) ? mul_result_lo :  
              (div_en & div_ready_o) ? div_result    : 0;
    end
    else if(opcode==`ysyx_22041412_Environment)begin
      Alusu=0; 
    end
    else
      Alusu = mux_result;
  end 


endmodule

