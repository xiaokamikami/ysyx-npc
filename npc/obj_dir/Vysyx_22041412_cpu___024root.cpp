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

VL_INLINE_OPT void Vysyx_22041412_cpu___024root___sequent__TOP__1(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*0:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait;
    CData/*0:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    VlWide<22>/*703:0*/ __Vtemp19;
    VlWide<31>/*991:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<3>/*95:0*/ __Vtemp126;
    VlWide<3>/*95:0*/ __Vtemp127;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    QData/*63:0*/ __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata;
    QData/*63:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    QData/*63:0*/ __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata;
    QData/*63:0*/ __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    // Body
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 = 0U;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait;
    __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata 
        = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7 
            = (1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                     >> 0x1eU));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 2U)))) {
        if ((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
              | (0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
             | (0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall = 1U;
        }
    }
    if ((2U & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall))) {
        if (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode)) 
             | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode)))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall = 0U;
        } else if ((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc;
        if ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc = 0ULL;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 2U)))) {
        if ((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
              | (0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
             | (0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) {
            __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc = 0ULL;
        }
    }
    if ((2U & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall))) {
        if (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode)) 
             | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode)))) {
            __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
                = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc;
        } else if ((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode))) {
            __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
                = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc;
        }
    } else {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
            = (4ULL + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc);
    }
    if ((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en) 
          & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))
          ? 1U : 0U)) {
        __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data;
        __Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 = 1U;
        __Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2
                : 0ULL);
    }
    if (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en) 
         & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                ? (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                   * vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)
                : ((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                    ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)
                    : ((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                        ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub)
                        : ((5U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                            ? VL_DIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub)
                            : ((6U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub)
                                : ((7U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3))
                                    ? VL_MODDIV_QQQ(64, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub)
                                    : 0ULL))))));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready = 1U;
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready = 0U;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data = 0ULL;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data;
    }
    vlSelf->CP_IMM = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm;
    vlSelf->Ebreak = ((0x100073U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm)
                       ? 1U : 0U);
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm;
    }
    vlSelf->CP_PC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc;
    vlSelf->CP_NPC = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        if ((0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))) {
            if (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)) 
                 | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)))) {
                vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc 
                    = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res;
            }
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        if ((0x23U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) {
            if ((3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) {
                if (((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu))) {
                    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc 
                        = (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data 
                           + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc);
                } else if (((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                            & (~ (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu 
                                          >> 1U))))) {
                    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc 
                        = (4ULL + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc);
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en 
            = (((0x33U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                | (0x3bU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
               & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                  >> 0x19U));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
            = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc
                : (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                     & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                    & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                    : ((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                           & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                              != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                          & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                         & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                        & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                        : ((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                  != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                            : (((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                 & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                : ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                    ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                   [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra]))))));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
            = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data
                : (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                     & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                    & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                    : ((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                           & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                              != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                          & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                         & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                        & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                        : ((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                  != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                            : (((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                    & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                 & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB)))));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2 
            = (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                  == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                 & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                       != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                     & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                    & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                    : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                           != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                          & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                         & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                        : (((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
                               & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                  != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                            : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB))));
        if ((((0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
              & (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                 | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)))) 
             & (3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))) {
            __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait = 1U;
        }
    }
    if (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait) 
           & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type))) 
          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra) 
             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait = 0U;
    } else if (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait) 
                  & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type))) 
                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                & (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb) 
                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
                   & (3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait = 0U;
    }
    if (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait) 
           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type)) 
          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
         & (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb) 
             == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
            & (3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data;
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait = 0U;
    }
    if (__Vdlyvset__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[__Vdlyvdim0__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0] 
            = __Vdlyvval__ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg__v0;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb;
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                ? 0U : (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)) 
                         | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)))
                         ? (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)
                         : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                             ? (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)
                             : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en)
                                 ? (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)
                                 : 0U))));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 5U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data 
            = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                ? 0ULL : (((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)) 
                           | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode)))
                           ? (4ULL + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc)
                           : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode))
                               ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                               : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en)
                                   ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                   : 0ULL))));
    }
    __Vtemp19[0x14U] = (((IData)((2ULL + ((((QData)((IData)(
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
    __Vtemp27[8U] = (0x38000U | ((0x3ffU & ((IData)(
                                                    ((QData)((IData)(
                                                                     ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                      >> 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                     >> 0x20U)) 
                                            >> 0x11U)) 
                                 | (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              >> (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                     << 0x14U) | (0x7c00U 
                                                  & ((IData)(
                                                             ((QData)((IData)(
                                                                              ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                               >> 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                              >> 0x20U)) 
                                                     >> 0x11U)))));
    __Vtemp27[0x19U] = (0x1000000U | ((0x3ffU & ((IData)(
                                                         ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                          >> 0x20U)) 
                                                 >> 9U)) 
                                      | (((IData)((2ULL 
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
                                                        & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                          << 0x1cU) 
                                         | (0x7ffc00U 
                                            & ((IData)(
                                                       ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                        >> 0x20U)) 
                                               >> 9U)))));
    __Vtemp27[0x1cU] = ((0x3feU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                   << 1U)) | (0xfffffc00U 
                                              & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0U] 
        = (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[1U] 
        = (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                   >> 0x20U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[2U] 
        = (0xeU | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                            >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                   << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[3U] 
        = (((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                     >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
            >> 0x1bU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                   >> (0x1fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                  >> 0x20U)) << 5U));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[4U] 
        = (0x280U | (((IData)((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                             >> 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
                      << 0xaU) | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[5U] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))))) 
            >> 0x16U) | ((IData)(((((QData)((IData)(
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
                                  >> 0x20U)) << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[6U] 
        = (0x5400U | (((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                       << 0xfU) | ((IData)(((((QData)((IData)(
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
                                   >> 0x16U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[7U] 
        = ((0x3ffU & ((IData)((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                      >> 0x11U)) | ((0x7c00U & ((IData)((QData)((IData)(
                                                                        ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))))) 
                                                >> 0x11U)) 
                                    | ((IData)(((QData)((IData)(
                                                                ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))) 
                                                >> 0x20U)) 
                                       << 0xfU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[8U] 
        = __Vtemp27[8U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[9U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 0xcU)) | ((0xffc00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                >> 0xcU)) 
                                   | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xaU] 
        = (0x800000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                            >> 0x20U)) 
                                   >> 0xcU)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 << 0x19U) 
                                                | (0xffc00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 0xcU)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xbU] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               >> (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 7U)) | ((0x1fffc00U & ((IData)(
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
        = (0x26000000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     >> 7U)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          << 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 << 0x1eU) 
                                                | (0x1fffc00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 7U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xdU] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               << (0x3fU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                      >> 2U)) | ((0x3ffffc00U & ((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          << 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))) 
                                                 >> 2U)) 
                                 | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              << (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                             >> 0x20U)) 
                                    << 0x1eU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xeU] 
        = (0xc0000000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                              >> 0x20U)) 
                                     >> 2U)) | (0x3ffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             << 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                            >> 0x20U)) 
                                                   >> 2U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0xfU] 
        = ((0x3f8U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      << 3U)) | (0xfffffc00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x10U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x1dU) | (0x3f8U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 3U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 3U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x11U] 
        = (0x30U | (((0x300U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                         | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                << 8U)) | ((IData)(
                                                   ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                     ^ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                    >> 0x20U)) 
                                           >> 0x1dU)) 
                    | (0xfffffc00U & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                               | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                      << 8U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x12U] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x18U) | (0x300U & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 8U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x13U] 
        = (0x100U | (((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                               >> 0x20U)) >> 0x18U) 
                     | (0x800U | ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                           & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                  << 0xdU))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x14U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      >> 0x13U)) | ((0x1c00U & ((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                >> 0x13U)) 
                                    | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                >> 0x20U)) 
                                       << 0xdU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x15U] 
        = (0x16000U | ((0x3ffU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                            & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                           >> 0x20U)) 
                                  >> 0x13U)) | (((IData)(
                                                         (~ 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                           | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                 << 0x12U) 
                                                | (0x1c00U 
                                                   & ((IData)(
                                                              ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                               >> 0x20U)) 
                                                      >> 0x13U)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x16U] 
        = ((0x3ffU & ((IData)((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                  | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                      >> 0xeU)) | ((0x3fc00U & ((IData)(
                                                        (~ 
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))) 
                                                >> 0xeU)) 
                                   | ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                   | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x17U] 
        = (0x280000U | ((0x3ffU & ((IData)(((~ (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                            >> 0x20U)) 
                                   >> 0xeU)) | (((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                          - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                 << 0x17U) 
                                                | (0x3fc00U 
                                                   & ((IData)(
                                                              ((~ 
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                 | vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                                               >> 0x20U)) 
                                                      >> 0xeU)))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x18U] 
        = ((0x3ffU & ((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                               - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                      >> 9U)) | ((0x7ffc00U & ((IData)(
                                                       (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                        - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
                                               >> 9U)) 
                                 | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 0x17U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x19U] 
        = __Vtemp27[0x19U];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1aU] 
        = ((0x3ffU & ((IData)((2ULL + ((((QData)((IData)(
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
                      >> 4U)) | (__Vtemp19[0x14U] << 0xaU));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1bU] 
        = (0x10000000U | ((__Vtemp19[0x14U] >> 0x16U) 
                          | (0xffffc00U & ((IData)(
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
                                           >> 4U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1cU] 
        = __Vtemp27[0x1cU];
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1dU] 
        = ((((IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                      + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)) 
             >> 0x1fU) | (0x3feU & ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                              + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                             >> 0x20U)) 
                                    << 1U))) | (0xfffffc00U 
                                                & ((IData)(
                                                           ((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   << 1U)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4[0x1eU] 
        = (0x24U | ((IData)(((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                              + vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2) 
                             >> 0x20U)) >> 0x1fU));
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
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en 
            = ((0x23U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
               & ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                  | ((~ ((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                         & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu))) 
                     & (~ ((0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                           & (~ (IData)((vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu 
                                         >> 1U))))))));
    }
    if ((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type) 
          & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo))) 
         & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))) {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_write_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr, vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata, 
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
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo = 1U;
    } else if ((((0ULL != vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr) 
                 & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo))) 
                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))) {
        Vysyx_22041412_cpu___024root____Vdpiimwrap_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read_TOP(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr, __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata);
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r 
            = __Vtask_ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__mem_read__1__rdata;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data 
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
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo = 1U;
    } else if (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)) 
                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo))) {
        __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo = 0U;
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw 
            = ((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                ? 0U : ((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                         ? 0U : (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 7U))));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3;
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type 
            = (0x23U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                : ((3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                    : 0ULL));
    }
    if ((1U & ((~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                   >> 4U)) & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait))))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en 
            = ((0x23U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
               | (3U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)));
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__ex_wait;
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 2U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
        if ((((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
              | (0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
             | (0x67U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc = 0ULL;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3 
            = (7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                     >> 0xcU));
    }
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 3U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode 
            = (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm);
    }
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en 
        = ((0x1bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
           | (0x3bU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)));
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
                                  ? 0x12U : ((0x37U 
                                              == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                              ? 0xeU
                                              : (((
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)) 
                                                    | (0x23U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) 
                                                   | (0x6fU 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))) 
                                                  | (0x67U 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                                  ? 0x12U
                                                  : 0U))))))));
    if ((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                  >> 2U)))) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
            [(0x7ffffffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))];
        if ((((0x6fU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode)) 
              | (0x63U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode))) 
             | (0x67U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_opcode)))) {
            vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm = 0U;
        }
    }
    if (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1));
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub 
            = (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2));
    } else {
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1;
        vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub 
            = vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2;
    }
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc 
        = __Vdly__ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst)
            ? 0U : ((1U & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                           | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                               ? 1U : 0U))) ? 0x3fU
                     : ((1U & ((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                 ? 1U : 0U) | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))
                         ? 0xfU : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall)
                                    ? 7U : 0U))));
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
                                                   (0x63U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode))
                                                    ? 
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                        == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                     ? 1ULL
                                                     : 
                                                    (((1U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                      & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                         != vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                      ? 1ULL
                                                      : 
                                                     (((4U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                       & VL_GTS_IQQ(1,64,64, 0ULL, 
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                     - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))
                                                       ? 1ULL
                                                       : 
                                                      (((5U 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                        & VL_LTES_IQQ(1,64,64, 0ULL, 
                                                                      (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                       - vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2)))
                                                        ? 1ULL
                                                        : 
                                                       (((6U 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                         & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                            < vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                         ? 1ULL
                                                         : 
                                                        (((7U 
                                                           == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3)) 
                                                          & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                             >= vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))
                                                          ? 1ULL
                                                          : 0ULL))))))
                                                    : 
                                                   (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) 
                                                     & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en)))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result)))
                                                     : 
                                                    (((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en) 
                                                      & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data)))
                                                      : 
                                                     (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en)) 
                                                       & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                                       ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data
                                                       : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result)))));
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
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
            ? 0U : (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                             >> 0xfU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type 
        = ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
              & (0x17U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type) 
           | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
              | ((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                 | (0x6fU == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
    VL_EXTEND_WQ(65,64, __Vtemp124, (((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                  >> 0x14U)))));
    VL_EXTEND_WQ(65,64, __Vtemp125, (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
    VL_EXTEND_WQ(65,64, __Vtemp126, (((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                            >> 0x14U))))))));
    VL_EXTEND_WQ(65,64, __Vtemp127, (((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                           >> 7U))))))));
    VL_EXTEND_WQ(65,64, __Vtemp128, (((- (QData)((IData)(
                                                         (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                        >> 7U)))))));
    VL_EXTEND_WI(65,5, __Vtemp129, (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU)));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data 
        = (((QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                              ? __Vtemp124[1U] : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                                                   ? 
                                                  __Vtemp125[1U]
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                    ? 
                                                   __Vtemp126[1U]
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                     ? 
                                                    __Vtemp127[1U]
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                      ? 
                                                     __Vtemp128[1U]
                                                      : 
                                                     ((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                       ? 
                                                      __Vtemp129[1U]
                                                       : 0U)))))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                          ? __Vtemp124[0U]
                                          : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                                              ? __Vtemp125[0U]
                                              : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                  ? 
                                                 __Vtemp126[0U]
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                   ? 
                                                  __Vtemp127[0U]
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                    ? 
                                                   __Vtemp128[0U]
                                                    : 
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                     ? 
                                                    __Vtemp129[0U]
                                                     : 0U)))))))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb 
        = ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
            ? 0U : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type)
                     ? 0U : (0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                      >> 0x14U))));
    vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB 
        = ((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb))
            ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
           [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb]);
}

void Vysyx_22041412_cpu___024root___eval(Vysyx_22041412_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_cpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041412_cpu___024root___sequent__TOP__1(vlSelf);
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
