// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22041412_top___024root.h"

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_static(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_initial__TOP(Vysyx_22041412_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_initial(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22041412_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 6> &a);
void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_initial__TOP(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1U] = 0x11U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2U] = 0x13U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3U] = 0x12U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4U] = 0xfU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5U] = 0x10U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6U] = 0xeU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7U] = 0xcU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8U] = 0xdU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9U] = 0xbU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xaU] = 7U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xbU] = 8U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xcU] = 0xaU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xdU] = 9U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xeU] = 3U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xfU] = 1U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0x10U] = 2U;
    vlSelf->io_master_awprot = 0U;
    vlSelf->io_master_awid = 0U;
    vlSelf->io_master_awuser = 0U;
    vlSelf->io_master_awlen = 0U;
    vlSelf->io_master_awsize = 0U;
    vlSelf->io_master_awburst = 1U;
    vlSelf->io_master_awlock = 0U;
    vlSelf->io_master_awcache = 0xfU;
    vlSelf->io_master_awqos = 0U;
    vlSelf->io_master_awregion = 0U;
    vlSelf->io_master_wuser = 0U;
    vlSelf->io_master_arprot = 0U;
    vlSelf->io_master_arid = 0U;
    vlSelf->io_master_aruser = 0U;
    vlSelf->io_master_arsize = 6U;
    vlSelf->io_master_arburst = 1U;
    vlSelf->io_master_arlock = 0U;
    vlSelf->io_master_arcache = 2U;
    vlSelf->io_master_arqos = 0U;
    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg);
    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_final(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_triggers__stl(Vysyx_22041412_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__stl(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_stl(Vysyx_22041412_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_settle(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_22041412_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22041412_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_22041412_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__stl(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_22041412_top___024root___stl_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0;
    ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0;
    ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0;
    ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0;
    ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc38963__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc38963__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc7d914__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc7d914__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff7dee19__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff7dee19__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff78b972__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff78b972__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff541e44__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff541e44__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff506f93__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff506f93__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4df842__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4df842__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4b44e9__0;
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4b44e9__0 = 0;
    IData/*31:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0;
    ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0 = 0;
    // Body
    vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
    vlSelf->pip_dnpc = vlSelf->ysyx_22041412_top__DOT__wb_dnpc;
    vlSelf->pip_mem_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    vlSelf->Ebreak = (0x100073U == vlSelf->ysyx_22041412_top__DOT__id_imm);
    if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))) {
        vlSelf->io_master_awaddr = vlSelf->ysyx_22041412_top__DOT__mem_rw_addr;
        vlSelf->io_master_wdata = vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data;
        vlSelf->io_master_wstrb = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                    ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 3U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0xfU
                                              : ((3U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xffU
                                                  : 0U))));
        vlSelf->ysyx_22041412_top__DOT__w_valid = vlSelf->ysyx_22041412_top__DOT__mem_rw_valid;
    } else {
        vlSelf->io_master_awaddr = 0U;
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->io_master_wstrb = 0U;
        vlSelf->ysyx_22041412_top__DOT__w_valid = 0U;
    }
    if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
        vlSelf->ysyx_22041412_top__DOT__icache_ar_ready 
            = vlSelf->ysyx_22041412_top__DOT__r_ready;
        vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
            = vlSelf->ysyx_22041412_top__DOT__axi_r_data;
    } else {
        vlSelf->ysyx_22041412_top__DOT__icache_ar_ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__icache_ar_data = 0ULL;
    }
    if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
        vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data 
            = vlSelf->ysyx_22041412_top__DOT__axi_r_data;
        vlSelf->io_master_araddr = vlSelf->ysyx_22041412_top__DOT__mem_rw_addr;
        vlSelf->io_master_arlen = (0xffU & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len));
        vlSelf->ysyx_22041412_top__DOT__mem_rw_ready 
            = (1U & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready));
        vlSelf->ysyx_22041412_top__DOT__r_valid = (1U 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    } else {
        vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data = 0ULL;
        if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
            vlSelf->io_master_araddr = vlSelf->ysyx_22041412_top__DOT__icache_ar_addr;
            vlSelf->io_master_arlen = (0xffU & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_len));
            vlSelf->ysyx_22041412_top__DOT__r_valid 
                = (1U & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
        } else {
            vlSelf->io_master_araddr = 0U;
            vlSelf->io_master_arlen = (0xffU & 0U);
            vlSelf->ysyx_22041412_top__DOT__r_valid 
                = (1U & 0U);
        }
        vlSelf->ysyx_22041412_top__DOT__mem_rw_ready 
            = (1U & ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))
                      ? (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)
                      : 0U));
    }
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
        = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
            ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
           [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
            : 0ULL);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 1U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 1U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 2U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 2U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 3U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 3U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 4U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 4U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 5U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 5U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 6U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 6U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                     >> 7U))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                                 >> 7U))));
    vlSelf->ysyx_22041412_top__DOT__if_ar_data = ((0U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                                   ? 
                                                  vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U]
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                                    ? 
                                                   vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U]
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                                     ? 
                                                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U]
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                                      ? 
                                                     vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U]
                                                      : 0U))));
    vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type = 
        ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
          ? 1U : ((0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 1U : (((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((5U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                             >> 0xcU))) 
                               | ((6U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                >> 0xcU))) 
                                  | (7U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                  >> 0xcU))))))
                            ? 2U : 0U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc38963__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc7d914__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 1U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff7dee19__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 2U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff78b972__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 3U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff541e44__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 4U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff506f93__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 5U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4df842__0 
        = (1U & ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                    >> 6U)));
    ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4b44e9__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
              >> 7U));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0 
        = ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
           & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o)) 
              & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))));
    vlSelf->ysyx_22041412_top__DOT__icache_last_i = 
        ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    vlSelf->ysyx_22041412_top__DOT__alu_ready_o = (1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                                      | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))));
    ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en)) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o) 
                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][2U] = 4U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][0U] 
        = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][1U] 
        = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                  (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][2U] = 0xcU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   >> (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                    >> (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][2U] = 0xdU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   << (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                    << (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][2U] = 0xbU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   ^ vlSelf->ysyx_22041412_top__DOT__ex_v2));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                    ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][2U] = 7U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   & vlSelf->ysyx_22041412_top__DOT__ex_v2));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                    & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][2U] = 0xaU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   + vlSelf->ysyx_22041412_top__DOT__ex_v2));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                    + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][2U] = 2U;
    ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 - vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_22041412_top__DOT__ex_v2;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7U] 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                         (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 >> 
           (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 << 
           (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 ^ vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 | vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xcU] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 & vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xeU] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 - vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0x10U] 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 + vlSelf->ysyx_22041412_top__DOT__ex_v2);
    ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0 
        = ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
            ? 0xbU : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                       ? 5U : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                ? 5U : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                         ? 7U : ((5U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                                                   ? 0xcU
                                                   : 0xdU)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                   ? 8U
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                    ? 0xaU
                                                    : 0U)))))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 | vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type 
        = ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | ((3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
              | ((0x13U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                 | ((0x1bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                    | (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))))));
    vlSelf->__VdfgTmp_h6cccb7a3__0 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->__VdfgTmp_h6cd8c4c6__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      >> (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->__VdfgTmp_h6cd3955d__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      << (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar 
        = ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
           | ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
              | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                 | ((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                    & ((0U == (vlSelf->ysyx_22041412_top__DOT__if_ar_data 
                               >> 0x14U)) | (0x302U 
                                             == (vlSelf->ysyx_22041412_top__DOT__if_ar_data 
                                                 >> 0x14U)))))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc38963__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc38963__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc7d914__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hfcc7d914__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff7dee19__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff7dee19__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff78b972__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff78b972__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff541e44__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff541e44__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff506f93__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff506f93__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4df842__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4df842__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN 
        = (1U & (~ ((~ (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 0xaU)) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4b44e9__0))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN 
        = (1U & (~ ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xaU) & (IData)(ysyx_22041412_top__DOT__Icache_L1__DOT____VdfgTmp_hff4b44e9__0))));
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 
        ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type)
          ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 0U : 1U));
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state 
            = ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                    ? 0U : ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                             ? 0U : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_last_i)
                                      ? 0U : 4U))) : 
               ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                 ? ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                     ? 0U : ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                              ? 0U : 4U)) : ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                              ? (((
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit)) 
                                                   & (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
                                                      == 
                                                      (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                       >> 0xbU))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last) 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                         >> 4U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                   ? 2U
                                                   : 0U))
                                              : ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                  ? 1U
                                                  : 0U))));
        if ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
            if (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)))) {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 2U;
            } else if (vlSelf->ysyx_22041412_top__DOT__icache_ar_valid) {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 4U;
            } else {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
            if (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o))) {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
            } else if (vlSelf->ysyx_22041412_top__DOT__r_valid) {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
                    = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch;
            } else {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
            }
        } else {
            vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
        }
    }
    vlSelf->ysyx_22041412_top__DOT__ex_ready_o = ((IData)(vlSelf->ysyx_22041412_top__DOT__alu_ready_o) 
                                                  & (IData)(ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0 
        = ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
           & (IData)(ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0));
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = (1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                      | (IData)(ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][2U] = 3U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode 
        = (0x1fU & ((0x33U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                     ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                         ? ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                             ? 3U : 2U) : ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0)
                     : ((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                         ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                             ? ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                                 ? 3U : 2U) : ((1U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                ? 0xeU
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                                                     ? 0xfU
                                                     : 0x10U)
                                                    : 0U)))
                         : ((0x13U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                             ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                 ? 2U : ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0)
                             : ((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                 ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                     ? 2U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                              ? 0x13U
                                              : ((5U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                                                   ? 0x11U
                                                   : 0x12U)
                                                  : 0U)))
                                 : ((0x17U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                     ? 2U : ((0x37U 
                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                              ? 4U : 
                                             (((3U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                               | ((0x23U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                  | ((0x6fU 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))))
                                               ? 2U
                                               : 0U))))))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][0U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                   + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][1U] 
        = (IData)(((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                    + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][2U] = 1U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
           + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][2U] = 8U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][0U] 
        = (IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][1U] 
        = (IData)(((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][2U] = 9U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xdU] 
        = (~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][0U] 
        = vlSelf->__VdfgTmp_h6cccb7a3__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][2U] = 0xfU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                  >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                    : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                   >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                     : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][2U] = 0x11U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][0U] 
        = vlSelf->__VdfgTmp_h6cd8c4c6__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][2U] = 0x10U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][0U] 
        = (IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                  >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                    : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][1U] 
        = (IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                   >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                     : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][2U] = 0x12U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
        = ((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                          >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
            : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][0U] 
        = vlSelf->__VdfgTmp_h6cd3955d__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][2U] = 0xeU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][0U] 
        = (IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                  >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                    : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][1U] 
        = (IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                   >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                     : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][2U] = 0x13U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
        = ((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                          >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
            : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
        = ((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                          >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
            : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)));
    if (vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type) {
        vlSelf->ysyx_22041412_top__DOT__id_imm_data 
            = (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x14U))));
        vlSelf->ysyx_22041412_top__DOT__id_Rb = 0U;
    } else if (vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type) {
        vlSelf->ysyx_22041412_top__DOT__id_imm_data 
            = (((QData)((IData)((- (IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        vlSelf->ysyx_22041412_top__DOT__id_Rb = 0U;
    } else {
        vlSelf->ysyx_22041412_top__DOT__id_imm_data 
            = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                ? (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                        >> 0x1fU)))) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                          >> 0x14U)))))))
                : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                    ? (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   ((0x800U 
                                                     & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                             >> 7U)))))))
                    : ((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                        ? (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       ((0xfe0U 
                                                         & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                              >> 7U))))))
                        : 0ULL)));
        vlSelf->ysyx_22041412_top__DOT__id_Rb = (0x1fU 
                                                 & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 0x14U));
    }
    vlSelf->ysyx_22041412_top__DOT__id_Ra = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                 >> 0xfU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                               == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
           == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
                                  == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode) 
              == vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22041412_top__DOT__csr = ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                            ? (0xfffU 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_data))
                                            : 0U);
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
           == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw));
    vlSelf->ysyx_22041412_top__DOT__id_rsB = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb))
                                               ? 0ULL
                                               : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                              [vlSelf->ysyx_22041412_top__DOT__id_Rb]);
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0 
        = (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
            == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)) 
           & ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)) 
              & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
           == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw));
    ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu 
        = ((5U == (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode))
            ? ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                ? (VL_GTS_IQQ(64, 0ULL, vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0)
                    ? 1ULL : 0ULL) : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                       ? ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                           < vlSelf->ysyx_22041412_top__DOT__ex_v2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL)) : (
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                    ? 
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                     & (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                        == vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                     ? 1ULL
                                                     : 
                                                    (((1U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                      & (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                         != vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                      ? 1ULL
                                                      : 
                                                     (((4U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                       & VL_LTS_IQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                       ? 1ULL
                                                       : 
                                                      (((5U 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                        & VL_GTES_IQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                        ? 1ULL
                                                        : 
                                                       (((6U 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                         & (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                            < vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                         ? 1ULL
                                                         : 
                                                        (((7U 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                          & (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                             >= vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                          ? 1ULL
                                                          : 0ULL))))))
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                     ? 
                                                    (0xfffffffffffffffeULL 
                                                     & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result)
                                                     : 
                                                    (((0x1bU 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                      & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))
                                                      ? 
                                                     (((((0x12U 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode)) 
                                                         | (0x11U 
                                                            == (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode))) 
                                                        | (0x13U 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode))) 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                  >> 5U)))
                                                       ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result
                                                       : 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result))))
                                                      : 
                                                     (((0x3bU 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                       & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result)))
                                                       : 
                                                      ((((0x3bU 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data)))
                                                        : 
                                                       ((((0x3bU 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                          & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o))
                                                         ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data
                                                         : 
                                                        ((0x73U 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                          ? 0ULL
                                                          : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result))))))));
    vlSelf->ysyx_22041412_top__DOT__id_csr_id = ((0U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                  ? 1U
                                                  : 
                                                 ((0x302U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                   ? 0U
                                                   : 
                                                  ((0x300U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                    ? 2U
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                     ? 3U
                                                     : 
                                                    ((0x341U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                      ? 4U
                                                      : 
                                                     ((0x342U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__csr))
                                                       ? 5U
                                                       : 0U))))));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0 
        = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
           & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
              & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0) 
                 & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)))));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0 
        = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
           & ((IData)(ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0) 
              & ((IData)(ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0) 
                 & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)))));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0 
        = (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
            != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
           & ((IData)(ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0) 
              & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                  == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                 & ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)) 
                    & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en)))));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0 
        = ((IData)(ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0) 
           & (IData)(ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0) 
           & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)));
    vlSelf->ysyx_22041412_top__DOT__id_vaild_o = ((~ 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0) 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0))) 
                                                    | ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0) 
                                                       & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0)))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__alu_ready_o) 
                                                     & ((IData)(ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0) 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_valid_o))));
}

VL_ATTR_COLD void Vysyx_22041412_top___024root___eval_stl(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_22041412_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__ico(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__act(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__nba(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_22041412_top___024root___ctor_var_reset(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->pip_pc = 0;
    vlSelf->pip_dnpc = 0;
    vlSelf->pip_mem_pc = 0;
    vlSelf->Ebreak = 0;
    vlSelf->io_master_awready = 0;
    vlSelf->io_master_awvalid = 0;
    vlSelf->io_master_awaddr = 0;
    vlSelf->io_master_awprot = 0;
    vlSelf->io_master_awid = 0;
    vlSelf->io_master_awuser = 0;
    vlSelf->io_master_awlen = 0;
    vlSelf->io_master_awsize = 0;
    vlSelf->io_master_awburst = 0;
    vlSelf->io_master_awlock = 0;
    vlSelf->io_master_awcache = 0;
    vlSelf->io_master_awqos = 0;
    vlSelf->io_master_awregion = 0;
    vlSelf->io_master_wready = 0;
    vlSelf->io_master_wvalid = 0;
    vlSelf->io_master_wdata = 0;
    vlSelf->io_master_wstrb = 0;
    vlSelf->io_master_wlast = 0;
    vlSelf->io_master_wuser = 0;
    vlSelf->io_master_bready = 0;
    vlSelf->io_master_bvalid = 0;
    vlSelf->io_master_bresp = 0;
    vlSelf->io_master_bid = 0;
    vlSelf->io_master_buser = 0;
    vlSelf->io_master_arready = 0;
    vlSelf->io_master_arvalid = 0;
    vlSelf->io_master_araddr = 0;
    vlSelf->io_master_arprot = 0;
    vlSelf->io_master_arid = 0;
    vlSelf->io_master_aruser = 0;
    vlSelf->io_master_arlen = 0;
    vlSelf->io_master_arsize = 0;
    vlSelf->io_master_arburst = 0;
    vlSelf->io_master_arlock = 0;
    vlSelf->io_master_arcache = 0;
    vlSelf->io_master_arqos = 0;
    vlSelf->io_master_arregion = 0;
    vlSelf->io_master_rready = 0;
    vlSelf->io_master_rvalid = 0;
    vlSelf->io_master_rresp = 0;
    vlSelf->io_master_rdata = 0;
    vlSelf->io_master_rlast = 0;
    vlSelf->io_master_rid = 0;
    vlSelf->io_master_ruser = 0;
    vlSelf->io_slave_awready = 0;
    vlSelf->io_slave_awvalid = 0;
    vlSelf->io_slave_awaddr = 0;
    vlSelf->io_slave_awid = 0;
    vlSelf->io_slave_awlen = 0;
    vlSelf->io_slave_awsize = 0;
    vlSelf->io_slave_awburst = 0;
    vlSelf->io_slave_wready = 0;
    vlSelf->io_slave_wvalid = 0;
    vlSelf->io_slave_wdata = 0;
    vlSelf->io_slave_wstrb = 0;
    vlSelf->io_slave_wlast = 0;
    vlSelf->io_slave_bready = 0;
    vlSelf->io_slave_bvalid = 0;
    vlSelf->io_slave_bresp = 0;
    vlSelf->io_slave_bid = 0;
    vlSelf->io_slave_arready = 0;
    vlSelf->io_slave_arvalid = 0;
    vlSelf->io_slave_araddr = 0;
    vlSelf->io_slave_arid = 0;
    vlSelf->io_slave_arlen = 0;
    vlSelf->io_slave_arsize = 0;
    vlSelf->io_slave_arburst = 0;
    vlSelf->io_slave_rready = 0;
    vlSelf->io_slave_rvalid = 0;
    vlSelf->io_slave_rresp = 0;
    vlSelf->io_slave_rdata = 0;
    vlSelf->io_slave_rlast = 0;
    vlSelf->io_slave_rid = 0;
    vlSelf->ysyx_22041412_top__DOT__r_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__r_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__w_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__w_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_r_data = 0;
    vlSelf->ysyx_22041412_top__DOT__r_last_o = 0;
    vlSelf->ysyx_22041412_top__DOT__w_last_o = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_data = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_len = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_data = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_len = 0;
    vlSelf->ysyx_22041412_top__DOT__icache_last_i = 0;
    vlSelf->ysyx_22041412_top__DOT__if_imm = 0;
    vlSelf->ysyx_22041412_top__DOT__if_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__if_jr_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm = 0;
    vlSelf->ysyx_22041412_top__DOT__id_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__id_Ra = 0;
    vlSelf->ysyx_22041412_top__DOT__id_Rb = 0;
    vlSelf->ysyx_22041412_top__DOT__id_rsB = 0;
    vlSelf->ysyx_22041412_top__DOT__id_vaild_o = 0;
    vlSelf->ysyx_22041412_top__DOT__id_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__csr = 0;
    vlSelf->ysyx_22041412_top__DOT__id_csr_id = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_mul_en = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_v1 = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_v2 = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_rs2 = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_rw = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_Ra = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_Rb = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_func3 = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_func7 = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_opcode = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_csr_en = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_csr_id = 0;
    vlSelf->ysyx_22041412_top__DOT__alu_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_opcode = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_func3 = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_type = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_ram_en = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_reg_en = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_wdata = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_dnpc = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_temp = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_res = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rdata = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = 0;
    vlSelf->ysyx_22041412_top__DOT__sram_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_reg_en = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_data = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_dnpc = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_opcode = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0 = 0;
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0 = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram[__Vi0][__Vi1] = 0;
        }
    }
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit_p1 = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q);
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN = 0;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[__Vi0]);
    }
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state = 0;
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0 = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data = 0;
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        VL_ZERO_RESET_W(69, vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 17; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__end_flag = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[__Vi0] = 0;
    }
    vlSelf->__VdfgTmp_h6cd3955d__0 = 0;
    vlSelf->__VdfgTmp_h6cd8c4c6__0 = 0;
    vlSelf->__VdfgTmp_h6cccb7a3__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
