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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_en));
            tracep->chgBit(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_en));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm),32);
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_en));
            tracep->chgIData(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
                                     [(0x7ffffffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))]),32);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_en));
            tracep->chgBit(oldp+10,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type) 
                                     | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))));
            tracep->chgBit(oldp+11,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                      ? (IData)((0x67U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                                      : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                         | ((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                            | ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                               | ((~ 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                                    | (0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) 
                                                  & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type))))))));
            tracep->chgIData(oldp+12,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
            tracep->chgBit(oldp+13,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                           >> 0x19U))));
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
            tracep->chgQData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
            tracep->chgCData(oldp+18,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+19,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+20,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+21,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+22,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                >> 7U))),5);
            tracep->chgCData(oldp+23,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
            tracep->chgQData(oldp+24,(((0U == (0x1fU 
                                               & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                       [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
            tracep->chgIData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_en));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
            tracep->chgIData(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
            tracep->chgCData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
            tracep->chgCData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
            tracep->chgCData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
            tracep->chgBit(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rdata),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en));
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
            tracep->chgBit(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
            tracep->chgBit(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type));
            tracep->chgBit(oldp+77,((0x63U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+78,((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
            tracep->chgBit(oldp+79,(((0x33U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
            tracep->chgQData(oldp+80,((((- (QData)((IData)(
                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                    >> 0x14U))))),64);
            tracep->chgQData(oldp+82,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))),64);
            tracep->chgQData(oldp+84,((((- (QData)((IData)(
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
                                                                              >> 0x14U)))))))),64);
            tracep->chgQData(oldp+86,((((- (QData)((IData)(
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
                                                                             >> 7U)))))))),64);
            tracep->chgQData(oldp+88,((((- (QData)((IData)(
                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 7U))))))),64);
            tracep->chgCData(oldp+90,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
            tracep->chgQData(oldp+91,((1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
            tracep->chgQData(oldp+93,((1ULL + (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU) 
                                               | (0x7fffffffffffffffULL 
                                                  & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1035);
            tracep->chgWData(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+133,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+136,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+139,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+142,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+145,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+148,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+151,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+154,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+157,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+160,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+163,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+166,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+169,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+172,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgCData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+225,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
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
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        }
        tracep->chgBit(oldp+290,(vlSelf->clk));
        tracep->chgQData(oldp+291,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+293,(vlSelf->CP_NPC),64);
        tracep->chgIData(oldp+295,(vlSelf->CP_IMM),32);
        tracep->chgBit(oldp+296,(vlSelf->Ebreak));
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
