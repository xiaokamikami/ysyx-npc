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

void Vysyx_22041412_cpu___024root___settle__TOP__1(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[0U] = 5U;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[0U] = 1U;
    vlSelf->CP_difftest = ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count))
                            ? 1U : 0U);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count) 
            == vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count) 
           == vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Reg_EN = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit) 
                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count) 
            == vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list
            [0U]) & vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count) 
           == vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Imm_EN = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit) 
                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
    vlSelf->CP_Immen = vlSelf->ysyx_22041412_cpu__DOT__Imm_EN;
    vlSelf->ysyx_22041412_cpu__DOT__Imm = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN)
                                            ? 0U : vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr);
    vlSelf->CP_Imm = vlSelf->ysyx_22041412_cpu__DOT__Imm;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                     ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                      >> 0xcU))) ? 
                        ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                          ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                              ? 2U : 0U) : 0x12U) : 
                        ((1U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                       >> 0xcU))) ? 5U
                          : ((4U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0xcU)))
                              ? 6U : ((6U == (7U & 
                                              (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                       ? 9U : ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                                ? 0xbU
                                                : 0U)))))
                     : ((0x3bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                         ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                          >> 0xcU)))
                             ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                 ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                     ? 2U : 0U) : 0x12U)
                             : ((1U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                              >> 0xcU)))
                                 ? 5U : 0U)) : ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU)))
                                                  ? 0x12U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU)))
                                                     ? 0x13U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0xcU)))
                                                      ? 8U
                                                      : 0U)))))
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                       >> 0xcU)))
                                                   ? 0x12U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 0U))
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                   ? 0xfU
                                                   : 
                                                  ((0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                    ? 0xeU
                                                    : 
                                                   (((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                                     | (0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                                     ? 0x12U
                                                     : 0U))))))));
    vlSelf->ysyx_22041412_cpu__DOT__sram_data_r = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r 
                                                                                >> 0xfU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r)))))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r)))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0xcU)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r 
                                                                                >> 0xfU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r)))
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                           >> 0xcU)))
                                                       ? vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                            >> 0xcU)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r))))
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0xcU)))
                                                         ? (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r))))
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                              >> 0xcU)))
                                                          ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r))
                                                          : 0ULL)))))));
    vlSelf->ysyx_22041412_cpu__DOT__rsA = ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xfU))]);
    vlSelf->ysyx_22041412_cpu__DOT__rsB = ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0x14U))]);
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type 
        = ((((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
             | (3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))) 
            | (0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))) 
           | (0x1bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
           | (0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    if (vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type) {
        vlSelf->ysyx_22041412_cpu__DOT__Imm_Type = 
            ((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
              ? 0xbU : ((3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                         ? 9U : 1U));
        vlSelf->ysyx_22041412_cpu__DOT__immdata = (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      >> 0x14U))));
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__Imm_Type = 
            ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type)
              ? 2U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                       ? 3U : ((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                ? 4U : (((0x33U == 
                                          (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                         | (0x3bU == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                         ? ((0x2000000U 
                                             & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                             ? 0xfU
                                             : 5U) : 
                                        ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type)
                                          ? 0xbU : 0U)))));
        vlSelf->ysyx_22041412_cpu__DOT__immdata = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->ysyx_22041412_cpu__DOT__Imm))))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type)
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                          >> 0x1fU)))) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       ((0xff000U 
                                                                         & vlSelf->ysyx_22041412_cpu__DOT__Imm) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 0x14U)))))))
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 7U)))))))
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 7U))))))
                                                       : 0ULL))));
    }
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata);
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[2U] 
        = (9U | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
                 << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[4U] 
        = (0x40U | (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
                     << 8U) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[5U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
            >> 0x18U) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[6U] 
        = (0x200U | (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
                      << 0xcU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[7U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
            >> 0x14U) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                  >> 0x20U)) << 0xcU));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[8U] 
        = (0x1000U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                               >> 0x20U)) >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[0U];
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[1U];
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[2U] 
                         >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[3U] 
                         >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[4U] 
                   >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[5U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[4U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[6U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[5U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[6U] 
                   >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[7U] 
            << 0x14U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[8U] 
            << 0x14U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                               == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
           == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
              == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
              == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
              == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__ALU_S = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit)
                                              ? vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out
                                              : vlSelf->ysyx_22041412_cpu__DOT__rsB);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY = 
        ((1U & (IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                        >> 0x3fU))) ? (1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))
          : vlSelf->ysyx_22041412_cpu__DOT__ALU_S);
}

void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__X_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22041412_cpu___024root___initial__TOP__3(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___initial__TOP__3\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp208;
    // Body
    __Vtemp208[0U] = 0x2e686578U;
    __Vtemp208[1U] = 0x696e6974U;
    __Vtemp208[2U] = 0x496d6d5fU;
    __Vtemp208[3U] = 0x7263652fU;
    __Vtemp208[4U] = 0x65736f75U;
    __Vtemp208[5U] = 0x72U;
    VL_READMEM_N(true, 32, 134217728, 0, VL_CVT_PACK_STR_NW(6, __Vtemp208)
                 ,  &(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__ImmMemory)
                 , 0, ~0ULL);
    vlSelf->ysyx_22041412_cpu__DOT__PC = 0x80000000ULL;
    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__X_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg);
}

void Vysyx_22041412_cpu___024root___settle__TOP__4(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__PC;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][2U] = 2U;
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result);
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[2U] 
        = (0xfU | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r) 
                   << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__sram_data_r 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[4U] 
        = (0x90U | (((IData)((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)) 
                     << 8U) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__sram_data_r 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[5U] 
        = (((IData)((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)) 
            >> 0x18U) | ((IData)(((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[6U] 
        = (0xb00U | ((IData)(((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC) 
                              >> 0x20U)) >> 0x18U));
    vlSelf->ysyx_22041412_cpu__DOT__DNPC = ((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                              | (0xbU 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                              ? 1U : 0U)
                                             ? (vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                                + vlSelf->ysyx_22041412_cpu__DOT__PC)
                                             : (4ULL 
                                                + vlSelf->ysyx_22041412_cpu__DOT__PC));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[0U];
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[1U];
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[2U] 
                         >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[3U] 
                         >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[4U] 
                   >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[5U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[4U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[6U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[5U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[6U] 
                   >> 8U));
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__DNPC;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                               == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
           == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__ALU_A = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit)
                                              ? vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out
                                              : vlSelf->ysyx_22041412_cpu__DOT__rsA);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY = 
        ((1U & (IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                        >> 0x3fU))) ? (1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))))
          : vlSelf->ysyx_22041412_cpu__DOT__ALU_A);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                   ^ vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                    ^ vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0x13U | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                    << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
            >> 0x1bU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x1c0U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                               + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                      << 0xaU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                     + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0x16U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                   + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x3c00U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                << (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                       << 0xfU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                             + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     << (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
            >> 0x11U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   << (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = (0x28000U | (((IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                        << 0x14U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               << (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = (((IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 0xcU) | ((IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = (0x800000U | (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                         << 0x19U) | ((IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 7U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                               >> 0x20U)) << 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
        = (0x6000000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                          << 0x1eU) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                                >> 0x20U)) 
                                       >> 7U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 2U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0x80000000U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                    ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                   >> 0x20U)) >> 2U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = (1U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                          | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                 << 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0x1dU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                  >> 0x20U)) << 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x48U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                              & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                     << 8U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                         | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0x18U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0xb00U | (((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                      << 0xdU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                            & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = (((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                        | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
            >> 0x13U) | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                      | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x14000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                 - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                        << 0x12U) | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                  | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                              >> 0x20U)) 
                                     >> 0x13U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                     - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 0xeU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                  - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x80000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                 + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                        << 0x17U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                               - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                              >> 0x20U)) 
                                     >> 0xeU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                     + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 9U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                               >> 0x20U)) << 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = (0x800000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                         << 0x1cU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                                + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                               >> 0x20U)) 
                                      >> 9U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 4U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = (0x20000000U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                    + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] = 1U;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U];
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U];
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
                         >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
                         >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                    >> 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
            << 0x16U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
            << 0x16U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
            << 0x11U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
            << 0x11U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
            << 0xcU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
            << 7U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
            << 7U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
            << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
            << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
            << 9U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
            << 9U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                               == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
           == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu 
        = ((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
            ? ((2U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                             >> 0xcU))) ? ((0ULL < 
                                            (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                             - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY))
                                            ? 1ULL : 0ULL)
                : ((0ULL < (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                            - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                    ? 1ULL : 0ULL)) : (((0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                        | (0x1bU == 
                                           (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                        ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu))
                                        : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                               == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
           == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
              == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type) 
              == vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22041412_cpu__DOT__rsW = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out
                                            : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu);
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
    Vysyx_22041412_cpu___024root___settle__TOP__1(vlSelf);
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
    vlSelf->CP_Imm = 0;
    vlSelf->CP_PC = 0;
    vlSelf->CP_NPC = 0;
    vlSelf->CP_difftest = 0;
    vlSelf->CP_Immen = 0;
    vlSelf->ysyx_22041412_cpu__DOT__cpu_count = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Reg_EN = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Imm_EN = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Imm = 0;
    vlSelf->ysyx_22041412_cpu__DOT__immdata = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Imm_Type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__sram_data_r = 0;
    vlSelf->ysyx_22041412_cpu__DOT__rsA = 0;
    vlSelf->ysyx_22041412_cpu__DOT__rsB = 0;
    vlSelf->ysyx_22041412_cpu__DOT__rsW = 0;
    vlSelf->ysyx_22041412_cpu__DOT__ALU_S = 0;
    vlSelf->ysyx_22041412_cpu__DOT__ALU_A = 0;
    vlSelf->ysyx_22041412_cpu__DOT__DNPC = 0;
    vlSelf->ysyx_22041412_cpu__DOT__PC = 0;
    vlSelf->ysyx_22041412_cpu__DOT__EQ_EN = 0;
    VL_ZERO_RESET_W(272, vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4);
    VL_ZERO_RESET_W(204, vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<134217728; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__ImmMemory[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr = 0;
    vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu = 0;
    VL_ZERO_RESET_W(897, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4);
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        VL_ZERO_RESET_W(69, vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<13; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_ZERO_RESET_W(68, vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
