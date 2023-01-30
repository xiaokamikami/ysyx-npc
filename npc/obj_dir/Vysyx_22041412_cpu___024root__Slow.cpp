// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_cpu.h for the primary calling header

#include "Vysyx_22041412_cpu___024root.h"
#include "Vysyx_22041412_cpu__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22041412_cpu___024root___ctor_var_reset(Vysyx_22041412_cpu___024root* vlSelf);

Vysyx_22041412_cpu___024root::Vysyx_22041412_cpu___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22041412_cpu___024root___ctor_var_reset(this);
}

void Vysyx_22041412_cpu___024root::__Vconfigure(Vysyx_22041412_cpu__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22041412_cpu___024root::~Vysyx_22041412_cpu___024root() {
}

void Vysyx_22041412_cpu___024root___settle__TOP__2(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<22>/*703:0*/ __Vtemp142;
    VlWide<31>/*991:0*/ __Vtemp150;
    // Body
    vlSelf->CP_IMM = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm;
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm)
                       ? 1U : 0U);
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc;
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc;
    __Vtemp142[0x14U] = (((IData)((2ULL + ((((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))) 
                                           + (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU) 
                                              | (0x7fffffffffffffffULL 
                                                 & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                          >> 0xeU) | ((IData)(((2ULL 
                                                + (
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU) 
                                                    | (0x7fffffffffffffffULL 
                                                       & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU) 
                                                    | (0x7fffffffffffffffULL 
                                                       & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                               >> 0x20U)) 
                                      << 0x12U));
    __Vtemp150[8U] = (0x38000U | ((0x3ffU & ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                      >> 0x20U)) 
                                             >> 0x11U)) 
                                  | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                      << 0x14U) | (0x7c00U 
                                                   & ((IData)(
                                                              ((QData)((IData)(
                                                                               ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                               >> 0x20U)) 
                                                      >> 0x11U)))));
    __Vtemp150[0x19U] = (0x1000000U | ((0x3ffU & ((IData)(
                                                          ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                            - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                           >> 0x20U)) 
                                                  >> 9U)) 
                                       | (((IData)(
                                                   (2ULL 
                                                    + 
                                                    ((((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                                >> 0x3fU))))) 
                                                       << 0x3fU) 
                                                      | (0x7fffffffffffffffULL 
                                                         & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))) 
                                                     + 
                                                     (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                                >> 0x3fU))))) 
                                                       << 0x3fU) 
                                                      | (0x7fffffffffffffffULL 
                                                         & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                           << 0x1cU) 
                                          | (0x7ffc00U 
                                             & ((IData)(
                                                        ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                         >> 0x20U)) 
                                                >> 9U)))));
    __Vtemp150[0x1cU] = ((0x3feU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                             + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                    << 1U)) | (0xfffffc00U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                  << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0xeU | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                            >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                   << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                     >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
            >> 0x1bU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                   >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x260U | (((IData)((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                             >> 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
                      << 0xaU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
            >> 0x16U) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x5000U | (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                       << 0xfU) | ((IData)(((((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                >> 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = ((0x3ffU & ((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                      >> 0x11U)) | ((0x7c00U & ((IData)((QData)((IData)(
                                                                        ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                                >> 0x11U)) 
                                    | ((IData)(((QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = __Vtemp150[8U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 0xcU)) | ((0xffc00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                >> 0xcU)) 
                                   | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = (0x800000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 << 0x19U) 
                                                | (0xffc00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 0xcU)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 7U)) | ((0x1fffc00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                >> 7U)) 
                                 | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              >> (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                             >> 0x20U)) 
                                    << 0x19U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
        = (0x24000000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     >> 7U)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          << 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 << 0x1eU) 
                                                | (0x1fffc00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 7U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 2U)) | ((0x3ffffc00U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          << 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 >> 2U)) 
                                 | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              << (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                             >> 0x20U)) 
                                    << 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0xc0000000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     >> 2U)) | (0x3ffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             << 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                            >> 0x20U)) 
                                                   >> 2U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = ((0x3f8U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      << 3U)) | (0xfffffc00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x1dU) | (0x3f8U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 3U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x30U | (((0x300U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                         | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                << 8U)) | ((IData)(
                                                   ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                     ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                    >> 0x20U)) 
                                           >> 0x1dU)) 
                    | (0xfffffc00U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                      << 8U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x18U) | (0x300U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0x100U | (((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                               >> 0x20U)) >> 0x18U) 
                     | (0x800U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                           & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                  << 0xdU))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      >> 0x13U)) | ((0x1c00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                >> 0x13U)) 
                                    | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                >> 0x20U)) 
                                       << 0xdU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x16000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                           >> 0x20U)) 
                                  >> 0x13U)) | (((IData)(
                                                         (~ 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                 << 0x12U) 
                                                | (0x1c00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                               >> 0x20U)) 
                                                      >> 0x13U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = ((0x3ffU & ((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                  | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                      >> 0xeU)) | ((0x3fc00U & ((IData)(
                                                        (~ 
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                >> 0xeU)) 
                                   | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                   | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x280000U | ((0x3ffU & ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                            >> 0x20U)) 
                                   >> 0xeU)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 << 0x17U) 
                                                | (0x3fc00U 
                                                   & ((IData)(
                                                              ((~ 
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                 | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      >> 9U)) | ((0x7ffc00U & ((IData)(
                                                       (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                        - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                               >> 9U)) 
                                 | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 0x17U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = __Vtemp150[0x19U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = ((0x3ffU & ((IData)((2ULL + ((((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                     >> 0x3fU))))) 
                                         << 0x3fU) 
                                        | (0x7fffffffffffffffULL 
                                           & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                       >> 0x3fU))))) 
                                           << 0x3fU) 
                                          | (0x7fffffffffffffffULL 
                                             & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                      >> 4U)) | (__Vtemp142[0x14U] 
                                 << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = (0x10000000U | ((__Vtemp142[0x14U] >> 0x16U) 
                          | (0xffffc00U & ((IData)(
                                                   ((2ULL 
                                                     + 
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                                >> 0x3fU))))) 
                                                        << 0x3fU) 
                                                       | (0x7fffffffffffffffULL 
                                                          & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))) 
                                                      + 
                                                      (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                                >> 0x3fU))))) 
                                                        << 0x3fU) 
                                                       | (0x7fffffffffffffffULL 
                                                          & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                    >> 0x20U)) 
                                           >> 4U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
        = __Vtemp150[0x1cU];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x1fU) | (0x3feU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 1U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
        = (0x1eU | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                              + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                             >> 0x20U)) >> 0x1fU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en 
        = ((0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
           | (0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode 
        = (0x1fU & ((0x33U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                     ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                         ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                             ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                 ? 2U : 0U) : 0xfU)
                         : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                             ? 3U : ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                      ? 4U : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                               ? 4U
                                               : ((4U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                   ? 6U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                     ? 
                                                    ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                      ? 0x12U
                                                      : 0U)
                                                     : 8U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                     ? 9U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                      ? 0xbU
                                                      : 0U))))))))
                     : ((0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                         ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                             ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                 ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                     ? 2U : 0U) : 0xfU)
                             : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                 ? 3U : ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                          ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                              ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                  ? 0x13U
                                                  : 0U)
                                              : 7U)
                                          : 0U))) : 
                        ((0x13U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                          ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                              ? 0xfU : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                     ? 8U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                      ? 9U
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                                       ? 0xbU
                                                       : 0U))))))))
                          : ((0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                              ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                  ? 0xfU : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                             ? 3U : 
                                            ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                              ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                   ? 0x14U
                                                   : 0U)
                                                  : 7U)
                                              : 0U)))
                              : ((0x17U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                  ? 0xfU : ((0x37U 
                                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                             ? 0xeU
                                             : ((((
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                                   | (0x23U 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) 
                                                  | (0x6fU 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) 
                                                 | (0x67U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                                 ? 0xfU
                                                 : 0U))))))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst)
            ? 0U : ((1U & (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                              | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                  ? 1U : 0U)) | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                                  ? 1U
                                                  : 0U)) 
                            | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                ? 1U : 0U)) | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))
                     ? 0x3fU : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall)
                                 ? 7U : 0U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode 
        = (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
            ? 1U : ((0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                     ? 1U : (((0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                              & (((5U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0xcU))) 
                                  | (6U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0xcU)))) 
                                 | (7U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                 >> 0xcU)))))
                              ? 2U : 0U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type 
        = (((((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
              | (3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
             | (0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
            | (0x1bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
           | (0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
                         >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
                         >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                    >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
            << 0x16U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
            << 0x16U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
            << 0x11U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
            << 0x11U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
            << 0xcU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
            << 7U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
            << 7U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
            << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
            << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
            << 9U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
            << 9U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                    >> 1U));
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2));
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type)
            ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                     ? 0U : 1U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
            ? 0U : (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                             >> 0xfU)));
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb = 0U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data 
            = (((- (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                  >> 0x14U))));
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb 
            = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                ? 0U : (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                 >> 0x14U)));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data 
            = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                ? (((QData)((IData)((- (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))
                : ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                    ? (((- (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                            >> 0x1fU)))) 
                        << 0x14U) | (QData)((IData)(
                                                    ((0xff000U 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                              >> 0x14U)))))))
                    : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                        ? (((- (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
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
                                                                 >> 7U)))))))
                        : ((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                            ? (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                  >> 7U))))))
                            : 0ULL))));
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB 
        = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb))
            ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
           [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr = 
        (((0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
           ? 1U : 0U) ? (0xfffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data))
          : 0U);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                               == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
           == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id 
        = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
            ? 1U : ((0x302U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
                     ? 0U : ((0x300U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
                              ? 2U : ((0x305U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
                                       ? 3U : ((0x341U 
                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
                                                ? 4U
                                                : (
                                                   (0x342U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr))
                                                    ? 5U
                                                    : 0U))))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu 
        = ((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode))
            ? ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                ? (VL_GTS_IQQ(1,64,64, 0ULL, (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                    ? 1ULL : 0ULL) : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                       ? ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                           < vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL)) : (
                                                   (0x73U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                                    ? 0ULL
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                                     ? 
                                                    (((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                      ? 1ULL
                                                      : 
                                                     (((1U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          != vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                       ? 1ULL
                                                       : 
                                                      (((4U 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                        & VL_GTS_IQQ(1,64,64, 0ULL, 
                                                                     (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                      - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))
                                                        ? 1ULL
                                                        : 
                                                       (((5U 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                         & VL_LTES_IQQ(1,64,64, 0ULL, 
                                                                       (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                        - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))
                                                         ? 1ULL
                                                         : 
                                                        (((6U 
                                                           == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                          & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             < vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                          ? 1ULL
                                                          : 
                                                         (((7U 
                                                            == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                           & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                              >= vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                           ? 1ULL
                                                           : 0ULL))))))
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) 
                                                      & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en)))
                                                      ? 
                                                     (((7U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode)) 
                                                       | (0x14U 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                   >> 5U)))
                                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1
                                                        : 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result))))
                                                       : 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result))))
                                                      : 
                                                     (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) 
                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data)))
                                                       : 
                                                      (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en)) 
                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data
                                                        : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result))))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_jar_en 
        = ((((0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
              ? 1U : 0U) & ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id)) 
                            | (1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id))))
            ? 1U : 0U);
}

void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 6> &a);

void Vysyx_22041412_cpu___024root___initial__TOP__3(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___initial__TOP__3\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp247;
    // Body
    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[2U] = 0xa00001800ULL;
    __Vtemp247[0U] = 0x2e686578U;
    __Vtemp247[1U] = 0x696e6974U;
    __Vtemp247[2U] = 0x496d6d5fU;
    __Vtemp247[3U] = 0x7263652fU;
    __Vtemp247[4U] = 0x65736f75U;
    __Vtemp247[5U] = 0x72U;
    VL_READMEM_N(true, 32, 134217728, 0, VL_CVT_PACK_STR_NW(6, __Vtemp247)
                 ,  &(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory)
                 , 0, ~0ULL);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0x80000000ULL;
    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg);
}

void Vysyx_22041412_cpu___024root___settle__TOP__4(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data 
        = ((5U >= (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id))
            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg
           [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id]
            : 0ULL);
}

void Vysyx_22041412_cpu___024root___eval_initial(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22041412_cpu___024root___initial__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22041412_cpu___024root___eval_settle(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval_settle\n"); );
    // Body
    Vysyx_22041412_cpu___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vysyx_22041412_cpu___024root___settle__TOP__4(vlSelf);
}

void Vysyx_22041412_cpu___024root___final(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___final\n"); );
}

void Vysyx_22041412_cpu___024root___ctor_var_reset(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->CP_PC = 0;
    vlSelf->CP_NPC = 0;
    vlSelf->CP_IMM = 0;
    vlSelf->Ebreak = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_jar_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_jar_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_temp = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_csr_jar_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_csr_jar_en = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_r = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_w = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT____Vlvbound1 = 0;
    for (int __Vi0=0; __Vi0<134217728; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en = 0;
    VL_ZERO_RESET_W(966, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data = 0;
    for (int __Vi0=0; __Vi0<14; ++__Vi0) {
        VL_ZERO_RESET_W(69, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<14; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<14; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
