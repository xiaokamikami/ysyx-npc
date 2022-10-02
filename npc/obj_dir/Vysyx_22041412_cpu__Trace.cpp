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
    VlWide<3>/*95:0*/ __Vtemp281;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__i),32);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list[0]),4);
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list[0]));
            tracep->chgCData(oldp+4,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list[0]),5);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list[0]),4);
            tracep->chgBit(oldp+6,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list[0]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+7,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
            tracep->chgBit(oldp+8,((((IData)(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN) 
                                     | (0xbU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22041412_cpu__DOT__Reg_EN));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__Imm_EN));
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
            tracep->chgIData(oldp+17,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
            tracep->chgCData(oldp+18,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+19,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+20,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 7U))),5);
            tracep->chgCData(oldp+21,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)),7);
            tracep->chgCData(oldp+22,((7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+23,((1U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0x1eU))));
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
            tracep->chgBit(oldp+27,(((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22041412_cpu__DOT__sram_w));
            tracep->chgQData(oldp+29,((vlSelf->ysyx_22041412_cpu__DOT__rsA 
                                       + vlSelf->ysyx_22041412_cpu__DOT__immdata)),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
            tracep->chgQData(oldp+35,(((1U == (7U & 
                                               (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xcU)))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
            tracep->chgQData(oldp+43,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
            tracep->chgIData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
            tracep->chgBit(oldp+116,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+117,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgQData(oldp+118,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
            tracep->chgQData(oldp+122,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+124,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+126,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      >> 7U)))))),64);
            tracep->chgCData(oldp+128,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),759);
            tracep->chgWData(oldp+159,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+162,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+165,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+168,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+171,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+174,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            __Vtemp281[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
            __Vtemp281[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                      >> 0x20U));
            __Vtemp281[2U] = 2U;
            tracep->chgWData(oldp+228,(__Vtemp281),68);
            tracep->chgWData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),136);
            tracep->chgWData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),204);
            tracep->chgWData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+276,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+292,(vlSelf->clk));
        tracep->chgIData(oldp+293,(vlSelf->CP_Imm),32);
        tracep->chgQData(oldp+294,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+296,(vlSelf->CP_NPC),64);
        tracep->chgBit(oldp+298,(vlSelf->CP_difftest));
        tracep->chgBit(oldp+299,(vlSelf->CP_Immen));
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
