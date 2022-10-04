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
        tracep->declBit(c+295,"clk", false,-1);
        tracep->declBus(c+296,"CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+297,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+299,"CP_NPC", false,-1, 63,0);
        tracep->declBit(c+301,"CP_difftest", false,-1);
        tracep->declBit(c+302,"CP_Immen", false,-1);
        tracep->declBit(c+295,"ysyx_22041412_cpu clk", false,-1);
        tracep->declBus(c+296,"ysyx_22041412_cpu CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+297,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+299,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBit(c+301,"ysyx_22041412_cpu CP_difftest", false,-1);
        tracep->declBit(c+302,"ysyx_22041412_cpu CP_Immen", false,-1);
        tracep->declBus(c+8,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+9,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu Reg_EN", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu Imm_EN", false,-1);
        tracep->declBus(c+12,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBus(c+13,"ysyx_22041412_cpu Ra", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu Rb", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu Rw", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu opcode", false,-1, 6,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu func3", false,-1, 2,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu func7", false,-1);
        tracep->declQuad(c+19,"ysyx_22041412_cpu immdata", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Imm_Type", false,-1, 3,0);
        tracep->declBit(c+22,"ysyx_22041412_cpu sram_r", false,-1);
        tracep->declBit(c+23,"ysyx_22041412_cpu sram_w", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram_addr_r", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram_addr_w", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu sram_data_r", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu sram_data_w", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22041412_cpu sram_Result", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu rsA", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu rsB", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22041412_cpu rsW", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22041412_cpu Rrst", false,-1);
        tracep->declQuad(c+39,"ysyx_22041412_cpu ALU_S", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu ALU_A", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22041412_cpu DNPC", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22041412_cpu SNPC", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu PC", false,-1, 63,0);
        tracep->declBit(c+49,"ysyx_22041412_cpu EQ_EN", false,-1);
        tracep->declBit(c+295,"ysyx_22041412_cpu X_reg clk", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu X_reg Ra", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu X_reg Rb", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu X_reg Rw", false,-1, 4,0);
        tracep->declBit(c+10,"ysyx_22041412_cpu X_reg Wen", false,-1);
        tracep->declQuad(c+32,"ysyx_22041412_cpu X_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu X_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22041412_cpu X_reg BusW", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22041412_cpu X_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+50+i*2,"ysyx_22041412_cpu X_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+295,"ysyx_22041412_cpu ImmMem clk", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu ImmMem en", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+12,"ysyx_22041412_cpu ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+114,"ysyx_22041412_cpu ImmMem Immaddr", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+295,"ysyx_22041412_cpu sram clk", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram addr_r", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22041412_cpu sram read_en", false,-1);
        tracep->declQuad(c+26,"ysyx_22041412_cpu sram data_r", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram addr_w", false,-1, 63,0);
        tracep->declBit(c+23,"ysyx_22041412_cpu sram wead_en", false,-1);
        tracep->declQuad(c+28,"ysyx_22041412_cpu sram data_w", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu sram i", false,-1, 31,0);
        tracep->declBus(c+12,"ysyx_22041412_cpu Immdecode instr", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu Immdecode opcode", false,-1, 6,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu Immdecode func3", false,-1, 2,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu Immdecode func7", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu Immdecode Rs1", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu Immdecode Rs2", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu Immdecode Rd", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_22041412_cpu Immdecode imme", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Immdecode Type", false,-1, 3,0);
        tracep->declBit(c+115,"ysyx_22041412_cpu Immdecode I_type", false,-1);
        tracep->declBit(c+116,"ysyx_22041412_cpu Immdecode U_type", false,-1);
        tracep->declBit(c+117,"ysyx_22041412_cpu Immdecode J_type", false,-1);
        tracep->declBit(c+118,"ysyx_22041412_cpu Immdecode B_type", false,-1);
        tracep->declBit(c+119,"ysyx_22041412_cpu Immdecode S_type", false,-1);
        tracep->declBit(c+120,"ysyx_22041412_cpu Immdecode R_type", false,-1);
        tracep->declQuad(c+121,"ysyx_22041412_cpu Immdecode I_imme", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22041412_cpu Immdecode U_imme", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22041412_cpu Immdecode J_imme", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22041412_cpu Immdecode B_imme", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22041412_cpu Immdecode S_imme", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Alu scr1", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Alu scr2", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu Alu opcode", false,-1, 6,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu Alu func3", false,-1, 2,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu Alu func7", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu Alu result", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu Alu Mode", false,-1, 4,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Alu AU", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Alu BU", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22041412_cpu Alu AY", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22041412_cpu Alu BY", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22041412_cpu Alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu Alu Alusu", false,-1, 63,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu Alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+306,"ysyx_22041412_cpu Alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+136,"ysyx_22041412_cpu Alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu Alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+307,"ysyx_22041412_cpu Alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+138,"ysyx_22041412_cpu Alu Mux_ALU lut", false,-1, 689,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu Alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+306,"ysyx_22041412_cpu Alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+136,"ysyx_22041412_cpu Alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+131,"ysyx_22041412_cpu Alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+307,"ysyx_22041412_cpu Alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+138,"ysyx_22041412_cpu Alu Mux_ALU i0 lut", false,-1, 689,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+160+i*3,"ysyx_22041412_cpu Alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+190+i*1,"ysyx_22041412_cpu Alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+200+i*2,"ysyx_22041412_cpu Alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+220,"ysyx_22041412_cpu Alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+222,"ysyx_22041412_cpu Alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+311,"ysyx_22041412_cpu Alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_ALU_rsa NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsa KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_rsa DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Mux_ALU_rsa out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsa key", false,-1, 3,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_rsa default_out", false,-1, 63,0);
        tracep->declArray(c+223,"ysyx_22041412_cpu Mux_ALU_rsa lut", false,-1, 67,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_ALU_rsa i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsa i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_rsa i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_ALU_rsa i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Mux_ALU_rsa i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsa i0 key", false,-1, 3,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_rsa i0 default_out", false,-1, 63,0);
        tracep->declArray(c+223,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut", false,-1, 67,0);
        tracep->declBus(c+313,"ysyx_22041412_cpu Mux_ALU_rsa i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+226+i*3,"ysyx_22041412_cpu Mux_ALU_rsa i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+229+i*1,"ysyx_22041412_cpu Mux_ALU_rsa i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+230+i*2,"ysyx_22041412_cpu Mux_ALU_rsa i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+232,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+234,"ysyx_22041412_cpu Mux_ALU_rsa i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22041412_cpu Mux_ALU_rsa i0 i", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsb NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsb KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_rsb DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Mux_ALU_rsb out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsb key", false,-1, 3,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu Mux_ALU_rsb default_out", false,-1, 63,0);
        tracep->declArray(c+235,"ysyx_22041412_cpu Mux_ALU_rsb lut", false,-1, 271,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsb i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsb i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_rsb i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_ALU_rsb i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Mux_ALU_rsb i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsb i0 key", false,-1, 3,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu Mux_ALU_rsb i0 default_out", false,-1, 63,0);
        tracep->declArray(c+235,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut", false,-1, 271,0);
        tracep->declBus(c+313,"ysyx_22041412_cpu Mux_ALU_rsb i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+244+i*3,"ysyx_22041412_cpu Mux_ALU_rsb i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+256+i*1,"ysyx_22041412_cpu Mux_ALU_rsb i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+260+i*2,"ysyx_22041412_cpu Mux_ALU_rsb i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+268,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+270,"ysyx_22041412_cpu Mux_ALU_rsb i0 hit", false,-1);
        tracep->declBus(c+315,"ysyx_22041412_cpu Mux_ALU_rsb i0 i", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22041412_cpu Mux_ALU_result NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_result KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_result DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+36,"ysyx_22041412_cpu Mux_ALU_result out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_result key", false,-1, 3,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu Mux_ALU_result default_out", false,-1, 63,0);
        tracep->declArray(c+271,"ysyx_22041412_cpu Mux_ALU_result lut", false,-1, 135,0);
        tracep->declBus(c+316,"ysyx_22041412_cpu Mux_ALU_result i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_result i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Mux_ALU_result i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_ALU_result i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+36,"ysyx_22041412_cpu Mux_ALU_result i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_result i0 key", false,-1, 3,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu Mux_ALU_result i0 default_out", false,-1, 63,0);
        tracep->declArray(c+271,"ysyx_22041412_cpu Mux_ALU_result i0 lut", false,-1, 135,0);
        tracep->declBus(c+313,"ysyx_22041412_cpu Mux_ALU_result i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+276+i*3,"ysyx_22041412_cpu Mux_ALU_result i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+282+i*1,"ysyx_22041412_cpu Mux_ALU_result i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+284+i*2,"ysyx_22041412_cpu Mux_ALU_result i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+288,"ysyx_22041412_cpu Mux_ALU_result i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+290,"ysyx_22041412_cpu Mux_ALU_result i0 hit", false,-1);
        tracep->declBus(c+317,"ysyx_22041412_cpu Mux_ALU_result i0 i", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Imm_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Imm_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Imm_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu Mux_Imm_en out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Imm_en key", false,-1, 3,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Imm_en default_out", false,-1, 0,0);
        tracep->declBus(c+319,"ysyx_22041412_cpu Mux_Imm_en lut", false,-1, 4,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Imm_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Imm_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Imm_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Imm_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu Mux_Imm_en i0 out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Imm_en i0 key", false,-1, 3,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Imm_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+319,"ysyx_22041412_cpu Mux_Imm_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+306,"ysyx_22041412_cpu Mux_Imm_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+291,"ysyx_22041412_cpu Mux_Imm_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+292,"ysyx_22041412_cpu Mux_Imm_en i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22041412_cpu Mux_Imm_en i0 i", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Reg_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Reg_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Reg_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Reg_en out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Reg_en key", false,-1, 3,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Reg_en default_out", false,-1, 0,0);
        tracep->declBus(c+320,"ysyx_22041412_cpu Mux_Reg_en lut", false,-1, 4,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Reg_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Reg_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Reg_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu Mux_Reg_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Reg_en i0 out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Reg_en i0 key", false,-1, 3,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Reg_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+320,"ysyx_22041412_cpu Mux_Reg_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+306,"ysyx_22041412_cpu Mux_Reg_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+6+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+7+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+293,"ysyx_22041412_cpu Mux_Reg_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+294,"ysyx_22041412_cpu Mux_Reg_en i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22041412_cpu Mux_Reg_en i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp279;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__i),32);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0]),4);
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0]),4);
        tracep->fullBit(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
        tracep->fullBit(oldp+9,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                  | (0xbU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__Reg_EN));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN));
        tracep->fullIData(oldp+12,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
        tracep->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 7U))),5);
        tracep->fullCData(oldp+16,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)),7);
        tracep->fullCData(oldp+17,((7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+18,((1U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                        >> 0x1eU))));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
        tracep->fullBit(oldp+22,(((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__sram_w));
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
        tracep->fullQData(oldp+28,(((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                  >> 0xcU)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                     : ((1U == (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                         : ((2U == 
                                             (7U & 
                                              (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                             ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                     >> 0xcU)))
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__rsB
                                                 : 0ULL))))),64);
        tracep->fullQData(oldp+30,(((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                  >> 0xcU)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))))
                                     : ((1U == (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                         ? (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))))
                                         : ((2U == 
                                             (7U & 
                                              (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                             ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                     >> 0xcU)))
                                                 ? vlSelf->ysyx_22041412_cpu__DOT__sram_data_r
                                                 : 0ULL))))),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
        tracep->fullBit(oldp+38,((((4U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                   & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                   ? 0U : 1U)));
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
        tracep->fullQData(oldp+45,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
        tracep->fullIData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
        tracep->fullBit(oldp+118,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullBit(oldp+119,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullBit(oldp+120,(((0x33U == (0x7fU 
                                              & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm)))));
        tracep->fullQData(oldp+121,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+123,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
        tracep->fullQData(oldp+125,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->ysyx_22041412_cpu__DOT__Imm) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                            >> 0x14U)))))))),64);
        tracep->fullQData(oldp+127,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                           >> 7U)))))))),64);
        tracep->fullQData(oldp+129,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                   >> 7U)))))),64);
        tracep->fullCData(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+138,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),690);
        tracep->fullWData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+166,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+169,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+172,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullCData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        __Vtemp279[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
        __Vtemp279[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                  >> 0x20U));
        __Vtemp279[2U] = 2U;
        tracep->fullWData(oldp+223,(__Vtemp279),68);
        tracep->fullWData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullCData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),272);
        tracep->fullWData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),136);
        tracep->fullWData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+295,(vlSelf->clk));
        tracep->fullIData(oldp+296,(vlSelf->CP_Imm),32);
        tracep->fullQData(oldp+297,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+299,(vlSelf->CP_NPC),64);
        tracep->fullBit(oldp+301,(vlSelf->CP_difftest));
        tracep->fullBit(oldp+302,(vlSelf->CP_Immen));
        tracep->fullIData(oldp+303,(0x40U),32);
        tracep->fullIData(oldp+304,(0x10000U),32);
        tracep->fullIData(oldp+305,(0xaU),32);
        tracep->fullIData(oldp+306,(5U),32);
        tracep->fullQData(oldp+307,(0ULL),64);
        tracep->fullIData(oldp+309,(1U),32);
        tracep->fullIData(oldp+310,(0x45U),32);
        tracep->fullIData(oldp+311,(0xaU),32);
        tracep->fullIData(oldp+312,(4U),32);
        tracep->fullIData(oldp+313,(0x44U),32);
        tracep->fullIData(oldp+314,(1U),32);
        tracep->fullIData(oldp+315,(4U),32);
        tracep->fullIData(oldp+316,(2U),32);
        tracep->fullIData(oldp+317,(2U),32);
        tracep->fullBit(oldp+318,(0U));
        tracep->fullCData(oldp+319,(1U),5);
        tracep->fullCData(oldp+320,(5U),5);
    }
}
