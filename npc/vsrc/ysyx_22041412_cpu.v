//CPUģ��
/* verilator lint_off UNUSED */
`include "vsrc/ysyx_22041412_define.v"

module ysyx_22041412_cpu (
  input clk,
  output [31:0]CP_Imm,
  output [63:0]CP_PC,
  output [63:0]CP_NPC,
  output CP_difftest,
  output CP_Immen 
);
  //״̬��
  reg [3:0]cpu_count; 
  wire JR_EN;
  wire Reg_EN,Imm_EN;
  wire [63:0]rsA,rsB,rsW;
  wire [31:0]Imm;
  //END

  //ָ����ش洢
  wire [4:0]Ra,Rb,Rw;
  wire [6:0]opcode;
  wire [2:0]func3;
  wire func7;
  wire [63:0]immdata;
  wire [3:0]Imm_Type;
  assign CP_Imm = Imm;  //�����÷������ж�ָ���Ƿ����
  //END

  //ALU
  wire [63:0]ALU_S;
  wire [63:0]ALU_A;
  wire [63:0]ALU_Result;

  //END

  //PC�Ĵ���
  wire [63:0]DNPC;
  wire [63:0]SNPC;
  reg [63:0]PC;
  initial begin        //��ʼ��PCֵ
    PC = 64'h0000000080000000;
  end

  assign DNPC = JR_EN ?(immdata+PC):PC+4;
  assign SNPC = PC+4;
  reg EQ_EN;
  assign CP_PC = PC;//����鿴PC
  assign CP_NPC =DNPC;
  assign CP_Immen = Imm_EN;
  //END
  assign CP_difftest=(cpu_count==5)?1:0;
  //����ģ���ʼ��
  ysyx_22041412_dff X_reg (        //ͨ�üĴ���
    .clk(clk),
    .Ra(Ra),
    .Rb(Rb),  
    .Rw(Rw),
    .Wen(Reg_EN),
    .BusA(rsA),
    .BusB(rsB),
    .BusW(rsW)
  );

  ysyx_22041412_mem ImmMem (      //ָ���
    .clk(clk),
    .en(Imm_EN),
    .Addr(PC),
	  .Imm(Imm)
  );

  ysyx_22041412_decode Immdecode( //ָ�����
	  .instr(Imm),
	  .opcode(opcode),
	  .func3(func3),
	  .func7(func7),
	  .Rs1(Ra),
	  .Rs2(Rb),
	  .Rd(Rw),
	  .imme(immdata),
    .Type(Imm_Type)
	);
  ysyx_22041412_alu Alu(          //ALU
    .scr1(ALU_A),
    .scr2(ALU_S),
    .func3(func3),
    .func7(func7),
    .opcode(opcode),
    .result(ALU_Result)
  );

  //ALU ����һѡ��
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 64)Mux_ALU_rsa ( ALU_A,Imm_Type,rsA,{
    4'b0010,PC
  });
  //ALU ���ݶ�ѡ��
  ysyx_22041412_MuxKeyWithDefault #(2, 4, 64)Mux_ALU_rsb (ALU_S,Imm_Type,rsB,{
    4'b0001,immdata,
    4'b0010,immdata
  }); 
  //�ڴ渳ֵ����ѡ��
  ysyx_22041412_MuxKeyWithDefault #(2, 4, 64)Mux_ALU_result (rsW,Imm_Type,ALU_Result,{
    4'b1001,SNPC,
    4'b1011,SNPC
  });

  //״̬������
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 1)Mux_Imm_en ( Imm_EN,cpu_count,1'b0,{
    4'b0000,1'b1
  });
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 1)Mux_Reg_en ( Reg_EN,cpu_count,1'b0,{
    4'b0010,1'b1
  }); 

  assign JR_EN = EQ_EN||(Imm_Type=='b1011)?'b1:'b0;

  always @(posedge clk) begin
    cpu_count <= cpu_count+1;
    if(Imm_Type==4'b0011)begin    //������ת
      if(func3 == 3'b000)begin
        if((rsA-rsB)==0)EQ_EN=1;
        else EQ_EN=0;
      end
      else EQ_EN=0;
    end
    if(cpu_count == 6)begin
      PC <=  DNPC ;
      cpu_count <= 0;
    end    
  end
endmodule
