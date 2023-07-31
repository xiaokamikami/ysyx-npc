// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_top__Syms.h"


void Vysyx_22041412_top___024root__traceChgSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041412_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_top___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22041412_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_top___024root__traceChgSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22041412_top__DOT__r_valid));
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22041412_top__DOT__r_ready));
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
            tracep->chgIData(oldp+4,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                       ? vlSelf->ysyx_22041412_top__DOT__mem_rw_addr
                                       : vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),32);
            tracep->chgCData(oldp+5,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                       ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                                       : (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_size))),8);
            tracep->chgCData(oldp+6,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                       ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len)
                                       : (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_len))),8);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
            tracep->chgBit(oldp+8,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),64);
            tracep->chgIData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__if_ar_size),8);
            tracep->chgBit(oldp+13,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                            ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                            : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
            tracep->chgBit(oldp+15,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 1U)))));
            tracep->chgBit(oldp+16,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 2U)))));
            tracep->chgBit(oldp+17,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 3U)))));
            tracep->chgBit(oldp+18,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 4U)))));
            tracep->chgBit(oldp+19,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 5U)))));
            tracep->chgBit(oldp+20,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                             ? 1U : 0U) 
                                           | (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+21,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
            tracep->chgBit(oldp+23,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+24,((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                            | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                ? 1U
                                                : 0U)) 
                                           | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                               ? 1U
                                               : 0U)))));
            tracep->chgIData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
            tracep->chgBit(oldp+29,((((((0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
                                       | (0x67U == 
                                          (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
                                      | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22041412_top__DOT__if_wait));
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__jar_end));
            tracep->chgIData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
            tracep->chgBit(oldp+38,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                                     & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                        >> 0x19U))));
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
            tracep->chgCData(oldp+41,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+42,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
            tracep->chgCData(oldp+45,(((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 7U))))),5);
            tracep->chgCData(oldp+46,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
            tracep->chgQData(oldp+47,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
            tracep->chgBit(oldp+51,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
            tracep->chgSData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__csr),12);
            tracep->chgCData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
            tracep->chgBit(oldp+54,(((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                      ? 1U : 0U)));
            tracep->chgCData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
            tracep->chgIData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
            tracep->chgBit(oldp+60,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
            tracep->chgCData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
            tracep->chgCData(oldp+70,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
            tracep->chgCData(oldp+72,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
            tracep->chgQData(oldp+75,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                        ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                        : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                            ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                            : (((((0U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                & (3U 
                                                   != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                                ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                                : (
                                                   (((((0U 
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
                                                      [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))))),64);
            tracep->chgQData(oldp+77,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                        ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                        : (((((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                              & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                            & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                            ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                            : (((((
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                   & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                                ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                : (
                                                   (((((0U 
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
                                                     : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
            tracep->chgQData(oldp+79,((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                          == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                         & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                        & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                        ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                        : ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                               != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                              & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                            & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                            ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                            : ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                   != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                : (
                                                   ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                    ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                    : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
            tracep->chgCData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
            tracep->chgBit(oldp+89,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                      ? 1U : 0U)));
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
            tracep->chgCData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
            tracep->chgCData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
            tracep->chgCData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
            tracep->chgBit(oldp+94,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
            tracep->chgBit(oldp+112,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
            tracep->chgIData(oldp+115,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
            tracep->chgCData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
            tracep->chgCData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
            tracep->chgCData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o));
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc),64);
            tracep->chgBit(oldp+133,(((((0x67U == (0x7fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data))) 
                                        | (0x6fU == 
                                           (0x7fU & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data)))) 
                                       | (0x63U == 
                                          (0x7fU & (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_data)))) 
                                      | (IData)((0x100073ULL 
                                                 == 
                                                 (0xfff0007fULL 
                                                  & vlSelf->ysyx_22041412_top__DOT__if_ar_data))))));
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__jarl_en));
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+137,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+138,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+139,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
            tracep->chgCData(oldp+157,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+158,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+160,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))),64);
            tracep->chgBit(oldp+162,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
            tracep->chgBit(oldp+167,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgBit(oldp+168,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgIData(oldp+169,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
            tracep->chgIData(oldp+170,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
            tracep->chgWData(oldp+171,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
            tracep->chgWData(oldp+208,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+211,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+214,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+217,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+220,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+223,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+226,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+229,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+232,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+235,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgCData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+312,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+315,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                         ? 1U : ((1U 
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
                                                    : 0U))))),8);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
            tracep->chgBit(oldp+380,((((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                       & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))
                                       ? 1U : 0U)));
        }
        tracep->chgBit(oldp+381,(vlSelf->clk));
        tracep->chgBit(oldp+382,(vlSelf->rst));
        tracep->chgQData(oldp+383,(vlSelf->pip_pc),64);
        tracep->chgQData(oldp+385,(vlSelf->pip_dnpc),64);
        tracep->chgQData(oldp+387,(vlSelf->pip_mem_pc),64);
        tracep->chgIData(oldp+389,(vlSelf->pip_imm),32);
        tracep->chgBit(oldp+390,(vlSelf->Ebreak));
        tracep->chgBit(oldp+391,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+392,(vlSelf->io_master_awvalid));
        tracep->chgIData(oldp+393,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+394,(vlSelf->io_master_awprot),3);
        tracep->chgCData(oldp+395,(vlSelf->io_master_awid),4);
        tracep->chgBit(oldp+396,(vlSelf->io_master_awuser));
        tracep->chgCData(oldp+397,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+398,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+399,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+400,(vlSelf->io_master_awlock));
        tracep->chgCData(oldp+401,(vlSelf->io_master_awcache),4);
        tracep->chgCData(oldp+402,(vlSelf->io_master_awqos),4);
        tracep->chgCData(oldp+403,(vlSelf->io_master_awregion),4);
        tracep->chgBit(oldp+404,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+405,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+406,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+408,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+409,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+410,(vlSelf->io_master_wuser));
        tracep->chgBit(oldp+411,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+412,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+413,(vlSelf->io_master_bresp),2);
        tracep->chgCData(oldp+414,(vlSelf->io_master_bid),4);
        tracep->chgBit(oldp+415,(vlSelf->io_master_buser));
        tracep->chgBit(oldp+416,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+417,(vlSelf->io_master_arvalid));
        tracep->chgIData(oldp+418,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+419,(vlSelf->io_master_arprot),3);
        tracep->chgCData(oldp+420,(vlSelf->io_master_arid),4);
        tracep->chgBit(oldp+421,(vlSelf->io_master_aruser));
        tracep->chgCData(oldp+422,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+423,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+424,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+425,(vlSelf->io_master_arlock));
        tracep->chgCData(oldp+426,(vlSelf->io_master_arcache),4);
        tracep->chgCData(oldp+427,(vlSelf->io_master_arqos),4);
        tracep->chgCData(oldp+428,(vlSelf->io_master_arregion),4);
        tracep->chgBit(oldp+429,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+430,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+431,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+432,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+434,(vlSelf->io_master_rlast));
        tracep->chgCData(oldp+435,(vlSelf->io_master_rid),4);
        tracep->chgBit(oldp+436,(vlSelf->io_master_ruser));
        tracep->chgBit(oldp+437,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+438,(vlSelf->io_slave_awvalid));
        tracep->chgIData(oldp+439,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+440,(vlSelf->io_slave_awid),4);
        tracep->chgCData(oldp+441,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+442,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+443,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+444,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+445,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+446,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+448,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+449,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+450,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+451,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+452,(vlSelf->io_slave_bresp),2);
        tracep->chgCData(oldp+453,(vlSelf->io_slave_bid),4);
        tracep->chgBit(oldp+454,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+455,(vlSelf->io_slave_arvalid));
        tracep->chgIData(oldp+456,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+457,(vlSelf->io_slave_arid),4);
        tracep->chgCData(oldp+458,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+459,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+460,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+461,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+462,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+463,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+464,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+466,(vlSelf->io_slave_rlast));
        tracep->chgCData(oldp+467,(vlSelf->io_slave_rid),4);
        tracep->chgCData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
        tracep->chgCData(oldp+469,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    }
}

void Vysyx_22041412_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22041412_top___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
