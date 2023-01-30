`include "vsrc/ysyx_22041412_define.v"
module ysyx_22041412_pipeline(
    input wire clk,
    //EXE
    output wire [63:0]pip_pc,
    output wire [63:0]pip_dnpc,
    output wire [31:0]pip_imm
);


initial begin        // STARTS
    if_pc = 64'h0000000080000000;
end
//DIP-C

//

//STALL 
wire [5:0]pip_stall;
reg pip_rst;
wire if_en;
wire id_en;
wire ex_en;
wire mem_en;
wire wb_en;
reg id_stall;
wire ex_stall;
wire mul_stall;
reg ex_wait;
//assign ex_wait = (ex_rw!=0 & ((!id_imm_V1Type & id_Ra == ex_rw )| (id_Rb == ex_rw )) & ex_opcode==`ysyx_22041412_load & !mem_readyo) ?1'b1:1'b0;
assign ex_stall = 'b0 ;
reg mem_wait;
wire mem_busy;
wire mem_stall;
assign mem_stall = mem_wait | mem_busy | csr_stall  | mul_stall | ex_wait;


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

//ID
reg [31:0]id_imm;
reg [63:0]id_pc;

wire [1:0]id_imm_V1Type;
wire [1:0]id_imm_V2Type;
wire id_mul_en;
wire [63:0]id_imm_data;
wire [2:0]id_func3;
wire id_func7;
wire [4:0]id_Ra,id_Rb,id_Rw;
wire [6:0]id_opcode;
wire [63:0]id_rsA;
wire [63:0]id_rsB;

wire csr_jar_en;
wire [11:0]csr;
wire [2:0]id_csr_id;
wire id_csr_en;
assign csr_jar_en=(id_csr_en&(id_csr_id==0 | id_csr_id==1))?1:0;
assign csr =id_csr_en?id_imm_data[11:0]:0;
assign id_csr_id=(csr==12'h000)?3'd1:   //ecall
            (csr==12'h302)?3'd0:   //mret
            (csr==12'h300)?3'd2:   //mstatus
            (csr==12'h305)?3'd3:   //mtvec
            (csr==12'h341)?3'd4:   //mepc
            (csr==12'h342)?3'd5:   //mcause
            0; 
assign id_csr_en =  (id_opcode==`ysyx_22041412_Environment)?1:0;

//EXE
reg [1:0]ex_imm_V1Type;
reg [1:0]ex_imm_V2Type;
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
reg [63:0]ex_pc;
wire [63:0]ex_v1_in;
wire [63:0]ex_v2_in;
wire [63:0]ex_rs2_in;
wire [63:0]ex_res;
wire [63:0]csr_data_o;
wire [63:0]csr_data_i;
reg ex_csr_jar_en;
reg ex_csr_en;
reg [2:0]ex_csr_id;

wire csr_ready_o;
wire csr_stall;
assign csr_stall = (!csr_ready_o&ex_csr_en)?1:0;
assign csr_data_i = ex_v1;


ysyx_22041412_mcsr csr_reg(
     .clk(clk),
     .en(ex_csr_en),
     .pc(ex_pc),
     .func3(ex_func3),
     .addr(ex_csr_id),
     .data_i(csr_data_i),
     .data_o(csr_data_o),
     .ready_o(csr_ready_o)
 );

assign ex_v1_in = (id_imm_V1Type==`ysyx_22041412_v1pc)?id_pc:
                  (id_imm_V1Type==`ysyx_22041412_v1zim)?{{59{1'b0}},id_Ra}:
                      (id_imm_V1Type==0 & id_Ra == ex_rw & ex_rw!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      (id_imm_V1Type==0 & id_Ra != ex_rw & id_Ra == mem_rw  & mem_rw!=0 & !mem_ram_en)?mem_res:
                      (id_imm_V1Type==0 & id_Ra != ex_rw & id_Ra == mem_rw  & mem_rw!=0 & mem_ram_en)?mem_rdata:
                      (id_imm_V1Type==0 & id_Ra != mem_rw & id_Ra != ex_rw  & id_Ra == wb_addr & wb_addr!=0 & mem_reg_en)?wb_data
                      :id_rsA;
assign ex_v2_in = (id_imm_V2Type==`ysyx_22041412_v2imm)?id_imm_data:
                  //(id_imm_V2Type==`ysyx_22041412_v2csr)?csr_data_o:
                      (id_imm_V2Type==0 & id_Rb == ex_rw & ex_rw!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      (id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & !mem_ram_en)?mem_res:
                      (id_imm_V2Type==0 & id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & mem_ram_en)?mem_rdata:
                      (id_imm_V2Type==0 & id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & wb_addr!=0 & mem_reg_en)?wb_data
                      :id_rsB;
assign ex_rs2_in = (id_Rb == ex_rw & ex_rw!=0 & ex_opcode!=`ysyx_22041412_load )?ex_res:
                      //(id_Rb == ex_rw & ex_rw!=0 & ex_opcode==`ysyx_22041412_load )?mem_rdata:
                      (id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & !mem_ram_en)?mem_res:
                      (id_Rb != ex_rw & id_Rb == mem_rw  & mem_rw!=0 & mem_ram_en)?mem_rdata:
                      (id_Rb != mem_rw & id_Rb != ex_rw  & id_Rb == wb_addr & wb_addr!=0 & mem_reg_en)?wb_data
                      :id_rsB;


//MEM
reg [31:0]mem_imm;
reg [4:0]mem_rw;
reg [6:0]mem_opcode;
reg [2:0]mem_func3;
reg mem_rw_type;
reg mem_ram_en;
reg mem_reg_en;
reg [63:0]mem_addr;
reg [63:0]mem_wdata;
reg [63:0]mem_pc;
reg [63:0]mem_imm_data;
reg [63:0]mem_temp;
reg [63:0]mem_res;
reg mem_csr_jar_en;
wire [63:0]mem_rdata;
wire mem_readyi;
assign mem_readyi = !ex_wait;
wire mem_readyo;

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
reg wb_csr_jar_en;


always@(posedge clk)begin
    if(if_en)begin
        if_pc<= if_pc+4;
    end
    else if(wb_opcode == `ysyx_22041412_jal | wb_opcode == `ysyx_22041412_jalr)begin
        if_pc<= if_dnpc;
        id_stall<=0;
    end
    else if(mem_opcode == `ysyx_22041412_B_type )begin
        if_pc<= if_dnpc;
        id_stall<=0;
    end
    else if(mem_csr_jar_en)begin
        if_pc<= if_dnpc;
        id_stall<=0;
    end
end


always@(posedge clk )begin
    if(id_en)begin
        id_imm <= if_imm;
        id_pc  <= if_pc;
        if(id_opcode == `ysyx_22041412_jal | id_opcode ==`ysyx_22041412_B_type | id_opcode ==`ysyx_22041412_jalr |csr_jar_en)begin
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
        ex_v1<=ex_v1_in;
        ex_v2<=ex_v2_in;
        ex_rs2<=ex_rs2_in;
        ex_Ra<=id_Ra;
        ex_Rb<=id_Rb;
        ex_imm_V1Type<= id_imm_V1Type;
        ex_imm_V2Type<= id_imm_V2Type;
        ex_csr_jar_en<=csr_jar_en;
        ex_csr_id<=id_csr_id;
        ex_csr_en<=id_csr_en;
        if(ex_rw!=0 & ((id_imm_V1Type==0 & id_Ra == ex_rw )| (id_Rb == ex_rw )) & ex_opcode==`ysyx_22041412_load ) begin
             ex_wait<=1;
        end
    end
     if( ex_wait & ex_imm_V1Type==0 & mem_readyo & (ex_Ra == mem_rw & mem_opcode==`ysyx_22041412_load ))begin
        ex_v1<=mem_rdata;
        ex_wait<=0;
     end
     else if (ex_wait & ex_imm_V2Type==0 & mem_readyo &(ex_Rb == mem_rw  & mem_opcode==`ysyx_22041412_load ))begin
        ex_v2<=mem_rdata;
        ex_wait<=0;
     end
     if (ex_wait & ex_imm_V2Type!=0 & mem_readyo &(ex_Rb == mem_rw  & mem_opcode==`ysyx_22041412_load ))begin
        ex_rs2<=mem_rdata;
        ex_wait<=0;
     end


end


always@(posedge clk)begin           
    if(mem_en & !ex_wait)begin
        mem_imm<=ex_imm;
        mem_pc <=ex_pc;
        mem_rw <=ex_rw;
        mem_func3<=ex_func3;
        mem_imm_data<=ex_imm_data;
        mem_opcode<=ex_opcode;
        mem_csr_jar_en<=ex_csr_jar_en;
        if(ex_opcode == `ysyx_22041412_Environment)begin
            mem_res<=csr_data_o;
        end
        else begin 
            mem_res<=ex_res;
        end
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
        else if(ex_opcode == `ysyx_22041412_B_type & ex_res[0]==1 )begin 
            if_dnpc <=ex_imm_data+ex_pc;
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=`ysyx_22041412_zero_word;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end       
        else if (ex_opcode== `ysyx_22041412_B_type & ex_res[0]==0 )begin
            if_dnpc <=ex_pc+4;
            mem_reg_en <=0;
            mem_rw_type<=0;
            mem_ram_en <=0;
            mem_addr   <=`ysyx_22041412_zero_word;
            mem_wdata  <=`ysyx_22041412_zero_word;
        end
        else if(ex_opcode == `ysyx_22041412_Environment & ex_csr_jar_en)begin
            if_dnpc <=csr_data_o;
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
        wb_csr_jar_en<=mem_csr_jar_en;
        if(mem_opcode == 0)begin
            wb_data<=`ysyx_22041412_zero_word;
            wb_dnpc<=`ysyx_22041412_zero_word;
            wb_addr<= 0;
        end
        else if(mem_opcode == `ysyx_22041412_jal | mem_opcode==`ysyx_22041412_jalr)begin
            wb_data<= mem_pc+4;
            if_dnpc<= mem_res;
            wb_addr<= mem_rw;
        end
        else if(mem_opcode == `ysyx_22041412_load)begin
            wb_addr<= mem_rw;
            wb_data<= mem_rdata;
        end
        else if(!mem_reg_en)begin
            wb_addr<= 5'b0;
            wb_data<= `ysyx_22041412_zero_word;
        end    
        else begin
            wb_addr<= mem_rw;
            wb_data<= mem_res;   
        end 

    end

end


ysyx_22041412_mem IF_ImmMem (      //imm
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
    .imm(ex_imm_data),
    .func3(ex_func3),
    .func7(ex_func7),
    .opcode(ex_opcode),
    .mul_en(ex_mul_en),
    .stall(mul_stall),
    .result(ex_res)
);

ysyx_22041412_sram MEM_sram(        //SRAM
    .clk(clk),
    .en(mem_ram_en),
    .func3(mem_func3),
    .addr(mem_addr),
    .wdata(mem_wdata),
    .rdata(mem_rdata),
    .stall(mem_busy),
    .readyi(mem_readyi),
    .readyo(mem_readyo),
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



endmodule