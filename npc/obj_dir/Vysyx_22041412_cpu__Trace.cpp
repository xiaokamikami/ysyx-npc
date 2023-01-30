// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_cpu__Syms.h"


void Vysyx_22041412_cpu___024root__traceChgSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041412_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceChgSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm),32);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall),6);
            tracep->chgBit(oldp+2,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                             >> 1U)))));
            tracep->chgBit(oldp+3,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                             >> 2U)))));
            tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                             >> 3U)))));
            tracep->chgBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                             >> 4U)))));
            tracep->chgBit(oldp+6,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                             >> 5U)))));
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall));
            tracep->chgBit(oldp+8,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait));
            tracep->chgBit(oldp+10,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                      & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+11,((1U & (((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                                              | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                  ? 1U
                                                  : 0U)) 
                                             | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                                 & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                                 ? 1U
                                                 : 0U)) 
                                            | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                                ? 1U
                                                : 0U)) 
                                           | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
            tracep->chgIData(oldp+12,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
                                      [(0x7ffffffU 
                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))]),32);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type),2);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type),2);
            tracep->chgBit(oldp+22,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type) 
                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x19U))));
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
            tracep->chgCData(oldp+25,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+26,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra),5);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb),5);
            tracep->chgCData(oldp+29,(((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                        ? 0U : ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                    >> 7U))))),5);
            tracep->chgCData(oldp+30,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
            tracep->chgQData(oldp+31,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_jar_en));
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr),12);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_csr_id),3);
            tracep->chgBit(oldp+38,(((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))
                                      ? 1U : 0U)));
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type),2);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type),2);
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra),5);
            tracep->chgCData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb),5);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
            tracep->chgQData(oldp+59,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type))
                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc
                                        : ((2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type))
                                            ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                            : (((((0U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                & (3U 
                                                   != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                                : (
                                                   (((((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                    & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                                    : 
                                                   ((((((0U 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                        & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                           != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                     ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                     : 
                                                    (((((((0U 
                                                           == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                          & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                             != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                         & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                            != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                        & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                           == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                      & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                      ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                                       ? 0ULL
                                                       : 
                                                      vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                                      [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])))))))),64);
            tracep->chgQData(oldp+61,(((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type))
                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data
                                        : (((((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                            & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                            : (((((
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                                : (
                                                   (((((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                    : 
                                                   (((((((0U 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                         & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                            != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                        & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                           != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                     ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                     : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB)))))),64);
            tracep->chgQData(oldp+63,((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                          == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                         & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                        & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                        : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                               != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                            & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                            : ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                   != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw)) 
                                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                : (
                                                   ((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr))) 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data
                                                    : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB))))),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_r),64);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_jar_en));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en));
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_id),3);
            tracep->chgBit(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready));
            tracep->chgBit(oldp+73,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_csr_en))
                                      ? 1U : 0U)));
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en));
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res),64);
            tracep->chgBit(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_csr_jar_en));
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data),64);
            tracep->chgBit(oldp+94,((1U & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en));
            tracep->chgCData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
            tracep->chgBit(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_csr_jar_en));
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[0]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[1]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[2]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[3]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[4]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__mcsr_reg[5]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data_w),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__csr_reg__DOT__data),64);
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+125,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+126,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+127,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+128,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__R_type));
            tracep->chgCData(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+131,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+133,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready));
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data),64);
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en));
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub),64);
            tracep->chgWData(oldp+145,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),966);
            tracep->chgWData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgCData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+224,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+265,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                         ? 1U : ((1U 
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
                                                    : 0U))))),8);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
            tracep->chgBit(oldp+330,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en) 
                                       & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))
                                       ? 1U : 0U)));
        }
        tracep->chgBit(oldp+331,(vlSelf->clk));
        tracep->chgQData(oldp+332,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+334,(vlSelf->CP_NPC),64);
        tracep->chgIData(oldp+336,(vlSelf->CP_IMM),32);
        tracep->chgBit(oldp+337,(vlSelf->Ebreak));
    }
}

void Vysyx_22041412_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
