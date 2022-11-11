`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_pipeline(
    input wire clk,
    //EXE
    output wire [63:0]pip_pc,
    output wire [63:0]pip_dnpc,
    output wire [31:0]pip_imm
);
ysyx_22041412_mem IF_ImmMem (      //Imm
    .clk(clk),
    .Addr(if_pc),
	.Imm(if_imm)
  );
ysyx_22041412_decode ID_decode( //opcode
	.instr(id_imm),
	.opcode(id_opcode),
	.func3(id_func3),
	.func7(id_func7),
	.Rs1(id_Ra),
	.Rs2(id_Rb),
	.Rd(id_Rw),
	.imme(id_imm_data),
    .V1Type(id_imm_V1Type),
    .V2Type(id_imm_V2Type),
    .Mul_en(id_mul_en)
);

ysyx_22041412_alu EXE_alu(          //ALU
    .scr1(ex_v1),
    .scr2(ex_v2),
    .func3(ex_func3),
    .func7(ex_func7),
    .opcode(ex_opcode),
    .result(ex_res)
);

ysyx_22041412_sram MEM_sram(        //SRAM
    .clk(clk),
    .func3(mem_func3),
    .addr(mem_addr),
    .data(mem_data),
    .wen(mem_rw_type)           //1 wt  0 read
);
ysyx_22041412_dff M_reg (        //32*64bitREG
    .clk(clk),
    .Ra(id_Ra),
    .Rb(id_Rb),  
    .Rw(wb_addr),
    .Wen(wb_rgw_en),
    .BusA(id_rsA),
    .BusB(id_rsB),
    .BusW(wb_data),
    .rst(wb_rst)
);
initial begin        //≥ı ºªØPC÷µ
    if_pc = 64'h0000000080000000;
    if_en = 1'b1;
    id_en = 1'b1;
    ex_en = 1'b1;
    mem_en= 1'b1;
    wb_en = 1'b1; 
end
//DIP-C

//
//DIFF-TEST
assign pip_pc  = wb_pc;
assign pip_dnpc= wb_dnpc;
assign pip_imm = if_imm;
//
// ALL
reg pip_stop;
//IF 
reg if_en;
wire [31:0]if_imm;
reg [63:0]if_pc;
reg [63:0]if_dnpc;
reg [2:0]if_start;
//ID
reg id_en;
wire id_imm_V1Type;
wire id_imm_V2Type;
reg id_mul_en;
reg [63:0]id_pc;
reg [63:0]id_imm_data;
reg [2:0]id_func3;
reg id_func7;
reg [4:0]id_Ra,id_Rb,id_Rw;
reg [6:0]id_opcode;
reg [63:0]id_va;
reg [63:0]id_vb;
reg [63:0]id_rsA;
reg [63:0]id_rsB;
reg [31:0]id_imm;
//EXE
reg ex_en;
reg ex_mul_en;
reg [63:0]ex_imm_data;
reg [63:0]ex_v1;
reg [63:0]ex_v2;
reg [4:0]ex_rw;
reg [2:0]ex_func3;
reg ex_func7;
reg [6:0]ex_opcode;
reg [63:0]ex_res;
reg [63:0]ex_pc;
//MEM
reg mem_en;
reg mem_ram_en;
reg [4:0]mem_rw;
reg [6:0]mem_opcode;
reg [2:0]mem_func3;
reg mem_rw_type;
reg [63:0]mem_addr;
reg [63:0]mem_data;
reg [63:0]mem_pc;
reg [63:0]mem_imm_data;
//WB
reg wb_en;
reg wb_rgw_en;
wire wb_rst;
assign wb_rst = 1'b0;
reg [4:0]wb_addr;
reg [63:0]wb_imm_data;
reg [63:0]wb_data;
reg [63:0]wb_pc;
reg [63:0]wb_dnpc;
reg [6:0]wb_opcode;


always@(posedge clk)begin
    if(if_en==1'b1)begin
        if(ex_opcode == `ysyx_22041412_jal)begin
            if_pc<= wb_dnpc;
        end
        else begin
            if_pc<= if_pc+4;
        end
    end
end
always@(posedge clk)begin
    if(id_en==1'b1)begin
        id_imm <= if_imm;
        id_pc  <= if_pc;
        id_va <= id_rsA;
        id_vb <= id_rsB;
    end
end
always@(posedge clk)begin
    if(ex_opcode == `ysyx_22041412_jal)begin
        if_en <=1'b0;
        if_pc <=`ysyx_22041412_zero_word;
    end
    if(id_Ra == id_Rw)begin
        id_en <=1'b0;
    end
end
always@(posedge clk)begin
    if(ex_en==1'b1)begin
        ex_rw <= id_Rw;
        ex_opcode <= id_opcode;
        ex_func3 <= id_func3;
        ex_func7 <= id_func7;
        ex_imm_data<= id_imm_data;
        ex_pc <= id_pc;
        ex_mul_en<=id_mul_en;
        if(id_imm_V1Type==1'b1)
            ex_v1 <= id_pc;
        else 
            ex_v1 <= id_va;  
        if(id_imm_V2Type==1'b1)
            ex_v2 <= id_imm_data;
        else 
            ex_v2 <= id_vb; 
    end
end
always@(posedge clk)begin           
    if(mem_en==1'b1)begin
        mem_pc <=ex_pc;
        mem_rw <=ex_rw;
        mem_func3<=ex_func3;
        mem_opcode<=ex_opcode;
        mem_imm_data<=ex_imm_data;
    end
    if(mem_opcode == `ysyx_22041412_store)begin 
        mem_rw_type<=1;
        mem_ram_en<=1;
        mem_addr <=ex_imm_data;
        mem_data <=ex_res;
    end
    else if(mem_opcode == `ysyx_22041412_load)begin  
        mem_rw_type<=0;
        mem_ram_en<=1;
        mem_addr <=ex_imm_data;
        mem_data <=ex_res;
    end
    else begin
        mem_rw_type<=0;
        mem_ram_en<=0;
        mem_addr <=`ysyx_22041412_zero_word;
        mem_data <=ex_res;
    end
end


always@(posedge clk)begin           
    if(wb_en==1'b1)begin
        wb_pc<=mem_pc;
        wb_addr<=mem_rw;
        wb_rgw_en<=!mem_ram_en;
        wb_opcode<=mem_opcode;
        wb_imm_data<=mem_imm_data;
        if(wb_opcode == `ysyx_22041412_jal)begin
            wb_data<= wb_pc+4;
            wb_dnpc<= wb_pc+wb_imm_data;
            if_en <= 1;
        end
        else begin 
            wb_data<=mem_data;
            wb_dnpc<=wb_pc+4;
        end
    end
end


endmodule