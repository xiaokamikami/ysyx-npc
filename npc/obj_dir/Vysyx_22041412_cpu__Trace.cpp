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
    VlWide<3>/*95:0*/ __Vtemp405;
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
            tracep->chgBit(oldp+10,((0xfU == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))));
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
            tracep->chgBit(oldp+21,((9U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type))));
            tracep->chgBit(oldp+22,((((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                      & (2U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__cpu_count)))
                                      ? 1U : 0U)));
            tracep->chgQData(oldp+23,((vlSelf->ysyx_22041412_cpu__DOT__immdata 
                                       + vlSelf->ysyx_22041412_cpu__DOT__rsA)),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041412_cpu__DOT__sram_data_r),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22041412_cpu__DOT__rsB),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22041412_cpu__DOT__rsA),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041412_cpu__DOT__rsW),64);
            tracep->chgBit(oldp+33,((((4U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)) 
                                      & (3U != (IData)(vlSelf->ysyx_22041412_cpu__DOT__Imm_Type)))
                                      ? 0U : 1U)));
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__ALU_S),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22041412_cpu__DOT__ALU_A),64);
            tracep->chgQData(oldp+38,(((4U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode))
                                        ? ((2U == (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU)))
                                            ? (VL_GTS_IQQ(1,64,64, 0ULL, 
                                                          (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                           - vlSelf->ysyx_22041412_cpu__DOT__ALU_S))
                                                ? 1ULL
                                                : 0ULL)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                    >> 0xcU)))
                                                ? (
                                                   (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                    < vlSelf->ysyx_22041412_cpu__DOT__ALU_S)
                                                    ? 1ULL
                                                    : 0ULL)
                                                : 0ULL))
                                        : (((0x3bU 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                            | (0x1bU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu)))
                                            : vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu))),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__tx),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041412_cpu__DOT__DNPC),64);
            tracep->chgQData(oldp+44,((4ULL + vlSelf->ysyx_22041412_cpu__DOT__PC)),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__PC),64);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22041412_cpu__DOT__EQ_EN));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__mulw_en));
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[0]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[1]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[2]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[3]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[4]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[5]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[6]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[7]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[8]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[9]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[10]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[11]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[12]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[13]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[14]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[15]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[16]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[17]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[18]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[19]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[20]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[21]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[22]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[23]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[24]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[25]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[26]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[27]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[28]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[29]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[30]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg[31]),64);
            tracep->chgIData(oldp+114,(vlSelf->ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr),32);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22041412_cpu__DOT__sram__DOT__sram_data_r),64);
            tracep->chgCData(oldp+117,(((0U == (7U 
                                                & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                   >> 0xcU)))
                                         ? 1U : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                       >> 0xcU)))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                        >> 0xcU)))
                                                    ? 0xffU
                                                    : 0U))))),8);
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type));
            tracep->chgBit(oldp+121,((0x63U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+122,((0x23U == (0x7fU 
                                                & vlSelf->ysyx_22041412_cpu__DOT__Imm))));
            tracep->chgBit(oldp+123,(((0x33U == (0x7fU 
                                                 & vlSelf->ysyx_22041412_cpu__DOT__Imm)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->ysyx_22041412_cpu__DOT__Imm)))));
            tracep->chgQData(oldp+124,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+126,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ysyx_22041412_cpu__DOT__Imm))))),64);
            tracep->chgQData(oldp+128,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+130,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+132,((((- (QData)((IData)(
                                                            (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->ysyx_22041412_cpu__DOT__Imm 
                                                                           >> 7U))))))),64);
            tracep->chgCData(oldp+134,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mode),5);
            tracep->chgQData(oldp+135,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__ALU_A 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_A))))),64);
            tracep->chgQData(oldp+137,((1ULL + (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->ysyx_22041412_cpu__DOT__ALU_S 
                                                                             >> 0x3fU))))) 
                                                 << 0x3fU) 
                                                | (0x7fffffffffffffffULL 
                                                   & (~ vlSelf->ysyx_22041412_cpu__DOT__ALU_S))))),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu),64);
            tracep->chgWData(oldp+141,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1104);
            tracep->chgWData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+191,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+197,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+203,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+209,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+215,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+221,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgCData(oldp+224,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+226,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+228,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+232,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+238,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+274,(vlSelf->ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ua),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__ub),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__Mul__DOT__result),64);
            __Vtemp405[0U] = (IData)(vlSelf->ysyx_22041412_cpu__DOT__PC);
            __Vtemp405[1U] = (IData)((vlSelf->ysyx_22041412_cpu__DOT__PC 
                                      >> 0x20U));
            __Vtemp405[2U] = 2U;
            tracep->chgWData(oldp+281,(__Vtemp405),68);
            tracep->chgWData(oldp+284,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgCData(oldp+287,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list[0]),4);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+293,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4),272);
            tracep->chgWData(oldp+302,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+305,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+308,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+311,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+314,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+315,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+316,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+317,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+318,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+320,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+322,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+326,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+328,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+329,(vlSelf->ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4),204);
            tracep->chgWData(oldp+336,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+339,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+342,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgCData(oldp+345,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+346,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+347,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list[2]),4);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+356,(vlSelf->ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+357,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+358,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+359,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+360,(vlSelf->ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+361,(vlSelf->clk));
        tracep->chgIData(oldp+362,(vlSelf->CP_Imm),32);
        tracep->chgQData(oldp+363,(vlSelf->CP_PC),64);
        tracep->chgQData(oldp+365,(vlSelf->CP_NPC),64);
        tracep->chgBit(oldp+367,(vlSelf->CP_difftest));
        tracep->chgBit(oldp+368,(vlSelf->CP_Immen));
        tracep->chgBit(oldp+369,(vlSelf->Ebreak));
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
