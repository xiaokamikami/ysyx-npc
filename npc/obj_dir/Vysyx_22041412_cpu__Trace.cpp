// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_cpu__Syms.h"


void Vysyx_22041412_cpu___024root__traceChgSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041412_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceChgSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm),32);
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
            tracep->chgBit(oldp+3,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                     ? (IData)((0x67U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                                     : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                        | ((0x63U != 
                                            (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                           & (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))))));
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+5,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0x19U))));
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
            tracep->chgCData(oldp+10,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+11,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+12,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+13,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+14,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 7U))),5);
            tracep->chgCData(oldp+15,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
            tracep->chgQData(oldp+16,(((0U == (0x1fU 
                                               & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                       [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+18,(((0U == (0x1fU 
                                               & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                       [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0x14U))])),64);
            tracep->chgIData(oldp+20,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
            tracep->chgQData(oldp+31,(((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode))
                                        ? ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                            ? (VL_GTS_IQQ(1,64,64, 0ULL, 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                ? 1ULL
                                                : 0ULL)
                                            : ((3U 
                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                ? (
                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                    < vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)
                                                    ? 1ULL
                                                    : 0ULL)
                                                : 0ULL))
                                        : (((0x3bU 
                                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                            | (0x1bU 
                                               == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu)))
                                            : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu))),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+50,(((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                     | (0x73U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
            tracep->chgBit(oldp+51,((0x63U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+52,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+53,(((0x33U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
            tracep->chgQData(oldp+54,((((- (QData)((IData)(
                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                    >> 0x14U))))),64);
            tracep->chgQData(oldp+56,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))),64);
            tracep->chgQData(oldp+58,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+60,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+62,((((- (QData)((IData)(
                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 7U))))))),64);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+65,((1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+67,((1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1035);
            tracep->chgWData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+119,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+122,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+125,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+128,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+134,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+137,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+140,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+143,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+146,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgCData(oldp+149,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+150,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+151,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+152,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+153,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+154,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+155,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+156,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+157,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+158,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+159,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+161,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+162,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+199,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                    ? 0xffU
                                                    : 0U))))),8);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        }
        tracep->chgBit(oldp+264,(vlSelf->clk));
        tracep->chgQData(oldp+265,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+267,(vlSelf->CP_NPC),64);
        tracep->chgBit(oldp+269,(vlSelf->CP_difftest));
        tracep->chgBit(oldp+270,(vlSelf->Ebreak));
    }
}

void Vysyx_22041412_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
