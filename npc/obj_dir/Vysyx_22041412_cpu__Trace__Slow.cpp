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
        tracep->declBit(c+362,"clk", false,-1);
        tracep->declBus(c+363,"CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+364,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+366,"CP_NPC", false,-1, 63,0);
        tracep->declBit(c+368,"CP_difftest", false,-1);
        tracep->declBit(c+369,"CP_Immen", false,-1);
        tracep->declBit(c+370,"Ebreak", false,-1);
        tracep->declBit(c+362,"ysyx_22041412_cpu clk", false,-1);
        tracep->declBus(c+363,"ysyx_22041412_cpu CP_Imm", false,-1, 31,0);
        tracep->declQuad(c+364,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+366,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBit(c+368,"ysyx_22041412_cpu CP_difftest", false,-1);
        tracep->declBit(c+369,"ysyx_22041412_cpu CP_Immen", false,-1);
        tracep->declBit(c+370,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+7,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+8,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu Reg_EN", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu Imm_EN", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu Mul_EN", false,-1);
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
        tracep->declQuad(c+30,"ysyx_22041412_cpu rsA", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu rsB", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu rsW", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22041412_cpu Rrst", false,-1);
        tracep->declQuad(c+35,"ysyx_22041412_cpu ALU_S", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu ALU_A", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Mul_Result", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22041412_cpu DNPC", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22041412_cpu SNPC", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu PC", false,-1, 63,0);
        tracep->declBit(c+49,"ysyx_22041412_cpu EQ_EN", false,-1);
        tracep->declBit(c+50,"ysyx_22041412_cpu mulw_en", false,-1);
        tracep->declBit(c+362,"ysyx_22041412_cpu X_reg clk", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu X_reg Ra", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu X_reg Rb", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu X_reg Rw", false,-1, 4,0);
        tracep->declBit(c+9,"ysyx_22041412_cpu X_reg Wen", false,-1);
        tracep->declQuad(c+30,"ysyx_22041412_cpu X_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu X_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu X_reg BusW", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22041412_cpu X_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+51+i*2,"ysyx_22041412_cpu X_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+362,"ysyx_22041412_cpu ImmMem clk", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_cpu ImmMem en", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+12,"ysyx_22041412_cpu ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+115,"ysyx_22041412_cpu ImmMem Immaddr", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"ysyx_22041412_cpu sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+362,"ysyx_22041412_cpu sram clk", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram addr_r", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22041412_cpu sram read_en", false,-1);
        tracep->declQuad(c+26,"ysyx_22041412_cpu sram data_r", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu sram func3", false,-1, 2,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu sram addr_w", false,-1, 63,0);
        tracep->declBit(c+23,"ysyx_22041412_cpu sram wead_en", false,-1);
        tracep->declQuad(c+28,"ysyx_22041412_cpu sram data_w", false,-1, 63,0);
        tracep->declQuad(c+116,"ysyx_22041412_cpu sram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+118,"ysyx_22041412_cpu sram wmask", false,-1, 7,0);
        tracep->declBus(c+12,"ysyx_22041412_cpu Immdecode instr", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu Immdecode opcode", false,-1, 6,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu Immdecode func3", false,-1, 2,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu Immdecode func7", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu Immdecode Rs1", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu Immdecode Rs2", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu Immdecode Rd", false,-1, 4,0);
        tracep->declQuad(c+19,"ysyx_22041412_cpu Immdecode imme", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Immdecode Type", false,-1, 3,0);
        tracep->declBit(c+119,"ysyx_22041412_cpu Immdecode I_type", false,-1);
        tracep->declBit(c+120,"ysyx_22041412_cpu Immdecode U_type", false,-1);
        tracep->declBit(c+121,"ysyx_22041412_cpu Immdecode J_type", false,-1);
        tracep->declBit(c+122,"ysyx_22041412_cpu Immdecode B_type", false,-1);
        tracep->declBit(c+123,"ysyx_22041412_cpu Immdecode S_type", false,-1);
        tracep->declBit(c+124,"ysyx_22041412_cpu Immdecode R_type", false,-1);
        tracep->declQuad(c+125,"ysyx_22041412_cpu Immdecode I_imme", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22041412_cpu Immdecode U_imme", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22041412_cpu Immdecode J_imme", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22041412_cpu Immdecode B_imme", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22041412_cpu Immdecode S_imme", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu Alu scr1", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu Alu scr2", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu Alu opcode", false,-1, 6,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu Alu func3", false,-1, 2,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu Alu func7", false,-1);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Alu result", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22041412_cpu Alu Mode", false,-1, 4,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu Alu AU", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu Alu BU", false,-1, 63,0);
        tracep->declQuad(c+136,"ysyx_22041412_cpu Alu AY", false,-1, 63,0);
        tracep->declQuad(c+138,"ysyx_22041412_cpu Alu BY", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22041412_cpu Alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Alu Alusu", false,-1, 63,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu Alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+374,"ysyx_22041412_cpu Alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+140,"ysyx_22041412_cpu Alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22041412_cpu Alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+375,"ysyx_22041412_cpu Alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+142,"ysyx_22041412_cpu Alu Mux_ALU lut", false,-1, 1103,0);
        tracep->declBus(c+373,"ysyx_22041412_cpu Alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+374,"ysyx_22041412_cpu Alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+140,"ysyx_22041412_cpu Alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+135,"ysyx_22041412_cpu Alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+375,"ysyx_22041412_cpu Alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+142,"ysyx_22041412_cpu Alu Mux_ALU i0 lut", false,-1, 1103,0);
        tracep->declBus(c+378,"ysyx_22041412_cpu Alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+177+i*3,"ysyx_22041412_cpu Alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+225+i*1,"ysyx_22041412_cpu Alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declQuad(c+241+i*2,"ysyx_22041412_cpu Alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+273,"ysyx_22041412_cpu Alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+275,"ysyx_22041412_cpu Alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+379,"ysyx_22041412_cpu Alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBit(c+362,"ysyx_22041412_cpu Mul clk", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu Mul en", false,-1);
        tracep->declQuad(c+30,"ysyx_22041412_cpu Mul rsA", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu Mul rsB", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu Mul func3", false,-1, 2,0);
        tracep->declBit(c+50,"ysyx_22041412_cpu Mul w_en", false,-1);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Mul data", false,-1, 63,0);
        tracep->declQuad(c+276,"ysyx_22041412_cpu Mul ua", false,-1, 63,0);
        tracep->declQuad(c+278,"ysyx_22041412_cpu Mul ub", false,-1, 63,0);
        tracep->declQuad(c+280,"ysyx_22041412_cpu Mul result", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu Mul tx", false,-1, 63,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_ALU_rsa NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsa KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_rsa DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu Mux_ALU_rsa out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsa key", false,-1, 3,0);
        tracep->declQuad(c+30,"ysyx_22041412_cpu Mux_ALU_rsa default_out", false,-1, 63,0);
        tracep->declArray(c+282,"ysyx_22041412_cpu Mux_ALU_rsa lut", false,-1, 67,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_ALU_rsa i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsa i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_rsa i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_ALU_rsa i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu Mux_ALU_rsa i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsa i0 key", false,-1, 3,0);
        tracep->declQuad(c+30,"ysyx_22041412_cpu Mux_ALU_rsa i0 default_out", false,-1, 63,0);
        tracep->declArray(c+282,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut", false,-1, 67,0);
        tracep->declBus(c+381,"ysyx_22041412_cpu Mux_ALU_rsa i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+285+i*3,"ysyx_22041412_cpu Mux_ALU_rsa i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+288+i*1,"ysyx_22041412_cpu Mux_ALU_rsa i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+289+i*2,"ysyx_22041412_cpu Mux_ALU_rsa i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+291,"ysyx_22041412_cpu Mux_ALU_rsa i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+293,"ysyx_22041412_cpu Mux_ALU_rsa i0 hit", false,-1);
        tracep->declBus(c+382,"ysyx_22041412_cpu Mux_ALU_rsa i0 i", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsb NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsb KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_rsb DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu Mux_ALU_rsb out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsb key", false,-1, 3,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu Mux_ALU_rsb default_out", false,-1, 63,0);
        tracep->declArray(c+294,"ysyx_22041412_cpu Mux_ALU_rsb lut", false,-1, 271,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsb i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_rsb i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_rsb i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_ALU_rsb i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu Mux_ALU_rsb i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_rsb i0 key", false,-1, 3,0);
        tracep->declQuad(c+28,"ysyx_22041412_cpu Mux_ALU_rsb i0 default_out", false,-1, 63,0);
        tracep->declArray(c+294,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut", false,-1, 271,0);
        tracep->declBus(c+381,"ysyx_22041412_cpu Mux_ALU_rsb i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+303+i*3,"ysyx_22041412_cpu Mux_ALU_rsb i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+315+i*1,"ysyx_22041412_cpu Mux_ALU_rsb i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+319+i*2,"ysyx_22041412_cpu Mux_ALU_rsb i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+327,"ysyx_22041412_cpu Mux_ALU_rsb i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+329,"ysyx_22041412_cpu Mux_ALU_rsb i0 hit", false,-1);
        tracep->declBus(c+383,"ysyx_22041412_cpu Mux_ALU_rsb i0 i", false,-1, 31,0);
        tracep->declBus(c+384,"ysyx_22041412_cpu Mux_ALU_result NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_result KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_result DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_result out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_result key", false,-1, 3,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Mux_ALU_result default_out", false,-1, 63,0);
        tracep->declArray(c+330,"ysyx_22041412_cpu Mux_ALU_result lut", false,-1, 203,0);
        tracep->declBus(c+384,"ysyx_22041412_cpu Mux_ALU_result i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_ALU_result i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22041412_cpu Mux_ALU_result i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_ALU_result i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu Mux_ALU_result i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu Mux_ALU_result i0 key", false,-1, 3,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu Mux_ALU_result i0 default_out", false,-1, 63,0);
        tracep->declArray(c+330,"ysyx_22041412_cpu Mux_ALU_result i0 lut", false,-1, 203,0);
        tracep->declBus(c+381,"ysyx_22041412_cpu Mux_ALU_result i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+337+i*3,"ysyx_22041412_cpu Mux_ALU_result i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+346+i*1,"ysyx_22041412_cpu Mux_ALU_result i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+349+i*2,"ysyx_22041412_cpu Mux_ALU_result i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+355,"ysyx_22041412_cpu Mux_ALU_result i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+357,"ysyx_22041412_cpu Mux_ALU_result i0 hit", false,-1);
        tracep->declBus(c+385,"ysyx_22041412_cpu Mux_ALU_result i0 i", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Imm_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_Imm_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Imm_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Imm_en out", false,-1, 0,0);
        tracep->declBus(c+7,"ysyx_22041412_cpu Mux_Imm_en key", false,-1, 3,0);
        tracep->declBus(c+386,"ysyx_22041412_cpu Mux_Imm_en default_out", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_22041412_cpu Mux_Imm_en lut", false,-1, 4,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Imm_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_Imm_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Imm_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Imm_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu Mux_Imm_en i0 out", false,-1, 0,0);
        tracep->declBus(c+7,"ysyx_22041412_cpu Mux_Imm_en i0 key", false,-1, 3,0);
        tracep->declBus(c+386,"ysyx_22041412_cpu Mux_Imm_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+387,"ysyx_22041412_cpu Mux_Imm_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+374,"ysyx_22041412_cpu Mux_Imm_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+2+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+3+i*1,"ysyx_22041412_cpu Mux_Imm_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+358,"ysyx_22041412_cpu Mux_Imm_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+359,"ysyx_22041412_cpu Mux_Imm_en i0 hit", false,-1);
        tracep->declBus(c+382,"ysyx_22041412_cpu Mux_Imm_en i0 i", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Reg_en NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_Reg_en KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Reg_en DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22041412_cpu Mux_Reg_en out", false,-1, 0,0);
        tracep->declBus(c+7,"ysyx_22041412_cpu Mux_Reg_en key", false,-1, 3,0);
        tracep->declBus(c+386,"ysyx_22041412_cpu Mux_Reg_en default_out", false,-1, 0,0);
        tracep->declBus(c+388,"ysyx_22041412_cpu Mux_Reg_en lut", false,-1, 4,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Reg_en i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+380,"ysyx_22041412_cpu Mux_Reg_en i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Reg_en i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+377,"ysyx_22041412_cpu Mux_Reg_en i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22041412_cpu Mux_Reg_en i0 out", false,-1, 0,0);
        tracep->declBus(c+7,"ysyx_22041412_cpu Mux_Reg_en i0 key", false,-1, 3,0);
        tracep->declBus(c+386,"ysyx_22041412_cpu Mux_Reg_en i0 default_out", false,-1, 0,0);
        tracep->declBus(c+388,"ysyx_22041412_cpu Mux_Reg_en i0 lut", false,-1, 4,0);
        tracep->declBus(c+374,"ysyx_22041412_cpu Mux_Reg_en i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+6+i*1,"ysyx_22041412_cpu Mux_Reg_en i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+360,"ysyx_22041412_cpu Mux_Reg_en i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+361,"ysyx_22041412_cpu Mux_Reg_en i0 hit", false,-1);
        tracep->declBus(c+382,"ysyx_22041412_cpu Mux_Reg_en i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp404;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0]),4);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0]),4);
        tracep->fullBit(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0]));
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
        tracep->fullBit(oldp+8,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                  | (0xbU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__Reg_EN));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN));
        tracep->fullBit(oldp+11,((0xfU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))));
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
        tracep->fullBit(oldp+22,((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))));
        tracep->fullBit(oldp+23,((((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                   & (2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count)))
                                   ? 1U : 0U)));
        tracep->fullQData(oldp+24,((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                    + vlSelf->ysyx_22041412_cpu__DOT__rsA)),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
        tracep->fullBit(oldp+34,((((4U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                   & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                   ? 0U : 1U)));
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
        tracep->fullQData(oldp+39,(((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
                                     ? ((2U == (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                         ? (VL_GTS_IQQ(1,64,64, 0ULL, 
                                                       (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                        - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                                             ? 1ULL
                                             : 0ULL)
                                         : ((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                             ? ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                 < vlSelf->ysyx_22041412_cpu__DOT__ALU_S)
                                                 ? 1ULL
                                                 : 0ULL)
                                             : 0ULL))
                                     : (((0x3bU == 
                                          (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                         | (0x1bU == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu)))
                                         : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu))),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__tx),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
        tracep->fullQData(oldp+45,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__mulw_en));
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+118,(((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                      ? 1U : ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                               ? 3U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                       >> 0xcU)))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 0xffU
                                                    : 0U))))),8);
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
        tracep->fullBit(oldp+122,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullBit(oldp+123,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
        tracep->fullBit(oldp+124,(((0x33U == (0x7fU 
                                              & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm)))));
        tracep->fullQData(oldp+125,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+127,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
        tracep->fullQData(oldp+129,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+131,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+133,((((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                        >> 7U))))))),64);
        tracep->fullCData(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
        tracep->fullQData(oldp+136,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))))),64);
        tracep->fullQData(oldp+138,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+142,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1104);
        tracep->fullWData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result),64);
        __Vtemp404[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
        __Vtemp404[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                  >> 0x20U));
        __Vtemp404[2U] = 2U;
        tracep->fullWData(oldp+282,(__Vtemp404),68);
        tracep->fullWData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullCData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),272);
        tracep->fullWData(oldp+303,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+306,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+309,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+312,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+315,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+316,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+317,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+318,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+329,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+330,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),204);
        tracep->fullWData(oldp+337,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+340,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+343,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullCData(oldp+346,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+347,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+348,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[2]),4);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+357,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+358,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+359,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+360,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+361,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+362,(vlSelf->clk));
        tracep->fullIData(oldp+363,(vlSelf->CP_Imm),32);
        tracep->fullQData(oldp+364,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+366,(vlSelf->CP_NPC),64);
        tracep->fullBit(oldp+368,(vlSelf->CP_difftest));
        tracep->fullBit(oldp+369,(vlSelf->CP_Immen));
        tracep->fullBit(oldp+370,(vlSelf->Ebreak));
        tracep->fullIData(oldp+371,(0x40U),32);
        tracep->fullIData(oldp+372,(0x10000U),32);
        tracep->fullIData(oldp+373,(0x10U),32);
        tracep->fullIData(oldp+374,(5U),32);
        tracep->fullQData(oldp+375,(0ULL),64);
        tracep->fullIData(oldp+377,(1U),32);
        tracep->fullIData(oldp+378,(0x45U),32);
        tracep->fullIData(oldp+379,(0x10U),32);
        tracep->fullIData(oldp+380,(4U),32);
        tracep->fullIData(oldp+381,(0x44U),32);
        tracep->fullIData(oldp+382,(1U),32);
        tracep->fullIData(oldp+383,(4U),32);
        tracep->fullIData(oldp+384,(3U),32);
        tracep->fullIData(oldp+385,(3U),32);
        tracep->fullBit(oldp+386,(0U));
        tracep->fullCData(oldp+387,(1U),5);
        tracep->fullCData(oldp+388,(5U),5);
    }
}
