// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_top__Syms.h"


void Vysyx_22041412_top___024root__trace_chg_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22041412_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22041412_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_22041412_top___024root__trace_chg_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<37>/*1183:0*/ __Vtemp_he331c0ba__0;
    VlWide<4>/*127:0*/ __Vtemp_h514ffd78__0;
    VlWide<4>/*127:0*/ __Vtemp_h515029b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h519b1c56__0;
    VlWide<4>/*127:0*/ __Vtemp_h519b008b__0;
    VlWide<4>/*127:0*/ __Vtemp_h519b0ce5__0;
    VlWide<4>/*127:0*/ __Vtemp_h519b709c__0;
    VlWide<4>/*127:0*/ __Vtemp_h519859b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h5198b3e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h5198a475__0;
    VlWide<4>/*127:0*/ __Vtemp_h5198b0b6__0;
    VlWide<4>/*127:0*/ __Vtemp_h5198b361__0;
    VlWide<4>/*127:0*/ __Vtemp_h51987e24__0;
    VlWide<4>/*127:0*/ __Vtemp_h51984517__0;
    VlWide<4>/*127:0*/ __Vtemp_h51984e58__0;
    VlWide<4>/*127:0*/ __Vtemp_h51a6c506__0;
    VlWide<4>/*127:0*/ __Vtemp_h51a728c5__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd4d3a7a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd4d5e3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd526284__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd524dc3__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd52414f__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd521a10__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd52509e__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd522cdd__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd521e29__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd51f9ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd552a7d__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd550dbe__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd54f9cb__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd54de8a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd550a9a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcd54ecdb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd1ec6fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_h8fbfdeca__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+17,(vlSelf->ysyx_22041412_top__DOT__r_valid));
        bufp->chgBit(oldp+18,(vlSelf->ysyx_22041412_top__DOT__r_ready));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_22041412_top__DOT__w_valid));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__w_ready));
        bufp->chgQData(oldp+21,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
        bufp->chgWData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
        bufp->chgBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
        bufp->chgBit(oldp+33,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                               & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready))));
        bufp->chgQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__mem_r_data),64);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
        bufp->chgBit(oldp+38,(vlSelf->ysyx_22041412_top__DOT__mem_r_last));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
        bufp->chgQData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
        bufp->chgBit(oldp+45,(vlSelf->ysyx_22041412_top__DOT__mem_w_last));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
        bufp->chgQData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
        bufp->chgBit(oldp+52,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
        bufp->chgQData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
        bufp->chgBit(oldp+56,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
        bufp->chgQData(oldp+59,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
        bufp->chgBit(oldp+63,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                               & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x19U))));
        bufp->chgQData(oldp+64,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
        bufp->chgCData(oldp+66,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+67,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+68,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
        bufp->chgCData(oldp+70,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                  ? 0U : ((0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                           ? 0U : (0x1fU 
                                                   & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                      >> 7U))))),5);
        bufp->chgCData(oldp+71,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
        bufp->chgQData(oldp+72,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                  ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                 [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
        bufp->chgQData(oldp+74,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
        bufp->chgBit(oldp+76,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
        bufp->chgBit(oldp+78,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                               & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                  | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
        bufp->chgSData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__csr),12);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
        bufp->chgBit(oldp+81,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgCData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
        bufp->chgQData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
        bufp->chgQData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
        bufp->chgQData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
        bufp->chgQData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
        bufp->chgCData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
        bufp->chgCData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
        bufp->chgCData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
        bufp->chgBit(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
        bufp->chgCData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
        bufp->chgQData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
        bufp->chgQData(oldp+101,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                   ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                   : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                       ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                       : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                           & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hafc4f4f0__0) 
                                              & ((0U 
                                                  != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                                 & (3U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))))
                                           ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                           : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0))
                                               ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                               : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                                   ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                                   : 
                                                  (((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                    & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                                          & (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)) 
                                                             & ((0U 
                                                                 != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))))))
                                                    ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                    [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))))),64);
        bufp->chgQData(oldp+103,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                   ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                   : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                       & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0))
                                       ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                       : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0))
                                           ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                           : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                               ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0))
                                                   ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                   : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
        bufp->chgQData(oldp+105,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                   : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                       & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0))
                                       ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                       : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                           ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                           : ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0)
                                               ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                               : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
        bufp->chgQData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
        bufp->chgQData(oldp+109,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
        bufp->chgBit(oldp+111,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
        bufp->chgCData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
        bufp->chgBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
        bufp->chgCData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
        bufp->chgCData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
        bufp->chgCData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
        bufp->chgBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
        bufp->chgIData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
        bufp->chgQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
        bufp->chgQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
        bufp->chgBit(oldp+138,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
        bufp->chgBit(oldp+139,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
        bufp->chgBit(oldp+140,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
        bufp->chgCData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
        bufp->chgQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
        bufp->chgQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
        bufp->chgCData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
        bufp->chgCData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
        bufp->chgBit(oldp+156,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
        bufp->chgQData(oldp+157,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
        bufp->chgQData(oldp+159,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
        bufp->chgBit(oldp+161,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        bufp->chgBit(oldp+162,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        __Vtemp_he331c0ba__0[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
        __Vtemp_he331c0ba__0[1U] = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                            >> 0x20U));
        __Vtemp_he331c0ba__0[2U] = (4U | ((IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                               >> 5U)))
                                                    ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                    : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)))) 
                                          << 5U));
        __Vtemp_he331c0ba__0[3U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)))) 
                                     >> 0x1bU) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                           >> 0x20U)) 
                                                  << 5U));
        __Vtemp_he331c0ba__0[4U] = (0x220U | (((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                    >> 5U)))
                                                         ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                         : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)))) 
                                               << 0xaU) 
                                              | ((IData)(
                                                         (((1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                       >> 5U)))
                                                            ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                            : (QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                          >> 0x20U)) 
                                                 >> 0x1bU)));
        __Vtemp_he331c0ba__0[5U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)))) 
                                     >> 0x16U) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                                           >> 0x20U)) 
                                                  << 0xaU));
        __Vtemp_he331c0ba__0[6U] = (0x4c00U | (((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                     >> 5U)))
                                                          ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                          : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)))) 
                                                << 0xfU) 
                                               | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                                           >> 0x20U)) 
                                                  >> 0x16U)));
        __Vtemp_he331c0ba__0[7U] = (((IData)(((1U & (IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                             >> 5U)))
                                               ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                               : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)))) 
                                     >> 0x11U) | ((IData)(
                                                          (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                        >> 5U)))
                                                             ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                             : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                           >> 0x20U)) 
                                                  << 0xfU));
        __Vtemp_he331c0ba__0[8U] = (0x90000U | (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                                 << 0x14U) 
                                                | ((IData)(
                                                           (((1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                         >> 5U)))
                                                              ? vlSelf->ysyx_22041412_top__DOT__ex_v1
                                                              : (QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                            >> 0x20U)) 
                                                   >> 0x11U)));
        __Vtemp_he331c0ba__0[9U] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0))) 
                                     >> 0xcU) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_he331c0ba__0[0xaU] = (0xf00000U | (
                                                   ((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                                    << 0x19U) 
                                                   | ((IData)(
                                                              ((QData)((IData)(vlSelf->__VdfgTmp_h6cccb7a3__0)) 
                                                               >> 0x20U)) 
                                                      >> 0xcU)));
        __Vtemp_he331c0ba__0[0xbU] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
                                       >> 7U) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)) 
                                                          >> 0x20U)) 
                                                 << 0x19U));
        __Vtemp_he331c0ba__0[0xcU] = (0x20000000U | 
                                      (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                        << 0x1eU) | 
                                       ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)) 
                                                 >> 0x20U)) 
                                        >> 7U)));
        __Vtemp_he331c0ba__0[0xdU] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                       >> 2U) | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                          >> 0x20U)) 
                                                 << 0x1eU));
        __Vtemp_he331c0ba__0[0xeU] = (0x80000000U | 
                                      ((IData)(((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                >> 0x20U)) 
                                       >> 2U));
        __Vtemp_he331c0ba__0[0xfU] = (3U | ((IData)(
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                            << 3U));
        __Vtemp_he331c0ba__0[0x10U] = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x1dU) | 
                                       ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 3U));
        __Vtemp_he331c0ba__0[0x11U] = (0x60U | (((IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                                 << 8U) 
                                                | ((IData)(
                                                           (VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                            >> 0x20U)) 
                                                   >> 0x1dU)));
        __Vtemp_he331c0ba__0[0x12U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x18U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 8U));
        __Vtemp_he331c0ba__0[0x13U] = (0xd00U | (((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           << 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                                  << 0xdU) 
                                                 | ((IData)(
                                                            ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                             >> 0x20U)) 
                                                    >> 0x18U)));
        __Vtemp_he331c0ba__0[0x14U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        >> 0x13U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                 >> 0x20U)) 
                                        << 0xdU));
        __Vtemp_he331c0ba__0[0x15U] = (0x16000U | (
                                                   ((IData)(
                                                            (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                             ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                                    << 0x12U) 
                                                   | ((IData)(
                                                              ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                << 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                               >> 0x20U)) 
                                                      >> 0x13U)));
        __Vtemp_he331c0ba__0[0x16U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 ^ vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 0xeU) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                 >> 0x20U)) 
                                        << 0x12U));
        __Vtemp_he331c0ba__0[0x17U] = (0x1c0000U | 
                                       (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                         << 0x17U) 
                                        | ((IData)(
                                                   ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                     ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                    >> 0x20U)) 
                                           >> 0xeU)));
        __Vtemp_he331c0ba__0[0x18U] = (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                        >> 9U) | ((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
                                                           >> 0x20U)) 
                                                  << 0x17U));
        __Vtemp_he331c0ba__0[0x19U] = (0x4000000U | 
                                       (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                         << 0x1cU) 
                                        | ((IData)(
                                                   (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0 
                                                    >> 0x20U)) 
                                           >> 9U)));
        __Vtemp_he331c0ba__0[0x1aU] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 & vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 4U) | ((IData)(
                                                          ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                            & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        __Vtemp_he331c0ba__0[0x1bU] = (0xa0000000U 
                                       | ((IData)((
                                                   (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                    & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                   >> 0x20U)) 
                                          >> 4U));
        __Vtemp_he331c0ba__0[0x1cU] = ((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                       << 1U);
        __Vtemp_he331c0ba__0[0x1dU] = (((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                        >> 0x1fU) | 
                                       ((IData)(((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_he331c0ba__0[0x1eU] = (0x12U | (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                                 << 6U) 
                                                | ((IData)(
                                                           ((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU)));
        __Vtemp_he331c0ba__0[0x1fU] = (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                        >> 0x1aU) | 
                                       ((IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                                                 >> 0x20U)) 
                                        << 6U));
        __Vtemp_he331c0ba__0[0x20U] = (0xc0U | (((IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                          + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY)) 
                                                 << 0xbU) 
                                                | ((IData)(
                                                           (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
                                                            >> 0x20U)) 
                                                   >> 0x1aU)));
        __Vtemp_he331c0ba__0[0x21U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                 + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY)) 
                                        >> 0x15U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                  + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY) 
                                                 >> 0x20U)) 
                                        << 0xbU));
        __Vtemp_he331c0ba__0[0x22U] = (0x800U | (((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                                  << 0x10U) 
                                                 | ((IData)(
                                                            ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
                                                              + vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY) 
                                                             >> 0x20U)) 
                                                    >> 0x15U)));
        __Vtemp_he331c0ba__0[0x23U] = (((IData)((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                 + vlSelf->ysyx_22041412_top__DOT__ex_v2)) 
                                        >> 0x10U) | 
                                       ((IData)(((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                  + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_he331c0ba__0[0x24U] = (0x20000U | ((IData)(
                                                           ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                             + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                            >> 0x20U)) 
                                                   >> 0x10U));
        bufp->chgWData(oldp+163,(__Vtemp_he331c0ba__0),1173);
        bufp->chgWData(oldp+200,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        bufp->chgWData(oldp+203,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        bufp->chgWData(oldp+206,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        bufp->chgWData(oldp+209,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        bufp->chgWData(oldp+212,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        bufp->chgWData(oldp+215,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        bufp->chgWData(oldp+218,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        bufp->chgWData(oldp+221,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        bufp->chgWData(oldp+224,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        bufp->chgWData(oldp+227,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        bufp->chgWData(oldp+230,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        bufp->chgWData(oldp+233,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        bufp->chgWData(oldp+236,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        bufp->chgWData(oldp+239,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        bufp->chgWData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        bufp->chgWData(oldp+245,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        bufp->chgWData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        bufp->chgQData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        bufp->chgQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        bufp->chgQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        bufp->chgQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        bufp->chgQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        bufp->chgQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        bufp->chgQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        bufp->chgQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        bufp->chgQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        bufp->chgQData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        bufp->chgQData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        bufp->chgQData(oldp+283,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        bufp->chgQData(oldp+285,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+287,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+288,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
        bufp->chgIData(oldp+289,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
        bufp->chgBit(oldp+290,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
        bufp->chgBit(oldp+291,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
        bufp->chgBit(oldp+292,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+293,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+294,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+295,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
        bufp->chgCData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
        bufp->chgWData(oldp+297,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
        bufp->chgCData(oldp+302,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
        bufp->chgBit(oldp+303,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
        bufp->chgBit(oldp+304,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
        bufp->chgBit(oldp+305,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
        bufp->chgIData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
        bufp->chgIData(oldp+308,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+309,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),7);
        __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][0U];
        __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][1U];
        __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][2U];
        __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][3U];
        bufp->chgWData(oldp+310,(__Vtemp_h514ffd78__0),128);
        __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][0U];
        __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][1U];
        __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][2U];
        __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][3U];
        bufp->chgWData(oldp+314,(__Vtemp_h515029b7__0),128);
        __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][0U];
        __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][1U];
        __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][2U];
        __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][3U];
        bufp->chgWData(oldp+318,(__Vtemp_h519b1c56__0),128);
        __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][0U];
        __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][1U];
        __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][2U];
        __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][3U];
        bufp->chgWData(oldp+322,(__Vtemp_h519b008b__0),128);
        __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][0U];
        __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][1U];
        __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][2U];
        __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][3U];
        bufp->chgWData(oldp+326,(__Vtemp_h519b0ce5__0),128);
        __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][0U];
        __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][1U];
        __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][2U];
        __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][3U];
        bufp->chgWData(oldp+330,(__Vtemp_h519b709c__0),128);
        __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][0U];
        __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][1U];
        __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][2U];
        __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][3U];
        bufp->chgWData(oldp+334,(__Vtemp_h519859b8__0),128);
        __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][0U];
        __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][1U];
        __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][2U];
        __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][3U];
        bufp->chgWData(oldp+338,(__Vtemp_h5198b3e9__0),128);
        __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][0U];
        __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][1U];
        __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][2U];
        __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][3U];
        bufp->chgWData(oldp+342,(__Vtemp_h5198a475__0),128);
        __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][0U];
        __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][1U];
        __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][2U];
        __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][3U];
        bufp->chgWData(oldp+346,(__Vtemp_h5198b0b6__0),128);
        __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][0U];
        __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][1U];
        __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][2U];
        __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][3U];
        bufp->chgWData(oldp+350,(__Vtemp_h5198b361__0),128);
        __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][0U];
        __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][1U];
        __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][2U];
        __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][3U];
        bufp->chgWData(oldp+354,(__Vtemp_h51987e24__0),128);
        __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][0U];
        __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][1U];
        __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][2U];
        __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][3U];
        bufp->chgWData(oldp+358,(__Vtemp_h51984517__0),128);
        __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][0U];
        __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][1U];
        __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][2U];
        __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][3U];
        bufp->chgWData(oldp+362,(__Vtemp_h51984e58__0),128);
        __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][0U];
        __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][1U];
        __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][2U];
        __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][3U];
        bufp->chgWData(oldp+366,(__Vtemp_h51a6c506__0),128);
        __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][0U];
        __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][1U];
        __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][2U];
        __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][3U];
        bufp->chgWData(oldp+370,(__Vtemp_h51a728c5__0),128);
        bufp->chgWData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
        bufp->chgCData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
        bufp->chgCData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
        bufp->chgCData(oldp+380,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                   ? 0U : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                            ? 1U : 
                                           ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                             ? 2U : 
                                            ((8U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                              ? 3U : 
                                             ((0x10U 
                                               == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                               ? 4U
                                               : ((0x20U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                   ? 5U
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                    ? 6U
                                                    : 
                                                   ((0x80U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                     ? 7U
                                                     : 0U))))))))),3);
        bufp->chgBit(oldp+381,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
        bufp->chgCData(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
        bufp->chgCData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
        bufp->chgWData(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+388,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+389,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
        bufp->chgCData(oldp+390,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),6);
        bufp->chgWData(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+395,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+401,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+407,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+413,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+419,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+425,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+431,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+437,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+443,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+449,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+455,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+479,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+480,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
        bufp->chgQData(oldp+481,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
        bufp->chgQData(oldp+483,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
        bufp->chgQData(oldp+485,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
        bufp->chgQData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
        bufp->chgQData(oldp+489,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
        bufp->chgQData(oldp+491,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
        bufp->chgQData(oldp+493,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
        bufp->chgQData(oldp+495,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
        bufp->chgQData(oldp+497,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
        bufp->chgQData(oldp+499,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
        bufp->chgQData(oldp+501,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
        bufp->chgQData(oldp+503,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
        bufp->chgQData(oldp+505,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
        bufp->chgQData(oldp+507,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
        bufp->chgQData(oldp+509,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
        bufp->chgQData(oldp+511,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
        bufp->chgQData(oldp+513,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
        bufp->chgQData(oldp+515,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
        bufp->chgQData(oldp+517,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
        bufp->chgQData(oldp+519,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
        bufp->chgQData(oldp+521,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
        bufp->chgQData(oldp+523,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
        bufp->chgQData(oldp+525,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
        bufp->chgQData(oldp+527,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
        bufp->chgQData(oldp+529,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
        bufp->chgQData(oldp+531,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
        bufp->chgQData(oldp+533,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
        bufp->chgQData(oldp+535,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
        bufp->chgQData(oldp+537,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
        bufp->chgQData(oldp+539,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
        bufp->chgQData(oldp+541,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
        bufp->chgQData(oldp+543,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
        bufp->chgBit(oldp+545,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
        bufp->chgBit(oldp+546,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
        bufp->chgCData(oldp+547,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
        bufp->chgBit(oldp+548,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
        bufp->chgCData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
        bufp->chgCData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
        bufp->chgCData(oldp+551,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch),3);
        bufp->chgQData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        bufp->chgQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        bufp->chgQData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        bufp->chgQData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        bufp->chgQData(oldp+560,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        bufp->chgQData(oldp+562,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        bufp->chgQData(oldp+564,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
        bufp->chgQData(oldp+566,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
        bufp->chgQData(oldp+568,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
        bufp->chgBit(oldp+570,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
        bufp->chgBit(oldp+571,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
        bufp->chgBit(oldp+572,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
        bufp->chgBit(oldp+573,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
        bufp->chgIData(oldp+574,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+575,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                           >> 4U))),7);
        bufp->chgCData(oldp+576,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
        bufp->chgWData(oldp+577,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
        bufp->chgCData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),8);
        bufp->chgBit(oldp+582,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
        bufp->chgWData(oldp+583,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
        bufp->chgBit(oldp+587,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 3U))));
        __Vtemp_hcd4d3a7a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][0U];
        __Vtemp_hcd4d3a7a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][1U];
        __Vtemp_hcd4d3a7a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][2U];
        __Vtemp_hcd4d3a7a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][3U];
        bufp->chgWData(oldp+588,(__Vtemp_hcd4d3a7a__0),128);
        __Vtemp_hcd4d5e3f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][0U];
        __Vtemp_hcd4d5e3f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][1U];
        __Vtemp_hcd4d5e3f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][2U];
        __Vtemp_hcd4d5e3f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][3U];
        bufp->chgWData(oldp+592,(__Vtemp_hcd4d5e3f__0),128);
        __Vtemp_hcd526284__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][0U];
        __Vtemp_hcd526284__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][1U];
        __Vtemp_hcd526284__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][2U];
        __Vtemp_hcd526284__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][3U];
        bufp->chgWData(oldp+596,(__Vtemp_hcd526284__0),128);
        __Vtemp_hcd524dc3__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][0U];
        __Vtemp_hcd524dc3__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][1U];
        __Vtemp_hcd524dc3__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][2U];
        __Vtemp_hcd524dc3__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][3U];
        bufp->chgWData(oldp+600,(__Vtemp_hcd524dc3__0),128);
        __Vtemp_hcd52414f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][0U];
        __Vtemp_hcd52414f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][1U];
        __Vtemp_hcd52414f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][2U];
        __Vtemp_hcd52414f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][3U];
        bufp->chgWData(oldp+604,(__Vtemp_hcd52414f__0),128);
        __Vtemp_hcd521a10__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][0U];
        __Vtemp_hcd521a10__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][1U];
        __Vtemp_hcd521a10__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][2U];
        __Vtemp_hcd521a10__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][3U];
        bufp->chgWData(oldp+608,(__Vtemp_hcd521a10__0),128);
        __Vtemp_hcd52509e__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][0U];
        __Vtemp_hcd52509e__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][1U];
        __Vtemp_hcd52509e__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][2U];
        __Vtemp_hcd52509e__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][3U];
        bufp->chgWData(oldp+612,(__Vtemp_hcd52509e__0),128);
        __Vtemp_hcd522cdd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][0U];
        __Vtemp_hcd522cdd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][1U];
        __Vtemp_hcd522cdd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][2U];
        __Vtemp_hcd522cdd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][3U];
        bufp->chgWData(oldp+616,(__Vtemp_hcd522cdd__0),128);
        __Vtemp_hcd521e29__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][0U][0U];
        __Vtemp_hcd521e29__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][0U][1U];
        __Vtemp_hcd521e29__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][0U][2U];
        __Vtemp_hcd521e29__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][0U][3U];
        bufp->chgWData(oldp+620,(__Vtemp_hcd521e29__0),128);
        __Vtemp_hcd51f9ec__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][1U][0U];
        __Vtemp_hcd51f9ec__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][1U][1U];
        __Vtemp_hcd51f9ec__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][1U][2U];
        __Vtemp_hcd51f9ec__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [4U][1U][3U];
        bufp->chgWData(oldp+624,(__Vtemp_hcd51f9ec__0),128);
        __Vtemp_hcd552a7d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][0U][0U];
        __Vtemp_hcd552a7d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][0U][1U];
        __Vtemp_hcd552a7d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][0U][2U];
        __Vtemp_hcd552a7d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][0U][3U];
        bufp->chgWData(oldp+628,(__Vtemp_hcd552a7d__0),128);
        __Vtemp_hcd550dbe__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][1U][0U];
        __Vtemp_hcd550dbe__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][1U][1U];
        __Vtemp_hcd550dbe__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][1U][2U];
        __Vtemp_hcd550dbe__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [5U][1U][3U];
        bufp->chgWData(oldp+632,(__Vtemp_hcd550dbe__0),128);
        __Vtemp_hcd54f9cb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][0U][0U];
        __Vtemp_hcd54f9cb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][0U][1U];
        __Vtemp_hcd54f9cb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][0U][2U];
        __Vtemp_hcd54f9cb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][0U][3U];
        bufp->chgWData(oldp+636,(__Vtemp_hcd54f9cb__0),128);
        __Vtemp_hcd54de8a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][1U][0U];
        __Vtemp_hcd54de8a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][1U][1U];
        __Vtemp_hcd54de8a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][1U][2U];
        __Vtemp_hcd54de8a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [6U][1U][3U];
        bufp->chgWData(oldp+640,(__Vtemp_hcd54de8a__0),128);
        __Vtemp_hcd550a9a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][0U][0U];
        __Vtemp_hcd550a9a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][0U][1U];
        __Vtemp_hcd550a9a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][0U][2U];
        __Vtemp_hcd550a9a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][0U][3U];
        bufp->chgWData(oldp+644,(__Vtemp_hcd550a9a__0),128);
        __Vtemp_hcd54ecdb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][1U][0U];
        __Vtemp_hcd54ecdb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][1U][1U];
        __Vtemp_hcd54ecdb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][1U][2U];
        __Vtemp_hcd54ecdb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [7U][1U][3U];
        bufp->chgWData(oldp+648,(__Vtemp_hcd54ecdb__0),128);
        bufp->chgBit(oldp+652,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                         >> 0x1bU))));
        bufp->chgWData(oldp+653,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),128);
        bufp->chgCData(oldp+657,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),8);
        bufp->chgCData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),3);
        bufp->chgCData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
        bufp->chgCData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
        bufp->chgQData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_read_data),64);
        if ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)) {
            __Vtemp_hd1ec6fdf__0[0U] = 0U;
            __Vtemp_hd1ec6fdf__0[1U] = 0U;
            __Vtemp_hd1ec6fdf__0[2U] = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_wdata);
            __Vtemp_hd1ec6fdf__0[3U] = (IData)((vlSelf->ysyx_22041412_top__DOT__mem_wdata 
                                                >> 0x20U));
        } else {
            __Vtemp_hd1ec6fdf__0[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_wdata);
            __Vtemp_hd1ec6fdf__0[1U] = (IData)((vlSelf->ysyx_22041412_top__DOT__mem_wdata 
                                                >> 0x20U));
            __Vtemp_hd1ec6fdf__0[2U] = 0U;
            __Vtemp_hd1ec6fdf__0[3U] = 0U;
        }
        bufp->chgWData(oldp+663,(__Vtemp_hd1ec6fdf__0),128);
        bufp->chgCData(oldp+667,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point),3);
        bufp->chgWData(oldp+668,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+672,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
        if (vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en) {
            __Vtemp_h8fbfdeca__0[0U] = 0U;
            __Vtemp_h8fbfdeca__0[1U] = 0U;
            __Vtemp_h8fbfdeca__0[2U] = 0U;
            __Vtemp_h8fbfdeca__0[3U] = 0U;
        } else {
            __Vtemp_h8fbfdeca__0[0U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 0U)))
                                            : ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0xffU
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffffU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0xffffffffU
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                      ? 0xffffffffU
                                                      : 0U))))));
            __Vtemp_h8fbfdeca__0[1U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 0U)))
                                            : ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                      ? 0xffffffffU
                                                      : 0U))))));
            __Vtemp_h8fbfdeca__0[2U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                      ? 0xffffffffU
                                                      : 0U))))
                                            : ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 0U)))));
            __Vtemp_h8fbfdeca__0[3U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0xff000000U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffff0000U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0xffffffffU
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                      ? 0xffffffffU
                                                      : 0U))))
                                            : ((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0U
                                                     : 0U)))));
        }
        bufp->chgWData(oldp+674,(__Vtemp_h8fbfdeca__0),128);
        bufp->chgCData(oldp+678,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                           >> 4U))),6);
        bufp->chgBit(oldp+679,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+680,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+681,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+686,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+687,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+688,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+689,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+693,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+695,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+696,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+697,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+701,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+702,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+703,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+704,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+705,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+709,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+711,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+712,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+713,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+717,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+718,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+719,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+720,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+721,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+725,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+726,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+727,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+728,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+729,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+733,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+734,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+735,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+736,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+737,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+741,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+742,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+743,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+744,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+745,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+749,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+750,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+751,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+752,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+753,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+757,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+758,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+759,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+760,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+761,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+765,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+766,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+767,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+768,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+769,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+773,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+774,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+775,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+776,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+777,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+781,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+782,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+783,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+784,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+785,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+789,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+790,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+791,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+792,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+793,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+797,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+798,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+799,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+800,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen));
    }
    bufp->chgBit(oldp+801,(vlSelf->clk));
    bufp->chgBit(oldp+802,(vlSelf->rst));
    bufp->chgQData(oldp+803,(vlSelf->pip_pc),64);
    bufp->chgQData(oldp+805,(vlSelf->pip_dnpc),64);
    bufp->chgQData(oldp+807,(vlSelf->pip_mem_pc),64);
    bufp->chgBit(oldp+809,(vlSelf->Ebreak));
    bufp->chgQData(oldp+810,(vlSelf->Icache_L1_miss),64);
    bufp->chgQData(oldp+812,(vlSelf->Icache_L1_hit),64);
    bufp->chgQData(oldp+814,(vlSelf->Dcache_L1_miss),64);
    bufp->chgQData(oldp+816,(vlSelf->Dcache_L1_hit),64);
    bufp->chgBit(oldp+818,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+819,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+820,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+821,(vlSelf->io_master_awprot),3);
    bufp->chgCData(oldp+822,(vlSelf->io_master_awid),4);
    bufp->chgBit(oldp+823,(vlSelf->io_master_awuser));
    bufp->chgCData(oldp+824,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+825,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+826,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+827,(vlSelf->io_master_awlock));
    bufp->chgCData(oldp+828,(vlSelf->io_master_awcache),4);
    bufp->chgCData(oldp+829,(vlSelf->io_master_awqos),4);
    bufp->chgCData(oldp+830,(vlSelf->io_master_awregion),4);
    bufp->chgBit(oldp+831,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+832,(vlSelf->io_master_wvalid));
    bufp->chgQData(oldp+833,(vlSelf->io_master_wdata),64);
    bufp->chgCData(oldp+835,(vlSelf->io_master_wstrb),8);
    bufp->chgBit(oldp+836,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+837,(vlSelf->io_master_wuser));
    bufp->chgBit(oldp+838,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+839,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+840,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+841,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+842,(vlSelf->io_master_buser));
    bufp->chgBit(oldp+843,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+844,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+845,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+846,(vlSelf->io_master_arprot),3);
    bufp->chgCData(oldp+847,(vlSelf->io_master_arid),4);
    bufp->chgBit(oldp+848,(vlSelf->io_master_aruser));
    bufp->chgCData(oldp+849,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+850,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+851,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+852,(vlSelf->io_master_arlock));
    bufp->chgCData(oldp+853,(vlSelf->io_master_arcache),4);
    bufp->chgCData(oldp+854,(vlSelf->io_master_arqos),4);
    bufp->chgCData(oldp+855,(vlSelf->io_master_arregion),4);
    bufp->chgBit(oldp+856,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+857,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+858,(vlSelf->io_master_rresp),2);
    bufp->chgQData(oldp+859,(vlSelf->io_master_rdata),64);
    bufp->chgBit(oldp+861,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+862,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+863,(vlSelf->io_master_ruser));
    bufp->chgBit(oldp+864,(vlSelf->io_slave_awready));
    bufp->chgBit(oldp+865,(vlSelf->io_slave_awvalid));
    bufp->chgIData(oldp+866,(vlSelf->io_slave_awaddr),32);
    bufp->chgCData(oldp+867,(vlSelf->io_slave_awid),4);
    bufp->chgCData(oldp+868,(vlSelf->io_slave_awlen),8);
    bufp->chgCData(oldp+869,(vlSelf->io_slave_awsize),3);
    bufp->chgCData(oldp+870,(vlSelf->io_slave_awburst),2);
    bufp->chgBit(oldp+871,(vlSelf->io_slave_wready));
    bufp->chgBit(oldp+872,(vlSelf->io_slave_wvalid));
    bufp->chgQData(oldp+873,(vlSelf->io_slave_wdata),64);
    bufp->chgCData(oldp+875,(vlSelf->io_slave_wstrb),8);
    bufp->chgBit(oldp+876,(vlSelf->io_slave_wlast));
    bufp->chgBit(oldp+877,(vlSelf->io_slave_bready));
    bufp->chgBit(oldp+878,(vlSelf->io_slave_bvalid));
    bufp->chgCData(oldp+879,(vlSelf->io_slave_bresp),2);
    bufp->chgCData(oldp+880,(vlSelf->io_slave_bid),4);
    bufp->chgBit(oldp+881,(vlSelf->io_slave_arready));
    bufp->chgBit(oldp+882,(vlSelf->io_slave_arvalid));
    bufp->chgIData(oldp+883,(vlSelf->io_slave_araddr),32);
    bufp->chgCData(oldp+884,(vlSelf->io_slave_arid),4);
    bufp->chgCData(oldp+885,(vlSelf->io_slave_arlen),8);
    bufp->chgCData(oldp+886,(vlSelf->io_slave_arsize),3);
    bufp->chgCData(oldp+887,(vlSelf->io_slave_arburst),2);
    bufp->chgBit(oldp+888,(vlSelf->io_slave_rready));
    bufp->chgBit(oldp+889,(vlSelf->io_slave_rvalid));
    bufp->chgCData(oldp+890,(vlSelf->io_slave_rresp),2);
    bufp->chgQData(oldp+891,(vlSelf->io_slave_rdata),64);
    bufp->chgBit(oldp+893,(vlSelf->io_slave_rlast));
    bufp->chgCData(oldp+894,(vlSelf->io_slave_rid),4);
    bufp->chgCData(oldp+895,(((IData)(vlSelf->rst) ? 0U
                               : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                   ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_last_i)
                                                    ? 0U
                                                    : 4U)))
                                   : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                       ? ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                           ? 0U : (
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                    ? 0U
                                                    : 4U))
                                       : ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                           ? ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                               ? 2U
                                               : 0U)
                                           : ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                               ? 1U
                                               : 0U)))))),3);
    bufp->chgCData(oldp+896,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->chgCData(oldp+897,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->chgCData(oldp+898,(((IData)(vlSelf->rst) ? 0U
                               : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                   ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last)
                                                    ? 0U
                                                    : 4U)))
                                   : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                       ? ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                           ? 0U : (
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v))
                                                    ? 0U
                                                    : 4U))
                                       : ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                           ? ((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o)
                                               ? 2U
                                               : 0U)
                                           : (((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                               & (0x11U 
                                                  >= 
                                                  (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                   >> 0x1bU)))
                                               ? 1U
                                               : (((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                                   & ((0x11U 
                                                       < 
                                                       (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                        >> 0x1bU)) 
                                                      & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))))
                                                   ? 4U
                                                   : 0U))))))),3);
}

void Vysyx_22041412_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
