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
    VlWide<3>/*95:0*/ __Vtemp261;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0]),4);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0]));
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0]),4);
            tracep->chgBit(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
            tracep->chgBit(oldp+7,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                     | (0xbU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__Reg_EN));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN));
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
            tracep->chgQData(oldp+14,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
            tracep->chgIData(oldp+16,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+18,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+19,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 7U))),5);
            tracep->chgCData(oldp+20,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)),7);
            tracep->chgCData(oldp+21,((7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+22,((1U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0x1eU))));
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
            tracep->chgQData(oldp+30,(((0x10U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
                                        ? ((0ULL < 
                                            (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                             - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                                            ? 1ULL : 0ULL)
                                        : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu)),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
            tracep->chgQData(oldp+34,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
            tracep->chgIData(oldp+103,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
            tracep->chgBit(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
            tracep->chgBit(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
            tracep->chgBit(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
            tracep->chgBit(oldp+107,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+108,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgQData(oldp+109,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
            tracep->chgQData(oldp+113,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0x14U) 
                                        | (QData)((IData)(
                                                          ((0xff000U 
                                                            & vlSelf->ysyx_22041412_cpu__DOT__Imm) 
                                                           | ((0x800U 
                                                               & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                    >> 0x14U)))))))),64);
            tracep->chgQData(oldp+115,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                              >> 7U)))))))),64);
            tracep->chgQData(oldp+117,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      >> 7U)))))),64);
            tracep->chgCData(oldp+119,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+126,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),759);
            tracep->chgWData(oldp+150,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+153,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+156,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+159,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+162,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+165,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+168,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+171,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+174,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            __Vtemp261[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
            __Vtemp261[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                      >> 0x20U));
            __Vtemp261[2U] = 2U;
            tracep->chgWData(oldp+219,(__Vtemp261),68);
            tracep->chgWData(oldp+222,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),136);
            tracep->chgWData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),136);
            tracep->chgWData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+275,(vlSelf->clk));
        tracep->chgIData(oldp+276,(vlSelf->CP_Imm),32);
        tracep->chgQData(oldp+277,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+279,(vlSelf->CP_NPC),64);
        tracep->chgBit(oldp+281,(vlSelf->CP_difftest));
        tracep->chgBit(oldp+282,(vlSelf->CP_Immen));
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
