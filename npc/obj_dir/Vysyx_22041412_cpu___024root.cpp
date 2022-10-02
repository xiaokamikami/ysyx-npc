// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_cpu.h for the primary calling header

#include "Vysyx_22041412_cpu___024root.h"
#include "Vysyx_22041412_cpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__X_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__X_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_22041412_cpu___024root___sequent__TOP__2(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vdly__ysyx_22041412_cpu__DOT__cpu_count;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    // Body
    __Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0 = 0U;
    __Vdly__ysyx_22041412_cpu__DOT__cpu_count = vlSelf->ysyx_22041412_cpu__DOT__cpu_count;
    if ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))) {
        vlSelf->ysyx_22041412_cpu__DOT__EQ_EN = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU))) 
                                                 & (0ULL 
                                                    == 
                                                    (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                     - vlSelf->ysyx_22041412_cpu__DOT__rsB)));
    }
    if (((IData)(vlSelf->ysyx_22041412_cpu__DOT__Reg_EN) 
         & (0U != (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                            >> 7U))))) {
        __Vdlyvval__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_cpu__DOT__rsW;
        __Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0 
            = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                        >> 7U));
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__Imm_EN) {
        vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr 
            = vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__ImmMemory
            [(0x7ffffffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC))];
    }
    if (__Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[__Vdlyvdim0__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0] 
            = __Vdlyvval__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    }
    __Vdly__ysyx_22041412_cpu__DOT__cpu_count = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count)));
    if ((6U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count))) {
        vlSelf->ysyx_22041412_cpu__DOT__PC = vlSelf->ysyx_22041412_cpu__DOT__DNPC;
        __Vdly__ysyx_22041412_cpu__DOT__cpu_count = 0U;
    }
    vlSelf->ysyx_22041412_cpu__DOT__cpu_count = __Vdly__ysyx_22041412_cpu__DOT__cpu_count;
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__PC;
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[0U] 
        = (IData)((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[1U] 
        = (IData)(((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[2U] 
        = (0xbU | ((IData)((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)) 
                   << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[3U] 
        = (((IData)((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)) 
            >> 0x1cU) | ((IData)(((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC) 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[4U] 
        = (0x90U | ((IData)(((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC) 
                             >> 0x20U)) >> 0x1cU));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][2U] = 2U;
    vlSelf->CP_difftest = ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count))
                            ? 1U : 0U);
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
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->CP_Immen = vlSelf->ysyx_22041412_cpu__DOT__Imm_EN;
    vlSelf->ysyx_22041412_cpu__DOT__Imm = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN)
                                            ? 0U : vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr);
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
    vlSelf->CP_Imm = vlSelf->ysyx_22041412_cpu__DOT__Imm;
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                     ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                      >> 0xcU))) ? 
                        ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                          ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                              ? 2U : 0U) : 1U) : 0U)
                     : ((0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                         ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                          >> 0xcU)))
                             ? 0x11U : ((3U == (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                         ? 0x10U : 0U))
                         : ((0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                             ? 0xfU : ((0x37U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                        ? 0xeU : 0U)))));
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
        = (((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
            | (3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))) 
           | (0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
           | (0x73U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)));
    if (vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type) {
        vlSelf->ysyx_22041412_cpu__DOT__Imm_Type = 
            ((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
              ? 0xbU : 1U);
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
                                ? 4U : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type)
                                         ? 0xbU : 0U))));
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
                                                        << 5U) 
                                                       | (QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                             >> 7U)))))
                                                       : 0ULL))));
    }
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
    vlSelf->ysyx_22041412_cpu__DOT__DNPC = ((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                              | (0xbU 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                              ? 1U : 0U)
                                             ? (vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                                + vlSelf->ysyx_22041412_cpu__DOT__PC)
                                             : (4ULL 
                                                + vlSelf->ysyx_22041412_cpu__DOT__PC));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata);
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[2U] 
        = (2U | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
                 << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[3U] 
        = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__immdata) 
            >> 0x1cU) | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                  >> 0x20U)) << 4U));
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4[4U] 
        = (0x10U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                             >> 0x20U)) >> 0x1cU));
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
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__DNPC;
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
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0x10U | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
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
        = (0x3c00U | (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                       << 0xfU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                             + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = (((IData)(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0x11U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = (0x18000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                 ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                        << 0x14U) | ((IData)((VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041412_cpu__DOT__ALU_A, vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0xcU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = (0x600000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                         << 0x19U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 7U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                               >> 0x20U)) << 0x19U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
        = (0x12000000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                    & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                           << 0x1eU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                  | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                 >> 0x20U)) 
                                        >> 7U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 2U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0xc0000000U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                    & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                   >> 0x20U)) >> 2U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = (2U | ((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                             | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                 << 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = (((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                        | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
            >> 0x1dU) | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                      | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                  >> 0x20U)) << 3U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x50U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                              - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                     << 8U) | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                            | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                     - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 0x18U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                   - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0x200U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                               + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
                      << 0xdU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                            - vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                     + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY)) 
            >> 0x13U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                   + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x2000U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                       << 0x12U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY 
                                              + vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY) 
                                             >> 0x20U)) 
                                    >> 0x13U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0xeU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x440000U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                  + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                 >> 0x20U)) >> 0xeU));
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
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
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
    vlSelf->ysyx_22041412_cpu__DOT__rsW = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out
                                            : ((0x10U 
                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
                                                ? (
                                                   (0ULL 
                                                    < 
                                                    (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                     - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                                                    ? 1ULL
                                                    : 0ULL)
                                                : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu));
}

void Vysyx_22041412_cpu___024root___eval(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041412_cpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22041412_cpu___024root___change_request_1(Vysyx_22041412_cpu___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22041412_cpu___024root___change_request(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___change_request\n"); );
    // Body
    return (Vysyx_22041412_cpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22041412_cpu___024root___change_request_1(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22041412_cpu___024root___eval_debug_assertions(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
