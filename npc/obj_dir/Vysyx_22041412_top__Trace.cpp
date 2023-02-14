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
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
            tracep->chgBit(oldp+1,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                             >> 1U)))));
            tracep->chgBit(oldp+2,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                             >> 2U)))));
            tracep->chgBit(oldp+3,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                             >> 3U)))));
            tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                             >> 4U)))));
            tracep->chgBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                             >> 5U)))));
            tracep->chgBit(oldp+6,(vlSelf->ysyx_22041412_top__DOT__id_stall));
            tracep->chgBit(oldp+7,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                            ? 1U : 0U) 
                                          | (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+8,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
            tracep->chgBit(oldp+10,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+11,((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                            | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                ? 1U
                                                : 0U)) 
                                           | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                               ? 1U
                                               : 0U)))));
            tracep->chgIData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__imm_data),32);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__if_dnpc),64);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
            tracep->chgBit(oldp+22,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                                     & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                        >> 0x19U))));
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
            tracep->chgCData(oldp+25,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+26,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
            tracep->chgCData(oldp+29,(((0x23U == (0x7fU 
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
            tracep->chgCData(oldp+30,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
            tracep->chgQData(oldp+31,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                        ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                       [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
            tracep->chgSData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__csr),12);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
            tracep->chgBit(oldp+38,(((0x73U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                      ? 1U : 0U)));
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
            tracep->chgCData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
            tracep->chgQData(oldp+59,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
            tracep->chgQData(oldp+61,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
            tracep->chgQData(oldp+63,((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
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
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
            tracep->chgBit(oldp+70,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
            tracep->chgCData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
            tracep->chgBit(oldp+72,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
            tracep->chgBit(oldp+73,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                      ? 1U : 0U)));
            tracep->chgIData(oldp+74,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
            tracep->chgCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
            tracep->chgBit(oldp+91,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
            tracep->chgBit(oldp+94,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
            tracep->chgIData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+111,((0x6fU == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+112,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+113,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_top__DOT__id_imm))));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
            tracep->chgCData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+132,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+134,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))),64);
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
            tracep->chgBit(oldp+141,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgBit(oldp+142,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
            tracep->chgIData(oldp+143,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
            tracep->chgIData(oldp+144,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
            tracep->chgWData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
            tracep->chgWData(oldp+182,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+185,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+188,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+191,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+194,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+197,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+200,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+203,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+206,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+209,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+212,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+215,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+218,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+221,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+224,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+227,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+230,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+239,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+245,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+286,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+289,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
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
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+304,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+308,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+312,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+314,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+316,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+328,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+330,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+334,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+336,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+338,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+340,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
            tracep->chgBit(oldp+354,((((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                       & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))
                                       ? 1U : 0U)));
        }
        tracep->chgBit(oldp+355,(vlSelf->clk));
        tracep->chgBit(oldp+356,(vlSelf->rst));
        tracep->chgQData(oldp+357,(vlSelf->pip_pc),64);
        tracep->chgQData(oldp+359,(vlSelf->pip_dnpc),64);
        tracep->chgQData(oldp+361,(vlSelf->pip_mem_pc),64);
        tracep->chgIData(oldp+363,(vlSelf->pip_imm),32);
        tracep->chgBit(oldp+364,(vlSelf->Ebreak));
        tracep->chgBit(oldp+365,(vlSelf->io_master_awready));
        tracep->chgBit(oldp+366,(vlSelf->io_master_awvalid));
        tracep->chgIData(oldp+367,(vlSelf->io_master_awaddr),32);
        tracep->chgCData(oldp+368,(vlSelf->io_master_awprot),3);
        tracep->chgCData(oldp+369,(vlSelf->io_master_awid),4);
        tracep->chgBit(oldp+370,(vlSelf->io_master_awuser));
        tracep->chgCData(oldp+371,(vlSelf->io_master_awlen),8);
        tracep->chgCData(oldp+372,(vlSelf->io_master_awsize),3);
        tracep->chgCData(oldp+373,(vlSelf->io_master_awburst),2);
        tracep->chgBit(oldp+374,(vlSelf->io_master_awlock));
        tracep->chgCData(oldp+375,(vlSelf->io_master_awcache),4);
        tracep->chgCData(oldp+376,(vlSelf->io_master_awqos),4);
        tracep->chgCData(oldp+377,(vlSelf->io_master_awregion),4);
        tracep->chgBit(oldp+378,(vlSelf->io_master_wready));
        tracep->chgBit(oldp+379,(vlSelf->io_master_wvalid));
        tracep->chgQData(oldp+380,(vlSelf->io_master_wdata),64);
        tracep->chgCData(oldp+382,(vlSelf->io_master_wstrb),8);
        tracep->chgBit(oldp+383,(vlSelf->io_master_wlast));
        tracep->chgBit(oldp+384,(vlSelf->io_master_wuser));
        tracep->chgBit(oldp+385,(vlSelf->io_master_bready));
        tracep->chgBit(oldp+386,(vlSelf->io_master_bvalid));
        tracep->chgCData(oldp+387,(vlSelf->io_master_bresp),2);
        tracep->chgCData(oldp+388,(vlSelf->io_master_bid),4);
        tracep->chgBit(oldp+389,(vlSelf->io_master_buser));
        tracep->chgBit(oldp+390,(vlSelf->io_master_arready));
        tracep->chgBit(oldp+391,(vlSelf->io_master_arvalid));
        tracep->chgIData(oldp+392,(vlSelf->io_master_araddr),32);
        tracep->chgCData(oldp+393,(vlSelf->io_master_arprot),3);
        tracep->chgCData(oldp+394,(vlSelf->io_master_arid),4);
        tracep->chgBit(oldp+395,(vlSelf->io_master_aruser));
        tracep->chgCData(oldp+396,(vlSelf->io_master_arlen),8);
        tracep->chgCData(oldp+397,(vlSelf->io_master_arsize),3);
        tracep->chgCData(oldp+398,(vlSelf->io_master_arburst),2);
        tracep->chgBit(oldp+399,(vlSelf->io_master_arlock));
        tracep->chgCData(oldp+400,(vlSelf->io_master_arcache),4);
        tracep->chgCData(oldp+401,(vlSelf->io_master_arqos),4);
        tracep->chgCData(oldp+402,(vlSelf->io_master_arregion),4);
        tracep->chgBit(oldp+403,(vlSelf->io_master_rready));
        tracep->chgBit(oldp+404,(vlSelf->io_master_rvalid));
        tracep->chgCData(oldp+405,(vlSelf->io_master_rresp),2);
        tracep->chgQData(oldp+406,(vlSelf->io_master_rdata),64);
        tracep->chgBit(oldp+408,(vlSelf->io_master_rlast));
        tracep->chgCData(oldp+409,(vlSelf->io_master_rid),4);
        tracep->chgBit(oldp+410,(vlSelf->io_master_ruser));
        tracep->chgBit(oldp+411,(vlSelf->io_slave_awready));
        tracep->chgBit(oldp+412,(vlSelf->io_slave_awvalid));
        tracep->chgIData(oldp+413,(vlSelf->io_slave_awaddr),32);
        tracep->chgCData(oldp+414,(vlSelf->io_slave_awid),4);
        tracep->chgCData(oldp+415,(vlSelf->io_slave_awlen),8);
        tracep->chgCData(oldp+416,(vlSelf->io_slave_awsize),3);
        tracep->chgCData(oldp+417,(vlSelf->io_slave_awburst),2);
        tracep->chgBit(oldp+418,(vlSelf->io_slave_wready));
        tracep->chgBit(oldp+419,(vlSelf->io_slave_wvalid));
        tracep->chgQData(oldp+420,(vlSelf->io_slave_wdata),64);
        tracep->chgCData(oldp+422,(vlSelf->io_slave_wstrb),8);
        tracep->chgBit(oldp+423,(vlSelf->io_slave_wlast));
        tracep->chgBit(oldp+424,(vlSelf->io_slave_bready));
        tracep->chgBit(oldp+425,(vlSelf->io_slave_bvalid));
        tracep->chgCData(oldp+426,(vlSelf->io_slave_bresp),2);
        tracep->chgCData(oldp+427,(vlSelf->io_slave_bid),4);
        tracep->chgBit(oldp+428,(vlSelf->io_slave_arready));
        tracep->chgBit(oldp+429,(vlSelf->io_slave_arvalid));
        tracep->chgIData(oldp+430,(vlSelf->io_slave_araddr),32);
        tracep->chgCData(oldp+431,(vlSelf->io_slave_arid),4);
        tracep->chgCData(oldp+432,(vlSelf->io_slave_arlen),8);
        tracep->chgCData(oldp+433,(vlSelf->io_slave_arsize),3);
        tracep->chgCData(oldp+434,(vlSelf->io_slave_arburst),2);
        tracep->chgBit(oldp+435,(vlSelf->io_slave_rready));
        tracep->chgBit(oldp+436,(vlSelf->io_slave_rvalid));
        tracep->chgCData(oldp+437,(vlSelf->io_slave_rresp),2);
        tracep->chgQData(oldp+438,(vlSelf->io_slave_rdata),64);
        tracep->chgBit(oldp+440,(vlSelf->io_slave_rlast));
        tracep->chgCData(oldp+441,(vlSelf->io_slave_rid),4);
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
