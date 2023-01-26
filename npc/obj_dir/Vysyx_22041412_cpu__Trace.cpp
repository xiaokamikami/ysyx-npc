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
            tracep->chgBit(oldp+8,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                            ? 1U : 0U) 
                                          | (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
            tracep->chgBit(oldp+9,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready)) 
                                     & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait));
            tracep->chgBit(oldp+11,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                      & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+12,((1U & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wait) 
                                           | (((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo)) 
                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                               ? 1U
                                               : 0U)))));
            tracep->chgIData(oldp+13,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
                                      [(0x7ffffffU 
                                        & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))]),32);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
            tracep->chgIData(oldp+18,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
            tracep->chgBit(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type));
            tracep->chgBit(oldp+23,((((0x33U == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))) 
                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x19U))));
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
            tracep->chgCData(oldp+26,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra),5);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb),5);
            tracep->chgCData(oldp+30,(((0x23U == (0x7fU 
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
            tracep->chgCData(oldp+31,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
            tracep->chgQData(oldp+32,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra])),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V1Type));
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_V2Type));
            tracep->chgIData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
            tracep->chgCData(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
            tracep->chgCData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra),5);
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb),5);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
            tracep->chgBit(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
            tracep->chgCData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
            tracep->chgQData(oldp+56,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)
                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc
                                        : (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                            & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                            : (((((
                                                   (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                                : (
                                                   (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra) 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                    : 
                                                   (((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V1Type)) 
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
                                                     [vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Ra]))))))),64);
            tracep->chgQData(oldp+58,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)
                                        ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data
                                        : (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                              & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                 == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                            & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode)))
                                            ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu
                                            : (((((
                                                   (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                   & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                      != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                     == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en)))
                                                ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res
                                                : (
                                                   (((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                          != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
                                                         == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw))) 
                                                    & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data
                                                    : 
                                                   (((((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_V2Type)) 
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
            tracep->chgQData(oldp+60,((((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_Rb) 
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
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgIData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en));
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_res),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data),64);
            tracep->chgBit(oldp+83,((1U & (~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_wait)))));
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_readyo));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en));
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
            tracep->chgBit(oldp+96,(((0x73U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+97,(((0x30200073U == vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+100,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+101,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+102,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+103,(((0x33U == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
            tracep->chgBit(oldp+104,((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgCData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+106,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+108,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en));
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready));
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub),64);
            tracep->chgWData(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),966);
            tracep->chgWData(oldp+151,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+154,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+157,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+166,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+169,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+172,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+205,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+240,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
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
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
            tracep->chgBit(oldp+305,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en) 
                                       & (0U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr)))
                                       ? 1U : 0U)));
        }
        tracep->chgBit(oldp+306,(vlSelf->clk));
        tracep->chgQData(oldp+307,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+309,(vlSelf->CP_NPC),64);
        tracep->chgIData(oldp+311,(vlSelf->CP_IMM),32);
        tracep->chgBit(oldp+312,(vlSelf->Ebreak));
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
