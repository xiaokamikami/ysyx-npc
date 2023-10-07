// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22041412_top__Syms.h"
#include "Vysyx_22041412_top___024root.h"

extern "C" void set_csr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 6> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {5, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_csr_ptr(&a__Vopenarray);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__ico(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22041412_top___024root___eval_triggers__ico(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_22041412_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__act(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22041412_top___024root___eval_triggers__act(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_clk 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_22041412_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_22041412_top___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void Vysyx_22041412_top___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void Vysyx_22041412_top___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void Vysyx_22041412_top___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);

void Vysyx_22041412_top___024root___eval_nba(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vysyx_22041412_top___024root____Vthread__nba__3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__8(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__13(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__18(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__12(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__20(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__19(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__29(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__59(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__60(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__66(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__63(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__72(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__74(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__78(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__81(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__82(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__0\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(2);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_3.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_6.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(14);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(20);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(19);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_32.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(32);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_31.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__59(vlSelf);
        vlSelf->__Vm_traceActivity[0x32U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(42);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__60(vlSelf);
        vlSelf->__Vm_traceActivity[0x33U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_47.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_48.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(49);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__66(vlSelf);
        vlSelf->__Vm_traceActivity[0x39U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_46.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(46);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__63(vlSelf);
        vlSelf->__Vm_traceActivity[0x36U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_51.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_44.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(44);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__72(vlSelf);
        vlSelf->__Vm_traceActivity[0x3eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_51.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_56.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(56);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__74(vlSelf);
        vlSelf->__Vm_traceActivity[0x40U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_50.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_52.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_53.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(55);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__78(vlSelf);
        vlSelf->__Vm_traceActivity[0x44U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(54);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__81(vlSelf);
        vlSelf->__Vm_traceActivity[0x47U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_61.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_59.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(59);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__82(vlSelf);
        vlSelf->__Vm_traceActivity[0x48U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__1(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__9(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__10(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__11(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__3(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__46(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__51(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__54(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__48(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__57(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__64(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__61(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__62(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__73(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__76(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__80(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__1\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_3.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_1.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(16);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(17);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(18);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__46(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(37);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__51(vlSelf);
        vlSelf->__Vm_traceActivity[0x2aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_41.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(41);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__54(vlSelf);
        vlSelf->__Vm_traceActivity[0x2dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(30);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__48(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(33);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__57(vlSelf);
        vlSelf->__Vm_traceActivity[0x30U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_47.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(47);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__64(vlSelf);
        vlSelf->__Vm_traceActivity[0x37U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_44.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_43.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(43);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__61(vlSelf);
        vlSelf->__Vm_traceActivity[0x34U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_56.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(45);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__62(vlSelf);
        vlSelf->__Vm_traceActivity[0x35U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_56.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_51.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(51);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__73(vlSelf);
        vlSelf->__Vm_traceActivity[0x3fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_52.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(52);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__76(vlSelf);
        vlSelf->__Vm_traceActivity[0x42U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_58.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(58);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__80(vlSelf);
        vlSelf->__Vm_traceActivity[0x46U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_61.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__4(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__6(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__16(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__15(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__21(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__22(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__23(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__24(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__25(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__27(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__28(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__30(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__32(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__33(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__34(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__35(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__36(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__37(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__38(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__40(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__41(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_comb__TOP__0(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__42(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_comb__TOP__1(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__43(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_comb__TOP__2(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__44(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_comb__TOP__3(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__45(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_comb__TOP__4(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__50(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__52(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__49(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__67(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__69(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__2\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(23);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(22);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_1.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(1);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__21(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__22(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__25(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__27(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__30(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__33(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__35(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__40(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_22041412_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_22041412_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__43(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_22041412_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__44(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_22041412_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__45(vlSelf);
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_22041412_top___024root___nba_comb__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__50(vlSelf);
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__52(vlSelf);
        vlSelf->__Vm_traceActivity[0x2bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(34);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__49(vlSelf);
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__67(vlSelf);
        vlSelf->__Vm_traceActivity[0x3aU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__69(vlSelf);
        vlSelf->__Vm_traceActivity[0x3bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_61.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__2(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__5(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__14(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__17(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__7(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__47(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__55(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__53(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__56(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__58(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__65(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__70(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__71(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__77(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__75(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__79(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__83(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__84(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__3\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_6.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(21);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_24.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_5.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(15);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__47(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_39.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_41.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__55(vlSelf);
        vlSelf->__Vm_traceActivity[0x2eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(40);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__53(vlSelf);
        vlSelf->__Vm_traceActivity[0x2cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_29.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(29);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__56(vlSelf);
        vlSelf->__Vm_traceActivity[0x2fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__58(vlSelf);
        vlSelf->__Vm_traceActivity[0x31U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_46.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_48.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(48);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__65(vlSelf);
        vlSelf->__Vm_traceActivity[0x38U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_44.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__70(vlSelf);
        vlSelf->__Vm_traceActivity[0x3cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_51.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_56.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(28);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__71(vlSelf);
        vlSelf->__Vm_traceActivity[0x3dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_53.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(53);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__77(vlSelf);
        vlSelf->__Vm_traceActivity[0x43U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_50.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(50);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__75(vlSelf);
        vlSelf->__Vm_traceActivity[0x41U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_57.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(57);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__79(vlSelf);
        vlSelf->__Vm_traceActivity[0x45U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_59.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_61.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(61);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__83(vlSelf);
        vlSelf->__Vm_traceActivity[0x49U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_60.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(60);
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__84(vlSelf);
        vlSelf->__Vm_traceActivity[0x4aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
