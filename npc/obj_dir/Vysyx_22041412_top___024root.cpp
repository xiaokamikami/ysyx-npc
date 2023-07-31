// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041412_top.h for the primary calling header

#include "Vysyx_22041412_top___024root.h"
#include "Vysyx_22041412_top__Syms.h"

#include "verilated_dpi.h"

//==========

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

VL_INLINE_OPT void Vysyx_22041412_top___024root___sequent__TOP__2(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__if_wait;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__ex_wait;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__if_jr_ready;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__if_ready_o;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
    CData/*2:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
    CData/*0:0*/ __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    VlWide<35>/*1119:0*/ __Vtemp30;
    QData/*63:0*/ __Vtask_ysyx_22041412_top__DOT__MEM_dram__DOT__mem_read__2__rdata;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__ex_v1;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__mem_wdata;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__mem_dnpc;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc;
    QData/*63:0*/ __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    // Body
    __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en 
        = vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en;
    __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc 
        = vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc;
    __Vdly__ysyx_22041412_top__DOT__if_ready_o = vlSelf->ysyx_22041412_top__DOT__if_ready_o;
    __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o 
        = vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o;
    __Vdly__ysyx_22041412_top__DOT__if_wait = vlSelf->ysyx_22041412_top__DOT__if_wait;
    __Vdly__ysyx_22041412_top__DOT__if_jr_ready = vlSelf->ysyx_22041412_top__DOT__if_jr_ready;
    __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo 
        = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
    __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
    __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready 
        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready;
    __Vdly__ysyx_22041412_top__DOT__mem_dnpc = vlSelf->ysyx_22041412_top__DOT__mem_dnpc;
    __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 0U;
    __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 0U;
    __Vdly__ysyx_22041412_top__DOT__ex_wait = vlSelf->ysyx_22041412_top__DOT__ex_wait;
    __Vdly__ysyx_22041412_top__DOT__mem_wdata = vlSelf->ysyx_22041412_top__DOT__mem_wdata;
    __Vdly__ysyx_22041412_top__DOT__ex_v1 = vlSelf->ysyx_22041412_top__DOT__ex_v1;
    __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready 
        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
    __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en 
        = (((((0x67U == (0x7fU & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data))) 
              | (0x6fU == (0x7fU & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data)))) 
             | (0x63U == (0x7fU & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data)))) 
            | (IData)((0x100073ULL == (0xfff0007fULL 
                                       & vlSelf->ysyx_22041412_top__DOT__if_ar_data)))) 
           | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_jr_ready)) 
              & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en)));
    vlSelf->ysyx_22041412_top__DOT__axi_r_data = ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                                                    ? 
                                                   (((IData)(vlSelf->io_master_rlast) 
                                                     & (IData)(vlSelf->io_master_rvalid))
                                                     ? vlSelf->io_master_rdata
                                                     : 0ULL)
                                                    : 0ULL));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid 
            = ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
               & ((IData)(vlSelf->io_master_arready) 
                  & (IData)(vlSelf->io_master_rready)));
    }
    if (vlSelf->rst) {
        vlSelf->io_master_arvalid = 0U;
    } else if (vlSelf->ysyx_22041412_top__DOT__r_valid) {
        vlSelf->io_master_arvalid = (1U & (~ ((IData)(vlSelf->io_master_arready) 
                                              & (IData)(vlSelf->io_master_rready))));
    }
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__mem_imm_data;
    }
    vlSelf->ysyx_22041412_top__DOT__r_ready = ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid) 
                                                  & ((IData)(vlSelf->io_master_rlast) 
                                                     & (IData)(vlSelf->io_master_rvalid))));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch 
            = vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_imm = vlSelf->ysyx_22041412_top__DOT__mem_imm;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_func7 = 
            (1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0x1eU));
    }
    if (((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
           | (0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
          | (0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
         | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))) {
        __Vdly__ysyx_22041412_top__DOT__if_wait = 1U;
    } else if (((IData)(vlSelf->ysyx_22041412_top__DOT__if_wait) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__jar_end))) {
        __Vdly__ysyx_22041412_top__DOT__if_wait = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_opcode = vlSelf->ysyx_22041412_top__DOT__mem_opcode;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        __Vdly__ysyx_22041412_top__DOT__if_jr_ready 
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
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_dnpc = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22041412_top__DOT__mem_pc);
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        if ((0x23U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
            if ((3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))) {
                if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                     & (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu))) {
                    __Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = (vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
                           + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x63U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu)))) {
                    __Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = (4ULL + vlSelf->ysyx_22041412_top__DOT__ex_pc);
                } else if (((0x6fU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            | (0x67U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
                    __Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu;
                } else if (((0x73U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en))) {
                    __Vdly__ysyx_22041412_top__DOT__mem_dnpc 
                        = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r;
                }
            }
        }
    }
    if ((((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
          & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))
          ? 1U : 0U)) {
        __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_data;
        __Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_top__DOT__wb_addr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        __Vdly__ysyx_22041412_top__DOT__mem_wdata = 
            ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
              ? vlSelf->ysyx_22041412_top__DOT__ex_rs2
              : 0ULL);
    }
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
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 1U;
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
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 1U;
    } else {
        __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data = 0ULL;
    }
    vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready 
        = __Vdly__ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
    if (vlSelf->rst) {
        vlSelf->io_master_rready = 0U;
    } else if (vlSelf->ysyx_22041412_top__DOT__r_valid) {
        vlSelf->io_master_rready = (1U & (~ ((IData)(vlSelf->io_master_rlast) 
                                             & (IData)(vlSelf->io_master_rvalid))));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__ex_imm_data;
    }
    vlSelf->pip_imm = vlSelf->ysyx_22041412_top__DOT__wb_imm;
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_imm = vlSelf->ysyx_22041412_top__DOT__ex_imm;
    }
    vlSelf->pip_pc = vlSelf->ysyx_22041412_top__DOT__wb_pc;
    vlSelf->pip_dnpc = vlSelf->ysyx_22041412_top__DOT__wb_dnpc;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_top__DOT__wb_reg_en = vlSelf->ysyx_22041412_top__DOT__mem_reg_en;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_mul_en = 
            ((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                >> 0x19U));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        __Vdly__ysyx_22041412_top__DOT__ex_v1 = ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                                  ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                                   ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                   : 
                                                  (((((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                    & (3U 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                                    ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                    : 
                                                   ((((((0U 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                        & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                                     ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                     : 
                                                    ((((((0U 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                         & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                            != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                        & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                      ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                      : 
                                                     (((((((0U 
                                                            == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                           & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                              != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                          & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                             != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                         & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                            == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                        & (0U 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                       & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                       ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                        ? 0ULL
                                                        : 
                                                       vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))));
        vlSelf->ysyx_22041412_top__DOT__ex_v2 = ((1U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                                  ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                                  : 
                                                 (((((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                   & (3U 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  ((((((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   ((((((0U 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                        & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                           != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                     ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                     : 
                                                    (((((((0U 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                          & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                             != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                         & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                            != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                        & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB)))));
        vlSelf->ysyx_22041412_top__DOT__ex_rs2 = ((
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                   & (3U 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                   : 
                                                  ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                    : 
                                                   ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                     ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                     : 
                                                    (((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                         & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                            != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                        & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                      ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                      : vlSelf->ysyx_22041412_top__DOT__id_rsB))));
        if ((((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
              & (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                 | ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)))) 
             & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))) {
            __Vdly__ysyx_22041412_top__DOT__ex_wait = 1U;
        }
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Ra) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        __Vdly__ysyx_22041412_top__DOT__ex_v1 = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        __Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Rb) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_top__DOT__ex_v2 = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        __Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
    if (((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
           & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type))) 
          & (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_Rb) 
             == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_top__DOT__ex_rs2 = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        __Vdly__ysyx_22041412_top__DOT__ex_wait = 0U;
    }
    if (__Vdlyvset__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[__Vdlyvdim0__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0] 
            = __Vdlyvval__ysyx_22041412_top__DOT__M_reg__DOT__DataReg__v0;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_data 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_data;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm = vlSelf->ysyx_22041412_top__DOT__id_imm;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_Ra = vlSelf->ysyx_22041412_top__DOT__id_Ra;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type 
            = vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_Rb = vlSelf->ysyx_22041412_top__DOT__id_Rb;
    }
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
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_rw = vlSelf->ysyx_22041412_top__DOT__ex_rw;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_opcode 
            = vlSelf->ysyx_22041412_top__DOT__ex_opcode;
    }
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
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_pc = vlSelf->ysyx_22041412_top__DOT__ex_pc;
    }
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
        __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 1U;
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
        __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_valid_o))) {
        __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo = 0U;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_res = (
                                                   (0x73U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                                                    ? vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r
                                                    : vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu);
    }
    vlSelf->ysyx_22041412_top__DOT__mem_wdata = __Vdly__ysyx_22041412_top__DOT__mem_wdata;
    vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo 
        = __Vdly__ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
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
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en 
            = vlSelf->ysyx_22041412_top__DOT__csr_jar_en;
    }
    vlSelf->pip_mem_pc = vlSelf->ysyx_22041412_top__DOT__mem_pc;
    vlSelf->ysyx_22041412_top__DOT__mem_valid_o = vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_func3 = vlSelf->ysyx_22041412_top__DOT__ex_func3;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_rw_type 
            = (0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_addr = 
            ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
              ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
              : ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))
                  ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                  : 0ULL));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_top__DOT__mem_ram_en 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)) 
               | (3U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)));
    }
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
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w 
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
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready))) 
                & (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
            [3U];
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
        __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 
            = vlSelf->ysyx_22041412_top__DOT__ex_pc;
        __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v0 = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready))) 
                & (0U == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg
            [4U];
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 1U;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_func3)))) {
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound1 
            = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
        if ((5U >= (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_id))) {
            __Vdlyvval__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                = vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound1;
            __Vdlyvset__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 = 1U;
            __Vdlyvdim0__ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg__v2 
                = vlSelf->ysyx_22041412_top__DOT__ex_csr_id;
        }
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 0U;
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__data_w = 0ULL;
    } else {
        __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready = 0U;
        vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r = 0ULL;
    }
    vlSelf->ysyx_22041412_top__DOT__ex_wait = __Vdly__ysyx_22041412_top__DOT__ex_wait;
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
    vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready 
        = __Vdly__ysyx_22041412_top__DOT__csr_reg__DOT__ready;
    vlSelf->ysyx_22041412_top__DOT__ex_v1 = __Vdly__ysyx_22041412_top__DOT__ex_v1;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_opcode = 
            (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm);
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_id = vlSelf->ysyx_22041412_top__DOT__id_csr_id;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_csr_en = 
            ((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
              ? 1U : 0U);
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_func3 = 
            (7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                   >> 0xcU));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_top__DOT__ex_pc = vlSelf->ysyx_22041412_top__DOT__id_pc;
    }
    __Vtemp30[0x21U] = (((IData)((2ULL + ((((QData)((IData)(
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
                                                + (
                                                   (((QData)((IData)(
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
        = __Vtemp30[0x21U];
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
    vlSelf->ysyx_22041412_top__DOT__id_imm = (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o) 
                                               & (~ 
                                                  ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                                   >> 1U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__if_imm
                                               : 0U);
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
    if (vlSelf->rst) {
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o = 1U;
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_ar_size = 0xfU;
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc = 0x80000000ULL;
    } else if ((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o)) 
                & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_wait)))) {
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc 
            = (4ULL + vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc);
        vlSelf->ysyx_22041412_top__DOT__if_imm = (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data);
        vlSelf->ysyx_22041412_top__DOT__if_pc = ((0xffffffff00000000ULL 
                                                  & vlSelf->ysyx_22041412_top__DOT__if_pc) 
                                                 | (IData)((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_addr)));
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 1U;
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o = 0U;
    } else if ((1U & ((((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)) 
                          & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o))) 
                         & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ready_o))) 
                        & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_wait))) 
                       & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                             >> 1U))) & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en))))) {
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o = 1U;
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_ar_size = 0xfU;
        vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
            = (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc);
    } else if (((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)) 
                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o))) 
                 & (IData)(vlSelf->ysyx_22041412_top__DOT__if_jr_ready)) 
                & (IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en))) {
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o = 1U;
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_ar_size = 0xfU;
        __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc 
            = vlSelf->ysyx_22041412_top__DOT__mem_dnpc;
        vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
            = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_dnpc);
        vlSelf->ysyx_22041412_top__DOT__jar_end = 1U;
    } else {
        __Vdly__ysyx_22041412_top__DOT__if_ready_o = 0U;
        vlSelf->ysyx_22041412_top__DOT__jar_end = 0U;
        vlSelf->ysyx_22041412_top__DOT__if_imm = 0U;
    }
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
    vlSelf->ysyx_22041412_top__DOT__mem_dnpc = __Vdly__ysyx_22041412_top__DOT__mem_dnpc;
    vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc 
        = __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__dnpc;
    vlSelf->ysyx_22041412_top__DOT__if_wait = __Vdly__ysyx_22041412_top__DOT__if_wait;
    vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en 
        = __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en;
    vlSelf->ysyx_22041412_top__DOT__if_jr_ready = __Vdly__ysyx_22041412_top__DOT__if_jr_ready;
    vlSelf->ysyx_22041412_top__DOT__if_ready_o = __Vdly__ysyx_22041412_top__DOT__if_ready_o;
    vlSelf->ysyx_22041412_top__DOT__if_ar_data = ((4U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                                   ? vlSelf->ysyx_22041412_top__DOT__axi_r_data
                                                   : 0ULL);
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
    vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o 
        = __Vdly__ysyx_22041412_top__DOT__IF_sram__DOT__valid_o;
    vlSelf->ysyx_22041412_top__DOT__if_ar_ready = (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready))
                                                    : 0U);
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
    vlSelf->io_master_araddr = ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                 ? vlSelf->ysyx_22041412_top__DOT__mem_rw_addr
                                 : vlSelf->ysyx_22041412_top__DOT__if_ar_addr);
    vlSelf->ysyx_22041412_top__DOT__if_ar_valid = ((IData)(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o) 
                                                   & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)));
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
    vlSelf->ysyx_22041412_top__DOT__r_valid = ((2U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                                ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid)
                                                : (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
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

VL_INLINE_OPT void Vysyx_22041412_top___024root___combo__TOP__4(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state 
        = ((IData)(vlSelf->rst) ? 0U : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                         ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                              ? 1U : 0U))
                                         : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                             ? (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                                                 | (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready))
                                                 ? 
                                                (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                                                  ? 0U
                                                  : 1U)
                                                 : 1U)
                                             : 0U)));
    if (vlSelf->rst) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
            = (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                ? 2U : ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                         ? 4U : 0U));
    } else if ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))) {
        vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch 
            = (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                | (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready))
                ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen)))
                    ? 2U : 4U) : (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch));
    }
}

void Vysyx_22041412_top___024root___eval(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041412_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22041412_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22041412_top___024root___change_request_1(Vysyx_22041412_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22041412_top___024root___change_request(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22041412_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22041412_top___024root___change_request_1(Vysyx_22041412_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
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
