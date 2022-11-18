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
    .clk(clk),
    .scr1(ex_v1),
    .scr2(ex_v2),
    .func3(ex_func3),
    .func7(ex_func7),
    .opcode(ex_opcode),
    .mul_en(ex_mul_en),
    .stall(ex_stall),
    .result(ex_res)
);

ysyx_22041412_sram MEM_sram(        //SRAM
    .clk(clk),
    .en(mem_ram_en),
    .func3(mem_func3),
    .addr(mem_addr),
    .wdata(mem_wdata),
    .rdata(mem_rdata),
    .stall(mem_stall),
    .wen(mem_rw_type)           //1 wt  0 read
);
ysyx_22041412_dff M_reg (        //32*64bitREG
    .clk(clk),
    .Ra(id_Ra),
    .Rb(id_Rb),  
    .Rw(wb_addr),
    .Wen(wb_reg_en),
    .BusA(id_rsA),
    .BusB(id_rsB),
    .BusW(wb_data),
    .rst(wb_rst)
);

ysyx_22041412_stall Stall(
    .stall(pip_stall),				
	.rst(pip_rst),
	.stall_from_id(id_stall),		
	.stall_from_ex(ex_stall),		
    .stall_from_mem(mem_stall)
);
initial begin        // STARTS
    if_pc = 64'h0000000080000000;
end
//DIP-C

//

//STALL 
reg [5:0]pip_stall;
reg pip_rst;
wire if_en;
wire id_en;
wire ex_en;
wire mem_en;
wire wb_en;
reg id_stall;
reg ex_stall;
wire mem_stall;

assign if_en  = !pip_stall[1];
assign id_en  = !pip_stall[2];
assign ex_en  = !pip_stall[3];
assign mem_en = !pip_stall[4];
assign wb_en  = !pip_stall[5];

//DIFF-TEST
assign pip_pc  = wb_pc;
assign pip_dnpc= wb_dnpc;
assign pip_imm = wb_imm;
//
//IF 
wire [31:0]if_imm;
reg [63:0]if_pc;
reg [63:0]if_dnpc;
reg [2:0]if_start;

//ID
wire id_imm_V1Type;
wire id_imm_V2Type;
reg [31:0]id_imm;
reg id_mul_en;
reg [63:0]id_pc;
reg [63:0]id_imm_data;
reg [2:0]id_func3;
reg id_func7;
reg [4:0]id_Ra,id_Rb,id_Rw;
reg [6:0]id_opcode;
reg [63:0]id_rsA;
reg [63:0]id_rsB;

//EXE
reg [31:0]ex_imm;
reg [63:0]ex_imm_data;
reg ex_mul_en;
reg [63:0]ex_v1;
reg [63:0]ex_v2;
reg [63:0]ex_rs2;
reg [4:0]ex_rw;
reg [4:0]ex_Ra,ex_Rb;
reg [2:0]ex_func3;
reg ex_func7;
reg [6:0]ex_opcode;
reg [63:0]ex_res;
reg [63:0]ex_pc;

//MEM
reg [31:0]mem_imm;
reg [4:0]mem_rw;
reg [6:0]mem_opcode;
reg [2:0]mem_func3;
reg mem_rw_type;
reg mem_ram_en;
reg mem_reg_en;
reg [63:0]mem_addr;
reg [63:0]mem_rdata;
reg [63:0]mem_wdata;
reg [63:0]mem_pc;
reg [63:0]mem_imm_data;
reg [63:0]mem_temp;
reg [63:0]mem_res;


//WB
reg wb_reg_en;
wire wb_rst;
assign wb_rst = 1'b0;
reg [31:0]wb_imm;
reg [4:0]wb_addr;
reg [63:0]wb_imm_data;
reg [63:0]wb_data;
reg [63:0]wb_pc;
reg [63:0]wb_dnpc;
reg [6:0]wb_opcode;

always@(posedge clk)begin
    if(if_en)begin
        if_pc<= if_pc+4;
    end
    else if(wb_opcode == `ysyx_22041412_jal | wb_opcode == `ysyx_22041412_jalr)begin
        if_pc<= if_dnpc;
        id_stall<=0;
    end
    else if(mem_opcode == `ysyx_22041412_B_type)begin
        if_pc<= if_dnpc;
        id_stall<=0;
    end
end
always@(posedge clk)begin
    if(id_en)begin
        id_imm <= if_imm;
        id_pc  <= if_pc;
        if(id_opcode == `ysyx_22041412_jal | id_opcode ==`ysyx_22041412_B_type | id_opcode ==`ysyx_22041412_jalr)begin
            id_stall<=1;
            id_imm<=32'b0;
            id_pc <=`ysyx_22041412_zero_word;
            if_pc <=`ysyx_22041412_zero_word;
        end
    end
end

always@(posedge clk)begin
    if(ex_en)begin
        ex_imm <=id_imm;
        ex_rw <= id_Rw;
        ex_opcode <= id_opcode;
        ex_func3 <= id_func3;
        ex_func7 <= id_func7;
        ex_imm_data<= id_imm_data;
        ex_pc <= id_pc;
        ex_mul_en<=id_mul_en;
        ex_Ra<=id_Ra;
        ex_Rb<=id_Rb;

        if(id_imm_V1Type==1'b1)
            ex_v1 <= id_pc;
        else if(id_Ra == ex_rw && id_Ra!=0)
            ex_v1 <= ex_res;
        else if(id_Ra == mem_rw && id_Ra!=0 )
            ex_v1 <= mem_res; 
        else if(id_Ra == wb_addr  && id_Ra!=0)
            ex_v1 <= wb_data;
        else 
            ex_v1 <= id_rsA;  
        if(id_imm_V2Type==1'b1)
            ex_v2 <= id_imm_data;
        else if(id_Rb == ex_rw  && id_Rb!=0)
            ex_v2 <= ex_res;
        else if(id_Rb == mem_rw && id_Rb!=0 )
            ex_v2 <= mem_res;            
        else if(id_Rb == wb_addr && id_Rb!=0)
            ex_v2 <= wb_data;
        else 
            ex_v2 <= id_rsB;

        if(id_Rb == ex_rw  && id_Rb!=0)
            ex_rs2 <= ex_res;
        else if(id_Rb == mem_rw && id_Rb!=0 )
            ex_rs2 <= mem_res;            
        else if(id_Rb == wb_addr && id_Rb!=0)
            ex_rs2 <= wb_data;
        else 
            ex_rs2 <= id_rsB;  

        if(id_mul_en) ex_stall<=1;
    end
    else begin
        if((ex_Ra == mem_rw) & (ex_Ra!=0) & mem_ram_en & !mem_rw_type & ex_stall)begin
            ex_v1 <=mem_rdata;
            ex_stall <=0;
        end
        else if((ex_Ra == mem_rw) & (ex_Ra!=0) & mem_ram_en & !mem_rw_type)
            ex_stall <=1;
        else if((id_Ra == mem_rw) & (id_Ra!=0) & mem_ram_en & !mem_rw_type)
            ex_stall <=1;
        else ex_stall <=0;
    end

    if(ex_opcode== `ysyx_22041412_B_type)begin
        if (ex_res ==1)
            if_dnpc  <=ex_imm_data+ex_pc;
        else 
            if_dnpc <=ex_pc+4;
    end

end
always@(posedge clk)begin           
    if(mem_en)begin
        mem_imm<=ex_imm;
        mem_pc <=ex_pc;
        mem_rw <=ex_rw;
        mem_func3<=ex_func3;
        mem_opcode<=ex_opcode;
        mem_imm_data<=ex_imm_data;
        mem_res<=ex_res;
        if(ex_opcode == `ysyx_22041412_store)begin //w mem
            mem_rw_type<=1;
            mem_ram_en <=1;
            mem_reg_en <=0;
            mem_addr   <=ex_res;
            mem_wdata  <=ex_rs2;
        end
        else if(ex_opcode == `ysyx_22041412_load)begin  //r mem 
            mem_rw_type<=0;
            mem_ram_en <=1;
            mem_reg_en <=1;
            mem_addr   <=ex_res;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
        else if(ex_opcode == `ysyx_22041412_B_type)begin 
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=`ysyx_22041412_zero_word;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
        else begin
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_reg_en <=1;
            mem_addr   <=`ysyx_22041412_zero_word;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
    end



end


always@(posedge clk)begin           
    if(wb_en)begin
        wb_imm<=mem_imm;
        wb_pc<=mem_pc;
        wb_reg_en<=mem_reg_en;
        wb_opcode<=mem_opcode;
        wb_imm_data<=mem_imm_data;
        wb_dnpc<= mem_pc;
        wb_addr<= mem_rw;
        if(mem_opcode == 0)begin
            wb_data<=`ysyx_22041412_zero_word;
            wb_dnpc<=`ysyx_22041412_zero_word;
        end
        else if(mem_opcode == `ysyx_22041412_jal | mem_opcode == `ysyx_22041412_jalr)begin
            wb_data<= mem_pc+4;
            if_dnpc<= mem_res;
        end
        else if(mem_opcode == `ysyx_22041412_load)begin
            wb_data<= mem_rdata;
        end    
        else  wb_data<= mem_res;   

    end

end


endmodule