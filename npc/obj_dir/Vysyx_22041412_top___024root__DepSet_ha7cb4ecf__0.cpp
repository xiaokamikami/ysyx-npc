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

extern "C" void mem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    mem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void mem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_write_TOP\n"); );
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
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
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
void Vysyx_22041412_top___024root____Vthread__nba__4(void* voidSelf, bool even_cycle);
void Vysyx_22041412_top___024root____Vthread__nba__5(void* voidSelf, bool even_cycle);

void Vysyx_22041412_top___024root___eval_nba(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_nba\n"); );
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(3)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__3, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(4)->addTask(&Vysyx_22041412_top___024root____Vthread__nba__4, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vysyx_22041412_top___024root____Vthread__nba__5(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__16(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__45(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__33(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__63(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__71(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__78(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__94(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__96(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__101(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__92(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__122(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__162(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__120(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__163(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__111(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__160(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__0\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(18);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__16(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(47);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__45(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_35.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(35);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__33(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(65);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__63(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_74.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_70.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_75.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(75);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__71(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_81.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_82.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_83.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(83);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__78(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_86.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_85.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_106.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_111.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_112.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_113.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_110.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_114.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_115.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_116.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_100.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_104.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_105.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_107.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_109.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(101);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__94(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(103);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__96(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(108);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__101(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(99);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__92(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(129);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__122(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_150.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(150);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__162(vlSelf);
        vlSelf->__Vm_traceActivity[0x29U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_127.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(127);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__120(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_137.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(157);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__163(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_118.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(118);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__111(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_147.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(147);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__160(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__17(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__46(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__6(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__8(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__1(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__5(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__44(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__57(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__38(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__42(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__76(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__69(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__102(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__72(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__140(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__121(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__148(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__133(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__151(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__152(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__144(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__114(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__1\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(19);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__17(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(48);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__46(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_72.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_75.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(46);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__44(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_61.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_82.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_83.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(59);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__57(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_136.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_40.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(40);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_44.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(44);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_81.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(81);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__76(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_136.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_80.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_73.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(73);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__69(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_109.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(109);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__102(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_76.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(76);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__72(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_152.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(152);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__140(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_159.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_128.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(128);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__121(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_161.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(161);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__148(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_164.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(141);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__133(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_164.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_165.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(165);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__151(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_166.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(166);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__152(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_156.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(156);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__144(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_121.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(121);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__114(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__14(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__32(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__58(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__23(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__27(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__36(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__40(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__70(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__155(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__157(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__68(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__93(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__103(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__139(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__105(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__104(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__154(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__138(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__132(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__143(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__110(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__129(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__2\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(16);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__14(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(34);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__32(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_60.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(60);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__58(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(25);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__23(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_39.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(29);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__27(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_44.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(38);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__36(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_42.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(42);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__40(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_74.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(74);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__70(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_136.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_80.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(80);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__155(vlSelf);
        vlSelf->__Vm_traceActivity[0x27U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_85.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_162.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_144.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(98);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__157(vlSelf);
        vlSelf->__Vm_traceActivity[0x28U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_72.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(72);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__68(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_118.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_120.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_122.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_100.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(100);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__93(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_160.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_110.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(110);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__103(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_118.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_120.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_122.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_128.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_131.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_151.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(151);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__139(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_158.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_112.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(112);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__105(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_139.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_144.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_111.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(111);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__104(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_144.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_70.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(70);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__154(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_149.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(149);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__138(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_166.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_140.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(140);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__132(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_156.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_155.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(155);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__143(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_117.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(117);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__110(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_137.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(137);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__129(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__15(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__47(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__7(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__9(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__4(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__25(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__29(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__39(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__43(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__64(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__125(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__137(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__141(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__147(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__3\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(17);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__15(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(49);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__47(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_73.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(9);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(6);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_75.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_83.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(27);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__25(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(31);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__29(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(41);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__39(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(45);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__43(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_66.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(66);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__64(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_132.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(132);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__125(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_146.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(146);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__137(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_151.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_152.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_154.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_153.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(153);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__141(vlSelf);
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_160.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(160);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__147(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__13(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__31(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__11(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__3(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__24(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__28(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__37(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__41(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__59(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__109(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__100(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__98(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__108(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__128(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__136(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__99(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__107(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__106(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__142(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__145(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__159(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__124(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__146(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__80(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__150(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__156(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__115(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__4(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__4\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(15);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(33);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__31(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(13);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(5);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_75.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(26);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__24(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_40.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(30);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__28(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_44.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_39.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(39);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_43.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(43);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__41(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_61.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(61);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__59(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_160.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_116.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(116);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__109(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_140.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_143.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_107.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(107);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__100(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_105.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(105);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__98(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_115.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(115);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__108(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_140.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_136.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(136);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__128(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_138.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_139.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_142.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_146.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(145);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__136(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_151.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_106.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(106);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__99(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_117.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_118.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_120.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_121.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_127.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_128.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_114.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(114);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__107(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_113.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(113);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__106(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_152.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_154.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(154);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__142(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_155.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_156.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_161.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_158.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(158);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__145(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_162.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_144.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(144);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__159(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_147.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_150.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_131.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(131);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__124(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_163.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_165.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_159.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(159);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__146(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_163.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_86.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(86);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__80(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_155.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_164.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(164);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__150(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_85.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(85);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__156(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_122.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(122);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__115(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void Vysyx_22041412_top___024root___nba_sequent__TOP__12(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__30(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__10(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__2(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__22(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__26(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__34(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__62(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__77(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__95(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__35(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__67(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__97(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__135(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__153(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__131(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__134(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__164(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__149(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__130(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___nba_sequent__TOP__113(Vysyx_22041412_top___024root* vlSelf);

void Vysyx_22041412_top___024root____Vthread__nba__5(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root____Vthread__nba__5\n"); );
    // Body
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(14);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__12(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(32);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__30(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_65.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_75.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(24);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__22(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(28);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__26(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(36);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_118.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_122.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_127.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_136.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_144.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_64.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(64);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__62(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_66.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_72.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_73.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_147.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_150.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_82.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(82);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__77(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_136.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_144.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(102);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__95(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(37);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_72.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_73.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_86.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_106.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_110.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_71.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(71);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__67(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_76.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_70.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_104.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(104);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__97(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_129.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_132.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_143.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(143);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__135(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_153.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(69);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__153(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_139.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(139);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__131(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_142.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(142);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__134(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_149.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_162.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(162);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__164(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_163.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(163);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__149(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_138.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(138);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__130(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_120.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(120);
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__113(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
