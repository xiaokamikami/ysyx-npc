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
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22041412_top__DOT__w_valid));
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22041412_top__DOT__axi_w_data),64);
            tracep->chgIData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__axi_r_addr),32);
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__axi_w_addr),32);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__r_strb),8);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_22041412_top__DOT__w_strb),8);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__r_len_i),8);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__w_len_i),8);
            tracep->chgBit(oldp+13,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
            tracep->chgBit(oldp+14,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),64);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__if_ar_size),8);
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22041412_top__DOT__mem_rw_ready));
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
            tracep->chgBit(oldp+23,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 1U)))));
            tracep->chgBit(oldp+24,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 2U)))));
            tracep->chgBit(oldp+25,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 3U)))));
            tracep->chgBit(oldp+26,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 4U)))));
            tracep->chgBit(oldp+27,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                              >> 5U)))));
            tracep->chgBit(oldp+28,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                             ? 1U : 0U) 
                                           | (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+29,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
            tracep->chgBit(oldp+31,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+32,((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                            | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                ? 1U
                                                : 0U)) 
                                           | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                               ? 1U
                                               : 0U)))));
            tracep->chgIData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
            tracep->chgBit(oldp+37,((((((0x6fU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
                                       | (0x67U == 
                                          (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))) 
                                      | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
            tracep->chgBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__if_wait));
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__jar_end));
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
            tracep->chgBit(oldp+46,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                                     & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                        >> 0x19U))));
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
            tracep->chgCData(oldp+49,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+50,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
            tracep->chgCData(oldp+53,(((0x23U == (0x7fU 
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
            tracep->chgCData(oldp+54,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
            tracep->chgQData(oldp+55,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
            tracep->chgBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
            tracep->chgSData(oldp+60,(vlSelf->ysyx_22041412_top__DOT__csr),12);
            tracep->chgCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
            tracep->chgBit(oldp+62,(((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                      ? 1U : 0U)));
            tracep->chgCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
            tracep->chgCData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
            tracep->chgQData(oldp+83,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
            tracep->chgQData(oldp+85,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
            tracep->chgQData(oldp+87,((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
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
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
            tracep->chgBit(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
            tracep->chgBit(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
            tracep->chgBit(oldp+97,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                      ? 1U : 0U)));
            tracep->chgIData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
            tracep->chgCData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
            tracep->chgCData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
            tracep->chgBit(oldp+103,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
            tracep->chgBit(oldp+120,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
            tracep->chgIData(oldp+123,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
            tracep->chgCData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
            tracep->chgBit(oldp+134,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
            tracep->chgCData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_state),2);
            tracep->chgCData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_state),2);
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid_o));
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__dnpc),64);
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+142,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+143,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+144,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
            tracep->chgCData(oldp+162,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+163,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+165,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))),64);
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
            tracep->chgBit(oldp+172,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgBit(oldp+173,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgIData(oldp+174,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
            tracep->chgIData(oldp+175,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
            tracep->chgWData(oldp+176,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
            tracep->chgWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgCData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+317,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+320,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
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
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+341,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+343,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+345,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+347,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+349,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+351,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+353,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+355,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+357,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
            tracep->chgBit(oldp+385,((((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                       & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))
                                       ? 1U : 0U)));
        }
        tracep->chgBit(oldp+386,(vlSelf->clk));
        tracep->chgBit(oldp+387,(vlSelf->rst));
        tracep->chgQData(oldp+388,(vlSelf->pip_pc),64);
        tracep->chgQData(oldp+390,(vlSelf->pip_dnpc),64);
        tracep->chgQData(oldp+392,(vlSelf->pip_mem_pc),64);
        tracep->chgIData(oldp+394,(vlSelf->pip_imm),32);
        tracep->chgBit(oldp+395,(vlSelf->Ebreak));
        tracep->chgBit(oldp+396,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+397,(vlSelf->io_master_awvalid));
        tracep->chgIData(oldp+398,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+399,(vlSelf->io_master_awprot),3);
        tracep->chgCData(oldp+400,(vlSelf->io_master_awid),4);
        tracep->chgBit(oldp+401,(vlSelf->io_master_awuser));
        tracep->chgCData(oldp+402,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+403,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+404,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+405,(vlSelf->io_master_awlock));
        tracep->chgCData(oldp+406,(vlSelf->io_master_awcache),4);
        tracep->chgCData(oldp+407,(vlSelf->io_master_awqos),4);
        tracep->chgCData(oldp+408,(vlSelf->io_master_awregion),4);
        tracep->chgBit(oldp+409,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+410,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+411,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+413,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+414,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+415,(vlSelf->io_master_wuser));
        tracep->chgBit(oldp+416,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+417,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+418,(vlSelf->io_master_bresp),2);
        tracep->chgCData(oldp+419,(vlSelf->io_master_bid),4);
        tracep->chgBit(oldp+420,(vlSelf->io_master_buser));
        tracep->chgBit(oldp+421,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+422,(vlSelf->io_master_arvalid));
        tracep->chgIData(oldp+423,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+424,(vlSelf->io_master_arprot),3);
        tracep->chgCData(oldp+425,(vlSelf->io_master_arid),4);
        tracep->chgBit(oldp+426,(vlSelf->io_master_aruser));
        tracep->chgCData(oldp+427,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+428,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+429,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+430,(vlSelf->io_master_arlock));
        tracep->chgCData(oldp+431,(vlSelf->io_master_arcache),4);
        tracep->chgCData(oldp+432,(vlSelf->io_master_arqos),4);
        tracep->chgCData(oldp+433,(vlSelf->io_master_arregion),4);
        tracep->chgBit(oldp+434,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+435,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+436,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+437,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+439,(vlSelf->io_master_rlast));
        tracep->chgCData(oldp+440,(vlSelf->io_master_rid),4);
        tracep->chgBit(oldp+441,(vlSelf->io_master_ruser));
        tracep->chgBit(oldp+442,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+443,(vlSelf->io_slave_awvalid));
        tracep->chgIData(oldp+444,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+445,(vlSelf->io_slave_awid),4);
        tracep->chgCData(oldp+446,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+447,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+448,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+449,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+450,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+451,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+453,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+454,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+455,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+456,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+457,(vlSelf->io_slave_bresp),2);
        tracep->chgCData(oldp+458,(vlSelf->io_slave_bid),4);
        tracep->chgBit(oldp+459,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+460,(vlSelf->io_slave_arvalid));
        tracep->chgIData(oldp+461,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+462,(vlSelf->io_slave_arid),4);
        tracep->chgCData(oldp+463,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+464,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+465,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+466,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+467,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+468,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+469,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+471,(vlSelf->io_slave_rlast));
        tracep->chgCData(oldp+472,(vlSelf->io_slave_rid),4);
        tracep->chgCData(oldp+473,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_next_state),2);
        tracep->chgCData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_next_state),2);
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
