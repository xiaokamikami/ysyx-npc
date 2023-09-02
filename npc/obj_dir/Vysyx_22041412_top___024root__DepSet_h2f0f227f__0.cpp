// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22041412_top___024root.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_22041412_top__ConstPool__TABLE_h8d94c941_0;

VL_INLINE_OPT void Vysyx_22041412_top___024root___ico_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
        if (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))) {
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
        if ((((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
              & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)) 
             | ((IData)(vlSelf->ysyx_22041412_top__DOT__w_ready) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__w_last_o)))) {
            if (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))) {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 2U;
            } else {
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 1U;
                vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 4U;
            }
        } else {
            vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 1U;
            vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
                = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch;
        }
    } else {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                     << 7U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit) 
                                << 6U) | ((((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state 
        = Vysyx_22041412_top__ConstPool__TABLE_h8d94c941_0
        [__Vtableidx1];
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

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__0(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v1 = 0U;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U];
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U];
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U];
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U];
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0 = 0U;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid 
        = vlSelf->ysyx_22041412_top__DOT__icache_ar_valid;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
        = ((IData)(vlSelf->rst) ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__1(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__2(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__3(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0U;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__4(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready 
        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__5(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo 
        = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__6(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc 
        = vlSelf->ysyx_22041412_top__DOT__mem_dnpc;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__7(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0U;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__8(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait 
        = vlSelf->ysyx_22041412_top__DOT__ex_wait;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__9(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_v1 = vlSelf->ysyx_22041412_top__DOT__ex_v1;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__10(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_wdata 
        = vlSelf->ysyx_22041412_top__DOT__mem_wdata;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__11(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__13(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en 
        = vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en 
        = (((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
            | ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
               | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                  | (IData)((0x100073U == (0xfff0007fU 
                                           & vlSelf->ysyx_22041412_top__DOT__if_ar_data)))))) 
           | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_jr_ready)) 
              & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__14(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [0U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [1U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [2U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [3U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__15(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [1U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [2U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [3U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [4U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__16(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [0U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [4U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [5U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [5U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__17(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__17\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 0U;
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [6U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [6U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [7U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
         [7U])) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[0U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[1U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[2U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U];
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[3U] 
            = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U];
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0 
            = (0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                        >> 4U));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__18(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__18\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__if_jr_ready 
        = vlSelf->ysyx_22041412_top__DOT__if_jr_ready;
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_jr_ready 
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__19(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__dnpc 
        = vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o 
        = vlSelf->ysyx_22041412_top__DOT__if_ready_o;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ar_addr 
        = vlSelf->ysyx_22041412_top__DOT__if_ar_addr;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o 
        = vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o;
    vlSelf->__Vdly__ysyx_22041412_top__DOT__if_wait 
        = vlSelf->ysyx_22041412_top__DOT__if_wait;
    if (((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
          | (0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
         | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_wait = 1U;
    } else if (((IData)(vlSelf->ysyx_22041412_top__DOT__if_wait) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__jar_end))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_wait = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__20(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__20\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        if ((0x23U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
            if ((3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
                if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                     & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = (vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
                           + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = (4ULL + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu;
                } else if (((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__21(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__21\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
         & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))) {
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_data;
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_addr;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__22(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__22\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_wdata 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                ? vlSelf->ysyx_22041412_top__DOT__ex_rs2
                : 0ULL);
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__23(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__23\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state = 0U;
        vlSelf->ysyx_22041412_top__DOT__axi_r_data = 0ULL;
    } else {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state 
            = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state;
        vlSelf->ysyx_22041412_top__DOT__axi_r_data 
            = ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                ? (((IData)(vlSelf->io_master_rlast) 
                    & (IData)(vlSelf->io_master_rvalid))
                    ? vlSelf->io_master_rdata : ((IData)(vlSelf->io_master_rvalid)
                                                  ? vlSelf->io_master_rdata
                                                  : 0ULL))
                : 0ULL);
    }
    vlSelf->ysyx_22041412_top__DOT__r_ready = ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
                                                  & (((IData)(vlSelf->io_master_rlast) 
                                                      & (IData)(vlSelf->io_master_rvalid)) 
                                                     | (IData)(vlSelf->io_master_rvalid))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch 
            = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch;
        if (vlSelf->ysyx_22041412_top__DOT__r_valid) {
            if (((IData)(vlSelf->io_master_rlast) & (IData)(vlSelf->io_master_rvalid))) {
                vlSelf->ysyx_22041412_top__DOT__r_last_o = 1U;
            } else if (vlSelf->io_master_rvalid) {
                vlSelf->ysyx_22041412_top__DOT__r_last_o = 0U;
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__24(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__24\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [0U])))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [0U]))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [1U]))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [4U]))) {
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__25(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__25\n"); );
    // Body
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [2U]))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [3U]))) {
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__26(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__26\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [1U])))) {
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
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [2U])))) {
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
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [3U])))) {
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
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [4U])))) {
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__27(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__27\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [5U])))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [5U]))) {
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
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__28(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__28\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [6U])))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [6U]))) {
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
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__29(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__29\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)) 
               & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                  [7U])))) {
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
    if (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN) 
         & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
            [7U]))) {
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
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__30(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__30\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_func7 = 
            (1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0x1eU));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__31(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__31\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__32(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__32\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_dnpc = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22041412_top__DOT__mem_pc);
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__33(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__33\n"); );
    // Body
    if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en) 
          & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready))) 
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
        vlSelf->__Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready))) 
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
        vlSelf->__Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 1U;
    } else {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data = 0ULL;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__37(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__37\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram__v0[3U];
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[0U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[1U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[2U];
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__39(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__39\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_reg_en = vlSelf->ysyx_22041412_top__DOT__mem_reg_en;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__40(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__40\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_mul_en = 
            ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                >> 0x19U));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__41(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__41\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_imm = vlSelf->ysyx_22041412_top__DOT__mem_imm;
        vlSelf->ysyx_22041412_top__DOT__wb_opcode = vlSelf->ysyx_22041412_top__DOT__mem_opcode;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_imm = vlSelf->ysyx_22041412_top__DOT__ex_imm;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm = vlSelf->ysyx_22041412_top__DOT__id_imm;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__42(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__42\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_v1 
            = ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
                                : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                    & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                          & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hbceeb899__0)))))
                                    ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                    : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))));
        vlSelf->ysyx_22041412_top__DOT__ex_v2 = ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                                  ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0))
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                     ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                     : 
                                                    (((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0))
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB)))));
        vlSelf->ysyx_22041412_top__DOT__ex_rs2 = ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                     ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                     : 
                                                    ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0)
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB))));
        if ((((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
              & (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)))) 
             & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
            vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait = 1U;
        }
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Ra) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_v1 
            = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Rb) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_top__DOT__ex_v2 = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Rb) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_top__DOT__ex_rs2 = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__47(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__47\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_22041412_top__DOT__ex_v2;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__48(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__48\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__49(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__49\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__50(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__50\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
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
                                                      ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                      : 
                                                     ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en)
                                                       ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                       : 0ULL))));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__57(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__57\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_rw = vlSelf->ysyx_22041412_top__DOT__ex_rw;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__58(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__58\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_opcode 
            = vlSelf->ysyx_22041412_top__DOT__ex_opcode;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__59(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__59\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_reg_en 
            = ((0x23U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
               & ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                  | ((~ ((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                         & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) 
                     & ((~ ((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)))) 
                        & (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) 
                           | (~ ((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en))))))));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__60(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__60\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_pc = vlSelf->ysyx_22041412_top__DOT__ex_pc;
    }
}

void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__61(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__61\n"); );
    // Init
    QData/*63:0*/ __Vtask_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read__2__rdata;
    __Vtask_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read__2__rdata = 0;
    // Body
    if ((((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type) 
          & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo))) 
         & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))) {
        Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_write_TOP(vlSelf->ysyx_22041412_top__DOT__mem_addr, vlSelf->ysyx_22041412_top__DOT__mem_wdata, 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                                                 ? 0xffU
                                                                                 : 0U)))));
        vlSelf->__Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 1U;
    } else if ((((0ULL != vlSelf->ysyx_22041412_top__DOT__mem_addr) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo))) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))) {
        Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read_TOP(vlSelf->ysyx_22041412_top__DOT__mem_addr, __Vtask_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read__2__rdata);
        vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r 
            = __Vtask_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read__2__rdata;
        vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                ? (((- (QData)((IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r 
                                                      >> 7U)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r)))))
                : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r)))))
                    : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r)))
                        : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                            ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r
                            : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r))))
                                : ((5U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                    ? (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r))))
                                    : ((6U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                        ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r))
                                        : 0ULL)))))));
        vlSelf->__Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_valid_o))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__62(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__62\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_res = (
                                                   (0x73U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                    ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r
                                                    : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu);
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__64(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__64\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__mem_wdata = vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_wdata;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__66(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__66\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__73(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__73\n"); );
    // Body
    vlSelf->pip_mem_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__74(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__74\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__75(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__75\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
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
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__76(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__76\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_rw_type 
            = (0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__77(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__77\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_ram_en 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
               | (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__78(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__78\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_addr = 
            ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
              ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
              : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                  ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                  : 0ULL));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__79(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__79\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_func3 = vlSelf->ysyx_22041412_top__DOT__ex_func3;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__80(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__80\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2U] = 0xa00001800ULL;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready))) 
                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
            = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
                ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
               [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
                : 0ULL);
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
            = (((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                | (5U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))
                ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                : (((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                    | (6U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))
                    ? (vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
                       | vlSelf->ysyx_22041412_top__DOT__ex_v1)
                    : (((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                        | (7U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))
                        ? (vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
                           & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))
                        : 0ULL)));
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready))) 
                & (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
            [3U];
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
        vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 
            = vlSelf->ysyx_22041412_top__DOT__ex_pc;
        vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready))) 
                & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
            [4U];
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
        if ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))) {
            vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0;
            vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                = vlSelf->ysyx_22041412_top__DOT__ex_csr_id;
        }
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0ULL;
    } else {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r = 0ULL;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__86(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__86\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__ex_v1 = vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_v1;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__91(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__91\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__92(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__92\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 - vlSelf->ysyx_22041412_top__DOT__ex_v2);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__93(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__93\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__94(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__94\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
        = (1ULL + (((QData)((IData)((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                   >> 0x3fU))))) 
                    << 0x3fU) | (0x7fffffffffffffffULL 
                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__95(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__95\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
        = (vlSelf->ysyx_22041412_top__DOT__ex_v1 | vlSelf->ysyx_22041412_top__DOT__ex_v2);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__96(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__96\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_id = vlSelf->ysyx_22041412_top__DOT__id_csr_id;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__97(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__97\n"); );
    // Body
    vlSelf->__VdfgTmp_h6cccb7a3__0 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__98(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__98\n"); );
    // Body
    vlSelf->__VdfgTmp_h6cd8c4c6__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      >> (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__99(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__99\n"); );
    // Body
    vlSelf->__VdfgTmp_h6cd3955d__0 = ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                      << (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__100(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__100\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_en = 
            (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__101(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__101\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_opcode = 
            (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm);
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__102(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__102\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_func3 = 
            (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0xcU));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__103(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__103\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_pc = vlSelf->ysyx_22041412_top__DOT__id_pc;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__104(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__104\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][0U] 
        = vlSelf->__VdfgTmp_h6cccb7a3__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][2U] = 0xfU;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][0U] 
        = vlSelf->__VdfgTmp_h6cd8c4c6__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][2U] = 0x10U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][0U] 
        = vlSelf->__VdfgTmp_h6cd3955d__0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][1U] = 0U;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][2U] = 0xeU;
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__105(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__105\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xdU] 
        = (~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
           + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY);
    if ((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                       >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
            = vlSelf->ysyx_22041412_top__DOT__ex_v1;
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
            = vlSelf->ysyx_22041412_top__DOT__ex_v1;
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
            = vlSelf->ysyx_22041412_top__DOT__ex_v1;
    } else {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
            = (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0));
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
            = (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0));
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
            = (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__109(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__109\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h677fa55c__0 
        = ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
           & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__110(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__110\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0 
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__111(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__111\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_pc = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                                  >> 1U)))
                                              ? vlSelf->ysyx_22041412_top__DOT__if_pc
                                              : 0ULL);
    if (((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
          | (0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
         | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))) {
        vlSelf->ysyx_22041412_top__DOT__id_pc = 0ULL;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__113(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__113\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode 
        = (0x1fU & ((0x33U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                     ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                         ? ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                             ? 3U : 2U) : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0)
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
                                 ? 2U : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hd6c46510__0)
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__116(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__116\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__117(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__117\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_imm = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
                                               & (~ 
                                                  ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                                   >> 1U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__if_imm
                                               : 0U);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__120(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__120\n"); );
    // Body
    vlSelf->Ebreak = (0x100073U == vlSelf->ysyx_22041412_top__DOT__id_imm);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__121(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__121\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__122(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__122\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type 
        = ((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | ((3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
              | ((0x13U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                 | ((0x1bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                    | (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__123(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__123\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__124(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__124\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__dnpc = 0x80000000U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ar_addr = 0U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o)) 
                & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_wait)))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__dnpc 
            = ((IData)(4U) + vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc);
        vlSelf->ysyx_22041412_top__DOT__if_imm = vlSelf->ysyx_22041412_top__DOT__if_ar_data;
        vlSelf->ysyx_22041412_top__DOT__if_pc = ((0xffffffff00000000ULL 
                                                  & vlSelf->ysyx_22041412_top__DOT__if_pc) 
                                                 | (IData)((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_addr)));
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o = 0U;
    } else if ((1U & ((((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)) 
                          & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o))) 
                         & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o))) 
                        & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_wait))) 
                       & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                             >> 1U))) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en))))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o = 1U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ar_addr 
            = vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc;
    } else if (((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)) 
                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o))) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__if_jr_ready)) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en))) {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o = 1U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__dnpc 
            = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_dnpc);
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ar_addr 
            = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_dnpc);
        vlSelf->ysyx_22041412_top__DOT__jar_end = 1U;
    } else {
        vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__jar_end = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_imm = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__128(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__128\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__dnpc;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__129(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__129\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__if_ready_o = vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ready_o;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__130(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__130\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__131(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__131\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__mem_dnpc = vlSelf->__Vdly__ysyx_22041412_top__DOT__mem_dnpc;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__132(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__132\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__if_jr_ready = vlSelf->__Vdly__ysyx_22041412_top__DOT__if_jr_ready;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__133(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__133\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__if_wait = vlSelf->__Vdly__ysyx_22041412_top__DOT__if_wait;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__134(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__134\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__IF_s1__DOT__valid_o;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__136(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__136\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_ha914f862__2;
    VlWide<4>/*127:0*/ __Vtemp_h86dd9f5c__0;
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
        vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state)))) {
                vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 1U;
                vlSelf->ysyx_22041412_top__DOT__icache_ar_len = 0x80U;
                vlSelf->ysyx_22041412_top__DOT__icache_ar_addr 
                    = (0xfffffff8U & vlSelf->ysyx_22041412_top__DOT__if_ar_addr);
                if ((((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid) 
                      & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready)) 
                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num)))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 1U;
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
                        = vlSelf->ysyx_22041412_top__DOT__icache_ar_data;
                } else if (VL_UNLIKELY((((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid) 
                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready)) 
                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num)))) {
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num = 0U;
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[0U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data);
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[1U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
                                   >> 0x20U));
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[2U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data[3U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                    vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0 = 1U;
                    vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
                    vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                           >> 0xbU);
                    vlSelf->__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
                    vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len;
                    vlSelf->__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
                    vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0 
                        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len;
                    vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 1U;
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data);
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
                                   >> 0x20U));
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
                        = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
                        = (IData)((vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                   >> 0x20U));
                    __Vtemp_ha914f862__2[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data);
                    __Vtemp_ha914f862__2[1U] = (IData)(
                                                       (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
                                                        >> 0x20U));
                    __Vtemp_ha914f862__2[2U] = (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_data);
                    __Vtemp_ha914f862__2[3U] = (IData)(
                                                       (vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
                                                        >> 0x20U));
                    VL_WRITEF("Icache not ysyx_22041412_Icachex Read: addr:%8x %16x\n",
                              32,vlSelf->ysyx_22041412_top__DOT__if_ar_addr,
                              128,__Vtemp_ha914f862__2.data());
                }
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))) {
            if (VL_UNLIKELY((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v)))) {
                VL_WRITEF("Icache tag ysyx_22041412_Icachex Read: addr:%8x %16x\n",
                          32,vlSelf->ysyx_22041412_top__DOT__if_ar_addr,
                          32,vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U]);
                vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 1U;
                vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 1U;
                if (((((((((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v)) 
                           | (2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                          | (4U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                         | (8U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                        | (0x10U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                       | (0x20U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                      | (0x40U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) 
                     | (0x80U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v)))) {
                    if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [0U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [0U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [0U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [0U][3U];
                    } else if ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [1U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [1U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [1U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [1U][3U];
                    } else if ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [2U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [2U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [2U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [2U][3U];
                    } else if ((8U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [3U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [3U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [3U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [3U][3U];
                    } else if ((0x10U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [4U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [4U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [4U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [4U][3U];
                    } else if ((0x20U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [5U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [5U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [5U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [5U][3U];
                    } else if ((0x40U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))) {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [6U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [6U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [6U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [6U][3U];
                    } else {
                        __Vtemp_h86dd9f5c__0[0U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][0U];
                        __Vtemp_h86dd9f5c__0[1U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][1U];
                        __Vtemp_h86dd9f5c__0[2U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][2U];
                        __Vtemp_h86dd9f5c__0[3U] = 
                            vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
                            [7U][3U];
                    }
                } else {
                    __Vtemp_h86dd9f5c__0[0U] = 0U;
                    __Vtemp_h86dd9f5c__0[1U] = 0U;
                    __Vtemp_h86dd9f5c__0[2U] = 0U;
                    __Vtemp_h86dd9f5c__0[3U] = 0U;
                }
                vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
                    = __Vtemp_h86dd9f5c__0[0U];
                vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
                    = __Vtemp_h86dd9f5c__0[1U];
                vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
                    = __Vtemp_h86dd9f5c__0[2U];
                vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
                    = __Vtemp_h86dd9f5c__0[3U];
            } else {
                vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
                vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit = 0U;
            }
        } else {
            vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid = 0U;
            vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0U;
            vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v1 = 1U;
            vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v1 
                = (7U & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point) 
                         - (IData)(1U)));
            if (vlSelf->ysyx_22041412_top__DOT__if_ar_valid) {
                vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod 
                    = (0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                >> 0xbU));
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__137(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__137\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__139(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__139\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__140(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__140\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__icache_ar_ready 
        = ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__141(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__141\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__icache_ar_data 
        = ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
            ? vlSelf->ysyx_22041412_top__DOT__axi_r_data
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__142(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__142\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U] 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U] 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U] 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U] 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__read_data[3U];
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__147(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__147\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__148(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__148\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__if_ar_addr = vlSelf->__Vdly__ysyx_22041412_top__DOT__if_ar_addr;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__149(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__149\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q[3U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[0U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[1U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][2U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[2U];
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7U][3U] 
        = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q[3U];
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__151(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__151\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__icache_ar_valid 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__icache_ar_valid;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__153(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__153\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len 
        = (0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__154(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__154\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__155(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__155\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN 
        = ((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
            >> 0xaU) & (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__156(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__156\n"); );
    // Body
    vlSelf->io_master_araddr = ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                 ? vlSelf->ysyx_22041412_top__DOT__mem_rw_addr
                                 : vlSelf->ysyx_22041412_top__DOT__icache_ar_addr);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__157(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__157\n"); );
    // Body
    vlSelf->io_master_arlen = ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len)
                                : (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_len));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__158(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__158\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state 
        = ((IData)(vlSelf->rst) ? 0U : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                         ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                                              ? 1U : 0U))
                                         : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                             ? ((((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)) 
                                                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__w_ready) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__w_last_o)))
                                                 ? 
                                                (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                                                  ? 0U
                                                  : 1U)
                                                 : 1U)
                                             : 0U)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__159(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__159\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
            = (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                ? 2U : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                         ? 4U : 0U));
    } else if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
            = ((((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)) 
                | ((IData)(vlSelf->ysyx_22041412_top__DOT__w_ready) 
                   & (IData)(vlSelf->ysyx_22041412_top__DOT__w_last_o)))
                ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                    ? 2U : 4U) : (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch));
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__160(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__160\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = (
                                                   (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__161(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__161\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__163(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__163\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                     << 7U) | (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit) 
                                << 6U) | ((((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o)) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state 
        = Vysyx_22041412_top__ConstPool__TABLE_h8d94c941_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__164(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__164\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid 
            = ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
               & ((IData)(vlSelf->io_master_arready) 
                  & (IData)(vlSelf->io_master_rready)));
    }
    if (vlSelf->rst) {
        vlSelf->io_master_arvalid = 0U;
        vlSelf->io_master_rready = 0U;
    } else if (vlSelf->ysyx_22041412_top__DOT__r_valid) {
        vlSelf->io_master_arvalid = (1U & (~ ((IData)(vlSelf->io_master_arready) 
                                              & (IData)(vlSelf->io_master_rready))));
        vlSelf->io_master_rready = (1U & (~ ((IData)(vlSelf->io_master_rlast) 
                                             & (IData)(vlSelf->io_master_rvalid))));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en;
        vlSelf->ysyx_22041412_top__DOT__wb_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__mem_imm_data;
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
    vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
    vlSelf->pip_dnpc = vlSelf->ysyx_22041412_top__DOT__wb_dnpc;
    vlSelf->pip_imm = vlSelf->ysyx_22041412_top__DOT__wb_imm;
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en;
        vlSelf->ysyx_22041412_top__DOT__mem_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__ex_imm_data;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_data;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__165(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__165\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type;
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type;
        vlSelf->ysyx_22041412_top__DOT__ex_Ra = vlSelf->ysyx_22041412_top__DOT__id_Ra;
        vlSelf->ysyx_22041412_top__DOT__ex_Rb = vlSelf->ysyx_22041412_top__DOT__id_Rb;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__166(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__166\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    }
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hbceeb899__0 
        = ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__csr_jar_en;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__167(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__167\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4U] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5U] = 0xbULL;
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    }
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
        = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
            ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
           [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
            : 0ULL);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__168(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__168\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready 
        = vlSelf->__Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__169(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__169\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__ex_wait = vlSelf->__Vdly__ysyx_22041412_top__DOT__ex_wait;
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__170(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__170\n"); );
    // Body
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
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready))
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
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready))
                                                         ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data
                                                         : 
                                                        ((0x73U 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                          ? 0ULL
                                                          : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result))))))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__171(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__171\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__172(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__172\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 
        ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type)
          ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 0U : 1U));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__173(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__173\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__pip_stall = ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_rst)
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                                   | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                                       & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                                      | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))))
                                                   ? 0x3fU
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
                                                    | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                                       & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))
                                                    ? 0xfU
                                                    : 0U)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__174(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__174\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_imm_data = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                       >> 0x14U))))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlSelf->ysyx_22041412_top__DOT__id_imm))))
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->ysyx_22041412_top__DOT__id_imm) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 0x14U)))))))
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0x800U 
                                                                           & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 7U)))))))
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                                >> 7U))))))
                                                        : 0ULL)))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__175(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__175\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_Ra = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                 >> 0xfU)));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__176(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__176\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_Rb = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type)
                                              ? 0U : 
                                             ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                               ? 0U
                                               : (0x1fU 
                                                  & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                     >> 0x14U))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__177(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__177\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__id_rsB = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb))
                                               ? 0ULL
                                               : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                              [vlSelf->ysyx_22041412_top__DOT__id_Rb]);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__178(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__178\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0 
        = (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
            == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb)) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h677fa55c__0));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__179(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__179\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__180(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__180\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__csr = ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                            ? (0xfffU 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_data))
                                            : 0U);
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__181(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__181\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__182(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__182\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5f9b0d0d__0 
        = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
           & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
              & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                 & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__183(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__183\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v1) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v1] = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__184(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__184\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__185(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__185\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0 
        = (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
            != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
           & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0) 
              & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                  == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hbceeb899__0))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__186(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__186\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0 
        = ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h33efbaf3__0) 
           & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
               == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
              & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__187(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__187\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0][vlSelf->__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram__v0] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__188(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__188\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_22041412_top__DOT__Icache_L1__DOT__write_en__v0) {
        vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram[vlSelf->__Vdlyvdim0__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0][vlSelf->__Vdlyvdim1__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0] 
            = vlSelf->__Vdlyvval__ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram__v0;
    }
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__189(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__189\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__csr_jar_en = ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                                     | (1U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__190(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__190\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0 
        = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__191(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__191\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__r_valid = ((2U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                                ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid)
                                                : (IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
}

VL_INLINE_OPT void Vysyx_22041412_top___024root___nba_sequent__TOP__192(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___nba_sequent__TOP__192\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v 
        = ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
              [(0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
              [7U] == (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                       >> 0xbU)) & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
             [(0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
             [7U]) << 7U) | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                [(0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                [6U] == (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                         >> 0xbU)) 
                               & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                               [(0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                               [6U]) << 6U) | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                  [5U] 
                                                  == 
                                                  (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                   >> 0xbU)) 
                                                 & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                 [(0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                 [5U]) 
                                                << 5U) 
                                               | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                     [
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                     [4U] 
                                                     == 
                                                     (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                      >> 0xbU)) 
                                                    & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                    [
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                    [4U]) 
                                                   << 4U) 
                                                  | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                        [
                                                        (0x7fU 
                                                         & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                        [3U] 
                                                        == 
                                                        (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                         >> 0xbU)) 
                                                       & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                       [
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                       [3U]) 
                                                      << 3U) 
                                                     | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                           [
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                           [2U] 
                                                           == 
                                                           (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                            >> 0xbU)) 
                                                          & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                          [
                                                          (0x7fU 
                                                           & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                          [2U]) 
                                                         << 2U) 
                                                        | ((((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                              [
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                              [1U] 
                                                              == 
                                                              (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                               >> 0xbU)) 
                                                             & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                             [
                                                             (0x7fU 
                                                              & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                             [1U]) 
                                                            << 1U) 
                                                           | ((vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram
                                                               [
                                                               (0x7fU 
                                                                & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                               [0U] 
                                                               == 
                                                               (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                                >> 0xbU)) 
                                                              & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_v_ram
                                                              [
                                                              (0x7fU 
                                                               & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)]
                                                              [0U]))))))));
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
void Vysyx_22041412_top___024root___eval_nba(Vysyx_22041412_top___024root* vlSelf);

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
