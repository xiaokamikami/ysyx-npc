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
        tracep->declBit(c+284,"clk", false,-1);
        tracep->declQuad(c+285,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+287,"CP_NPC", false,-1, 63,0);
        tracep->declBus(c+289,"CP_IMM", false,-1, 31,0);
        tracep->declBit(c+290,"Ebreak", false,-1);
        tracep->declBit(c+284,"ysyx_22041412_cpu clk", false,-1);
        tracep->declQuad(c+285,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBus(c+289,"ysyx_22041412_cpu CP_IMM", false,-1, 31,0);
        tracep->declBit(c+290,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+291,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+292,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+293,"ysyx_22041412_cpu Mul_EN", false,-1);
        tracep->declBus(c+4,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBit(c+284,"ysyx_22041412_cpu pip clk", false,-1);
        tracep->declQuad(c+285,"ysyx_22041412_cpu pip pip_pc", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_22041412_cpu pip pip_dnpc", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22041412_cpu pip pip_imm", false,-1, 31,0);
        tracep->declBit(c+294,"ysyx_22041412_cpu pip pip_stop", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip if_en", false,-1);
        tracep->declBus(c+4,"ysyx_22041412_cpu pip if_imm", false,-1, 31,0);
        tracep->declQuad(c+6,"ysyx_22041412_cpu pip if_pc", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041412_cpu pip if_dnpc", false,-1, 63,0);
        tracep->declBus(c+295,"ysyx_22041412_cpu pip if_start", false,-1, 2,0);
        tracep->declBit(c+10,"ysyx_22041412_cpu pip id_en", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_cpu pip id_imm_V1Type", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip id_imm_V2Type", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_cpu pip id_mul_en", false,-1);
        tracep->declQuad(c+14,"ysyx_22041412_cpu pip id_pc", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu pip id_imm_data", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu pip id_func3", false,-1, 2,0);
        tracep->declBit(c+19,"ysyx_22041412_cpu pip id_func7", false,-1);
        tracep->declBus(c+20,"ysyx_22041412_cpu pip id_Ra", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip id_Rb", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip id_Rw", false,-1, 4,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip id_opcode", false,-1, 6,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip id_rsA", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu pip id_rsB", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip id_imm", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22041412_cpu pip ex_en", false,-1);
        tracep->declBit(c+29,"ysyx_22041412_cpu pip ex_mul_en", false,-1);
        tracep->declQuad(c+30,"ysyx_22041412_cpu pip ex_imm_data", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip ex_v1", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip ex_v2", false,-1, 63,0);
        tracep->declBus(c+36,"ysyx_22041412_cpu pip ex_rw", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22041412_cpu pip ex_func3", false,-1, 2,0);
        tracep->declBit(c+38,"ysyx_22041412_cpu pip ex_func7", false,-1);
        tracep->declBus(c+39,"ysyx_22041412_cpu pip ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu pip ex_res", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22041412_cpu pip ex_pc", false,-1, 63,0);
        tracep->declBit(c+2,"ysyx_22041412_cpu pip mem_en", false,-1);
        tracep->declBit(c+44,"ysyx_22041412_cpu pip mem_ram_en", false,-1);
        tracep->declBus(c+45,"ysyx_22041412_cpu pip mem_rw", false,-1, 4,0);
        tracep->declBus(c+46,"ysyx_22041412_cpu pip mem_opcode", false,-1, 6,0);
        tracep->declBus(c+47,"ysyx_22041412_cpu pip mem_func3", false,-1, 2,0);
        tracep->declBit(c+48,"ysyx_22041412_cpu pip mem_rw_type", false,-1);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip mem_addr", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22041412_cpu pip mem_data", false,-1, 63,0);
        tracep->declQuad(c+53,"ysyx_22041412_cpu pip mem_pc", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22041412_cpu pip mem_imm_data", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip wb_en", false,-1);
        tracep->declBit(c+57,"ysyx_22041412_cpu pip wb_rgw_en", false,-1);
        tracep->declBit(c+296,"ysyx_22041412_cpu pip wb_rst", false,-1);
        tracep->declBus(c+58,"ysyx_22041412_cpu pip wb_addr", false,-1, 4,0);
        tracep->declQuad(c+59,"ysyx_22041412_cpu pip wb_imm_data", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22041412_cpu pip wb_data", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22041412_cpu pip wb_pc", false,-1, 63,0);
        tracep->declQuad(c+65,"ysyx_22041412_cpu pip wb_dnpc", false,-1, 63,0);
        tracep->declBus(c+67,"ysyx_22041412_cpu pip wb_opcode", false,-1, 6,0);
        tracep->declBit(c+284,"ysyx_22041412_cpu pip IF_ImmMem clk", false,-1);
        tracep->declQuad(c+6,"ysyx_22041412_cpu pip IF_ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22041412_cpu pip IF_ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+18,"ysyx_22041412_cpu pip ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+19,"ysyx_22041412_cpu pip ID_decode func7", false,-1);
        tracep->declBus(c+20,"ysyx_22041412_cpu pip ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+22,"ysyx_22041412_cpu pip ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+16,"ysyx_22041412_cpu pip ID_decode imme", false,-1, 63,0);
        tracep->declBit(c+11,"ysyx_22041412_cpu pip ID_decode V1Type", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip ID_decode V2Type", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_cpu pip ID_decode Mul_en", false,-1);
        tracep->declBit(c+68,"ysyx_22041412_cpu pip ID_decode I_type", false,-1);
        tracep->declBit(c+69,"ysyx_22041412_cpu pip ID_decode U_type", false,-1);
        tracep->declBit(c+70,"ysyx_22041412_cpu pip ID_decode J_type", false,-1);
        tracep->declBit(c+71,"ysyx_22041412_cpu pip ID_decode B_type", false,-1);
        tracep->declBit(c+72,"ysyx_22041412_cpu pip ID_decode S_type", false,-1);
        tracep->declBit(c+73,"ysyx_22041412_cpu pip ID_decode R_type", false,-1);
        tracep->declQuad(c+74,"ysyx_22041412_cpu pip ID_decode I_imme", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22041412_cpu pip ID_decode U_imme", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22041412_cpu pip ID_decode J_imme", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22041412_cpu pip ID_decode B_imme", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22041412_cpu pip ID_decode S_imme", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip EXE_alu scr2", false,-1, 63,0);
        tracep->declBus(c+39,"ysyx_22041412_cpu pip EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+37,"ysyx_22041412_cpu pip EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+38,"ysyx_22041412_cpu pip EXE_alu func7", false,-1);
        tracep->declQuad(c+40,"ysyx_22041412_cpu pip EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22041412_cpu pip EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22041412_cpu pip EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22041412_cpu pip EXE_alu BY", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041412_cpu pip EXE_alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu pip EXE_alu Alusu", false,-1, 63,0);
        tracep->declBus(c+297,"ysyx_22041412_cpu pip EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+298,"ysyx_22041412_cpu pip EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+299,"ysyx_22041412_cpu pip EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+89,"ysyx_22041412_cpu pip EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22041412_cpu pip EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+300,"ysyx_22041412_cpu pip EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+91,"ysyx_22041412_cpu pip EXE_alu Mux_ALU lut", false,-1, 1034,0);
        tracep->declBus(c+297,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+298,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+299,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+302,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+89,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+84,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+300,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+91,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut", false,-1, 1034,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declArray(c+124+i*3,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+169+i*1,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declQuad(c+184+i*2,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+214,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+216,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+304,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+299,"ysyx_22041412_cpu pip MEM_sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+299,"ysyx_22041412_cpu pip MEM_sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu pip MEM_sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+284,"ysyx_22041412_cpu pip MEM_sram clk", false,-1);
        tracep->declBus(c+47,"ysyx_22041412_cpu pip MEM_sram func3", false,-1, 2,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip MEM_sram addr", false,-1, 63,0);
        tracep->declBit(c+48,"ysyx_22041412_cpu pip MEM_sram wen", false,-1);
        tracep->declQuad(c+51,"ysyx_22041412_cpu pip MEM_sram data", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_22041412_cpu pip MEM_sram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+219,"ysyx_22041412_cpu pip MEM_sram wmask", false,-1, 7,0);
        tracep->declBit(c+284,"ysyx_22041412_cpu pip M_reg clk", false,-1);
        tracep->declBus(c+20,"ysyx_22041412_cpu pip M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+58,"ysyx_22041412_cpu pip M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+57,"ysyx_22041412_cpu pip M_reg Wen", false,-1);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu pip M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22041412_cpu pip M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+296,"ysyx_22041412_cpu pip M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+220+i*2,"ysyx_22041412_cpu pip M_reg DataReg", true,(i+0), 63,0);}}
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
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en));
        tracep->fullBit(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en));
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en));
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm),32);
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en));
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en));
        tracep->fullBit(oldp+11,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type) 
                                  | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type))));
        tracep->fullBit(oldp+12,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                   ? (IData)((0x67U 
                                              != (0x707fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                                   : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                      | ((0x63U != 
                                          (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                         & ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                            | ((~ (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                                   | (0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) 
                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type))))))));
        tracep->fullBit(oldp+13,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x19U))));
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
        tracep->fullCData(oldp+18,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+19,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+20,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+21,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+22,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 7U))),5);
        tracep->fullCData(oldp+23,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
        tracep->fullQData(oldp+24,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+26,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                               >> 0x14U))])),64);
        tracep->fullIData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en));
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type));
        tracep->fullBit(oldp+71,((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+72,((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+73,(((0x33U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
        tracep->fullQData(oldp+74,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+76,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))),64);
        tracep->fullQData(oldp+78,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                           >> 0x14U)))))))),64);
        tracep->fullQData(oldp+80,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 7U)))))))),64);
        tracep->fullQData(oldp+82,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                       >> 7U))))))),64);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+85,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+87,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1035);
        tracep->fullWData(oldp+124,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+127,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+133,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+139,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+142,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+145,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+148,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+151,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+154,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+157,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+166,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullCData(oldp+169,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+170,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+171,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+172,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+173,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+219,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
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
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+284,(vlSelf->clk));
        tracep->fullQData(oldp+285,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+287,(vlSelf->CP_NPC),64);
        tracep->fullIData(oldp+289,(vlSelf->CP_IMM),32);
        tracep->fullBit(oldp+290,(vlSelf->Ebreak));
        tracep->fullCData(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
        tracep->fullBit(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__JR_EN));
        tracep->fullBit(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__Mul_EN));
        tracep->fullBit(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stop));
        tracep->fullCData(oldp+295,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_start),3);
        tracep->fullBit(oldp+296,(0U));
        tracep->fullIData(oldp+297,(0xfU),32);
        tracep->fullIData(oldp+298,(5U),32);
        tracep->fullIData(oldp+299,(0x40U),32);
        tracep->fullQData(oldp+300,(0ULL),64);
        tracep->fullIData(oldp+302,(1U),32);
        tracep->fullIData(oldp+303,(0x45U),32);
        tracep->fullIData(oldp+304,(0xfU),32);
        tracep->fullIData(oldp+305,(0x10000U),32);
    }
}
