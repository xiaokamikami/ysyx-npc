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
    VlWide<3>/*95:0*/ __Vtemp280;
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
            tracep->chgIData(oldp+11,(vlSelf->ysyx_22041412_cpu__DOT__Imm),32);
            tracep->chgCData(oldp+12,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+13,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+14,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 7U))),5);
            tracep->chgCData(oldp+15,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__Imm)),7);
            tracep->chgCData(oldp+16,((7U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+17,((1U & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                           >> 0x1eU))));
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22041412_cpu__DOT__immdata),64);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type),4);
            tracep->chgBit(oldp+21,(((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22041412_cpu__DOT__sram_w));
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Alusu),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
            tracep->chgQData(oldp+27,(((0U == (7U & 
                                               (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xcU)))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                        : ((1U == (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU)))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                                ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__rsB))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__rsB
                                                    : 0ULL))))),64);
            tracep->chgQData(oldp+29,(((0U == (7U & 
                                               (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                >> 0xcU)))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))))
                                        : ((1U == (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU)))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))))
                                            : ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                                ? (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? vlSelf->ysyx_22041412_cpu__DOT__sram_data_r
                                                    : 0ULL))))),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
            tracep->chgBit(oldp+37,((((4U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                      & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                      ? 0U : 1U)));
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
            tracep->chgQData(oldp+44,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
            tracep->chgIData(oldp+113,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
            tracep->chgBit(oldp+117,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+118,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+119,(((0x33U == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)))));
            tracep->chgQData(oldp+120,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
            tracep->chgQData(oldp+124,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+126,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+128,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                      >> 7U)))))),64);
            tracep->chgCData(oldp+130,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__AY),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__BY),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+137,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),690);
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
            tracep->chgCData(oldp+189,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+195,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            __Vtemp280[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
            __Vtemp280[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                      >> 0x20U));
            __Vtemp280[2U] = 2U;
            tracep->chgWData(oldp+222,(__Vtemp280),68);
            tracep->chgWData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),272);
            tracep->chgWData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+269,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),136);
            tracep->chgWData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+278,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+282,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+294,(vlSelf->clk));
        tracep->chgIData(oldp+295,(vlSelf->CP_Imm),32);
        tracep->chgQData(oldp+296,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+298,(vlSelf->CP_NPC),64);
        tracep->chgBit(oldp+300,(vlSelf->CP_difftest));
        tracep->chgBit(oldp+301,(vlSelf->CP_Immen));
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