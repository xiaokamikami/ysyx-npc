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

void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22041412_cpu___024root___initial__TOP__2(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___initial__TOP__2\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp133;
    // Body
    __Vtemp133[0U] = 0x2e686578U;
    __Vtemp133[1U] = 0x696e6974U;
    __Vtemp133[2U] = 0x496d6d5fU;
    __Vtemp133[3U] = 0x7263652fU;
    __Vtemp133[4U] = 0x65736f75U;
    __Vtemp133[5U] = 0x72U;
    VL_READMEM_N(true, 32, 134217728, 0, VL_CVT_PACK_STR_NW(6, __Vtemp133)
                 ,  &(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory)
                 , 0, ~0ULL);
    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0x80000000ULL;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en = 1U;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en = 1U;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en = 1U;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en = 1U;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en = 1U;
}

void Vysyx_22041412_cpu___024root___settle__TOP__3(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<22>/*703:0*/ __Vtemp152;
    VlWide<33>/*1055:0*/ __Vtemp162;
    // Body
    vlSelf->CP_IMM = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm;
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm)
                       ? 1U : 0U);
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc;
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc;
    __Vtemp152[0x14U] = (((IData)((2ULL + ((((QData)((IData)(
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
    __Vtemp162[0xaU] = (0x700000U | ((0x7fffU & ((IData)(
                                                         ((QData)((IData)(
                                                                          ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                          >> 0x20U)) 
                                                 >> 0xcU)) 
                                     | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                         << 0x19U) 
                                        | (0xf8000U 
                                           & ((IData)(
                                                      ((QData)((IData)(
                                                                       ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                       >> 0x20U)) 
                                              >> 0xcU)))));
    __Vtemp162[0x1bU] = (0x20000000U | ((0x7fffU & 
                                         ((IData)((
                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                    - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                   >> 0x20U)) 
                                          >> 4U)) | 
                                        (0xfff8000U 
                                         & ((IData)(
                                                    ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                      - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                     >> 0x20U)) 
                                            >> 4U))));
    __Vtemp162[0x1eU] = (2U | (((0x7fc0U & ((IData)(
                                                    (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                     + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                            << 6U)) 
                                | ((IData)(((2ULL + 
                                             ((((QData)((IData)(
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
                                                    & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                            >> 0x20U)) 
                                   >> 0x1fU)) | (0xffff8000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                    << 6U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0xeU | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                            + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                   << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                     + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
            >> 0x1bU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                   + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x1e0U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      << 0xaU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                     >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
            >> 0x16U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                   >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x5000U | (((IData)((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                              >> 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
                       << 0xfU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                             >> (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
            >> 0x11U) | ((IData)(((((QData)((IData)(
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
                                  >> 0x20U)) << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = (0xa8000U | (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                        << 0x14U) | ((IData)(((((QData)((IData)(
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
                                     >> 0x11U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = ((0x7fffU & ((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                       >> 0xcU)) | ((0xf8000U & ((IData)((QData)((IData)(
                                                                         ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                                 >> 0xcU)) 
                                    | ((IData)(((QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                >> 0x20U)) 
                                       << 0x14U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = __Vtemp162[0xaU];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                       >> 7U)) | ((0x1ff8000U & ((IData)(
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
        = (0x10000000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                               >> 0x20U)) 
                                      >> 7U)) | (((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                  << 0x1eU) 
                                                 | (0x1ff8000U 
                                                    & ((IData)(
                                                               ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                                >> 0x20U)) 
                                                       >> 7U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                       >> 2U)) | ((0x3fff8000U & ((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                  >> 2U)) 
                                  | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     << 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0xc0000000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                               >> 0x20U)) 
                                      >> 2U)) | (0x3fff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                             >> 0x20U)) 
                                                    >> 2U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = (4U | ((0x7ff8U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                      << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                             << 3U)) | (0xffff8000U 
                                        & ((IData)(
                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                    << 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                           << 3U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
             >> 0x1dU) | (0x7ff8U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     << 3U))) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                              << 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                             >> 0x20U)) 
                                                    << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x18U | (((0x7f00U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                          ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                 << 8U)) | ((IData)(
                                                    ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                      << 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                     >> 0x20U)) 
                                            >> 0x1dU)) 
                    | (0xffff8000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                      << 8U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x18U) | (0x7f00U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                              >> 0x20U)) 
                                     << 8U))) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                              ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                             >> 0x20U)) 
                                                    << 8U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0x600U | (((0x6000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                           | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                  << 0xdU)) | ((IData)(
                                                       ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                        >> 0x20U)) 
                                               >> 0x18U)) 
                     | (0xffff8000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                       << 0xdU))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x13U) | (0x6000U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                              >> 0x20U)) 
                                     << 0xdU))) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                               >> 0x20U)) 
                                                      << 0xdU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x2000U | (((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                 | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                >> 0x20U)) >> 0x13U) 
                      | (0x10000U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                     << 0x12U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                       >> 0xeU)) | ((0x38000U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 >> 0xeU)) 
                                    | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                >> 0x20U)) 
                                       << 0x12U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x2c0000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    >> 0xeU)) | (((IData)(
                                                          (~ 
                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                            | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                  << 0x17U) 
                                                 | (0x38000U 
                                                    & ((IData)(
                                                               ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = ((0x7fffU & ((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                   | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                       >> 9U)) | ((0x7f8000U & ((IData)(
                                                        (~ 
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                >> 9U)) 
                                  | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                  | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                              >> 0x20U)) 
                                     << 0x17U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = (0x5000000U | ((0x7fffU & ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                  | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                              >> 0x20U)) 
                                     >> 9U)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 << 0x1cU) 
                                                | (0x7f8000U 
                                                   & ((IData)(
                                                              ((~ 
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                 | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                               >> 0x20U)) 
                                                      >> 9U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                       >> 4U)) | ((0xfff8000U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 >> 4U)) 
                                  | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                              >> 0x20U)) 
                                     << 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = __Vtemp162[0x1bU];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
        = ((0x7ffeU & ((IData)((2ULL + ((((QData)((IData)(
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
                       << 1U)) | (__Vtemp152[0x14U] 
                                  << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = ((__Vtemp152[0x14U] >> 0x11U) | (0xffff8000U 
                                           & ((IData)(
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
                                              << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
        = __Vtemp162[0x1eU];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x1aU) | (0x7fc0U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                              >> 0x20U)) 
                                     << 6U))) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                              + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                             >> 0x20U)) 
                                                    << 6U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
        = (0x480U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                              >> 0x20U)) >> 0x1aU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode 
        = (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type 
        = ((((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
             | (3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
            | (0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
           | (0x1bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
           | (0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode 
        = (0x1fU & ((0x33U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                     ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                         ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                             ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                 ? 2U : 0U) : 0x12U)
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
                                                      ? 0x13U
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
                                     ? 2U : 0U) : 0x12U)
                             : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                 ? 3U : ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                          ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                              ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                  ? 0x14U
                                                  : 0U)
                                              : 7U)
                                          : 0U))) : 
                        ((0x13U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                          ? ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                              ? 0x12U : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
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
                                  ? 0x12U : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                              ? 3U : 
                                             ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                               ? ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7)
                                                    ? 0x15U
                                                    : 0U)
                                                   : 7U)
                                               : 0U)))
                              : ((0x17U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                  ? 0xfU : ((0x37U 
                                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                             ? 0xeU
                                             : ((((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                                  | (0x23U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) 
                                                 | (0x6fU 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                                 ? 0x12U
                                                 : 0U))))))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB 
        = ((0U == (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                            >> 0x14U))) ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
           [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                      >> 0x14U))]);
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
            ? (((- (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                  >> 0x14U)))) : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                         >> 0x1fU)))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                                >> 0x14U)))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0x800U 
                                                                         & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                                >> 7U)))))))
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                               >> 7U))))))
                                                      : 0ULL)))));
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xeU][2U]);
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
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
                                                   ((0x3bU 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                                    | (0x1bU 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu)))
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
                                                     : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu)));
}

void Vysyx_22041412_cpu___024root___eval_initial(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22041412_cpu___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22041412_cpu___024root___eval_settle(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval_settle\n"); );
    // Body
    Vysyx_22041412_cpu___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->ysyx_22041412_cpu__DOT__cpu_count = 0;
    vlSelf->ysyx_22041412_cpu__DOT__JR_EN = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mul_EN = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stop = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_start = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3 = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rdata = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode = 0;
    for (int __Vi0=0; __Vi0<134217728; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu = 0;
    VL_ZERO_RESET_W(1035, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4);
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        VL_ZERO_RESET_W(69, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
