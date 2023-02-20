// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "Vysyx_22041412_top___024root.h"
#include "Vysyx_22041412_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22041412_top___024root___ctor_var_reset(Vysyx_22041412_top___024root* vlSelf);

Vysyx_22041412_top___024root::Vysyx_22041412_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22041412_top___024root___ctor_var_reset(this);
}

void Vysyx_22041412_top___024root::__Vconfigure(Vysyx_22041412_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22041412_top___024root::~Vysyx_22041412_top___024root() {
}

void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 6> &a);

void Vysyx_22041412_top___024root___initial__TOP__1(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_master_awvalid = 0U;
    vlSelf->io_master_awaddr = 0U;
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
    vlSelf->io_master_arlock = 0U;
    vlSelf->io_master_arqos = 0U;
    vlSelf->io_master_arcache = 2U;
    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__M_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg);
    Vysyx_22041412_top___024root____Vdpiimwrap_ysyx_22041412_top__DOT__csr_reg__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_22041412_top__ConstPool__TABLE_628c1db9_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_22041412_top__ConstPool__TABLE_942d406d_0;

void Vysyx_22041412_top___024root___settle__TOP__3(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___settle__TOP__3\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    VlWide<35>/*1119:0*/ __Vtemp180;
    // Body
    vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
    vlSelf->pip_dnpc = vlSelf->ysyx_22041412_top__DOT__wb_dnpc;
    vlSelf->pip_imm = vlSelf->ysyx_22041412_top__DOT__wb_imm;
    __Vtableidx1 = (((IData)(vlSelf->ysyx_22041412_top__DOT__w_valid) 
                     << 6U) | (((IData)(vlSelf->io_master_awready) 
                                << 5U) | (((IData)(vlSelf->io_master_wready) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_22041412_top__DOT__w_ready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_next_state 
        = Vysyx_22041412_top__ConstPool__TABLE_628c1db9_0
        [__Vtableidx1];
    vlSelf->pip_mem_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = ((IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o) 
                                                   & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)));
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                     << 7U) | (((IData)(vlSelf->io_master_rready) 
                                << 6U) | (((IData)(vlSelf->io_master_rvalid) 
                                           << 5U) | 
                                          (((IData)(vlSelf->io_master_arready) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_next_state 
        = Vysyx_22041412_top__ConstPool__TABLE_942d406d_0
        [__Vtableidx2];
    __Vtemp180[0x21U] = (((IData)((2ULL + ((((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))) 
                                           + (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU) 
                                              | (0x7fffffffffffffffULL 
                                                 & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                          >> 0x15U) | ((IData)(((2ULL 
                                                 + 
                                                 ((((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU) 
                                                   | (0x7fffffffffffffffULL 
                                                      & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU) 
                                                   | (0x7fffffffffffffffULL 
                                                      & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                                >> 0x20U)) 
                                       << 0xbU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (4U | ((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                         >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                           : (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
                 << 5U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                    >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                      : (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
            >> 0x1bU) | ((IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                  >> 5U)))
                                    ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                    : (QData)((IData)(
                                                      VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x220U | (((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                              >> 5U)))
                                ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                : (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
                      << 0xaU) | ((IData)((((1U & (IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                           >> 5U)))
                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                             : (QData)((IData)(
                                                               VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                    >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                      : (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                         << (0x1fU 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
            >> 0x16U) | ((IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                  >> 5U)))
                                    ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                    : (QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x4c00U | (((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                               >> 5U)))
                                 ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                 : (QData)((IData)(
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                    >> 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
                       << 0xfU) | ((IData)((((1U & (IData)(
                                                           (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                            >> 5U)))
                                              ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                              : (QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                                 << 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = (((IData)(((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                    >> 5U))) ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                      : (QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                         >> (0x1fU 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))))) 
            >> 0x11U) | ((IData)((((1U & (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                  >> 5U)))
                                    ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                    : (QData)((IData)(
                                                      ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                       >> 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = (0x90000U | (((IData)((QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                        << 0x14U) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                           >> 5U)))
                                                ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                : (QData)((IData)(
                                                                  ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = (((IData)((QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
            >> 0xcU) | ((IData)(((QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = (0xf00000U | (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                         << 0x19U) | ((IData)(((QData)((IData)(
                                                               VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1), 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                     >> (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
            >> 7U) | ((IData)(((QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                               >> 0x20U)) << 0x19U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
        = (0x20000000U | (((IData)((QData)((IData)(
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                           << 0x1eU) | ((IData)(((QData)((IData)(
                                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                                 >> 0x20U)) 
                                        >> 7U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                     << (0x1fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
            >> 2U) | ((IData)(((QData)((IData)(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0x80000000U | ((IData)(((QData)((IData)(
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1) 
                                                    << 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                   >> 0x20U)) >> 2U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = (3U | ((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                        (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                 << 3U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                   (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
            >> 0x1dU) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                  >> 0x20U)) << 3U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x60U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                              >> (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                     << 8U) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     >> (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
            >> 0x18U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                  >> 0x20U)) << 8U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0xd00U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                               << (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                      << 0xdU) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     << (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
            >> 0x13U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                   << (0x3fU & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x16000U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                 ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                        << 0x12U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     >> 0x13U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
            >> 0xeU) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                  ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x1c0000U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                  | vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                         << 0x17U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                               >> 0x20U)) 
                                      >> 0xeU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     | vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
            >> 9U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                | vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                               >> 0x20U)) << 0x17U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = (0x4000000U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                   & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                          << 0x1cU) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 | vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                >> 0x20U)) 
                                       >> 9U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
            >> 4U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = (0xa0000000U | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                    & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                   >> 0x20U)) >> 4U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
        = ((IData)((~ (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                       | vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
           << 1U);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = (((IData)((~ (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                        | vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
            >> 0x1fU) | ((IData)(((~ (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                      | vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                  >> 0x20U)) << 1U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
        = (0x12U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                              - vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                     << 6U) | ((IData)(((~ (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                            | vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 0x20U)) 
                               >> 0x1fU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     - vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
            >> 0x1aU) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                   - vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                  >> 0x20U)) << 6U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
        = (0xc0U | (((IData)((2ULL + ((((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                    >> 0x3fU))))) 
                                        << 0x3fU) | 
                                       (0x7fffffffffffffffULL 
                                        & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))) 
                                      + (((QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                      >> 0x3fU))))) 
                                          << 0x3fU) 
                                         | (0x7fffffffffffffffULL 
                                            & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2)))))) 
                     << 0xbU) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                           - vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
        = __Vtemp180[0x21U];
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
        = (0x800U | (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                               + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                      << 0x10U) | ((IData)(((2ULL + 
                                             ((((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))) 
                                              + (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                              >> 0x3fU))))) 
                                                  << 0x3fU) 
                                                 | (0x7fffffffffffffffULL 
                                                    & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))) 
                                            >> 0x20U)) 
                                   >> 0x15U)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x23U] 
        = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                     + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
            >> 0x10U) | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                   + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x24U] 
        = (0x20000U | ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                 + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                >> 0x20U)) >> 0x10U));
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data 
        = ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))
            ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
           [vlSelf->ysyx_22041412_top__DOT__ex_csr_id]
            : 0ULL);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode 
        = (0x1fU & ((0x33U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                     ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                         ? ((IData)(vlSelf->ysyx_22041412_top__DOT__ex_func7)
                             ? 3U : 2U) : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                            ? 0xbU : 
                                           ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                             ? 5U : 
                                            ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                              ? 5U : 
                                             ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                               ? 7U
                                               : ((5U 
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
                                                     : 0U))))))))
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
                                 ? 2U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                          ? 0xbU : 
                                         ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                           ? 5U : (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                    ? 5U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                                                     ? 7U
                                                     : 
                                                    ((5U 
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
                                                        : 0U))))))))
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
                                             (((((3U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                                                 | (0x23U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) 
                                                | (0x6fU 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) 
                                               | (0x67U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                               ? 2U
                                               : 0U))))))));
    vlSelf->ysyx_22041412_top__DOT__pip_stall = ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_rst)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                                       | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                                           & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                           ? 1U
                                                           : 0U)) 
                                                      | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                                          & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                                          ? 1U
                                                          : 0U)))
                                                   ? 0x3fU
                                                   : 
                                                  ((1U 
                                                    & ((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                                         & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                                         ? 1U
                                                         : 0U) 
                                                       | (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))
                                                    ? 0xfU
                                                    : 0U)));
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_top__DOT__id_imm)
                       ? 1U : 0U);
    vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type = 
        ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
          ? 1U : ((0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 1U : (((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & (((5U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                              >> 0xcU))) 
                                | (6U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                >> 0xcU)))) 
                               | (7U == (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                               >> 0xcU)))))
                            ? 2U : 0U)));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type 
        = (((((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
              | (3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
             | (0x13U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
            | (0x1bU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
           | (0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type 
        = ((0x37U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x17U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U];
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U];
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
                         >> 5U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
                         >> 5U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                    >> 5U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
            << 0x16U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
            << 0x16U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
            << 0x11U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
            << 0x11U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
            << 0xcU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
            << 7U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
            << 7U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
            << 2U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
            << 2U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
            << 9U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
            << 9U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 
        ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type)
          ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                   ? 0U : 1U));
    vlSelf->ysyx_22041412_top__DOT__id_Ra = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                 >> 0xfU)));
    if (vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type) {
        vlSelf->ysyx_22041412_top__DOT__id_Rb = 0U;
        vlSelf->ysyx_22041412_top__DOT__id_imm_data 
            = (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x14U))));
    } else {
        vlSelf->ysyx_22041412_top__DOT__id_Rb = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                     >> 0x14U)));
        vlSelf->ysyx_22041412_top__DOT__id_imm_data 
            = ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type)
                ? (((QData)((IData)((- (IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->ysyx_22041412_top__DOT__id_imm))))
                : ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                    ? (((- (QData)((IData)((vlSelf->ysyx_22041412_top__DOT__id_imm 
                                            >> 0x1fU)))) 
                        << 0x14U) | (QData)((IData)(
                                                    ((0xff000U 
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
                            ? (((- (QData)((IData)(
                                                   (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                                  >> 7U))))))
                            : 0ULL))));
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->ysyx_22041412_top__DOT__id_rsB = ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb))
                                               ? 0ULL
                                               : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                              [vlSelf->ysyx_22041412_top__DOT__id_Rb]);
    vlSelf->ysyx_22041412_top__DOT__csr = (((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                             ? 1U : 0U)
                                            ? (0xfffU 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_data))
                                            : 0U);
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
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu 
        = ((5U == (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode))
            ? ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3))
                ? (VL_GTS_IQQ(1,64,64, 0ULL, (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                              - vlSelf->ysyx_22041412_top__DOT__ex_v2))
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
                                                       & VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2))
                                                       ? 1ULL
                                                       : 
                                                      (((5U 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)) 
                                                        & VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22041412_top__DOT__ex_v1, vlSelf->ysyx_22041412_top__DOT__ex_v2))
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
    vlSelf->ysyx_22041412_top__DOT__csr_jar_en = ((
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                     ? 1U
                                                     : 0U) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                                      | (1U 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))
                                                   ? 1U
                                                   : 0U);
}

void Vysyx_22041412_top___024root___eval_initial(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22041412_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22041412_top___024root___eval_settle(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22041412_top___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22041412_top___024root___final(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___final\n"); );
}

void Vysyx_22041412_top___024root___ctor_var_reset(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->pip_pc = 0;
    vlSelf->pip_dnpc = 0;
    vlSelf->pip_mem_pc = 0;
    vlSelf->pip_imm = 0;
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
    vlSelf->ysyx_22041412_top__DOT__axi_w_data = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_r_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__axi_w_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__r_strb = 0;
    vlSelf->ysyx_22041412_top__DOT__w_strb = 0;
    vlSelf->ysyx_22041412_top__DOT__r_len_i = 0;
    vlSelf->ysyx_22041412_top__DOT__w_len_i = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_wen_w = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_data = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_len = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ar_size = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_valid = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_wen = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_len = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_rw_size = 0;
    vlSelf->ysyx_22041412_top__DOT__pip_stall = 0;
    vlSelf->ysyx_22041412_top__DOT__pip_rst = 0;
    vlSelf->ysyx_22041412_top__DOT__id_wait = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_wait = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_wait = 0;
    vlSelf->ysyx_22041412_top__DOT__if_imm = 0;
    vlSelf->ysyx_22041412_top__DOT__if_r_strb = 0;
    vlSelf->ysyx_22041412_top__DOT__if_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__if_ready_o = 0;
    vlSelf->ysyx_22041412_top__DOT__if_jr_ready = 0;
    vlSelf->ysyx_22041412_top__DOT__if_wait = 0;
    vlSelf->ysyx_22041412_top__DOT__jar_end = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm = 0;
    vlSelf->ysyx_22041412_top__DOT__id_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type = 0;
    vlSelf->ysyx_22041412_top__DOT__id_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__id_Ra = 0;
    vlSelf->ysyx_22041412_top__DOT__id_Rb = 0;
    vlSelf->ysyx_22041412_top__DOT__id_rsB = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_jar_en = 0;
    vlSelf->ysyx_22041412_top__DOT__csr = 0;
    vlSelf->ysyx_22041412_top__DOT__id_csr_id = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type = 0;
    vlSelf->ysyx_22041412_top__DOT__ex_imm = 0;
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
    vlSelf->ysyx_22041412_top__DOT__mem_imm = 0;
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
    vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en = 0;
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_reg_en = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_imm = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_addr = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_imm_data = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_data = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_pc = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_dnpc = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_opcode = 0;
    vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_next_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_state = 0;
    vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_next_state = 0;
    vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o = 0;
    vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type = 0;
    vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data = 0;
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound1 = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu = 0;
    VL_ZERO_RESET_W(1173, vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4);
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data = 0;
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        VL_ZERO_RESET_W(69, vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data = 0;
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r = 0;
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
