// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_cpu.h for the primary calling header

#include "Vysyx_22041412_cpu___024root.h"
#include "Vysyx_22041412_cpu__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void mem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    mem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
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
    CData/*0:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_en;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    IData/*31:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__id_imm;
    VlWide<22>/*703:0*/ __Vtemp20;
    VlWide<33>/*1055:0*/ __Vtemp30;
    QData/*63:0*/ __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata;
    QData/*63:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    QData/*63:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    // Body
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_en 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data;
    __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 = 0U;
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en 
            = (1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                     >> 0x19U));
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7 
            = (1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                     >> 0x1eU));
    }
    if ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_en = 0U;
    }
    if ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0ULL;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc);
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type) {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_write_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data, 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
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
                                                                                 : 0U)))));
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                ? (((- (QData)((IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r 
                                                      >> 7U)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r)))))
                : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r)))))
                    : ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r)))
                        : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r
                            : ((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r))))
                                : ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                    ? (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r))))
                                    : ((6U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                        ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r))
                                        : 0ULL)))))));
    } else {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr, __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata);
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r 
            = __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata;
    }
    if (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en) 
         & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))) {
        __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data;
        __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
            = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                 ? (IData)((0x67U != (0x707fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                 : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                    | ((0x63U != (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                       & ((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                          | ((~ ((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                 | (0x3bU == (0x7fU 
                                              & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) 
                             & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type))))))
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data
                : ((0U == (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                    >> 0x14U))) ? 0ULL
                    : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                   [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                              >> 0x14U))]));
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
            = (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type) 
                | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type))
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc
                : ((((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                               >> 0xfU)) == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                    & (0U != (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                       >> 0xfU)))) ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                    : ((0U == (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0xfU))) ? 0ULL
                        : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                       [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                  >> 0xfU))])));
    }
    if (__Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[__Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0] 
            = __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data;
    }
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc;
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc;
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en 
            = (1U & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)));
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw;
        if ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr = 0U;
        }
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                ? 0ULL : ((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                           ? (4ULL + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc)
                           : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data));
    }
    __Vtemp20[0x14U] = (((IData)((2ULL + ((((QData)((IData)(
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
                                               + ((
                                                   ((QData)((IData)(
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
    __Vtemp30[0xaU] = (0x700000U | ((0x7fffU & ((IData)(
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
                                        << 0x19U) | 
                                       (0xf8000U & 
                                        ((IData)(((QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                  >> 0x20U)) 
                                         >> 0xcU)))));
    __Vtemp30[0x1bU] = (0x20000000U | ((0x7fffU & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   >> 4U)) 
                                       | (0xfff8000U 
                                          & ((IData)(
                                                     ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                       - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                      >> 0x20U)) 
                                             >> 4U))));
    __Vtemp30[0x1eU] = (2U | (((0x7fc0U & ((IData)(
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
        = __Vtemp30[0xaU];
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
        = __Vtemp30[0x1bU];
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
                       << 1U)) | (__Vtemp20[0x14U] 
                                  << 0xfU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = ((__Vtemp20[0x14U] >> 0x11U) | (0xffff8000U 
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
        = __Vtemp30[0x1eU];
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
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3 
            = (7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                     >> 0xcU));
    }
    if ((0x23U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type = 1U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en = 1U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu;
    } else if ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type = 0U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en = 1U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu;
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type = 0U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en = 0U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr = 0ULL;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc;
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw 
            = (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                        >> 7U));
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    }
    if ((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc = 0ULL;
    }
    if ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en = 0U;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
            = (4ULL + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc);
    }
    if (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode)) 
         & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en)))) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_en = 1U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en = 1U;
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_en;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
        [(0x7ffffffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))];
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en) {
        if ((0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
            if ((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
                vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc 
                    = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data;
            }
        }
    }
    vlSelf->CP_IMM = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm;
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_imm)
                       ? 1U : 0U);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_data 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_data;
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode;
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode 
            = (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm);
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__id_imm;
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
                                                    : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu));
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
