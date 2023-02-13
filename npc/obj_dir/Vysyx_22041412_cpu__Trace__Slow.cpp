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
        tracep->declBit(c+356,"clk", false,-1);
        tracep->declQuad(c+357,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+359,"CP_NPC", false,-1, 63,0);
        tracep->declQuad(c+361,"MEM_PC", false,-1, 63,0);
        tracep->declBus(c+363,"CP_IMM", false,-1, 31,0);
        tracep->declBit(c+364,"Ebreak", false,-1);
        tracep->declBit(c+356,"ysyx_22041412_cpu clk", false,-1);
        tracep->declQuad(c+357,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+359,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declQuad(c+361,"ysyx_22041412_cpu MEM_PC", false,-1, 63,0);
        tracep->declBus(c+363,"ysyx_22041412_cpu CP_IMM", false,-1, 31,0);
        tracep->declBit(c+364,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip clk", false,-1);
        tracep->declQuad(c+357,"ysyx_22041412_cpu pip pip_pc", false,-1, 63,0);
        tracep->declQuad(c+359,"ysyx_22041412_cpu pip pip_dnpc", false,-1, 63,0);
        tracep->declQuad(c+361,"ysyx_22041412_cpu pip pip_mem_pc", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip pip_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22041412_cpu pip pip_stall", false,-1, 5,0);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip pip_rst", false,-1);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip if_en", false,-1);
        tracep->declBit(c+4,"ysyx_22041412_cpu pip id_en", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip ex_en", false,-1);
        tracep->declBit(c+6,"ysyx_22041412_cpu pip mem_en", false,-1);
        tracep->declBit(c+7,"ysyx_22041412_cpu pip wb_en", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip id_stall", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip ex_stall", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu pip mul_stall", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu pip ex_wait", false,-1);
        tracep->declBit(c+366,"ysyx_22041412_cpu pip mem_wait", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip mem_busy", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_cpu pip mem_stall", false,-1);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip if_imm", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip if_ready_i", false,-1);
        tracep->declBit(c+367,"ysyx_22041412_cpu pip if_valid_o", false,-1);
        tracep->declQuad(c+15,"ysyx_22041412_cpu pip if_pc", false,-1, 63,0);
        tracep->declQuad(c+17,"ysyx_22041412_cpu pip if_dnpc", false,-1, 63,0);
        tracep->declBus(c+19,"ysyx_22041412_cpu pip id_imm", false,-1, 31,0);
        tracep->declQuad(c+20,"ysyx_22041412_cpu pip id_pc", false,-1, 63,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip id_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip id_imm_V2Type", false,-1, 1,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu pip id_mul_en", false,-1);
        tracep->declQuad(c+25,"ysyx_22041412_cpu pip id_imm_data", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu pip id_func3", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22041412_cpu pip id_func7", false,-1);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip id_Ra", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22041412_cpu pip id_Rb", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip id_Rw", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22041412_cpu pip id_opcode", false,-1, 6,0);
        tracep->declQuad(c+33,"ysyx_22041412_cpu pip id_rsA", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu pip id_rsB", false,-1, 63,0);
        tracep->declBit(c+37,"ysyx_22041412_cpu pip csr_jar_en", false,-1);
        tracep->declBus(c+38,"ysyx_22041412_cpu pip csr", false,-1, 11,0);
        tracep->declBus(c+39,"ysyx_22041412_cpu pip id_csr_id", false,-1, 2,0);
        tracep->declBit(c+40,"ysyx_22041412_cpu pip id_csr_en", false,-1);
        tracep->declBus(c+41,"ysyx_22041412_cpu pip ex_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+42,"ysyx_22041412_cpu pip ex_imm_V2Type", false,-1, 1,0);
        tracep->declBus(c+43,"ysyx_22041412_cpu pip ex_imm", false,-1, 31,0);
        tracep->declQuad(c+44,"ysyx_22041412_cpu pip ex_imm_data", false,-1, 63,0);
        tracep->declBit(c+46,"ysyx_22041412_cpu pip ex_mul_en", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip ex_v1", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip ex_v2", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22041412_cpu pip ex_rs2", false,-1, 63,0);
        tracep->declBus(c+53,"ysyx_22041412_cpu pip ex_rw", false,-1, 4,0);
        tracep->declBus(c+54,"ysyx_22041412_cpu pip ex_Ra", false,-1, 4,0);
        tracep->declBus(c+55,"ysyx_22041412_cpu pip ex_Rb", false,-1, 4,0);
        tracep->declBus(c+56,"ysyx_22041412_cpu pip ex_func3", false,-1, 2,0);
        tracep->declBit(c+57,"ysyx_22041412_cpu pip ex_func7", false,-1);
        tracep->declBus(c+58,"ysyx_22041412_cpu pip ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+59,"ysyx_22041412_cpu pip ex_pc", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22041412_cpu pip ex_v1_in", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22041412_cpu pip ex_v2_in", false,-1, 63,0);
        tracep->declQuad(c+65,"ysyx_22041412_cpu pip ex_rs2_in", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22041412_cpu pip ex_res", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22041412_cpu pip csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip csr_data_i", false,-1, 63,0);
        tracep->declBit(c+71,"ysyx_22041412_cpu pip ex_csr_jar_en", false,-1);
        tracep->declBit(c+72,"ysyx_22041412_cpu pip ex_csr_en", false,-1);
        tracep->declBus(c+73,"ysyx_22041412_cpu pip ex_csr_id", false,-1, 2,0);
        tracep->declBit(c+74,"ysyx_22041412_cpu pip csr_ready_o", false,-1);
        tracep->declBit(c+75,"ysyx_22041412_cpu pip csr_stall", false,-1);
        tracep->declBus(c+76,"ysyx_22041412_cpu pip mem_imm", false,-1, 31,0);
        tracep->declBus(c+77,"ysyx_22041412_cpu pip mem_rw", false,-1, 4,0);
        tracep->declBus(c+78,"ysyx_22041412_cpu pip mem_opcode", false,-1, 6,0);
        tracep->declBus(c+79,"ysyx_22041412_cpu pip mem_func3", false,-1, 2,0);
        tracep->declBit(c+80,"ysyx_22041412_cpu pip mem_rw_type", false,-1);
        tracep->declBit(c+81,"ysyx_22041412_cpu pip mem_ram_en", false,-1);
        tracep->declBit(c+82,"ysyx_22041412_cpu pip mem_reg_en", false,-1);
        tracep->declQuad(c+83,"ysyx_22041412_cpu pip mem_addr", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22041412_cpu pip mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22041412_cpu pip mem_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041412_cpu pip mem_imm_data", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_22041412_cpu pip mem_temp", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22041412_cpu pip mem_res", false,-1, 63,0);
        tracep->declBit(c+93,"ysyx_22041412_cpu pip mem_csr_jar_en", false,-1);
        tracep->declQuad(c+94,"ysyx_22041412_cpu pip mem_rdata", false,-1, 63,0);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip ex_ready_i", false,-1);
        tracep->declBit(c+97,"ysyx_22041412_cpu pip mem_valid_o", false,-1);
        tracep->declBit(c+98,"ysyx_22041412_cpu pip wb_reg_en", false,-1);
        tracep->declBit(c+370,"ysyx_22041412_cpu pip wb_rst", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip wb_imm", false,-1, 31,0);
        tracep->declBus(c+99,"ysyx_22041412_cpu pip wb_addr", false,-1, 4,0);
        tracep->declQuad(c+100,"ysyx_22041412_cpu pip wb_imm_data", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041412_cpu pip wb_data", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041412_cpu pip wb_pc", false,-1, 63,0);
        tracep->declQuad(c+106,"ysyx_22041412_cpu pip wb_dnpc", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22041412_cpu pip wb_opcode", false,-1, 6,0);
        tracep->declBit(c+109,"ysyx_22041412_cpu pip wb_csr_jar_en", false,-1);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip csr_reg clk", false,-1);
        tracep->declBit(c+72,"ysyx_22041412_cpu pip csr_reg en", false,-1);
        tracep->declQuad(c+59,"ysyx_22041412_cpu pip csr_reg pc", false,-1, 63,0);
        tracep->declBus(c+73,"ysyx_22041412_cpu pip csr_reg addr", false,-1, 2,0);
        tracep->declBus(c+56,"ysyx_22041412_cpu pip csr_reg func3", false,-1, 2,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip csr_reg data_i", false,-1, 63,0);
        tracep->declQuad(c+69,"ysyx_22041412_cpu pip csr_reg data_o", false,-1, 63,0);
        tracep->declBit(c+74,"ysyx_22041412_cpu pip csr_reg ready_o", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+110+i*2,"ysyx_22041412_cpu pip csr_reg mcsr_reg", true,(i+0), 63,0);}}
        tracep->declBit(c+74,"ysyx_22041412_cpu pip csr_reg ready", false,-1);
        tracep->declQuad(c+69,"ysyx_22041412_cpu pip csr_reg data_r", false,-1, 63,0);
        tracep->declQuad(c+122,"ysyx_22041412_cpu pip csr_reg data_w", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22041412_cpu pip csr_reg data", false,-1, 63,0);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip IF_sram clk", false,-1);
        tracep->declQuad(c+15,"ysyx_22041412_cpu pip IF_sram Addr", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip IF_sram ready_i", false,-1);
        tracep->declBit(c+367,"ysyx_22041412_cpu pip IF_sram valid_o", false,-1);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip IF_sram Imm", false,-1, 31,0);
        tracep->declBit(c+367,"ysyx_22041412_cpu pip IF_sram valid", false,-1);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip IF_sram imm_data", false,-1, 31,0);
        tracep->declBus(c+19,"ysyx_22041412_cpu pip ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_22041412_cpu pip ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu pip ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22041412_cpu pip ID_decode func7", false,-1);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22041412_cpu pip ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+25,"ysyx_22041412_cpu pip ID_decode imme", false,-1, 63,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip ID_decode V1Type", false,-1, 1,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip ID_decode V2Type", false,-1, 1,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu pip ID_decode Mul_en", false,-1);
        tracep->declBit(c+126,"ysyx_22041412_cpu pip ID_decode I_type", false,-1);
        tracep->declBit(c+127,"ysyx_22041412_cpu pip ID_decode U_type", false,-1);
        tracep->declBit(c+128,"ysyx_22041412_cpu pip ID_decode J_type", false,-1);
        tracep->declBit(c+129,"ysyx_22041412_cpu pip ID_decode B_type", false,-1);
        tracep->declBit(c+130,"ysyx_22041412_cpu pip ID_decode S_type", false,-1);
        tracep->declBit(c+131,"ysyx_22041412_cpu pip ID_decode R_type", false,-1);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip EXE_alu clk", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip EXE_alu scr2", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22041412_cpu pip EXE_alu imm", false,-1, 63,0);
        tracep->declBus(c+58,"ysyx_22041412_cpu pip EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+56,"ysyx_22041412_cpu pip EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+57,"ysyx_22041412_cpu pip EXE_alu func7", false,-1);
        tracep->declBit(c+46,"ysyx_22041412_cpu pip EXE_alu mul_en", false,-1);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip EXE_alu ready_i", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu pip EXE_alu stall", false,-1);
        tracep->declQuad(c+67,"ysyx_22041412_cpu pip EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+132,"ysyx_22041412_cpu pip EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22041412_cpu pip EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22041412_cpu pip EXE_alu BY", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22041412_cpu pip EXE_alu mul_ready", false,-1);
        tracep->declQuad(c+138,"ysyx_22041412_cpu pip EXE_alu mux_result", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22041412_cpu pip EXE_alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22041412_cpu pip EXE_alu Alusu", false,-1, 63,0);
        tracep->declBit(c+142,"ysyx_22041412_cpu pip EXE_alu rv64i_en", false,-1);
        tracep->declBit(c+143,"ysyx_22041412_cpu pip EXE_alu rv64r_en", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu mul_rsa", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip EXE_alu mul_rsb", false,-1, 63,0);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip EXE_alu mul clk", false,-1);
        tracep->declBit(c+46,"ysyx_22041412_cpu pip EXE_alu mul en", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu mul rsA", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip EXE_alu mul rsB", false,-1, 63,0);
        tracep->declBus(c+56,"ysyx_22041412_cpu pip EXE_alu mul func3", false,-1, 2,0);
        tracep->declBit(c+143,"ysyx_22041412_cpu pip EXE_alu mul rv64_en", false,-1);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip EXE_alu mul ready_i", false,-1);
        tracep->declBit(c+137,"ysyx_22041412_cpu pip EXE_alu mul ready_o", false,-1);
        tracep->declQuad(c+140,"ysyx_22041412_cpu pip EXE_alu mul result", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22041412_cpu pip EXE_alu mul rsAW", false,-1, 31,0);
        tracep->declBus(c+145,"ysyx_22041412_cpu pip EXE_alu mul rsBW", false,-1, 31,0);
        tracep->declBit(c+137,"ysyx_22041412_cpu pip EXE_alu mul ready", false,-1);
        tracep->declQuad(c+140,"ysyx_22041412_cpu pip EXE_alu mul data", false,-1, 63,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+372,"ysyx_22041412_cpu pip EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu pip EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+138,"ysyx_22041412_cpu pip EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+132,"ysyx_22041412_cpu pip EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+374,"ysyx_22041412_cpu pip EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+146,"ysyx_22041412_cpu pip EXE_alu Mux_ALU lut", false,-1, 1172,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+372,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+376,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+138,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+132,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+374,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+146,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut", false,-1, 1172,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declArray(c+183+i*3,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+234+i*1,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declQuad(c+251+i*2,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+285,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+287,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+378,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu pip MEM_dram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu pip MEM_dram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+379,"ysyx_22041412_cpu pip MEM_dram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip MEM_dram clk", false,-1);
        tracep->declBus(c+79,"ysyx_22041412_cpu pip MEM_dram func3", false,-1, 2,0);
        tracep->declQuad(c+83,"ysyx_22041412_cpu pip MEM_dram addr", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22041412_cpu pip MEM_dram wdata", false,-1, 63,0);
        tracep->declBit(c+81,"ysyx_22041412_cpu pip MEM_dram en", false,-1);
        tracep->declBit(c+80,"ysyx_22041412_cpu pip MEM_dram wen", false,-1);
        tracep->declBit(c+96,"ysyx_22041412_cpu pip MEM_dram ready_i", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip MEM_dram stall", false,-1);
        tracep->declBit(c+97,"ysyx_22041412_cpu pip MEM_dram ready_o", false,-1);
        tracep->declQuad(c+94,"ysyx_22041412_cpu pip MEM_dram rdata", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22041412_cpu pip MEM_dram r_data", false,-1, 63,0);
        tracep->declQuad(c+288,"ysyx_22041412_cpu pip MEM_dram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+290,"ysyx_22041412_cpu pip MEM_dram wmask", false,-1, 7,0);
        tracep->declBit(c+97,"ysyx_22041412_cpu pip MEM_dram readyo", false,-1);
        tracep->declBit(c+356,"ysyx_22041412_cpu pip M_reg clk", false,-1);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+30,"ysyx_22041412_cpu pip M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041412_cpu pip M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+98,"ysyx_22041412_cpu pip M_reg Wen", false,-1);
        tracep->declQuad(c+33,"ysyx_22041412_cpu pip M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu pip M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041412_cpu pip M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+370,"ysyx_22041412_cpu pip M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+291+i*2,"ysyx_22041412_cpu pip M_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+355,"ysyx_22041412_cpu pip M_reg write_en", false,-1);
        tracep->declBus(c+2,"ysyx_22041412_cpu pip Stall stall", false,-1, 5,0);
        tracep->declBit(c+365,"ysyx_22041412_cpu pip Stall rst", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip Stall stall_from_id", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip Stall stall_from_ex", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_cpu pip Stall stall_from_mem", false,-1);
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
        tracep->fullBit(oldp+9,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                         & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                         ? 1U : 0U) 
                                       | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
        tracep->fullBit(oldp+10,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait));
        tracep->fullBit(oldp+12,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__readyo)) 
                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+13,((1U & (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                                         | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__readyo)) 
                                             & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                             ? 1U : 0U)) 
                                        | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                            ? 1U : 0U)))));
        tracep->fullIData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_sram__DOT__imm_data),32);
        tracep->fullQData(oldp+15,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
        tracep->fullQData(oldp+17,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
        tracep->fullIData(oldp+19,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type),2);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type),2);
        tracep->fullBit(oldp+24,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type) 
                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                     >> 0x19U))));
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
        tracep->fullCData(oldp+27,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+28,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra),5);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb),5);
        tracep->fullCData(oldp+31,(((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                     ? 0U : ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                 >> 7U))))),5);
        tracep->fullCData(oldp+32,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
        tracep->fullQData(oldp+33,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_jar_en));
        tracep->fullSData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr),12);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id),3);
        tracep->fullBit(oldp+40,(((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                   ? 1U : 0U)));
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type),2);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type),2);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra),5);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb),5);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
        tracep->fullQData(oldp+61,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type))
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
                                                  ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__r_data
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
        tracep->fullQData(oldp+63,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type))
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
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__r_data
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
        tracep->fullQData(oldp+65,((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
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
                                             ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__r_data
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
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_r),64);
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_jar_en));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en));
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id),3);
        tracep->fullBit(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready));
        tracep->fullBit(oldp+75,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                   ? 1U : 0U)));
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
        tracep->fullCData(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
        tracep->fullCData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en));
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res),64);
        tracep->fullBit(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_csr_jar_en));
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__r_data),64);
        tracep->fullBit(oldp+96,((1U & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__readyo));
        tracep->fullBit(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en));
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_csr_jar_en));
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_w),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data),64);
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+128,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+129,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+130,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type));
        tracep->fullCData(oldp+132,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+133,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+135,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ready));
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data),64);
        tracep->fullBit(oldp+142,((0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))));
        tracep->fullBit(oldp+143,((0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))));
        tracep->fullIData(oldp+144,((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1)),32);
        tracep->fullIData(oldp+145,((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)),32);
        tracep->fullWData(oldp+146,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
        tracep->fullWData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_dram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+290,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
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
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+355,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en) 
                                    & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+356,(vlSelf->clk));
        tracep->fullQData(oldp+357,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+359,(vlSelf->CP_NPC),64);
        tracep->fullQData(oldp+361,(vlSelf->MEM_PC),64);
        tracep->fullIData(oldp+363,(vlSelf->CP_IMM),32);
        tracep->fullBit(oldp+364,(vlSelf->Ebreak));
        tracep->fullBit(oldp+365,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst));
        tracep->fullBit(oldp+366,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait));
        tracep->fullBit(oldp+367,(1U));
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_temp),64);
        tracep->fullBit(oldp+370,(0U));
        tracep->fullIData(oldp+371,(0x11U),32);
        tracep->fullIData(oldp+372,(5U),32);
        tracep->fullIData(oldp+373,(0x40U),32);
        tracep->fullQData(oldp+374,(0ULL),64);
        tracep->fullIData(oldp+376,(1U),32);
        tracep->fullIData(oldp+377,(0x45U),32);
        tracep->fullIData(oldp+378,(0x11U),32);
        tracep->fullIData(oldp+379,(0x10000U),32);
    }
}
