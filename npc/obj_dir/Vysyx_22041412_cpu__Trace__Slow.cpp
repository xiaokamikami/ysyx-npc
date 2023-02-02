// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_cpu__Syms.h"


void Vysyx_22041412_cpu___024root__traceInitSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_cpu___024root__traceInitTop(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceInitSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+357,"clk", false,-1);
        tracep->declQuad(c+358,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+360,"CP_NPC", false,-1, 63,0);
        tracep->declBus(c+362,"CP_IMM", false,-1, 31,0);
        tracep->declBit(c+363,"Ebreak", false,-1);
        tracep->declBit(c+357,"ysyx_22041412_cpu clk", false,-1);
        tracep->declQuad(c+358,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBus(c+362,"ysyx_22041412_cpu CP_IMM", false,-1, 31,0);
        tracep->declBit(c+363,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip clk", false,-1);
        tracep->declQuad(c+358,"ysyx_22041412_cpu pip pip_pc", false,-1, 63,0);
        tracep->declQuad(c+360,"ysyx_22041412_cpu pip pip_dnpc", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip pip_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22041412_cpu pip pip_stall", false,-1, 5,0);
        tracep->declBit(c+364,"ysyx_22041412_cpu pip pip_rst", false,-1);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip if_en", false,-1);
        tracep->declBit(c+4,"ysyx_22041412_cpu pip id_en", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip ex_en", false,-1);
        tracep->declBit(c+6,"ysyx_22041412_cpu pip mem_en", false,-1);
        tracep->declBit(c+7,"ysyx_22041412_cpu pip wb_en", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip id_stall", false,-1);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip ex_stall", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip mul_stall", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu pip ex_wait", false,-1);
        tracep->declBit(c+366,"ysyx_22041412_cpu pip mem_wait", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu pip mem_busy", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip mem_stall", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip if_imm", false,-1, 31,0);
        tracep->declQuad(c+14,"ysyx_22041412_cpu pip if_pc", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu pip if_dnpc", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu pip id_imm", false,-1, 31,0);
        tracep->declQuad(c+19,"ysyx_22041412_cpu pip id_pc", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip id_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip id_imm_V2Type", false,-1, 1,0);
        tracep->declBit(c+23,"ysyx_22041412_cpu pip id_mul_en", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip id_imm_data", false,-1, 63,0);
        tracep->declBus(c+26,"ysyx_22041412_cpu pip id_func3", false,-1, 2,0);
        tracep->declBit(c+27,"ysyx_22041412_cpu pip id_func7", false,-1);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip id_Ra", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip id_Rb", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22041412_cpu pip id_Rw", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip id_opcode", false,-1, 6,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip id_rsA", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip id_rsB", false,-1, 63,0);
        tracep->declBit(c+36,"ysyx_22041412_cpu pip csr_jar_en", false,-1);
        tracep->declBus(c+37,"ysyx_22041412_cpu pip csr", false,-1, 11,0);
        tracep->declBus(c+38,"ysyx_22041412_cpu pip id_csr_id", false,-1, 2,0);
        tracep->declBit(c+39,"ysyx_22041412_cpu pip id_csr_en", false,-1);
        tracep->declBus(c+40,"ysyx_22041412_cpu pip ex_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+41,"ysyx_22041412_cpu pip ex_imm_V2Type", false,-1, 1,0);
        tracep->declBus(c+42,"ysyx_22041412_cpu pip ex_imm", false,-1, 31,0);
        tracep->declQuad(c+43,"ysyx_22041412_cpu pip ex_imm_data", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22041412_cpu pip ex_mul_en", false,-1);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip ex_v1", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22041412_cpu pip ex_v2", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22041412_cpu pip ex_rs2", false,-1, 63,0);
        tracep->declBus(c+52,"ysyx_22041412_cpu pip ex_rw", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22041412_cpu pip ex_Ra", false,-1, 4,0);
        tracep->declBus(c+54,"ysyx_22041412_cpu pip ex_Rb", false,-1, 4,0);
        tracep->declBus(c+55,"ysyx_22041412_cpu pip ex_func3", false,-1, 2,0);
        tracep->declBit(c+56,"ysyx_22041412_cpu pip ex_func7", false,-1);
        tracep->declBus(c+57,"ysyx_22041412_cpu pip ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+58,"ysyx_22041412_cpu pip ex_pc", false,-1, 63,0);
        tracep->declQuad(c+60,"ysyx_22041412_cpu pip ex_v1_in", false,-1, 63,0);
        tracep->declQuad(c+62,"ysyx_22041412_cpu pip ex_v2_in", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22041412_cpu pip ex_rs2_in", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22041412_cpu pip ex_res", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22041412_cpu pip csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip csr_data_i", false,-1, 63,0);
        tracep->declBit(c+70,"ysyx_22041412_cpu pip ex_csr_jar_en", false,-1);
        tracep->declBit(c+71,"ysyx_22041412_cpu pip ex_csr_en", false,-1);
        tracep->declBus(c+72,"ysyx_22041412_cpu pip ex_csr_id", false,-1, 2,0);
        tracep->declBit(c+73,"ysyx_22041412_cpu pip csr_ready_o", false,-1);
        tracep->declBit(c+74,"ysyx_22041412_cpu pip csr_stall", false,-1);
        tracep->declBus(c+75,"ysyx_22041412_cpu pip mem_imm", false,-1, 31,0);
        tracep->declBus(c+76,"ysyx_22041412_cpu pip mem_rw", false,-1, 4,0);
        tracep->declBus(c+77,"ysyx_22041412_cpu pip mem_opcode", false,-1, 6,0);
        tracep->declBus(c+78,"ysyx_22041412_cpu pip mem_func3", false,-1, 2,0);
        tracep->declBit(c+79,"ysyx_22041412_cpu pip mem_rw_type", false,-1);
        tracep->declBit(c+80,"ysyx_22041412_cpu pip mem_ram_en", false,-1);
        tracep->declBit(c+81,"ysyx_22041412_cpu pip mem_reg_en", false,-1);
        tracep->declQuad(c+82,"ysyx_22041412_cpu pip mem_addr", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22041412_cpu pip mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22041412_cpu pip mem_pc", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22041412_cpu pip mem_imm_data", false,-1, 63,0);
        tracep->declQuad(c+367,"ysyx_22041412_cpu pip mem_temp", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22041412_cpu pip mem_res", false,-1, 63,0);
        tracep->declBit(c+92,"ysyx_22041412_cpu pip mem_csr_jar_en", false,-1);
        tracep->declQuad(c+93,"ysyx_22041412_cpu pip mem_rdata", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22041412_cpu pip mem_readyi", false,-1);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip mem_readyo", false,-1);
        tracep->declBit(c+97,"ysyx_22041412_cpu pip wb_reg_en", false,-1);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip wb_rst", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip wb_imm", false,-1, 31,0);
        tracep->declBus(c+98,"ysyx_22041412_cpu pip wb_addr", false,-1, 4,0);
        tracep->declQuad(c+99,"ysyx_22041412_cpu pip wb_imm_data", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22041412_cpu pip wb_data", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22041412_cpu pip wb_pc", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22041412_cpu pip wb_dnpc", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22041412_cpu pip wb_opcode", false,-1, 6,0);
        tracep->declBit(c+108,"ysyx_22041412_cpu pip wb_csr_jar_en", false,-1);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip csr_reg clk", false,-1);
        tracep->declBit(c+71,"ysyx_22041412_cpu pip csr_reg en", false,-1);
        tracep->declQuad(c+58,"ysyx_22041412_cpu pip csr_reg pc", false,-1, 63,0);
        tracep->declBus(c+72,"ysyx_22041412_cpu pip csr_reg addr", false,-1, 2,0);
        tracep->declBus(c+55,"ysyx_22041412_cpu pip csr_reg func3", false,-1, 2,0);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip csr_reg data_i", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22041412_cpu pip csr_reg data_o", false,-1, 63,0);
        tracep->declBit(c+73,"ysyx_22041412_cpu pip csr_reg ready_o", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+109+i*2,"ysyx_22041412_cpu pip csr_reg mcsr_reg", true,(i+0), 63,0);}}
        tracep->declBit(c+73,"ysyx_22041412_cpu pip csr_reg ready", false,-1);
        tracep->declQuad(c+68,"ysyx_22041412_cpu pip csr_reg data_r", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_22041412_cpu pip csr_reg data_w", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22041412_cpu pip csr_reg data", false,-1, 63,0);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip IF_ImmMem clk", false,-1);
        tracep->declQuad(c+14,"ysyx_22041412_cpu pip IF_ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip IF_ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip IF_ImmMem imm_data", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu pip ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+26,"ysyx_22041412_cpu pip ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+27,"ysyx_22041412_cpu pip ID_decode func7", false,-1);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22041412_cpu pip ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip ID_decode imme", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip ID_decode V1Type", false,-1, 1,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip ID_decode V2Type", false,-1, 1,0);
        tracep->declBit(c+23,"ysyx_22041412_cpu pip ID_decode Mul_en", false,-1);
        tracep->declBit(c+125,"ysyx_22041412_cpu pip ID_decode I_type", false,-1);
        tracep->declBit(c+126,"ysyx_22041412_cpu pip ID_decode U_type", false,-1);
        tracep->declBit(c+127,"ysyx_22041412_cpu pip ID_decode J_type", false,-1);
        tracep->declBit(c+128,"ysyx_22041412_cpu pip ID_decode B_type", false,-1);
        tracep->declBit(c+129,"ysyx_22041412_cpu pip ID_decode S_type", false,-1);
        tracep->declBit(c+130,"ysyx_22041412_cpu pip ID_decode R_type", false,-1);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip EXE_alu clk", false,-1);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22041412_cpu pip EXE_alu scr2", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22041412_cpu pip EXE_alu imm", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22041412_cpu pip EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+55,"ysyx_22041412_cpu pip EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+56,"ysyx_22041412_cpu pip EXE_alu func7", false,-1);
        tracep->declBit(c+45,"ysyx_22041412_cpu pip EXE_alu mul_en", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip EXE_alu stall", false,-1);
        tracep->declQuad(c+66,"ysyx_22041412_cpu pip EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu pip EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22041412_cpu pip EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22041412_cpu pip EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22041412_cpu pip EXE_alu BY", false,-1, 63,0);
        tracep->declBit(c+136,"ysyx_22041412_cpu pip EXE_alu mul_ready", false,-1);
        tracep->declQuad(c+137,"ysyx_22041412_cpu pip EXE_alu mux_result", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22041412_cpu pip EXE_alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22041412_cpu pip EXE_alu Alusu", false,-1, 63,0);
        tracep->declBit(c+141,"ysyx_22041412_cpu pip EXE_alu rv64i_en", false,-1);
        tracep->declBit(c+142,"ysyx_22041412_cpu pip EXE_alu rv64r_en", false,-1);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip EXE_alu mul clk", false,-1);
        tracep->declBit(c+45,"ysyx_22041412_cpu pip EXE_alu mul en", false,-1);
        tracep->declQuad(c+46,"ysyx_22041412_cpu pip EXE_alu mul rsA", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22041412_cpu pip EXE_alu mul rsB", false,-1, 63,0);
        tracep->declBus(c+55,"ysyx_22041412_cpu pip EXE_alu mul func3", false,-1, 2,0);
        tracep->declBit(c+142,"ysyx_22041412_cpu pip EXE_alu mul w_en", false,-1);
        tracep->declBit(c+136,"ysyx_22041412_cpu pip EXE_alu mul ready", false,-1);
        tracep->declQuad(c+139,"ysyx_22041412_cpu pip EXE_alu mul result", false,-1, 63,0);
        tracep->declQuad(c+143,"ysyx_22041412_cpu pip EXE_alu mul ua", false,-1, 63,0);
        tracep->declQuad(c+145,"ysyx_22041412_cpu pip EXE_alu mul ub", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22041412_cpu pip EXE_alu mul data", false,-1, 63,0);
        tracep->declBus(c+369,"ysyx_22041412_cpu pip EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+370,"ysyx_22041412_cpu pip EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+137,"ysyx_22041412_cpu pip EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu pip EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+372,"ysyx_22041412_cpu pip EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+147,"ysyx_22041412_cpu pip EXE_alu Mux_ALU lut", false,-1, 1172,0);
        tracep->declBus(c+369,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+370,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+374,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+137,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+372,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+147,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut", false,-1, 1172,0);
        tracep->declBus(c+375,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declArray(c+184+i*3,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+235+i*1,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declQuad(c+252+i*2,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+286,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+288,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+376,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip MEM_sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip MEM_sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu pip MEM_sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip MEM_sram clk", false,-1);
        tracep->declBus(c+78,"ysyx_22041412_cpu pip MEM_sram func3", false,-1, 2,0);
        tracep->declQuad(c+82,"ysyx_22041412_cpu pip MEM_sram addr", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22041412_cpu pip MEM_sram wdata", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22041412_cpu pip MEM_sram en", false,-1);
        tracep->declBit(c+79,"ysyx_22041412_cpu pip MEM_sram wen", false,-1);
        tracep->declBit(c+95,"ysyx_22041412_cpu pip MEM_sram readyi", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu pip MEM_sram stall", false,-1);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip MEM_sram readyo", false,-1);
        tracep->declQuad(c+93,"ysyx_22041412_cpu pip MEM_sram rdata", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22041412_cpu pip MEM_sram r_data", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22041412_cpu pip MEM_sram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22041412_cpu pip MEM_sram wmask", false,-1, 7,0);
        tracep->declBit(c+357,"ysyx_22041412_cpu pip M_reg clk", false,-1);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041412_cpu pip M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+97,"ysyx_22041412_cpu pip M_reg Wen", false,-1);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22041412_cpu pip M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+292+i*2,"ysyx_22041412_cpu pip M_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+356,"ysyx_22041412_cpu pip M_reg write_en", false,-1);
        tracep->declBus(c+2,"ysyx_22041412_cpu pip Stall stall", false,-1, 5,0);
        tracep->declBit(c+364,"ysyx_22041412_cpu pip Stall rst", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip Stall stall_from_id", false,-1);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip Stall stall_from_ex", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip Stall stall_from_mem", false,-1);
    }
}

void Vysyx_22041412_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22041412_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22041412_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22041412_cpu___024root__traceRegister(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22041412_cpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22041412_cpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22041412_cpu___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22041412_cpu___024root__traceFullSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceFullSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm),32);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall),6);
        tracep->fullBit(oldp+3,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 1U)))));
        tracep->fullBit(oldp+4,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 2U)))));
        tracep->fullBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 3U)))));
        tracep->fullBit(oldp+6,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 4U)))));
        tracep->fullBit(oldp+7,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 5U)))));
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall));
        tracep->fullBit(oldp+9,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait));
        tracep->fullBit(oldp+11,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+12,((1U & (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                                           | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                               ? 1U
                                               : 0U)) 
                                          | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                              ? 1U : 0U)) 
                                         | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                             & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                             ? 1U : 0U)) 
                                        | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__imm_data),32);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type),2);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type),2);
        tracep->fullBit(oldp+23,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type) 
                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                     >> 0x19U))));
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
        tracep->fullCData(oldp+26,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+27,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra),5);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb),5);
        tracep->fullCData(oldp+30,(((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                     ? 0U : ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                 >> 7U))))),5);
        tracep->fullCData(oldp+31,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
        tracep->fullQData(oldp+32,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_jar_en));
        tracep->fullSData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr),12);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id),3);
        tracep->fullBit(oldp+39,(((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                   ? 1U : 0U)));
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type),2);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type),2);
        tracep->fullIData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra),5);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb),5);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
        tracep->fullQData(oldp+60,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type))
                                     ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc
                                     : ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type))
                                         ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                         : (((((0U 
                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                             & (3U 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                             ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                             : ((((
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                                 : 
                                                ((((((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                     & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                  ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                  : 
                                                 (((((((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                         != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                     & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                   ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                                   [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])))))))),64);
        tracep->fullQData(oldp+62,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type))
                                     ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data
                                     : (((((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                           & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                              == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                          & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                         & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                         ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                         : ((((((0U 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                   != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                             & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                             ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                             : ((((
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                 : 
                                                (((((((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                         != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                  ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                  : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB)))))),64);
        tracep->fullQData(oldp+64,((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                      & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                     & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                     ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                     : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                            != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                           & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                              == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                          & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                         & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                         ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                         : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                             & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                             ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                             : ((((
                                                   (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                     != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                 : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB))))),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_r),64);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_jar_en));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en));
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id),3);
        tracep->fullBit(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready));
        tracep->fullBit(oldp+74,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                   ? 1U : 0U)));
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
        tracep->fullCData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
        tracep->fullCData(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en));
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res),64);
        tracep->fullBit(oldp+92,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_csr_jar_en));
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data),64);
        tracep->fullBit(oldp+95,((1U & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo));
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en));
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
        tracep->fullBit(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_csr_jar_en));
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_w),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data),64);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+127,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+128,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+129,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type));
        tracep->fullCData(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+132,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+134,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready));
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data),64);
        tracep->fullBit(oldp+141,((0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))));
        tracep->fullBit(oldp+142,((0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))));
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub),64);
        tracep->fullWData(oldp+147,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
        tracep->fullWData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+205,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+211,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullCData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+291,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                               ? 3U
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                    ? 0xffU
                                                    : 0U))))),8);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+356,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en) 
                                    & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+357,(vlSelf->clk));
        tracep->fullQData(oldp+358,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+360,(vlSelf->CP_NPC),64);
        tracep->fullIData(oldp+362,(vlSelf->CP_IMM),32);
        tracep->fullBit(oldp+363,(vlSelf->Ebreak));
        tracep->fullBit(oldp+364,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst));
        tracep->fullBit(oldp+365,(0U));
        tracep->fullBit(oldp+366,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait));
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_temp),64);
        tracep->fullIData(oldp+369,(0x11U),32);
        tracep->fullIData(oldp+370,(5U),32);
        tracep->fullIData(oldp+371,(0x40U),32);
        tracep->fullQData(oldp+372,(0ULL),64);
        tracep->fullIData(oldp+374,(1U),32);
        tracep->fullIData(oldp+375,(0x45U),32);
        tracep->fullIData(oldp+376,(0x11U),32);
        tracep->fullIData(oldp+377,(0x10000U),32);
    }
}
