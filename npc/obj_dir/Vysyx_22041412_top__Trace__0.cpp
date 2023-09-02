// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_top__Syms.h"


void Vysyx_22041412_top___024root__trace_chg_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<37>/*1183:0*/ __Vtemp_he331c0ba__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+17,(vlSelf->ysyx_22041412_top__DOT__r_ready));
        bufp->chgQData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
        bufp->chgCData(oldp+20,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                  ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                                  : 0xffU)),8);
        bufp->chgBit(oldp+21,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
        bufp->chgBit(oldp+22,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                      ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                      : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
        bufp->chgBit(oldp+23,(((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                               & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o))));
        bufp->chgCData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgWData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgWData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgWData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgWData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgWData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+70,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgWData(oldp+74,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgWData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
        bufp->chgWData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
        bufp->chgCData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
        bufp->chgIData(oldp+98,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    }
    if (VL_UNLIKELY(((((((((vlSelf->__Vm_traceActivity
                            [9U] | vlSelf->__Vm_traceActivity
                            [0xbU]) | vlSelf->__Vm_traceActivity
                           [0xdU]) | vlSelf->__Vm_traceActivity
                          [0xfU]) | vlSelf->__Vm_traceActivity
                         [0x11U]) | vlSelf->__Vm_traceActivity
                        [0x12U]) | vlSelf->__Vm_traceActivity
                       [0x13U]) | vlSelf->__Vm_traceActivity
                      [0x14U]) | vlSelf->__Vm_traceActivity
                     [0x15U]))) {
        __Vtemp_he331c0ba__0[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
        __Vtemp_he331c0ba__0[1U] = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                            >> 0x20U));
        __Vtemp_he331c0ba__0[2U] = (4U | ((IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                               >> 5U)))
                                                    ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                    : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)))) 
                                          << 5U));
        __Vtemp_he331c0ba__0[3U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)))) 
                                     >> 0x1bU) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                           >> 0x20U)) 
                                                  << 5U));
        __Vtemp_he331c0ba__0[4U] = (0x220U | (((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                    >> 5U)))
                                                         ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                         : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)))) 
                                               << 0xaU) 
                                              | ((IData)(
                                                         (((1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                       >> 5U)))
                                                            ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                            : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                          >> 0x20U)) 
                                                 >> 0x1bU)));
        __Vtemp_he331c0ba__0[5U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)))) 
                                     >> 0x16U) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                                           >> 0x20U)) 
                                                  << 0xaU));
        __Vtemp_he331c0ba__0[6U] = (0x4c00U | (((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                     >> 5U)))
                                                          ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                          : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)))) 
                                                << 0xfU) 
                                               | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                                           >> 0x20U)) 
                                                  >> 0x16U)));
        __Vtemp_he331c0ba__0[7U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)))) 
                                     >> 0x11U) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                           >> 0x20U)) 
                                                  << 0xfU));
        __Vtemp_he331c0ba__0[8U] = (0x90000U | (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                 << 0x14U) 
                                                | ((IData)(
                                                           (((1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                         >> 5U)))
                                                              ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                              : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)));
        __Vtemp_he331c0ba__0[9U] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                     >> 0xcU) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_he331c0ba__0[0xaU] = (0xf00000U | (
                                                   ((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                    << 0x19U) 
                                                   | ((IData)(
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)) 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_he331c0ba__0[0xbU] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                       >> 7U) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)) 
                                                          >> 0x20U)) 
                                                 << 0x19U));
        __Vtemp_he331c0ba__0[0xcU] = (0x20000000U | 
                                      (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                        << 0x1eU) | 
                                       ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)) 
                                                 >> 0x20U)) 
                                        >> 7U)));
        __Vtemp_he331c0ba__0[0xdU] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                       >> 2U) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                          >> 0x20U)) 
                                                 << 0x1eU));
        __Vtemp_he331c0ba__0[0xeU] = (0x80000000U | 
                                      ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                >> 0x20U)) 
                                       >> 2U));
        __Vtemp_he331c0ba__0[0xfU] = (3U | ((IData)(
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                            << 3U));
        __Vtemp_he331c0ba__0[0x10U] = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x1dU) | 
                                       ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 3U));
        __Vtemp_he331c0ba__0[0x11U] = (0x60U | (((IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                                 << 8U) 
                                                | ((IData)(
                                                           (VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                            >> 0x20U)) 
                                                   >> 0x1dU)));
        __Vtemp_he331c0ba__0[0x12U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x18U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_he331c0ba__0[0x13U] = (0xd00U | (((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           << 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                                  << 0xdU) 
                                                 | ((IData)(
                                                            ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U)));
        __Vtemp_he331c0ba__0[0x14U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x13U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 0xdU));
        __Vtemp_he331c0ba__0[0x15U] = (0x16000U | (
                                                   ((IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                             ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                                    << 0x12U) 
                                                   | ((IData)(
                                                              ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                << 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 0x13U)));
        __Vtemp_he331c0ba__0[0x16U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 0xeU) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                 >> 0x20U)) 
                                        << 0x12U));
        __Vtemp_he331c0ba__0[0x17U] = (0x1c0000U | 
                                       (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                         << 0x17U) 
                                        | ((IData)(
                                                   ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                     ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                    >> 0x20U)) 
                                           >> 0xeU)));
        __Vtemp_he331c0ba__0[0x18U] = (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                        >> 9U) | ((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
                                                           >> 0x20U)) 
                                                  << 0x17U));
        __Vtemp_he331c0ba__0[0x19U] = (0x4000000U | 
                                       (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
                                                    >> 0x20U)) 
                                           >> 9U)));
        __Vtemp_he331c0ba__0[0x1aU] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 4U) | ((IData)(
                                                          ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                            & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        __Vtemp_he331c0ba__0[0x1bU] = (0xa0000000U 
                                       | ((IData)((
                                                   (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                    & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_he331c0ba__0[0x1cU] = ((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                       << 1U);
        __Vtemp_he331c0ba__0[0x1dU] = (((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                        >> 0x1fU) | 
                                       ((IData)(((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_he331c0ba__0[0x1eU] = (0x12U | (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                                 << 6U) 
                                                | ((IData)(
                                                           ((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU)));
        __Vtemp_he331c0ba__0[0x1fU] = (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                        >> 0x1aU) | 
                                       ((IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                                                 >> 0x20U)) 
                                        << 6U));
        __Vtemp_he331c0ba__0[0x20U] = (0xc0U | (((IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                          + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY)) 
                                                 << 0xbU) 
                                                | ((IData)(
                                                           (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                                                            >> 0x20U)) 
                                                   >> 0x1aU)));
        __Vtemp_he331c0ba__0[0x21U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                 + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY)) 
                                        >> 0x15U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                  + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY) 
                                                 >> 0x20U)) 
                                        << 0xbU));
        __Vtemp_he331c0ba__0[0x22U] = (0x800U | (((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                                  << 0x10U) 
                                                 | ((IData)(
                                                            ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                              + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY) 
                                                             >> 0x20U)) 
                                                    >> 0x15U)));
        __Vtemp_he331c0ba__0[0x23U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 0x10U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_he331c0ba__0[0x24U] = (0x20000U | ((IData)(
                                                           ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                             + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
        bufp->chgWData(oldp+99,(__Vtemp_he331c0ba__0),1173);
    }
}

void Vysyx_22041412_top___024root__trace_chg_sub_1(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_1\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_1(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 137);
    // Body
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[0xaU] 
                      | vlSelf->__Vm_traceActivity[0x10U]) 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgQData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+10,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        bufp->chgQData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        bufp->chgQData(oldp+14,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        bufp->chgQData(oldp+16,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        bufp->chgQData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        bufp->chgQData(oldp+20,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        bufp->chgQData(oldp+22,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        bufp->chgQData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        bufp->chgQData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        bufp->chgQData(oldp+28,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        bufp->chgQData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        bufp->chgQData(oldp+32,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xcU] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        bufp->chgQData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        bufp->chgQData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        bufp->chgQData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        bufp->chgQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        bufp->chgQData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xeU] 
                     | vlSelf->__Vm_traceActivity[0x17U]))) {
        bufp->chgWData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        bufp->chgWData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        bufp->chgWData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        bufp->chgWData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        bufp->chgWData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        bufp->chgWData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        bufp->chgWData(oldp+64,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        bufp->chgWData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        bufp->chgWData(oldp+70,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        bufp->chgWData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        bufp->chgWData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        bufp->chgWData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        bufp->chgWData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        bufp->chgWData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        bufp->chgWData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        bufp->chgWData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        bufp->chgWData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgCData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
        bufp->chgBit(oldp+98,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        bufp->chgBit(oldp+99,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgQData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    }
}

void Vysyx_22041412_top___024root__trace_chg_sub_2(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_2\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_2(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 239);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgQData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgIData(oldp+3,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
        bufp->chgCData(oldp+4,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+5,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0x1eU))));
        bufp->chgCData(oldp+6,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                 ? 0U : ((0x63U == 
                                          (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                          ? 0U : (0x1fU 
                                                  & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                     >> 7U))))),5);
        bufp->chgCData(oldp+7,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
        bufp->chgBit(oldp+8,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+9,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+10,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+11,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgIData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
        bufp->chgQData(oldp+13,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_22041412_top__DOT__jar_end));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgBit(oldp+16,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
        bufp->chgIData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
        bufp->chgWData(oldp+19,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod),21);
        bufp->chgCData(oldp+24,((0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)),7);
        bufp->chgBit(oldp+25,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
        bufp->chgWData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
        bufp->chgIData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
        bufp->chgIData(oldp+31,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+32,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                          >> 4U))),6);
        bufp->chgCData(oldp+33,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
        bufp->chgBit(oldp+34,((1U & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                     >> 0xaU))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
        bufp->chgWData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0]),128);
        bufp->chgWData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1]),128);
        bufp->chgWData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2]),128);
        bufp->chgWData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3]),128);
        bufp->chgWData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4]),128);
        bufp->chgWData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5]),128);
        bufp->chgWData(oldp+59,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6]),128);
        bufp->chgWData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7]),128);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
        bufp->chgQData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
        bufp->chgQData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
        bufp->chgBit(oldp+71,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
        bufp->chgQData(oldp+72,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
        bufp->chgBit(oldp+74,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
        bufp->chgCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
        bufp->chgBit(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
        bufp->chgQData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
        bufp->chgQData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
        bufp->chgQData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
        bufp->chgQData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
        bufp->chgQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
        bufp->chgQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
        bufp->chgQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
        bufp->chgQData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
        bufp->chgQData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
        bufp->chgQData(oldp+102,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
        bufp->chgQData(oldp+104,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
        bufp->chgQData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
        bufp->chgQData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
        bufp->chgQData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
        bufp->chgQData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
        bufp->chgQData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
        bufp->chgQData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
        bufp->chgQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
        bufp->chgQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    }
}

void Vysyx_22041412_top___024root__trace_chg_sub_3(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_3\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_3(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 385);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
        bufp->chgBit(oldp+1,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                       >> 1U)))));
        bufp->chgBit(oldp+2,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                       >> 2U)))));
        bufp->chgBit(oldp+3,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                       >> 3U)))));
        bufp->chgBit(oldp+4,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                       >> 4U)))));
        bufp->chgBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                       >> 5U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
        bufp->chgBit(oldp+6,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[0]));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[1]));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[2]));
        bufp->chgBit(oldp+9,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[3]));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[4]));
        bufp->chgBit(oldp+11,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[5]));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[6]));
        bufp->chgBit(oldp+13,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[7]));
        bufp->chgBit(oldp+14,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [0U]))));
        bufp->chgBit(oldp+15,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [1U]))));
        bufp->chgBit(oldp+16,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [2U]))));
        bufp->chgBit(oldp+17,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [3U]))));
        bufp->chgBit(oldp+18,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [4U]))));
        bufp->chgBit(oldp+19,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [5U]))));
        bufp->chgBit(oldp+20,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [6U]))));
        bufp->chgBit(oldp+21,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                     [7U]))));
    }
    bufp->chgBit(oldp+22,(vlSelf->clk));
    bufp->chgBit(oldp+23,(vlSelf->rst));
    bufp->chgQData(oldp+24,(vlSelf->pip_pc),64);
    bufp->chgQData(oldp+26,(vlSelf->pip_dnpc),64);
    bufp->chgQData(oldp+28,(vlSelf->pip_mem_pc),64);
    bufp->chgIData(oldp+30,(vlSelf->pip_imm),32);
    bufp->chgBit(oldp+31,(vlSelf->Ebreak));
    bufp->chgBit(oldp+32,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+33,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+34,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+35,(vlSelf->io_master_awprot),3);
    bufp->chgCData(oldp+36,(vlSelf->io_master_awid),4);
    bufp->chgBit(oldp+37,(vlSelf->io_master_awuser));
    bufp->chgCData(oldp+38,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+39,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+40,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+41,(vlSelf->io_master_awlock));
    bufp->chgCData(oldp+42,(vlSelf->io_master_awcache),4);
    bufp->chgCData(oldp+43,(vlSelf->io_master_awqos),4);
    bufp->chgCData(oldp+44,(vlSelf->io_master_awregion),4);
    bufp->chgBit(oldp+45,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+46,(vlSelf->io_master_wvalid));
    bufp->chgQData(oldp+47,(vlSelf->io_master_wdata),64);
    bufp->chgCData(oldp+49,(vlSelf->io_master_wstrb),8);
    bufp->chgBit(oldp+50,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+51,(vlSelf->io_master_wuser));
    bufp->chgBit(oldp+52,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+53,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+54,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+55,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+56,(vlSelf->io_master_buser));
    bufp->chgBit(oldp+57,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+58,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+59,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+60,(vlSelf->io_master_arprot),3);
    bufp->chgCData(oldp+61,(vlSelf->io_master_arid),4);
    bufp->chgBit(oldp+62,(vlSelf->io_master_aruser));
    bufp->chgCData(oldp+63,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+64,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+65,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+66,(vlSelf->io_master_arlock));
    bufp->chgCData(oldp+67,(vlSelf->io_master_arcache),4);
    bufp->chgCData(oldp+68,(vlSelf->io_master_arqos),4);
    bufp->chgCData(oldp+69,(vlSelf->io_master_arregion),4);
    bufp->chgBit(oldp+70,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+71,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+72,(vlSelf->io_master_rresp),2);
    bufp->chgQData(oldp+73,(vlSelf->io_master_rdata),64);
    bufp->chgBit(oldp+75,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+76,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+77,(vlSelf->io_master_ruser));
    bufp->chgBit(oldp+78,(vlSelf->io_slave_awready));
    bufp->chgBit(oldp+79,(vlSelf->io_slave_awvalid));
    bufp->chgIData(oldp+80,(vlSelf->io_slave_awaddr),32);
    bufp->chgCData(oldp+81,(vlSelf->io_slave_awid),4);
    bufp->chgCData(oldp+82,(vlSelf->io_slave_awlen),8);
    bufp->chgCData(oldp+83,(vlSelf->io_slave_awsize),3);
    bufp->chgCData(oldp+84,(vlSelf->io_slave_awburst),2);
    bufp->chgBit(oldp+85,(vlSelf->io_slave_wready));
    bufp->chgBit(oldp+86,(vlSelf->io_slave_wvalid));
    bufp->chgQData(oldp+87,(vlSelf->io_slave_wdata),64);
    bufp->chgCData(oldp+89,(vlSelf->io_slave_wstrb),8);
    bufp->chgBit(oldp+90,(vlSelf->io_slave_wlast));
    bufp->chgBit(oldp+91,(vlSelf->io_slave_bready));
    bufp->chgBit(oldp+92,(vlSelf->io_slave_bvalid));
    bufp->chgCData(oldp+93,(vlSelf->io_slave_bresp),2);
    bufp->chgCData(oldp+94,(vlSelf->io_slave_bid),4);
    bufp->chgBit(oldp+95,(vlSelf->io_slave_arready));
    bufp->chgBit(oldp+96,(vlSelf->io_slave_arvalid));
    bufp->chgIData(oldp+97,(vlSelf->io_slave_araddr),32);
    bufp->chgCData(oldp+98,(vlSelf->io_slave_arid),4);
    bufp->chgCData(oldp+99,(vlSelf->io_slave_arlen),8);
    bufp->chgCData(oldp+100,(vlSelf->io_slave_arsize),3);
    bufp->chgCData(oldp+101,(vlSelf->io_slave_arburst),2);
}

void Vysyx_22041412_top___024root__trace_chg_sub_4(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_4\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_4(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 487);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->io_slave_rready));
    bufp->chgBit(oldp+1,(vlSelf->io_slave_rvalid));
    bufp->chgCData(oldp+2,(vlSelf->io_slave_rresp),2);
    bufp->chgQData(oldp+3,(vlSelf->io_slave_rdata),64);
    bufp->chgBit(oldp+5,(vlSelf->io_slave_rlast));
    bufp->chgCData(oldp+6,(vlSelf->io_slave_rid),4);
    bufp->chgBit(oldp+7,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->chgBit(oldp+8,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->chgIData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->chgBit(oldp+10,(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
                           | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                              & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))));
    bufp->chgBit(oldp+11,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                           & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))));
    bufp->chgBit(oldp+12,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->chgBit(oldp+13,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                           & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))));
    bufp->chgBit(oldp+14,(((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                           | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                               & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                              | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))))));
    bufp->chgBit(oldp+15,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->chgBit(oldp+16,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->chgQData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->chgBit(oldp+19,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->chgBit(oldp+20,(((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                           | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                              | ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                 | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))))));
    bufp->chgBit(oldp+21,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->chgBit(oldp+22,(vlSelf->ysyx_22041412_top__DOT__if_wait));
    bufp->chgQData(oldp+23,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->chgCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->chgCData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->chgBit(oldp+27,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                           & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                              >> 0x19U))));
    bufp->chgQData(oldp+28,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->chgCData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->chgCData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->chgQData(oldp+32,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                              ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                             [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->chgQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->chgBit(oldp+36,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
    bufp->chgSData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->chgCData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->chgBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->chgQData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->chgCData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->chgCData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->chgBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->chgQData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->chgQData(oldp+47,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                              ? vlSelf->ysyx_22041412_top__DOT__id_pc
                              : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                  ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                  : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                      & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                         & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h677fa55c__0)))
                                      ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                      : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                          & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5f9b0d0d__0))
                                          ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                          : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5f9b0d0d__0) 
                                              & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                              ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                              : (((0U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                  & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                                        & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                            == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hbceeb899__0)))))
                                                  ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                  [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))))),64);
    bufp->chgQData(oldp+49,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                              ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                              : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                  & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0))
                                  ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                  : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0))
                                      ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                      : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0) 
                                          & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                          ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                          : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                              & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0))
                                              ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                              : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
    bufp->chgQData(oldp+51,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
                              ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                              : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                  & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0))
                                  ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                  : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                      ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                      : ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0)
                                          ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                          : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
    bufp->chgQData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->chgQData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->chgBit(oldp+57,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->chgCData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->chgBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
    bufp->chgBit(oldp+60,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                           & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
    bufp->chgCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->chgCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->chgCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->chgBit(oldp+64,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->chgBit(oldp+65,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->chgBit(oldp+66,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->chgQData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
    bufp->chgQData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->chgQData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->chgQData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->chgQData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->chgQData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
    bufp->chgBit(oldp+79,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
    bufp->chgBit(oldp+80,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
    bufp->chgBit(oldp+81,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->chgCData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->chgQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->chgQData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->chgQData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->chgCData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->chgQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->chgQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->chgQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->chgIData(oldp+96,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->chgBit(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->chgBit(oldp+98,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->chgBit(oldp+99,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->chgBit(oldp+100,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o));
    bufp->chgIData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
}

void Vysyx_22041412_top___024root__trace_chg_sub_5(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_5\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_5(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 589);
    // Body
    bufp->chgBit(oldp+0,(((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                          | ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                             | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                                | (IData)((0x100073U 
                                           == (0xfff0007fU 
                                               & vlSelf->ysyx_22041412_top__DOT__if_ar_data))))))));
    bufp->chgBit(oldp+1,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en));
    bufp->chgCData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->chgBit(oldp+3,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->chgQData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data),64);
    bufp->chgCData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->chgCData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state),3);
    bufp->chgCData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->chgBit(oldp+9,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)))));
    bufp->chgQData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
    bufp->chgCData(oldp+13,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                              ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                       ? 3U : ((2U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0xfU
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffU
                                                    : 0U))))),8);
    bufp->chgBit(oldp+14,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                           & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->chgCData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->chgCData(oldp+16,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->chgQData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->chgQData(oldp+19,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
}

void Vysyx_22041412_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
}
