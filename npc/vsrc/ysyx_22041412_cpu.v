//CPU模块
/* verilator lint_off UNUSED */
`include "vsrc/ysyx_22041412_define.v"

module ysyx_22041412_cpu (
  input clk,
  output [63:0]CP_PC,
  output [63:0]CP_NPC,
  output CP_difftest,
  output Ebreak
);
  //状态机
  reg [3:0]cpu_count; 
  wire JR_EN;
  wire Mul_EN;
  wire [31:0]Imm;
  //END
  assign Ebreak=(Imm=='b000100000000000001110011)?1:0;
  //指令相关存储

  //END
  //assign DNPC = JR_EN ?(opcode==`ysyx_22041412_jalr)?(rsA+immdata):(immdata+PC):PC+4;
  //assign SNPC = PC+4;
  //reg EQ_EN;
  //END
  ysyx_22041412_pipeline pip(
    .clk(clk),
    .pip_pc(CP_PC),
    .pip_dnpc(CP_NPC),
    .pip_imm(Imm),
    .pip_dpic(CP_difftest)
);
  //基本模块初始化

//   assign sram_addr_r = immdata+rsA;
//   assign sram_addr_w = immdata+rsA;

//   wire mulw_en;
//   assign mulw_en = (opcode==`ysyx_22041412_RV64_I || opcode==`ysyx_22041412_RV64_R)?1:0;
//   assign Mul_EN = (Imm_Type==4'b1111)?1'b1:1'b0;
//   // ysyx_22041412_mul Mul (        //乘法器
//   //   .clk(clk),
//   //   .en(Mul_EN),
//   //   .rsA(rsA),
//   //   .rsB(rsB),
//   //   .func3(func3),
//   //   .w_en(mulw_en),
//   //   .data(Mul_Result)
//   // );

//   // //寄存器赋值来源选择
//   // ysyx_22041412_MuxKeyWithDefault #(3, 4, 64)Mux_ALU_result (rsW,Imm_Type,ALU_Result,{
//   //   4'b1011,SNPC,
//   //   4'b1001,sram_data_r,
//   //   4'b1111,Mul_Result
//   // });

//   assign Rrst  = (Imm_Type !=4'b0100 && Imm_Type!=4'b0011)?'b0:'b1;   //为1时不写入寄存器
//   //SRAM
//   assign sram_w= (Imm_Type==4'b0100)&&(cpu_count==4'b0010)?'b1:'b0;
//   assign sram_r= (Imm_Type==4'b1001)?1'b1:1'b0;

//   // assign sram_data_w =(func3==3'b000)?{{56{1'b0}},rsB[7:0]}: //sb
//   //                     (func3==3'b001)?{{48{1'b0}},rsB[15:0]}: //sh
//   //                     (func3==3'b010)?{{32{1'b0}},rsB[31:0]}: //sw
//   //                     (func3==3'b011)?{rsB[63:0]}:0;          //sd\
//   assign sram_data_w = rsB;


//   // assign sram_Result =(func3==3'b000)?{{56{1'b0}},sram_data_r[7:0]}:
//   //                     (func3==3'b001)?{{48{1'b0}},sram_data_r[15:0]}:
//   //                     (func3==3'b010)?{{32{1'b0}},sram_data_r[31:0]}:
//   //                     (func3==3'b011)?{sram_data_r[63:0]}:0;
//   //JALR
//   assign JR_EN = EQ_EN||(Imm_Type=='b1011)?'b1:'b0;
//   always @(posedge clk) begin
//     cpu_count <= cpu_count+1;
//     if(Imm_Type==4'b0011)begin    //进入跳转判断
//       if((func3 == 3'b000 )&& (rsA==rsB))EQ_EN=1;
//       else if(func3 == 3'b001 && (rsA!=rsB))EQ_EN=1;    //bne
//       else if(func3 == 3'b100 && $signed(rsA-rsB)<0)EQ_EN=1;
//       else if(func3 == 3'b101 && $signed(rsA-rsB)>=0)EQ_EN=1; 
//       else if(func3 == 3'b110 && (rsA < rsB))EQ_EN=1;
//       else if(func3 == 3'b111 && (rsA >= rsB))EQ_EN=1;
//       else EQ_EN=0;
//     end
//     else EQ_EN=0;
    
//     if(cpu_count == 4'b0011)begin
//       PC <= DNPC ;
//       cpu_count <= 0;
//     end    
// end
// assign CP_difftest=(cpu_count==4'b0011)?1:0;    //difftest

endmodule
