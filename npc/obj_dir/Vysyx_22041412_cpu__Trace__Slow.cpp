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
        tracep->declBit(c+293,"clk", false,-1);
        tracep->declBus(c+294,"CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+295,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+297,"CP_NPC", false,-1, 63,0);
        tracep->declBit(c+299,"CP_difftest", false,-1);
        tracep->declBit(c+300,"CP_Immen", false,-1);
        tracep->declBit(c+293,"ysyx_22041412_cpu clk", false,-1);
        tracep->declBus(c+294,"ysyx_22041412_cpu CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+295,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBit(c+299,"ysyx_22041412_cpu CP_difftest", false,-1);
        tracep->declBit(c+300,"ysyx_22041412_cpu CP_Immen", false,-1);
        tracep->declBus(c+8,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+9,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu Reg_EN", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu Imm_EN", false,-1);
        tracep->declQuad(c+12,"ysyx_22041412_cpu rsA", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041412_cpu rsB", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu rsW", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBus(c+19,"ysyx_22041412_cpu Ra", false,-1, 4,0);
        tracep->declBus(c+20,"ysyx_22041412_cpu Rb", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Rw", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu opcode", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu func3", false,-1, 2,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu func7", false,-1);
        tracep->declQuad(c+25,"ysyx_22041412_cpu immdata", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Imm_Type", false,-1, 3,0);
        tracep->declBit(c+28,"ysyx_22041412_cpu sram_r", false,-1);
        tracep->declBit(c+29,"ysyx_22041412_cpu sram_w", false,-1);
        tracep->declQuad(c+30,"ysyx_22041412_cpu sram_addr_r", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu sram_addr_w", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu sram_data_r", false,-1, 63,0);
        tracep->declQuad(c+36,"ysyx_22041412_cpu sram_data_w", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu ALU_S", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu ALU_A", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22041412_cpu DNPC", false,-1, 63,0);
        tracep->declQuad(c+44,"ysyx_22041412_cpu SNPC", false,-1, 63,0);
        tracep->declQuad(c+46,"ysyx_22041412_cpu PC", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22041412_cpu EQ_EN", false,-1);
        tracep->declBit(c+293,"ysyx_22041412_cpu X_reg clk", false,-1);
        tracep->declBus(c+19,"ysyx_22041412_cpu X_reg Ra", false,-1, 4,0);
        tracep->declBus(c+20,"ysyx_22041412_cpu X_reg Rb", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu X_reg Rw", false,-1, 4,0);
        tracep->declBit(c+10,"ysyx_22041412_cpu X_reg Wen", false,-1);
        tracep->declQuad(c+12,"ysyx_22041412_cpu X_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041412_cpu X_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu X_reg BusW", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+49+i*2,"ysyx_22041412_cpu X_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+293,"ysyx_22041412_cpu ImmMem clk", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu ImmMem en", false,-1);
        tracep->declQuad(c+46,"ysyx_22041412_cpu ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+113,"ysyx_22041412_cpu ImmMem Immaddr", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+302,"ysyx_22041412_cpu sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+293,"ysyx_22041412_cpu sram clk", false,-1);
        tracep->declQuad(c+30,"ysyx_22041412_cpu sram addr_r", false,-1, 63,0);
        tracep->declBit(c+28,"ysyx_22041412_cpu sram read_en", false,-1);
        tracep->declQuad(c+34,"ysyx_22041412_cpu sram data_r", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu sram addr_w", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22041412_cpu sram wead_en", false,-1);
        tracep->declQuad(c+36,"ysyx_22041412_cpu sram data_w", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu sram i", false,-1, 31,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu Immdecode instr", false,-1, 31,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu Immdecode opcode", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu Immdecode func3", false,-1, 2,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu Immdecode func7", false,-1);
        tracep->declBus(c+19,"ysyx_22041412_cpu Immdecode Rs1", false,-1, 4,0);
        tracep->declBus(c+20,"ysyx_22041412_cpu Immdecode Rs2", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Immdecode Rd", false,-1, 4,0);
        tracep->declQuad(c+25,"ysyx_22041412_cpu Immdecode imme", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Immdecode Type", false,-1, 3,0);
        tracep->declBit(c+114,"ysyx_22041412_cpu Immdecode I_type", false,-1);
        tracep->declBit(c+115,"ysyx_22041412_cpu Immdecode U_type", false,-1);
        tracep->declBit(c+116,"ysyx_22041412_cpu Immdecode J_type", false,-1);
        tracep->declBit(c+117,"ysyx_22041412_cpu Immdecode B_type", false,-1);
        tracep->declBit(c+118,"ysyx_22041412_cpu Immdecode S_type", false,-1);
        tracep->declQuad(c+119,"ysyx_22041412_cpu Immdecode I_imme", false,-1, 63,0);
        tracep->declQuad(c+121,"ysyx_22041412_cpu Immdecode U_imme", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22041412_cpu Immdecode J_imme", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22041412_cpu Immdecode B_imme", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22041412_cpu Immdecode S_imme", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu Alu scr1", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu Alu scr2", false,-1, 63,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu Alu opcode", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu Alu func3", false,-1, 2,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu Alu func7", false,-1);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Alu result", false,-1, 63,0);
        tracep->declBus(c+129,"ysyx_22041412_cpu Alu Mode", false,-1, 4,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu Alu AU", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu Alu BU", false,-1, 63,0);
        tracep->declQuad(c+130,"ysyx_22041412_cpu Alu AY", false,-1, 63,0);
        tracep->declQuad(c+132,"ysyx_22041412_cpu Alu BY", false,-1, 63,0);
        tracep->declQuad(c+134,"ysyx_22041412_cpu Alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Alu Alusu", false,-1, 63,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu Alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+134,"ysyx_22041412_cpu Alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+129,"ysyx_22041412_cpu Alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+305,"ysyx_22041412_cpu Alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+136,"ysyx_22041412_cpu Alu Mux_ALU lut", false,-1, 758,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu Alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu Alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+134,"ysyx_22041412_cpu Alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+129,"ysyx_22041412_cpu Alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+305,"ysyx_22041412_cpu Alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+136,"ysyx_22041412_cpu Alu Mux_ALU i0 lut", false,-1, 758,0);
        tracep->declBus(c+308,"ysyx_22041412_cpu Alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declArray(c+160+i*3,"ysyx_22041412_cpu Alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+193+i*1,"ysyx_22041412_cpu Alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declQuad(c+204+i*2,"ysyx_22041412_cpu Alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+226,"ysyx_22041412_cpu Alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+228,"ysyx_22041412_cpu Alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+309,"ysyx_22041412_cpu Alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_ALU_rsa NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_rsa KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_rsa DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu Mux_ALU_rsa out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_rsa key", false,-1, 3,0);
        tracep->declQuad(c+12,"ysyx_22041412_cpu Mux_ALU_rsa default_out", false,-1, 63,0);
        tracep->declArray(c+229,"ysyx_22041412_cpu Mux_ALU_rsa lut", false,-1, 67,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_ALU_rsa i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_rsa i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_rsa i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_ALU_rsa i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu Mux_ALU_rsa i0 out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_rsa i0 key", false,-1, 3,0);
        tracep->declQuad(c+12,"ysyx_22041412_cpu Mux_ALU_rsa i0 default_out", false,-1, 63,0);
        tracep->declArray(c+229,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut", false,-1, 67,0);
        tracep->declBus(c+311,"ysyx_22041412_cpu Mux_ALU_rsa i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+232+i*3,"ysyx_22041412_cpu Mux_ALU_rsa i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+235+i*1,"ysyx_22041412_cpu Mux_ALU_rsa i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+236+i*2,"ysyx_22041412_cpu Mux_ALU_rsa i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+238,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+240,"ysyx_22041412_cpu Mux_ALU_rsa i0 hit", false,-1);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_ALU_rsa i0 i", false,-1, 31,0);
        tracep->declBus(c+313,"ysyx_22041412_cpu Mux_ALU_rsb NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_rsb KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_rsb DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu Mux_ALU_rsb out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_rsb key", false,-1, 3,0);
        tracep->declQuad(c+14,"ysyx_22041412_cpu Mux_ALU_rsb default_out", false,-1, 63,0);
        tracep->declArray(c+241,"ysyx_22041412_cpu Mux_ALU_rsb lut", false,-1, 135,0);
        tracep->declBus(c+313,"ysyx_22041412_cpu Mux_ALU_rsb i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_rsb i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_rsb i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_ALU_rsb i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu Mux_ALU_rsb i0 out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_rsb i0 key", false,-1, 3,0);
        tracep->declQuad(c+14,"ysyx_22041412_cpu Mux_ALU_rsb i0 default_out", false,-1, 63,0);
        tracep->declArray(c+241,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut", false,-1, 135,0);
        tracep->declBus(c+311,"ysyx_22041412_cpu Mux_ALU_rsb i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+246+i*3,"ysyx_22041412_cpu Mux_ALU_rsb i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+252+i*1,"ysyx_22041412_cpu Mux_ALU_rsb i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+254+i*2,"ysyx_22041412_cpu Mux_ALU_rsb i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+258,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+260,"ysyx_22041412_cpu Mux_ALU_rsb i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22041412_cpu Mux_ALU_rsb i0 i", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22041412_cpu Mux_ALU_result NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_result KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_result DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu Mux_ALU_result out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_result key", false,-1, 3,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_result default_out", false,-1, 63,0);
        tracep->declArray(c+261,"ysyx_22041412_cpu Mux_ALU_result lut", false,-1, 203,0);
        tracep->declBus(c+315,"ysyx_22041412_cpu Mux_ALU_result i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_ALU_result i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22041412_cpu Mux_ALU_result i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_ALU_result i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu Mux_ALU_result i0 out", false,-1, 63,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu Mux_ALU_result i0 key", false,-1, 3,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_result i0 default_out", false,-1, 63,0);
        tracep->declArray(c+261,"ysyx_22041412_cpu Mux_ALU_result i0 lut", false,-1, 203,0);
        tracep->declBus(c+311,"ysyx_22041412_cpu Mux_ALU_result i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+268+i*3,"ysyx_22041412_cpu Mux_ALU_result i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+277+i*1,"ysyx_22041412_cpu Mux_ALU_result i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+280+i*2,"ysyx_22041412_cpu Mux_ALU_result i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+286,"ysyx_22041412_cpu Mux_ALU_result i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+288,"ysyx_22041412_cpu Mux_ALU_result i0 hit", false,-1);
        tracep->declBus(c+316,"ysyx_22041412_cpu Mux_ALU_result i0 i", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Imm_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_Imm_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Imm_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu Mux_Imm_en out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Imm_en key", false,-1, 3,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu Mux_Imm_en default_out", false,-1, 0,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Imm_en lut", false,-1, 4,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Imm_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_Imm_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Imm_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Imm_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu Mux_Imm_en i0 out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Imm_en i0 key", false,-1, 3,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu Mux_Imm_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+318,"ysyx_22041412_cpu Mux_Imm_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu Mux_Imm_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+289,"ysyx_22041412_cpu Mux_Imm_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+290,"ysyx_22041412_cpu Mux_Imm_en i0 hit", false,-1);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Imm_en i0 i", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Reg_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_Reg_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Reg_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Reg_en out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Reg_en key", false,-1, 3,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu Mux_Reg_en default_out", false,-1, 0,0);
        tracep->declBus(c+319,"ysyx_22041412_cpu Mux_Reg_en lut", false,-1, 4,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Reg_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22041412_cpu Mux_Reg_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Reg_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22041412_cpu Mux_Reg_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Reg_en i0 out", false,-1, 0,0);
        tracep->declBus(c+8,"ysyx_22041412_cpu Mux_Reg_en i0 key", false,-1, 3,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu Mux_Reg_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+319,"ysyx_22041412_cpu Mux_Reg_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu Mux_Reg_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+6+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+7+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+291,"ysyx_22041412_cpu Mux_Reg_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+292,"ysyx_22041412_cpu Mux_Reg_en i0 hit", false,-1);
        tracep->declBus(c+312,"ysyx_22041412_cpu Mux_Reg_en i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp280;
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
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
        tracep->fullCData(oldp+19,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+20,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+21,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 7U))),5);
        tracep->fullCData(oldp+22,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)),7);
        tracep->fullCData(oldp+23,((7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+24,((1U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                        >> 0x1eU))));
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
        tracep->fullBit(oldp+28,(((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__sram_w));
        tracep->fullQData(oldp+30,((vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                    + vlSelf->ysyx_22041412_cpu__DOT__immdata)),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
        tracep->fullQData(oldp+36,(((1U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                  >> 0xcU)))
                                     ? (QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                     : 0ULL)),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
        tracep->fullQData(oldp+44,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
        tracep->fullIData(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
        tracep->fullBit(oldp+117,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullBit(oldp+118,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullQData(oldp+119,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+121,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
        tracep->fullQData(oldp+123,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+125,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+127,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                   >> 7U)))))),64);
        tracep->fullCData(oldp+129,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),759);
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
        tracep->fullWData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        __Vtemp280[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
        __Vtemp280[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                  >> 0x20U));
        __Vtemp280[2U] = 2U;
        tracep->fullWData(oldp+229,(__Vtemp280),68);
        tracep->fullWData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullCData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),136);
        tracep->fullWData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),204);
        tracep->fullWData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+293,(vlSelf->clk));
        tracep->fullIData(oldp+294,(vlSelf->CP_Imm),32);
        tracep->fullQData(oldp+295,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+297,(vlSelf->CP_NPC),64);
        tracep->fullBit(oldp+299,(vlSelf->CP_difftest));
        tracep->fullBit(oldp+300,(vlSelf->CP_Immen));
        tracep->fullIData(oldp+301,(0x40U),32);
        tracep->fullIData(oldp+302,(0x1000U),32);
        tracep->fullIData(oldp+303,(0xbU),32);
        tracep->fullIData(oldp+304,(5U),32);
        tracep->fullQData(oldp+305,(0ULL),64);
        tracep->fullIData(oldp+307,(1U),32);
        tracep->fullIData(oldp+308,(0x45U),32);
        tracep->fullIData(oldp+309,(0xbU),32);
        tracep->fullIData(oldp+310,(4U),32);
        tracep->fullIData(oldp+311,(0x44U),32);
        tracep->fullIData(oldp+312,(1U),32);
        tracep->fullIData(oldp+313,(2U),32);
        tracep->fullIData(oldp+314,(2U),32);
        tracep->fullIData(oldp+315,(3U),32);
        tracep->fullIData(oldp+316,(3U),32);
        tracep->fullBit(oldp+317,(0U));
        tracep->fullCData(oldp+318,(1U),5);
        tracep->fullCData(oldp+319,(7U),5);
    }
}
