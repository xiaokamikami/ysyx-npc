// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22041412_top___024root.h"

VL_INLINE_OPT void Vysyx_22041412_top___024root___ico_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state = 0U;
    } else {
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
    }
}

void Vysyx_22041412_top___024root___eval_ico(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_22041412_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_22041412_top___024root___eval_act(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_22041412_top__ConstPool__TABLE_haf824267_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22041412_top__ConstPool__TABLE_h817ade7f_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_22041412_top__ConstPool__TABLE_h6b41740c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vysyx_22041412_top__ConstPool__TABLE_hcf1ced63_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vysyx_22041412_top__ConstPool__TABLE_hf6d28f2a_0;

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0;
    ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0;
    ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0;
    ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0 = 0;
    CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0;
    ysyx_22041412_top__DOT____VdfgTmp_hd08a343c__0 = 0;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 8>, 128> ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram[__Vi0][__Vi1] = 0;
        }
    }
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
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__ysyx_22041412_top__DOT__id_imm;
    __Vdly__ysyx_22041412_top__DOT__id_imm = 0;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__id_pc;
    __Vdly__ysyx_22041412_top__DOT__id_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__id_ready_o;
    __Vdly__ysyx_22041412_top__DOT__id_ready_o = 0;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__ex_v1;
    __Vdly__ysyx_22041412_top__DOT__ex_v1 = 0;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__ex_rs2;
    __Vdly__ysyx_22041412_top__DOT__ex_rs2 = 0;
    CData/*0:0*/ __Vdly__io_master_awvalid;
    __Vdly__io_master_awvalid = 0;
    CData/*0:0*/ __Vdly__io_master_arvalid;
    __Vdly__io_master_arvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__icache_ar_valid;
    __Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0;
    IData/*20:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last = 0;
    CData/*6:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data;
    VL_ZERO_W(128, __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data);
    CData/*6:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 0;
    IData/*20:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 = 0;
    CData/*2:0*/ __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0;
    __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 0;
    CData/*2:0*/ __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__state;
    __Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__state = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__if_ar_valid;
    __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__if_ready_o;
    __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0;
    IData/*31:0*/ __Vdly__ysyx_22041412_top__DOT__if_ar_addr;
    __Vdly__ysyx_22041412_top__DOT__if_ar_addr = 0;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__csr_ready_o;
    __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
    __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    __Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o;
    __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o = 0;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__sram_ready_o;
    __Vdly__ysyx_22041412_top__DOT__sram_ready_o = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    __Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h54ba22cc__0;
    VlWide<4>/*127:0*/ __Vtemp_hccf43ae6__0;
    // Body
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
    __Vdly__io_master_awvalid = vlSelf->io_master_awvalid;
    __Vdly__io_master_arvalid = vlSelf->io_master_arvalid;
    __Vdly__ysyx_22041412_top__DOT__id_ready_o = vlSelf->ysyx_22041412_top__DOT__id_ready_o;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U];
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U];
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U];
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U];
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 0U;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last;
    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last;
    __Vdly__ysyx_22041412_top__DOT__icache_ar_valid 
        = vlSelf->ysyx_22041412_top__DOT__icache_ar_valid;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0U;
    __Vdly__ysyx_22041412_top__DOT__csr_ready_o = vlSelf->ysyx_22041412_top__DOT__csr_ready_o;
    __Vdly__ysyx_22041412_top__DOT__id_imm = vlSelf->ysyx_22041412_top__DOT__id_imm;
    __Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__state 
        = vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state;
    __Vdly__ysyx_22041412_top__DOT__if_ready_o = vlSelf->ysyx_22041412_top__DOT__if_ready_o;
    __Vdly__ysyx_22041412_top__DOT__if_ar_valid = vlSelf->ysyx_22041412_top__DOT__if_ar_valid;
    __Vdly__ysyx_22041412_top__DOT__sram_ready_o = vlSelf->ysyx_22041412_top__DOT__sram_ready_o;
    __Vdly__ysyx_22041412_top__DOT__id_pc = vlSelf->ysyx_22041412_top__DOT__id_pc;
    __Vdly__ysyx_22041412_top__DOT__if_ar_addr = vlSelf->ysyx_22041412_top__DOT__if_ar_addr;
    __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0U;
    __Vdly__ysyx_22041412_top__DOT__ex_rs2 = vlSelf->ysyx_22041412_top__DOT__ex_rs2;
    __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o;
    __Vdly__ysyx_22041412_top__DOT__ex_v1 = vlSelf->ysyx_22041412_top__DOT__ex_v1;
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o))) {
        __Vdly__ysyx_22041412_top__DOT__id_ready_o = 1U;
        __Vdly__ysyx_22041412_top__DOT__id_imm = vlSelf->ysyx_22041412_top__DOT__if_imm;
        __Vdly__ysyx_22041412_top__DOT__id_pc = vlSelf->ysyx_22041412_top__DOT__if_pc;
    } else if (vlSelf->ysyx_22041412_top__DOT__id_vaild_o) {
        if (vlSelf->ysyx_22041412_top__DOT__id_vaild_o) {
            __Vdly__ysyx_22041412_top__DOT__id_ready_o = 1U;
            __Vdly__ysyx_22041412_top__DOT__id_imm = 0U;
            __Vdly__ysyx_22041412_top__DOT__id_pc = 0ULL;
        }
    } else {
        __Vdly__ysyx_22041412_top__DOT__id_ready_o 
            = vlSelf->ysyx_22041412_top__DOT__id_ready_o;
        __Vdly__ysyx_22041412_top__DOT__id_imm = vlSelf->ysyx_22041412_top__DOT__id_imm;
        __Vdly__ysyx_22041412_top__DOT__id_pc = vlSelf->ysyx_22041412_top__DOT__id_pc;
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN))))) {
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_jr_ready) 
                     << 7U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar) 
                                << 6U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if (Vysyx_22041412_top__ConstPool__TABLE_haf824267_0
        [__Vtableidx2]) {
        __Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__state 
            = Vysyx_22041412_top__ConstPool__TABLE_h817ade7f_0
            [__Vtableidx2];
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
         & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))) {
        __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_data;
        __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_addr;
    }
    __Vtableidx1 = (((IData)(vlSelf->io_master_wready) 
                     << 3U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__w_ready) 
                                << 2U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__w_valid) 
                                           << 1U) | (IData)(vlSelf->rst))));
    if ((1U & Vysyx_22041412_top__ConstPool__TABLE_h6b41740c_0
         [__Vtableidx1])) {
        vlSelf->ysyx_22041412_top__DOT__w_ready = Vysyx_22041412_top__ConstPool__TABLE_hcf1ced63_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_22041412_top__ConstPool__TABLE_h6b41740c_0
         [__Vtableidx1])) {
        vlSelf->io_master_wvalid = Vysyx_22041412_top__ConstPool__TABLE_hf6d28f2a_0
            [__Vtableidx1];
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[3U] 
            = VL_RANDOM_I();
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN))) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram
            [(0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 4U))][3U];
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[3U] 
            = VL_RANDOM_I();
    }
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch 
        = (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
            & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))
            ? 1U : 0U);
    if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en) 
          & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o))) 
         & (0x3bU != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                ? (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   * vlSelf->ysyx_22041412_top__DOT__ex_v2)
                : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                    ? VL_DIVS_QQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2)
                    : ((5U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                        ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2)
                        : ((6U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                            ? VL_MODDIVS_QQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2)
                            : ((7U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2)
                                : 0ULL)))));
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o))) 
                & (0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                ? (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                   * vlSelf->ysyx_22041412_top__DOT__ex_v2)
                : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                    ? (QData)((IData)(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))
                    : ((5U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                        ? (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))
                        : ((6U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                            ? (QData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))
                            : ((7U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                ? (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))
                                : 0ULL)))));
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o = 1U;
    } else {
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data = 0ULL;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point = 0U;
        __Vdly__io_master_awvalid = 0U;
        vlSelf->io_master_awvalid = __Vdly__io_master_awvalid;
        __Vdly__io_master_arvalid = 0U;
        vlSelf->io_master_arvalid = __Vdly__io_master_arvalid;
        __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
    } else {
        __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point)));
        if (((IData)(vlSelf->ysyx_22041412_top__DOT__w_valid) 
             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid)))) {
            if (((IData)(vlSelf->io_master_awready) 
                 & (IData)(vlSelf->io_master_awvalid))) {
                __Vdly__io_master_awvalid = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid = 1U;
            } else {
                __Vdly__io_master_awvalid = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid = 0U;
            }
        } else {
            vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid = 0U;
        }
        vlSelf->io_master_awvalid = __Vdly__io_master_awvalid;
        if (((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid)))) {
            if (((IData)(vlSelf->io_master_arready) 
                 & (IData)(vlSelf->io_master_arvalid))) {
                __Vdly__io_master_arvalid = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid = 1U;
            } else {
                __Vdly__io_master_arvalid = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid = 0U;
            }
        } else {
            vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid = 0U;
        }
        vlSelf->io_master_arvalid = __Vdly__io_master_arvalid;
        if ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
            if (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)))) {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
            } else {
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
            }
        } else if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
            if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                  & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar)))) {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 1U;
            } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                         & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                        & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar))) {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
            } else if (vlSelf->ysyx_22041412_top__DOT__id_vaild_o) {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 1U;
            } else {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o 
                    = vlSelf->ysyx_22041412_top__DOT__if_ready_o;
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
            }
        } else if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
            if (vlSelf->ysyx_22041412_top__DOT__if_jr_ready) {
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
            } else if (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
                        & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)))) {
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
            } else {
                __Vdly__ysyx_22041412_top__DOT__if_ar_valid = 0U;
                __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
            }
        }
    }
    vlSelf->ysyx_22041412_top__DOT__if_ready_o = __Vdly__ysyx_22041412_top__DOT__if_ready_o;
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__id_ready_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o))) {
        __Vdly__ysyx_22041412_top__DOT__ex_rs2 = ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                                     ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0)
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB))));
        __Vdly__ysyx_22041412_top__DOT__ex_v1 = ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                                  ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                                   ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                    & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                                       & ((0U 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                                          & (3U 
                                                             != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))))
                                                    ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                    : 
                                                   (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0))
                                                     ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                                      ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                                      : 
                                                     (((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                       & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                          & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                                             & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                                                                & ((0U 
                                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))))))
                                                       ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))));
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[__Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0] 
            = __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o 
        = __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o;
    if ((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
               | (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))))) {
        vlSelf->ysyx_22041412_top__DOT__wb_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__mem_imm_data;
        vlSelf->ysyx_22041412_top__DOT__wb_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
        vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
        vlSelf->ysyx_22041412_top__DOT__wb_opcode = vlSelf->ysyx_22041412_top__DOT__mem_opcode;
        vlSelf->ysyx_22041412_top__DOT__wb_dnpc = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22041412_top__DOT__mem_pc);
    } else {
        vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
    }
    vlSelf->pip_dnpc = vlSelf->ysyx_22041412_top__DOT__wb_dnpc;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch 
            = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch;
        if ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
            if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
                if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                      & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar)))) {
                    vlSelf->ysyx_22041412_top__DOT__if_imm 
                        = vlSelf->ysyx_22041412_top__DOT__if_ar_data;
                } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar))) {
                    vlSelf->ysyx_22041412_top__DOT__if_imm 
                        = vlSelf->ysyx_22041412_top__DOT__if_ar_data;
                }
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state = 0U;
        vlSelf->io_master_rready = 0U;
        vlSelf->ysyx_22041412_top__DOT__r_ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_r_data = 0ULL;
        __Vdly__ysyx_22041412_top__DOT__if_ar_addr = 0x80000000U;
    } else {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state 
            = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state;
        if (((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)))) {
            if (((IData)(vlSelf->io_master_rlast) & (IData)(vlSelf->io_master_rvalid))) {
                vlSelf->io_master_rready = 0U;
                vlSelf->ysyx_22041412_top__DOT__r_ready = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_r_data 
                    = vlSelf->io_master_rdata;
                vlSelf->ysyx_22041412_top__DOT__r_last_o = 1U;
            } else if (vlSelf->io_master_rvalid) {
                vlSelf->io_master_rready = 1U;
                vlSelf->ysyx_22041412_top__DOT__r_ready = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_r_data 
                    = vlSelf->io_master_rdata;
                vlSelf->ysyx_22041412_top__DOT__r_last_o = 0U;
            } else {
                vlSelf->io_master_rready = 1U;
                vlSelf->ysyx_22041412_top__DOT__r_ready = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi_r_data = 0ULL;
            }
        } else {
            vlSelf->io_master_rready = 0U;
            vlSelf->ysyx_22041412_top__DOT__r_ready = 0U;
            vlSelf->ysyx_22041412_top__DOT__axi_r_data = 0ULL;
            vlSelf->ysyx_22041412_top__DOT__r_last_o = 0U;
        }
        if ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
            if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
                if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                      & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar)))) {
                    vlSelf->ysyx_22041412_top__DOT__if_pc 
                        = ((0xffffffff00000000ULL & vlSelf->ysyx_22041412_top__DOT__if_pc) 
                           | (IData)((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_addr)));
                    __Vdly__ysyx_22041412_top__DOT__if_ar_addr 
                        = ((IData)(4U) + vlSelf->ysyx_22041412_top__DOT__if_ar_addr);
                } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar))) {
                    vlSelf->ysyx_22041412_top__DOT__if_pc 
                        = ((0xffffffff00000000ULL & vlSelf->ysyx_22041412_top__DOT__if_pc) 
                           | (IData)((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_addr)));
                }
            } else if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state))) {
                if (vlSelf->ysyx_22041412_top__DOT__if_jr_ready) {
                    __Vdly__ysyx_22041412_top__DOT__if_ar_addr 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_dnpc);
                }
            }
        }
    }
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state 
        = __Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__state;
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_valid_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_ready_o))) {
        vlSelf->ysyx_22041412_top__DOT__mem_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__ex_imm_data;
        vlSelf->ysyx_22041412_top__DOT__if_jr_ready 
            = ((0x23U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
               & ((3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                  & (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                      & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)) 
                     | (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                         & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) 
                        | (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) 
                           | ((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                              & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en)))))));
    }
    if ((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
               | (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))))) {
        vlSelf->ysyx_22041412_top__DOT__wb_reg_en = vlSelf->ysyx_22041412_top__DOT__mem_reg_en;
        vlSelf->ysyx_22041412_top__DOT__wb_addr = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                    ? 0U
                                                    : 
                                                   (((0x6fU 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode)))
                                                     ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                      ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en)
                                                       ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)
                                                       : 0U))));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__id_ready_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type;
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type;
        vlSelf->ysyx_22041412_top__DOT__ex_Ra = vlSelf->ysyx_22041412_top__DOT__id_Ra;
        vlSelf->ysyx_22041412_top__DOT__ex_Rb = vlSelf->ysyx_22041412_top__DOT__id_Rb;
        vlSelf->ysyx_22041412_top__DOT__ex_func7 = 
            (1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0x1eU));
        vlSelf->ysyx_22041412_top__DOT__ex_mul_en = 
            ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                >> 0x19U));
        vlSelf->ysyx_22041412_top__DOT__ex_v2 = ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                                  ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0))
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                                     ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0))
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB)))));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
        __Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
        __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last = 0U;
        __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last = 0U;
    } else if ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state)))) {
                __Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 1U;
                vlSelf->ysyx_22041412_top__DOT__icache_ar_len = 0x80U;
                vlSelf->ysyx_22041412_top__DOT__icache_ar_addr 
                    = (0xfffffff0U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr);
                if ((((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid) 
                      & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready)) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num)))) {
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 1U;
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                } else if (((((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid) 
                              & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_last_i)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num))) {
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 0U;
                    __Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
                    vlSelf->ysyx_22041412_top__DOT__icache_ar_len = 0U;
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en 
                        = ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en) 
                           | (0xffU & ((IData)(1U) 
                                       << (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point))));
                    __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                           >> 0xbU);
                    __Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 = 1U;
                    __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
                    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = (0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                    >> 4U));
                    __Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
                    __Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 
                        = (0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                    >> 4U));
                    vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state)))) {
            if ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                if (VL_LIKELY(((((((((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v)) 
                                     | (2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                                    | (4U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                                   | (8U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                                  | (0x10U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                                 | (0x20U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                                | (0x40U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                               | (0x80U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))))) {
                    if ((0x10U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][1U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][1U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][1U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][1U][3U];
                        } else {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][0U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][0U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][0U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [4U][0U][3U];
                        }
                    } else if ((0x20U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][1U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][1U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][1U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][1U][3U];
                        } else {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][0U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][0U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][0U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [5U][0U][3U];
                        }
                    } else if ((0x40U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][1U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][1U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][1U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][1U][3U];
                        } else {
                            __Vtemp_h54ba22cc__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][0U][0U];
                            __Vtemp_h54ba22cc__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][0U][1U];
                            __Vtemp_h54ba22cc__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][0U][2U];
                            __Vtemp_h54ba22cc__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [6U][0U][3U];
                        }
                    } else if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                        __Vtemp_h54ba22cc__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][1U][0U];
                        __Vtemp_h54ba22cc__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][1U][1U];
                        __Vtemp_h54ba22cc__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][1U][2U];
                        __Vtemp_h54ba22cc__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][1U][3U];
                    } else {
                        __Vtemp_h54ba22cc__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][0U][0U];
                        __Vtemp_h54ba22cc__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][0U][1U];
                        __Vtemp_h54ba22cc__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][0U][2U];
                        __Vtemp_h54ba22cc__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][0U][3U];
                    }
                    if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][1U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][1U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][1U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][1U][3U];
                        } else {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][0U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][0U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][0U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [0U][0U][3U];
                        }
                    } else if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][1U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][1U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][1U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][1U][3U];
                        } else {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][0U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][0U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][0U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [1U][0U][3U];
                        }
                    } else if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][1U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][1U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][1U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][1U][3U];
                        } else {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][0U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][0U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][0U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [2U][0U][3U];
                        }
                    } else if ((8U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        if ((0x400U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)) {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][1U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][1U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][1U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][1U][3U];
                        } else {
                            __Vtemp_hccf43ae6__0[0U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][0U][0U];
                            __Vtemp_hccf43ae6__0[1U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][0U][1U];
                            __Vtemp_hccf43ae6__0[2U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][0U][2U];
                            __Vtemp_hccf43ae6__0[3U] 
                                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                                [3U][0U][3U];
                        }
                    } else {
                        __Vtemp_hccf43ae6__0[0U] = 
                            __Vtemp_h54ba22cc__0[0U];
                        __Vtemp_hccf43ae6__0[1U] = 
                            __Vtemp_h54ba22cc__0[1U];
                        __Vtemp_hccf43ae6__0[2U] = 
                            __Vtemp_h54ba22cc__0[2U];
                        __Vtemp_hccf43ae6__0[3U] = 
                            __Vtemp_h54ba22cc__0[3U];
                    }
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
                        = __Vtemp_hccf43ae6__0[0U];
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
                        = __Vtemp_hccf43ae6__0[1U];
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
                        = __Vtemp_hccf43ae6__0[2U];
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
                        = __Vtemp_hccf43ae6__0[3U];
                } else {
                    VL_WRITEF("Icache ysyx_22041412_Icachex cache tag hit error\n");
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] = 0U;
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] = 0U;
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] = 0U;
                    __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] = 0U;
                }
                __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 1U;
                vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 1U;
            } else {
                vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
                __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))) {
        if ((((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit) 
              & (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
                 == (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                     >> 0xbU))) & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last) 
                                   == (0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                >> 4U))))) {
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U];
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U];
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U];
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
                = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U];
            vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 1U;
        } else {
            vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] = 0U;
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] = 0U;
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] = 0U;
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] = 0U;
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
                = (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                   >> 0xbU);
            __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last 
                = (0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                            >> 4U));
        }
    } else {
        __Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U] = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U] = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U] = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U] = 0U;
    }
    if ((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
               | (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))))) {
        vlSelf->ysyx_22041412_top__DOT__wb_data = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                    ? 0ULL
                                                    : 
                                                   (((0x6fU 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode)))
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->ysyx_22041412_top__DOT__mem_pc)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                      ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en)
                                                       ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                       : 0ULL))));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((((IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en) 
              & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o)))) {
            if (vlSelf->ysyx_22041412_top__DOT__mem_rw_ready) {
                if (vlSelf->ysyx_22041412_top__DOT__mem_rw_ready) {
                    vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 0U;
                    __Vdly__ysyx_22041412_top__DOT__sram_ready_o = 1U;
                    vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data = 0ULL;
                    vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0U;
                }
            } else {
                vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 1U;
                vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data 
                    = vlSelf->ysyx_22041412_top__DOT__mem_wdata;
                vlSelf->ysyx_22041412_top__DOT__mem_rw_addr 
                    = vlSelf->ysyx_22041412_top__DOT__mem_addr;
            }
        } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))) 
                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o)))) {
            if (vlSelf->ysyx_22041412_top__DOT__mem_rw_ready) {
                if (vlSelf->ysyx_22041412_top__DOT__mem_rw_ready) {
                    vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 0U;
                    vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0U;
                    vlSelf->ysyx_22041412_top__DOT__mem_rdata 
                        = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data)))))
                            : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data 
                                                                   >> 0xfU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data)))))
                                : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data)))
                                    : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                        ? vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data
                                        : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data))))
                                            : ((5U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data))))
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data))
                                                    : 0ULL)))))));
                    __Vdly__ysyx_22041412_top__DOT__sram_ready_o = 1U;
                }
            } else {
                vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 1U;
                vlSelf->ysyx_22041412_top__DOT__mem_rw_addr 
                    = vlSelf->ysyx_22041412_top__DOT__mem_addr;
            }
        } else if (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_ready_o) 
                    & (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o))) {
            vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 0U;
            __Vdly__ysyx_22041412_top__DOT__sram_ready_o = 0U;
            vlSelf->ysyx_22041412_top__DOT__mem_rdata = 0ULL;
            vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0U;
            vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data = 0ULL;
            vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0U;
        }
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_valid_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_ready_o))) {
        if ((0x23U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
            if ((3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
                if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                     & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) {
                    vlSelf->ysyx_22041412_top__DOT__mem_dnpc 
                        = (vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
                           + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)))) {
                    vlSelf->ysyx_22041412_top__DOT__mem_dnpc 
                        = (4ULL + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
                    vlSelf->ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu;
                } else if (((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en))) {
                    vlSelf->ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r;
                }
            }
            vlSelf->ysyx_22041412_top__DOT__mem_rw 
                = vlSelf->ysyx_22041412_top__DOT__ex_rw;
            vlSelf->ysyx_22041412_top__DOT__mem_pc 
                = vlSelf->ysyx_22041412_top__DOT__ex_pc;
            vlSelf->ysyx_22041412_top__DOT__mem_opcode 
                = vlSelf->ysyx_22041412_top__DOT__ex_opcode;
            vlSelf->ysyx_22041412_top__DOT__mem_reg_en 
                = (1U & ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                         | ((~ ((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) 
                            & ((~ ((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                   & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)))) 
                               & (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                   | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) 
                                  | (~ ((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en))))))));
        } else {
            vlSelf->ysyx_22041412_top__DOT__mem_rw 
                = vlSelf->ysyx_22041412_top__DOT__ex_rw;
            vlSelf->ysyx_22041412_top__DOT__mem_pc 
                = vlSelf->ysyx_22041412_top__DOT__ex_pc;
            vlSelf->ysyx_22041412_top__DOT__mem_opcode 
                = vlSelf->ysyx_22041412_top__DOT__ex_opcode;
            vlSelf->ysyx_22041412_top__DOT__mem_reg_en = 0U;
        }
        vlSelf->ysyx_22041412_top__DOT__mem_res = (
                                                   (0x73U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                    ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r
                                                    : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu);
        if ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
            vlSelf->ysyx_22041412_top__DOT__mem_wdata 
                = vlSelf->ysyx_22041412_top__DOT__ex_rs2;
            vlSelf->ysyx_22041412_top__DOT__mem_addr 
                = (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu);
            vlSelf->ysyx_22041412_top__DOT__mem_rw_type = 1U;
        } else {
            vlSelf->ysyx_22041412_top__DOT__mem_wdata = 0ULL;
            vlSelf->ysyx_22041412_top__DOT__mem_addr 
                = ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                    ? (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)
                    : 0U);
            vlSelf->ysyx_22041412_top__DOT__mem_rw_type = 0U;
        }
        vlSelf->ysyx_22041412_top__DOT__mem_func3 = vlSelf->ysyx_22041412_top__DOT__ex_func3;
        vlSelf->ysyx_22041412_top__DOT__mem_ram_en 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
               | (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)));
    }
    vlSelf->ysyx_22041412_top__DOT__alu_ready_o = (1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                                      | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][2U] = 4U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_22041412_top__DOT__ex_v2;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))));
    if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
        vlSelf->ysyx_22041412_top__DOT__icache_ar_ready 
            = vlSelf->ysyx_22041412_top__DOT__r_ready;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num 
            = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
        vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
            = vlSelf->ysyx_22041412_top__DOT__axi_r_data;
    } else {
        vlSelf->ysyx_22041412_top__DOT__icache_ar_ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num 
            = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
        vlSelf->ysyx_22041412_top__DOT__icache_ar_data = 0ULL;
    }
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U];
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0) {
        ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0][__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0] = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v = 0U;
    } else {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v 
            = ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                ? (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                     [(0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                >> 4U))][7U] == (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                 >> 0xbU)) 
                    << 7U) | (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                [(0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))]
                                [6U] == (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                         >> 0xbU)) 
                               << 6U) | (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                           [(0x7fU 
                                             & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                >> 4U))]
                                           [5U] == 
                                           (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                            >> 0xbU)) 
                                          << 5U) | 
                                         (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                            [(0x7fU 
                                              & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                 >> 4U))]
                                            [4U] == 
                                            (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                             >> 0xbU)) 
                                           << 4U) | 
                                          (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                             [(0x7fU 
                                               & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                  >> 4U))]
                                             [3U] == 
                                             (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                              >> 0xbU)) 
                                            << 3U) 
                                           | (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                [(0x7fU 
                                                  & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                     >> 4U))]
                                                [2U] 
                                                == 
                                                (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                 >> 0xbU)) 
                                               << 2U) 
                                              | (((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                   [
                                                   (0x7fU 
                                                    & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                       >> 4U))]
                                                   [1U] 
                                                   == 
                                                   (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                    >> 0xbU)) 
                                                  << 1U) 
                                                 | (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                    [
                                                    (0x7fU 
                                                     & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                        >> 4U))]
                                                    [0U] 
                                                    == 
                                                    (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                     >> 0xbU)))))))))
                : 0U);
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram[__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0][__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0] 
            = __Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    }
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last;
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last;
    vlSelf->ysyx_22041412_top__DOT__icache_last_i = 
        ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit 
        = __Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__hit;
    vlSelf->ysyx_22041412_top__DOT__icache_ar_valid 
        = __Vdly__ysyx_22041412_top__DOT__icache_ar_valid;
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
    if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
        vlSelf->io_master_arlen = (0xffU & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len));
        vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data 
            = vlSelf->ysyx_22041412_top__DOT__axi_r_data;
        vlSelf->ysyx_22041412_top__DOT__mem_rw_ready 
            = (1U & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready));
        vlSelf->io_master_araddr = vlSelf->ysyx_22041412_top__DOT__mem_rw_addr;
        vlSelf->ysyx_22041412_top__DOT__r_valid = (1U 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    } else {
        if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))) {
            vlSelf->io_master_arlen = (0xffU & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_len));
            vlSelf->io_master_araddr = vlSelf->ysyx_22041412_top__DOT__icache_ar_addr;
            vlSelf->ysyx_22041412_top__DOT__r_valid 
                = (1U & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
        } else {
            vlSelf->io_master_arlen = (0xffU & 0U);
            vlSelf->io_master_araddr = 0U;
            vlSelf->ysyx_22041412_top__DOT__r_valid 
                = (1U & 0U);
        }
        vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data = 0ULL;
        vlSelf->ysyx_22041412_top__DOT__mem_rw_ready 
            = (1U & ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))
                      ? (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)
                      : 0U));
    }
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = __Vdly__ysyx_22041412_top__DOT__if_ar_valid;
    vlSelf->ysyx_22041412_top__DOT__if_ar_addr = __Vdly__ysyx_22041412_top__DOT__if_ar_addr;
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2U] = 0xa00001800ULL;
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
        if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
              & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o))) 
             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
            vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
                = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
                    ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
                   [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
                    : 0ULL);
            if (((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                 | (5U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
                __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
                    = vlSelf->ysyx_22041412_top__DOT__ex_v1;
            } else if (((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                        | (6U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
                __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
                    = (vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
                       | vlSelf->ysyx_22041412_top__DOT__ex_v1);
            } else if (((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                        | (7U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
                __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
                    = (vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
                       & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1));
            }
            __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 1U;
        } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o))) 
                    & (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
            vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
                = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
                [3U];
            __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 1U;
            __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 
                = vlSelf->ysyx_22041412_top__DOT__ex_pc;
            __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 1U;
        } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o))) 
                    & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
            vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
                = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
                [4U];
            __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 1U;
        } else if (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                    & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
            vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0 
                = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
            if ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))) {
                __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                    = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0;
                __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 1U;
                __Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                    = vlSelf->ysyx_22041412_top__DOT__ex_csr_id;
            }
            __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 1U;
            __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0ULL;
        } else {
            __Vdly__ysyx_22041412_top__DOT__csr_ready_o = 0U;
            vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r = 0ULL;
        }
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__id_ready_o) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__id_vaild_o))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_data;
        vlSelf->ysyx_22041412_top__DOT__ex_rw = ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                  ? 0U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                      >> 7U))));
        vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en 
            = ((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
               & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                  | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))));
        vlSelf->ysyx_22041412_top__DOT__ex_pc = vlSelf->ysyx_22041412_top__DOT__id_pc;
        vlSelf->ysyx_22041412_top__DOT__ex_csr_id = vlSelf->ysyx_22041412_top__DOT__id_csr_id;
        vlSelf->ysyx_22041412_top__DOT__ex_csr_en = 
            (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm));
        vlSelf->ysyx_22041412_top__DOT__ex_func3 = 
            (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0xcU));
        vlSelf->ysyx_22041412_top__DOT__ex_opcode = 
            (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm);
    }
    vlSelf->ysyx_22041412_top__DOT__sram_ready_o = __Vdly__ysyx_22041412_top__DOT__sram_ready_o;
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
    vlSelf->pip_mem_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))) {
        vlSelf->io_master_wdata = vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data;
        vlSelf->io_master_awaddr = vlSelf->ysyx_22041412_top__DOT__mem_rw_addr;
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
        vlSelf->io_master_wdata = 0ULL;
        vlSelf->io_master_awaddr = 0U;
        vlSelf->io_master_wstrb = 0U;
        vlSelf->ysyx_22041412_top__DOT__w_valid = 0U;
    }
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
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar 
        = ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
           | ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
              | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                 | ((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                    & ((0U == (vlSelf->ysyx_22041412_top__DOT__if_ar_data 
                               >> 0x14U)) | (0x302U 
                                             == (vlSelf->ysyx_22041412_top__DOT__if_ar_data 
                                                 >> 0x14U)))))));
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
        = __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    if (__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4U] 
            = __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5U] = 0xbULL;
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[__Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2] 
            = __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    }
    vlSelf->ysyx_22041412_top__DOT__csr_ready_o = __Vdly__ysyx_22041412_top__DOT__csr_ready_o;
    vlSelf->ysyx_22041412_top__DOT__ex_v1 = __Vdly__ysyx_22041412_top__DOT__ex_v1;
    vlSelf->ysyx_22041412_top__DOT__ex_rs2 = __Vdly__ysyx_22041412_top__DOT__ex_rs2;
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
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 - vlSelf->ysyx_22041412_top__DOT__ex_v2);
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
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 | vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->__VdfgTmp_h6cccb7a3__0 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->__VdfgTmp_h6cd8c4c6__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      >> (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->__VdfgTmp_h6cd3955d__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      << (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0 
        = ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
           & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o)) 
              & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))));
    ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    vlSelf->ysyx_22041412_top__DOT__id_pc = __Vdly__ysyx_22041412_top__DOT__id_pc;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][2U] = 3U;
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
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0 
        = ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
           & (IData)(ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0));
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = (1U 
                                                   & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                      | (IData)(ysyx_22041412_top__DOT____VdfgTmp_h9b9b4da0__0)));
    vlSelf->ysyx_22041412_top__DOT__id_ready_o = __Vdly__ysyx_22041412_top__DOT__id_ready_o;
    vlSelf->ysyx_22041412_top__DOT__id_imm = __Vdly__ysyx_22041412_top__DOT__id_imm;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
        = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
            ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
           [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
            : 0ULL);
    ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en)) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o) 
                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
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
    vlSelf->Ebreak = (0x100073U == vlSelf->ysyx_22041412_top__DOT__id_imm);
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
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type 
        = ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | ((3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
              | ((0x13U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                 | ((0x1bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                    | (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))))));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__ex_ready_o = ((IData)(vlSelf->ysyx_22041412_top__DOT__alu_ready_o) 
                                                  & (IData)(ysyx_22041412_top__DOT____VdfgTmp_h72df51c0__0));
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
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 
        ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type)
          ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 0U : 1U));
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

void Vysyx_22041412_top___024root___eval_nba(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_22041412_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_22041412_top___024root___eval_triggers__ico(Vysyx_22041412_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__ico(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22041412_top___024root___eval_triggers__act(Vysyx_22041412_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__act(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_22041412_top___024root___dump_triggers__nba(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_22041412_top___024root___eval(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_22041412_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22041412_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_22041412_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_22041412_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_22041412_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_22041412_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_22041412_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_22041412_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_22041412_top___024root___eval_debug_assertions(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->io_master_awready & 0xfeU))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY((vlSelf->io_master_wready & 0xfeU))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY((vlSelf->io_master_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_bresp & 0xfcU))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY((vlSelf->io_master_bid & 0xf0U))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY((vlSelf->io_master_buser & 0xfeU))) {
        Verilated::overWidthError("io_master_buser");}
    if (VL_UNLIKELY((vlSelf->io_master_arready & 0xfeU))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY((vlSelf->io_master_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_rresp & 0xfcU))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY((vlSelf->io_master_rlast & 0xfeU))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY((vlSelf->io_master_rid & 0xf0U))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY((vlSelf->io_master_ruser & 0xfeU))) {
        Verilated::overWidthError("io_master_ruser");}
    if (VL_UNLIKELY((vlSelf->io_slave_awready & 0xfeU))) {
        Verilated::overWidthError("io_slave_awready");}
    if (VL_UNLIKELY((vlSelf->io_slave_wready & 0xfeU))) {
        Verilated::overWidthError("io_slave_wready");}
    if (VL_UNLIKELY((vlSelf->io_slave_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_bvalid");}
    if (VL_UNLIKELY((vlSelf->io_slave_bresp & 0xfcU))) {
        Verilated::overWidthError("io_slave_bresp");}
    if (VL_UNLIKELY((vlSelf->io_slave_bid & 0xf0U))) {
        Verilated::overWidthError("io_slave_bid");}
    if (VL_UNLIKELY((vlSelf->io_slave_arready & 0xfeU))) {
        Verilated::overWidthError("io_slave_arready");}
    if (VL_UNLIKELY((vlSelf->io_slave_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_slave_rresp & 0xfcU))) {
        Verilated::overWidthError("io_slave_rresp");}
    if (VL_UNLIKELY((vlSelf->io_slave_rlast & 0xfeU))) {
        Verilated::overWidthError("io_slave_rlast");}
    if (VL_UNLIKELY((vlSelf->io_slave_rid & 0xf0U))) {
        Verilated::overWidthError("io_slave_rid");}
}
#endif  // VL_DEBUG
