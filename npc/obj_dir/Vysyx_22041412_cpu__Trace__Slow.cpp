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
        tracep->declBit(c+265,"clk", false,-1);
        tracep->declQuad(c+266,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+268,"CP_NPC", false,-1, 63,0);
        tracep->declBit(c+270,"CP_difftest", false,-1);
        tracep->declBit(c+271,"Ebreak", false,-1);
        tracep->declBit(c+265,"ysyx_22041412_cpu clk", false,-1);
        tracep->declQuad(c+266,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+268,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBit(c+270,"ysyx_22041412_cpu CP_difftest", false,-1);
        tracep->declBit(c+271,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+272,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+273,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+274,"ysyx_22041412_cpu Mul_EN", false,-1);
        tracep->declBus(c+275,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declQuad(c+276,"ysyx_22041412_cpu immdata", false,-1, 63,0);
        tracep->declBus(c+278,"ysyx_22041412_cpu Imm_Type", false,-1, 3,0);
        tracep->declBit(c+279,"ysyx_22041412_cpu sram_r", false,-1);
        tracep->declBit(c+280,"ysyx_22041412_cpu sram_w", false,-1);
        tracep->declQuad(c+281,"ysyx_22041412_cpu sram_addr_r", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22041412_cpu sram_addr_w", false,-1, 63,0);
        tracep->declQuad(c+285,"ysyx_22041412_cpu sram_data_r", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_22041412_cpu sram_data_w", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22041412_cpu rsA", false,-1, 63,0);
        tracep->declQuad(c+291,"ysyx_22041412_cpu rsB", false,-1, 63,0);
        tracep->declQuad(c+293,"ysyx_22041412_cpu rsW", false,-1, 63,0);
        tracep->declBit(c+295,"ysyx_22041412_cpu Rrst", false,-1);
        tracep->declQuad(c+296,"ysyx_22041412_cpu ALU_S", false,-1, 63,0);
        tracep->declQuad(c+298,"ysyx_22041412_cpu ALU_A", false,-1, 63,0);
        tracep->declQuad(c+300,"ysyx_22041412_cpu ALU_Result", false,-1, 63,0);
        tracep->declQuad(c+302,"ysyx_22041412_cpu Mul_Result", false,-1, 63,0);
        tracep->declQuad(c+304,"ysyx_22041412_cpu DNPC", false,-1, 63,0);
        tracep->declQuad(c+306,"ysyx_22041412_cpu SNPC", false,-1, 63,0);
        tracep->declQuad(c+308,"ysyx_22041412_cpu PC", false,-1, 63,0);
        tracep->declBit(c+265,"ysyx_22041412_cpu pip clk", false,-1);
        tracep->declQuad(c+266,"ysyx_22041412_cpu pip pip_pc", false,-1, 63,0);
        tracep->declQuad(c+268,"ysyx_22041412_cpu pip pip_dnpc", false,-1, 63,0);
        tracep->declBit(c+270,"ysyx_22041412_cpu pip pip_dpic", false,-1);
        tracep->declBit(c+310,"ysyx_22041412_cpu pip if_en", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip if_imm", false,-1, 31,0);
        tracep->declQuad(c+2,"ysyx_22041412_cpu pip if_pc", false,-1, 63,0);
        tracep->declBit(c+310,"ysyx_22041412_cpu pip id_en", false,-1);
        tracep->declBit(c+4,"ysyx_22041412_cpu pip id_imm_V1Type", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip id_imm_V2Type", false,-1);
        tracep->declBit(c+6,"ysyx_22041412_cpu pip id_imm_Mul_en", false,-1);
        tracep->declQuad(c+7,"ysyx_22041412_cpu pip id_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22041412_cpu pip id_imm_data", false,-1, 63,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu pip id_func3", false,-1, 2,0);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip id_func7", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip id_Ra", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip id_Rb", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu pip id_Rw", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu pip id_opcode", false,-1, 6,0);
        tracep->declQuad(c+17,"ysyx_22041412_cpu pip id_rsA", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22041412_cpu pip id_rsB", false,-1, 63,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip id_imm", false,-1, 31,0);
        tracep->declBit(c+310,"ysyx_22041412_cpu pip ex_en", false,-1);
        tracep->declQuad(c+22,"ysyx_22041412_cpu pip ex_imm_data", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip ex_v1", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu pip ex_v2", false,-1, 63,0);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip ex_rw", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip ex_func3", false,-1, 2,0);
        tracep->declBit(c+30,"ysyx_22041412_cpu pip ex_func7", false,-1);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip ex_res", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22041412_cpu pip ex_pc", false,-1, 63,0);
        tracep->declBit(c+310,"ysyx_22041412_cpu pip mem_en", false,-1);
        tracep->declBit(c+311,"ysyx_22041412_cpu pip mem_type", false,-1);
        tracep->declBit(c+312,"ysyx_22041412_cpu pip mem_wen", false,-1);
        tracep->declBus(c+36,"ysyx_22041412_cpu pip mem_func3", false,-1, 2,0);
        tracep->declBus(c+37,"ysyx_22041412_cpu pip mem_rw", false,-1, 4,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu pip mem_addr", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22041412_cpu pip mem_data", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22041412_cpu pip mem_pc", false,-1, 63,0);
        tracep->declBit(c+310,"ysyx_22041412_cpu pip wb_en", false,-1);
        tracep->declBit(c+313,"ysyx_22041412_cpu pip wb_wen", false,-1);
        tracep->declBit(c+314,"ysyx_22041412_cpu pip wb_rst", false,-1);
        tracep->declBus(c+44,"ysyx_22041412_cpu pip wb_addr", false,-1, 4,0);
        tracep->declQuad(c+45,"ysyx_22041412_cpu pip wb_data", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip wb_pc", false,-1, 63,0);
        tracep->declBit(c+265,"ysyx_22041412_cpu pip IF_ImmMem clk", false,-1);
        tracep->declQuad(c+2,"ysyx_22041412_cpu pip IF_ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip IF_ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+21,"ysyx_22041412_cpu pip ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22041412_cpu pip ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+11,"ysyx_22041412_cpu pip ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+12,"ysyx_22041412_cpu pip ID_decode func7", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22041412_cpu pip ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+9,"ysyx_22041412_cpu pip ID_decode imme", false,-1, 63,0);
        tracep->declBit(c+4,"ysyx_22041412_cpu pip ID_decode V1Type", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip ID_decode V2Type", false,-1);
        tracep->declBit(c+6,"ysyx_22041412_cpu pip ID_decode Mul_en", false,-1);
        tracep->declBit(c+49,"ysyx_22041412_cpu pip ID_decode I_type", false,-1);
        tracep->declBit(c+50,"ysyx_22041412_cpu pip ID_decode U_type", false,-1);
        tracep->declBit(c+51,"ysyx_22041412_cpu pip ID_decode J_type", false,-1);
        tracep->declBit(c+52,"ysyx_22041412_cpu pip ID_decode B_type", false,-1);
        tracep->declBit(c+53,"ysyx_22041412_cpu pip ID_decode S_type", false,-1);
        tracep->declBit(c+54,"ysyx_22041412_cpu pip ID_decode R_type", false,-1);
        tracep->declQuad(c+55,"ysyx_22041412_cpu pip ID_decode I_imme", false,-1, 63,0);
        tracep->declQuad(c+57,"ysyx_22041412_cpu pip ID_decode U_imme", false,-1, 63,0);
        tracep->declQuad(c+59,"ysyx_22041412_cpu pip ID_decode J_imme", false,-1, 63,0);
        tracep->declQuad(c+61,"ysyx_22041412_cpu pip ID_decode B_imme", false,-1, 63,0);
        tracep->declQuad(c+63,"ysyx_22041412_cpu pip ID_decode S_imme", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu pip EXE_alu scr2", false,-1, 63,0);
        tracep->declBus(c+31,"ysyx_22041412_cpu pip EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+29,"ysyx_22041412_cpu pip EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+30,"ysyx_22041412_cpu pip EXE_alu func7", false,-1);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22041412_cpu pip EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+24,"ysyx_22041412_cpu pip EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22041412_cpu pip EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+66,"ysyx_22041412_cpu pip EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22041412_cpu pip EXE_alu BY", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22041412_cpu pip EXE_alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22041412_cpu pip EXE_alu Alusu", false,-1, 63,0);
        tracep->declBus(c+315,"ysyx_22041412_cpu pip EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22041412_cpu pip EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu pip EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+70,"ysyx_22041412_cpu pip EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22041412_cpu pip EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+318,"ysyx_22041412_cpu pip EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+72,"ysyx_22041412_cpu pip EXE_alu Mux_ALU lut", false,-1, 1034,0);
        tracep->declBus(c+315,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+320,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+70,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+318,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+72,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut", false,-1, 1034,0);
        tracep->declBus(c+321,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<15; i++) {
                tracep->declArray(c+105+i*3,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declBus(c+150+i*1,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<15; i++) {
                tracep->declQuad(c+165+i*2,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+195,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+197,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+322,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu pip MEM_sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+317,"ysyx_22041412_cpu pip MEM_sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+323,"ysyx_22041412_cpu pip MEM_sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+265,"ysyx_22041412_cpu pip MEM_sram clk", false,-1);
        tracep->declBus(c+36,"ysyx_22041412_cpu pip MEM_sram func3", false,-1, 2,0);
        tracep->declQuad(c+38,"ysyx_22041412_cpu pip MEM_sram addr", false,-1, 63,0);
        tracep->declBit(c+311,"ysyx_22041412_cpu pip MEM_sram rw", false,-1);
        tracep->declBit(c+312,"ysyx_22041412_cpu pip MEM_sram wen", false,-1);
        tracep->declQuad(c+40,"ysyx_22041412_cpu pip MEM_sram data", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22041412_cpu pip MEM_sram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_22041412_cpu pip MEM_sram wmask", false,-1, 7,0);
        tracep->declBit(c+265,"ysyx_22041412_cpu pip M_reg clk", false,-1);
        tracep->declBus(c+13,"ysyx_22041412_cpu pip M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+14,"ysyx_22041412_cpu pip M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22041412_cpu pip M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+313,"ysyx_22041412_cpu pip M_reg Wen", false,-1);
        tracep->declQuad(c+17,"ysyx_22041412_cpu pip M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+19,"ysyx_22041412_cpu pip M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22041412_cpu pip M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+314,"ysyx_22041412_cpu pip M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+201+i*2,"ysyx_22041412_cpu pip M_reg DataReg", true,(i+0), 63,0);}}
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
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm),32);
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
        tracep->fullBit(oldp+4,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                  ? (IData)((0x67U 
                                             != (0x707fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                                  : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                     | ((0x63U != (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                        & (0x23U == 
                                           (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))))));
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+6,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                       >> 0x19U))));
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
        tracep->fullQData(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
        tracep->fullCData(oldp+11,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+12,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 7U))),5);
        tracep->fullCData(oldp+16,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
        tracep->fullQData(oldp+17,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+19,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                               >> 0x14U))])),64);
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
        tracep->fullQData(oldp+32,(((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode))
                                     ? ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                         ? (VL_GTS_IQQ(1,64,64, 0ULL, 
                                                       (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                        - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                             ? 1ULL
                                             : 0ULL)
                                         : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                             ? ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                 < vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)
                                                 ? 1ULL
                                                 : 0ULL)
                                             : 0ULL))
                                     : (((0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                         | (0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu)))
                                         : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu))),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+51,(((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                  | (0x73U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
        tracep->fullBit(oldp+52,((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+53,((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+54,(((0x33U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
        tracep->fullQData(oldp+55,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))),64);
        tracep->fullQData(oldp+59,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+61,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+63,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                       >> 7U))))))),64);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+66,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+68,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1035);
        tracep->fullWData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+117,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+123,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+126,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+129,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+132,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+138,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+141,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+144,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+147,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+153,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+154,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+155,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+157,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+158,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+159,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+161,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+162,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+200,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
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
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+265,(vlSelf->clk));
        tracep->fullQData(oldp+266,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+268,(vlSelf->CP_NPC),64);
        tracep->fullBit(oldp+270,(vlSelf->CP_difftest));
        tracep->fullBit(oldp+271,(vlSelf->Ebreak));
        tracep->fullCData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
        tracep->fullBit(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__JR_EN));
        tracep->fullBit(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__Mul_EN));
        tracep->fullIData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
        tracep->fullCData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
        tracep->fullBit(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__sram_r));
        tracep->fullBit(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__sram_w));
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__sram_addr_r),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__sram_addr_w),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_w),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
        tracep->fullBit(oldp+295,(vlSelf->ysyx_22041412_cpu__DOT__Rrst));
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22041412_cpu__DOT__ALU_Result),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22041412_cpu__DOT__Mul_Result),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22041412_cpu__DOT__SNPC),64);
        tracep->fullQData(oldp+308,(0x80000000ULL),64);
        tracep->fullBit(oldp+310,(1U));
        tracep->fullBit(oldp+311,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_type));
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wen));
        tracep->fullBit(oldp+313,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_wen));
        tracep->fullBit(oldp+314,(0U));
        tracep->fullIData(oldp+315,(0xfU),32);
        tracep->fullIData(oldp+316,(5U),32);
        tracep->fullIData(oldp+317,(0x40U),32);
        tracep->fullQData(oldp+318,(0ULL),64);
        tracep->fullIData(oldp+320,(1U),32);
        tracep->fullIData(oldp+321,(0x45U),32);
        tracep->fullIData(oldp+322,(0xfU),32);
        tracep->fullIData(oldp+323,(0x10000U),32);
    }
}
