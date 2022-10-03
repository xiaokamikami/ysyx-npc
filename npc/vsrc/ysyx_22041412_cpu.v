//CPU模块
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
  //状态机
  reg [3:0]cpu_count; 
  wire JR_EN;
  wire Reg_EN,Imm_EN;
  wire [31:0]Imm;
  //END

  //指令相关存储
  wire [4:0]Ra,Rb,Rw;
  wire [6:0]opcode;
  wire [2:0]func3;
  wire func7;
  wire [63:0]immdata;
  wire [3:0]Imm_Type;
  assign CP_Imm = Imm;  //用于让仿真器判断指令是否结束
  //END

  //SRAM
  wire sram_r;
  wire sram_w;
  wire [63:0]sram_addr_r;
  wire [63:0]sram_addr_w;
  wire [63:0]sram_data_r;
  wire [63:0]sram_data_w;
  wire [63:0]sram_Result;
  //END
  //REG
  wire [63:0]rsA,rsB,rsW;
  wire Rrst;
  //END
  //ALU
  wire [63:0]ALU_S;
  wire [63:0]ALU_A;
  wire [63:0]ALU_Result;
  //END

  //PC寄存器
  wire [63:0]DNPC;
  wire [63:0]SNPC;
  reg [63:0]PC;
  initial begin        //初始化PC值
    PC = 64'h0000000080000000;
  end

  assign DNPC = JR_EN ?(immdata+PC):PC+4;
  assign SNPC = PC+4;
  reg EQ_EN;
  assign CP_PC = PC;//仿真查看PC
  assign CP_NPC =DNPC;
  assign CP_Immen = Imm_EN;
  //END
  assign CP_difftest=(cpu_count==5)?1:0;
  //基本模块初始化
  ysyx_22041412_dff X_reg (        //通用寄存器
    .clk(clk),
    .Ra(Ra),
    .Rb(Rb),  
    .Rw(Rw),
    .Wen(Reg_EN),
    .BusA(rsA),
    .BusB(rsB),
    .BusW(rsW),
    .rst(Rrst)
  );

  ysyx_22041412_mem ImmMem (      //指令槽
    .clk(clk),
    .en(Imm_EN),
    .Addr(PC),
	  .Imm(Imm)
  );

  ysyx_22041412_sram #(
    .ADDR_WIDTH(64),
    .DATA_WIDTH(64),
    .DATA_DEPTH(4096)
    )sram(
    .clk(clk),
    .addr_r(sram_addr_r),
    .read_en(sram_r),
    .data_r(sram_data_r),

    .addr_w(sram_addr_w),
    .wead_en(sram_w),
    .data_w(sram_data_w)
);

  ysyx_22041412_decode Immdecode( //指令解析
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

  //ALU 数据一选择
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 64)Mux_ALU_rsa ( ALU_A,Imm_Type,rsA,{
    4'b0010,PC
  });
  //ALU 数据二选择
  ysyx_22041412_MuxKeyWithDefault #(3, 4, 64)Mux_ALU_rsb (ALU_S,Imm_Type,rsB,{
    4'b0001,immdata,
    4'b0010,immdata,
    4'b1001,immdata
  }); 
  //内存赋值对象选择
  ysyx_22041412_MuxKeyWithDefault #(2, 4, 64)Mux_ALU_result (rsW,Imm_Type,ALU_Result,{
    4'b1011,SNPC,
    4'b1001,sram_Result
  });

  //状态机控制
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 1)Mux_Imm_en ( Imm_EN,cpu_count,1'b0,{
    4'b0000,1'b1
  });
  ysyx_22041412_MuxKeyWithDefault #(1, 4, 1)Mux_Reg_en ( Reg_EN,cpu_count,1'b0,{
    4'b0011,1'b1
  }); 
  assign Rrst  = (Imm_Type !=4'b1001)?'b0:'b1;
  //SRAM
  assign sram_w= (Imm_Type==4'b0100)&&(cpu_count==4'b0001)?'b1:'b0;
  assign sram_r= (Imm_Type==4'b1001)?'b1:'b0;
  assign sram_addr_w = ALU_Result;
  assign sram_data_w =(func3=='b001)?{{48{1'b0}},rsB[15:0]}:
                      (func3=='b010)?{{32{1'b0}},rsB[31:0]}:0;
  
  assign sram_addr_r = rsA+immdata;
  assign sram_Result =(func3=='b001)?{{48{1'b0}},sram_data_r[15:0]}:
                      (func3=='b010)?{{32{1'b0}},sram_data_r[31:0]}:0;
  //JALR
  assign JR_EN = EQ_EN||(Imm_Type=='b1011)?'b1:'b0;
  always @(posedge clk) begin
    cpu_count <= cpu_count+1;

    if(Imm_Type==4'b0011)begin    //进入跳转判断
      if(func3 == 3'b000& & (rsA-rsB)==0)EQ_EN=1;
      else if(func3 == 3'b001 && (rsA-rsB)!=0)EQ_EN=1;
      else if(func3 == 3'b100 && $signed(rsA-rsB)<0)EQ_EN=1; 
      else EQ_EN=0;
    end
    else EQ_EN=0;
    
    if(cpu_count == 6)begin
      PC <= DNPC ;
      cpu_count <= 0;
    end    
  end
endmodule
