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

extern "C" void mem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    mem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vysyx_22041412_cpu___024root___sequent__TOP__2(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vdly__ysyx_22041412_cpu__DOT__cpu_count;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    VlWide<24>/*767:0*/ __Vtemp110;
    VlWide<35>/*1119:0*/ __Vtemp120;
    QData/*63:0*/ __Vtask_ysyx_22041412_cpu__DOT__sram__DOT__mem_read__2__rdata;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0;
    // Body
    __Vdlyvset__ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg__v0 = 0U;
    __Vdly__ysyx_22041412_cpu__DOT__cpu_count = vlSelf->ysyx_22041412_cpu__DOT__cpu_count;
    vlSelf->ysyx_22041412_cpu__DOT__EQ_EN = ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                             & (((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU))) 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                    == vlSelf->ysyx_22041412_cpu__DOT__rsB)) 
                                                | (((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU))) 
                                                    & (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                       != vlSelf->ysyx_22041412_cpu__DOT__rsB)) 
                                                   | (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                            >> 0xcU))) 
                                                       & VL_GTS_IQQ(1,64,64, 0ULL, 
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                                     - vlSelf->ysyx_22041412_cpu__DOT__rsB))) 
                                                      | (((5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                               >> 0xcU))) 
                                                          & VL_LTES_IQQ(1,64,64, 0ULL, 
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                                         - vlSelf->ysyx_22041412_cpu__DOT__rsB))) 
                                                         | (((6U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 0xcU))) 
                                                             & (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                                < vlSelf->ysyx_22041412_cpu__DOT__rsB)) 
                                                            | ((7U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                    >> 0xcU))) 
                                                               & (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                                  >= vlSelf->ysyx_22041412_cpu__DOT__rsB))))))));
    if ((0xfU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))) {
        vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result 
            = ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                             >> 0xcU))) ? (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                           * vlSelf->ysyx_22041412_cpu__DOT__rsB)
                : ((4U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                 >> 0xcU))) ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__rsA, vlSelf->ysyx_22041412_cpu__DOT__rsB)
                    : ((4U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                     >> 0xcU))) ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub)
                        : ((5U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                         >> 0xcU)))
                            ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub)
                            : ((6U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xcU)))
                                ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub)
                                : ((7U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                 >> 0xcU)))
                                    ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub)
                                    : 0ULL))))));
    }
    vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__tx = 
        ((6U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                       >> 0xcU))) ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result)))
          : vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result);
    if ((((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
          & (2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count)))
          ? 1U : 0U)) {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_write_TOP(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                                                                + vlSelf->ysyx_22041412_cpu__DOT__rsA), vlSelf->ysyx_22041412_cpu__DOT__rsB, 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                                >> 0xcU)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((2U 
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
                                                                                 : 0U)))));
    } else if ((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))) {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__sram__DOT__mem_read_TOP(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                                                                + vlSelf->ysyx_22041412_cpu__DOT__rsA), __Vtask_ysyx_22041412_cpu__DOT__sram__DOT__mem_read__2__rdata);
        vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r 
            = __Vtask_ysyx_22041412_cpu__DOT__sram__DOT__mem_read__2__rdata;
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__sram_data_r = 0ULL;
    }
    if ((1U & (~ (((4U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                   & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                   ? 0U : 1U)))) {
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
    if ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count))) {
        vlSelf->ysyx_22041412_cpu__DOT__PC = vlSelf->ysyx_22041412_cpu__DOT__DNPC;
        __Vdly__ysyx_22041412_cpu__DOT__cpu_count = 0U;
    }
    vlSelf->ysyx_22041412_cpu__DOT__cpu_count = __Vdly__ysyx_22041412_cpu__DOT__cpu_count;
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__PC;
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0U][2U] = 2U;
    vlSelf->CP_difftest = ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count))
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
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_cpu__DOT__Imm)
                       ? 1U : 0U);
    vlSelf->CP_Imm = vlSelf->ysyx_22041412_cpu__DOT__Imm;
    vlSelf->ysyx_22041412_cpu__DOT__mulw_en = (((0x1bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                                ? 1U
                                                : 0U);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode 
        = (0x1fU & ((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                     ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                      >> 0xcU))) ? 
                        ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                          ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                              ? 2U : 0U) : 0x12U) : 
                        ((1U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                       >> 0xcU))) ? 3U
                          : ((2U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0xcU)))
                              ? 4U : ((3U == (7U & 
                                              (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                       ? 4U : ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                                ? 6U
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 8U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU)))
                                                     ? 9U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0xcU)))
                                                      ? 0xbU
                                                      : 0U))))))))
                     : ((0x3bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                         ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                          >> 0xcU)))
                             ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                 ? ((0x40000000U & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                     ? 2U : 0U) : 0x12U)
                             : ((1U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                              >> 0xcU)))
                                 ? 5U : ((5U == (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                          ? ((0x40000000U 
                                              & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                              ? ((0x40000000U 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                                  ? 0x14U
                                                  : 0U)
                                              : 7U)
                                          : 0U))) : 
                        ((0x13U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                          ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0xcU)))
                              ? 0x12U : ((1U == (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                          ? 5U : ((2U 
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
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU)))
                                                     ? 6U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                          >> 0xcU)))
                                                      ? 8U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                           >> 0xcU)))
                                                       ? 9U
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                            >> 0xcU)))
                                                        ? 0xbU
                                                        : 0U))))))))
                          : ((0x1bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                              ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                               >> 0xcU)))
                                  ? 0x12U : ((1U == 
                                              (7U & 
                                               (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xcU)))
                                              ? 5U : 
                                             ((5U == 
                                               (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                               ? ((0x40000000U 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                                    ? 0x15U
                                                    : 0U)
                                                   : 7U)
                                               : 0U)))
                              : ((0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                  ? 0xfU : ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                             ? 0xeU
                                             : (((3U 
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
                                                                                >> 7U)))))) 
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
                                                                                >> 0x1fU))))))) 
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
    vlSelf->ysyx_22041412_cpu__DOT__rsB = ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0x14U))]);
    vlSelf->ysyx_22041412_cpu__DOT__rsA = ((0U == (0x1fU 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg
                                           [(0x1fU 
                                             & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xfU))]);
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
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__tx);
    vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__tx 
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
    if (vlSelf->ysyx_22041412_cpu__DOT__mulw_en) {
        vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB));
        vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__rsA));
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub 
            = vlSelf->ysyx_22041412_cpu__DOT__rsB;
        vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua 
            = vlSelf->ysyx_22041412_cpu__DOT__rsA;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type) {
        vlSelf->ysyx_22041412_cpu__DOT__Imm_Type = 
            (0xfU & ((0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                      ? ((0U == (7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                       >> 0xcU))) ? 0xbU
                          : 1U) : ((3U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                    ? 9U : 1U)));
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
            (0xfU & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type)
                      ? 2U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                               ? 3U : ((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                        ? 4U : (((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                                 | (0x3bU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                                 ? 
                                                ((0x2000000U 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm)
                                                  ? 0xfU
                                                  : 5U)
                                                 : 
                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type)
                                                  ? 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                   ? 0xbU
                                                   : 0U)
                                                  : 0U))))));
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
                                             ? ((0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__Imm))
                                                 ? 
                                                (vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                                 + vlSelf->ysyx_22041412_cpu__DOT__immdata)
                                                 : 
                                                (vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                                 + vlSelf->ysyx_22041412_cpu__DOT__PC))
                                             : (4ULL 
                                                + vlSelf->ysyx_22041412_cpu__DOT__PC));
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
    __Vtemp110[0x16U] = (((IData)((2ULL + ((((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))) 
                                           + (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU) 
                                              | (0x7fffffffffffffffULL 
                                                 & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                          >> 9U) | ((IData)(((2ULL 
                                              + ((((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                             >> 0x20U)) 
                                    << 0x17U));
    __Vtemp120[0xaU] = (0x700000U | ((0x7fffU & ((IData)(
                                                         ((QData)((IData)(
                                                                          ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                                          >> 0x20U)) 
                                                 >> 0xcU)) 
                                     | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                         << 0x19U) 
                                        | (0xf8000U 
                                           & ((IData)(
                                                      ((QData)((IData)(
                                                                       ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                                       >> 0x20U)) 
                                              >> 0xcU)))));
    __Vtemp120[0x1dU] = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                    - vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                           >> 0x1fU) | (0x7ffeU & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                             - vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                            >> 0x20U)) 
                                                   << 1U))) 
                         | (0xffff8000U & ((IData)(
                                                   ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                     - vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                    >> 0x20U)) 
                                           << 1U)));
    __Vtemp120[0x20U] = (0x40U | (((0x7800U & ((IData)(
                                                       (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                        + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                               << 0xbU)) 
                                   | ((IData)(((2ULL 
                                                + (
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU) 
                                                    | (0x7fffffffffffffffULL 
                                                       & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))) 
                                                   + 
                                                   (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                                >> 0x3fU))))) 
                                                     << 0x3fU) 
                                                    | (0x7fffffffffffffffULL 
                                                       & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                                  (0xffff8000U & ((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                  << 0xbU))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0xeU | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                            + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                   << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
            >> 0x1bU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x1e0U | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                               >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                      << 0xaU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                            + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                     >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
            >> 0x16U) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x5000U | (((IData)((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                              >> 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))))) 
                       << 0xfU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                             >> (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))))) 
            >> 0x11U) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = (0xa8000U | (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                        << 0x14U) | ((IData)(((((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = ((0x7fffU & ((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                       >> 0xcU)) | ((0xf8000U & ((IData)((QData)((IData)(
                                                                         ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                                                 >> 0xcU)) 
                                    | ((IData)(((QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_A) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                                >> 0x20U)) 
                                       << 0x14U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = __Vtemp120[0xaU];
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                       >> 7U)) | ((0x1ff8000U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                                 >> 7U)) 
                                  | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                              >> 0x20U)) 
                                     << 0x19U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
        = (0x10000000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                               >> 0x20U)) 
                                      >> 7U)) | (((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           << 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                                  << 0x1eU) 
                                                 | (0x1ff8000U 
                                                    & ((IData)(
                                                               ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                                >> 0x20U)) 
                                                       >> 7U)))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                       >> 2U)) | ((0x3fff8000U & ((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           << 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                                  >> 2U)) 
                                  | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                              >> 0x20U)) 
                                     << 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0x40000000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                << 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                               >> 0x20U)) 
                                      >> 2U)) | (0x3fff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                              << 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                             >> 0x20U)) 
                                                    >> 2U))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = (1U | ((0x7ff8U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                      >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                             << 3U)) | (0xffff8000U 
                                        & ((IData)(
                                                   (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                           << 3U))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                      >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
             >> 0x1dU) | (0x7ff8U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                              >> 0x20U)) 
                                     << 3U))) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                             >> 0x20U)) 
                                                    << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x98U | (((0x7f00U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                          << (0x3fU 
                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                 << 8U)) | ((IData)(
                                                    ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                      >> 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                     >> 0x20U)) 
                                            >> 0x1dU)) 
                    | (0xffff8000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
                                      << 8U))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                      << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))) 
             >> 0x18U) | (0x7f00U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                              >> 0x20U)) 
                                     << 8U))) | (0xffff8000U 
                                                 & ((IData)(
                                                            ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                              << 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                             >> 0x20U)) 
                                                    << 8U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0x300U | (((0x6000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                           ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                  << 0xdU)) | ((IData)(
                                                       ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                         << 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                        >> 0x20U)) 
                                               >> 0x18U)) 
                     | (0xffff8000U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                       << 0xdU))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                      ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
             >> 0x13U) | (0x6000U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                              >> 0x20U)) 
                                     << 0xdU))) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                               >> 0x20U)) 
                                                      << 0xdU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x4000U | (((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                 ^ vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                >> 0x20U)) >> 0x13U) 
                      | (0x8000U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                             | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                    << 0x12U))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                       >> 0xeU)) | ((0x38000U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                          | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                 >> 0xeU)) 
                                    | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                 | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                >> 0x20U)) 
                                       << 0x12U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x240000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                              | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                             >> 0x20U)) 
                                    >> 0xeU)) | (((IData)(
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                  << 0x17U) 
                                                 | (0x38000U 
                                                    & ((IData)(
                                                               ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                 | vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = ((0x7fffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                       >> 9U)) | ((0x7f8000U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                         & vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                >> 9U)) 
                                  | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                              >> 0x20U)) 
                                     << 0x17U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = (0x5800000U | ((0x7fffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                              >> 0x20U)) 
                                     >> 9U)) | (((IData)(
                                                         (~ 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                 << 0x1cU) 
                                                | (0x7f8000U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                & vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                               >> 0x20U)) 
                                                      >> 9U)))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = ((0x7fffU & ((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                   | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                       >> 4U)) | ((0xfff8000U & ((IData)(
                                                         (~ 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           | vlSelf->ysyx_22041412_cpu__DOT__ALU_S))) 
                                                 >> 4U)) 
                                  | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                  | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                              >> 0x20U)) 
                                     << 0x1cU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = (0xa0000000U | ((0x7fffU & ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                   | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                               >> 0x20U)) 
                                      >> 4U)) | (0xfff8000U 
                                                 & ((IData)(
                                                            ((~ 
                                                              (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                               | vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                             >> 0x20U)) 
                                                    >> 4U))));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
        = ((0x7ffeU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                - vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                       << 1U)) | (0xffff8000U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
                                                 << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = __Vtemp120[0x1dU];
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
        = (4U | (((0x7fc0U & ((IData)((2ULL + ((((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))) 
                                               + (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                               >> 0x3fU))))) 
                                                   << 0x3fU) 
                                                  | (0x7fffffffffffffffULL 
                                                     & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S)))))) 
                              << 6U)) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                   - vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                  >> 0x20U)) 
                                         >> 0x1fU)) 
                 | (__Vtemp110[0x16U] << 0xfU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
        = ((__Vtemp110[0x16U] >> 0x11U) | (0xffff8000U 
                                           & ((IData)(
                                                      ((2ULL 
                                                        + 
                                                        ((((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                                >> 0x3fU))))) 
                                                           << 0x3fU) 
                                                          | (0x7fffffffffffffffULL 
                                                             & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))) 
                                                         + 
                                                         (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                                >> 0x3fU))))) 
                                                           << 0x3fU) 
                                                          | (0x7fffffffffffffffULL 
                                                             & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
        = __Vtemp120[0x20U];
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                      + vlSelf->ysyx_22041412_cpu__DOT__ALU_S)) 
             >> 0x15U) | (0x7800U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                               + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                              >> 0x20U)) 
                                     << 0xbU))) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                                                               >> 0x20U)) 
                                                      << 0xbU)));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
        = (0x9000U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                + vlSelf->ysyx_22041412_cpu__DOT__ALU_S) 
                               >> 0x20U)) >> 0x15U));
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
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
                    >> 0xbU));
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
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xfU][2U]);
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
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xfU]));
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
                                            : ((4U 
                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
                                                ? (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 
                                                   (VL_GTS_IQQ(1,64,64, 0ULL, 
                                                               (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                      < vlSelf->ysyx_22041412_cpu__DOT__ALU_S)
                                                      ? 1ULL
                                                      : 0ULL)
                                                     : 0ULL))
                                                : (
                                                   ((0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu)))
                                                    : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu)));
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
