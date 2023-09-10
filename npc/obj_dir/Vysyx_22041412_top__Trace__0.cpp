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
        bufp->chgCData(oldp+23,((0xffU & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                           ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                               ? 1U
                                               : ((1U 
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
                                                     : 0U))))
                                           : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                               ? 0xffU
                                               : 0U)))),8);
        bufp->chgCData(oldp+24,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))
                                  ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len)
                                  : 0U)),8);
        bufp->chgBit(oldp+25,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
        bufp->chgIData(oldp+28,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_22041412_top__DOT__mem_rw_ready));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
        bufp->chgQData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
        bufp->chgQData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
        bufp->chgCData(oldp+38,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                  ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                           ? 3U : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xfU
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0xffU
                                                     : 0U))))),8);
        bufp->chgBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
        bufp->chgQData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
        bufp->chgBit(oldp+45,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
        bufp->chgIData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
        bufp->chgQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
        bufp->chgBit(oldp+49,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
        bufp->chgIData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
        bufp->chgQData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
        bufp->chgBit(oldp+56,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                               & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x19U))));
        bufp->chgQData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
        bufp->chgCData(oldp+59,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+60,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
        bufp->chgCData(oldp+63,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                  ? 0U : ((0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                           ? 0U : (0x1fU 
                                                   & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                      >> 7U))))),5);
        bufp->chgCData(oldp+64,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
        bufp->chgQData(oldp+65,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                  ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                 [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
        bufp->chgQData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
        bufp->chgBit(oldp+69,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
        bufp->chgBit(oldp+71,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                               & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                  | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
        bufp->chgSData(oldp+72,(vlSelf->ysyx_22041412_top__DOT__csr),12);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
        bufp->chgBit(oldp+74,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgCData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
        bufp->chgQData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
        bufp->chgBit(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
        bufp->chgQData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
        bufp->chgQData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
        bufp->chgQData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
        bufp->chgCData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
        bufp->chgCData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
        bufp->chgCData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
        bufp->chgCData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
        bufp->chgBit(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
        bufp->chgCData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
        bufp->chgQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
        bufp->chgQData(oldp+94,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                  ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                  : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                      ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                      : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                          & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
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
        bufp->chgQData(oldp+96,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
                                              : (((0U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0))
                                                  ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                  : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
        bufp->chgQData(oldp+98,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
        bufp->chgQData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
        bufp->chgQData(oldp+102,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
        bufp->chgCData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
        bufp->chgBit(oldp+107,((((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                                 & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0) 
                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0))) 
                                | ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0)))));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
        bufp->chgCData(oldp+111,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
        bufp->chgCData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
        bufp->chgCData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
        bufp->chgBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
        bufp->chgIData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
        bufp->chgQData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
        bufp->chgQData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
        bufp->chgQData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
        bufp->chgQData(oldp+123,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
        bufp->chgQData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
        bufp->chgQData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
        bufp->chgCData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
        bufp->chgQData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
        bufp->chgQData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
        bufp->chgQData(oldp+139,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
        bufp->chgCData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
        bufp->chgCData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
        bufp->chgQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
        bufp->chgQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
        bufp->chgBit(oldp+147,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
        bufp->chgQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
        bufp->chgQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
        bufp->chgBit(oldp+152,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        bufp->chgBit(oldp+153,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
        bufp->chgWData(oldp+154,(__Vtemp_he331c0ba__0),1173);
        bufp->chgWData(oldp+191,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        bufp->chgWData(oldp+194,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        bufp->chgWData(oldp+197,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        bufp->chgWData(oldp+200,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        bufp->chgWData(oldp+203,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        bufp->chgWData(oldp+206,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        bufp->chgWData(oldp+209,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        bufp->chgWData(oldp+212,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        bufp->chgWData(oldp+215,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        bufp->chgWData(oldp+218,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        bufp->chgWData(oldp+221,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        bufp->chgWData(oldp+224,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        bufp->chgWData(oldp+227,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        bufp->chgWData(oldp+230,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        bufp->chgWData(oldp+233,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        bufp->chgWData(oldp+236,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        bufp->chgWData(oldp+239,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        bufp->chgQData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        bufp->chgQData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        bufp->chgQData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        bufp->chgQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        bufp->chgQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        bufp->chgQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        bufp->chgQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        bufp->chgQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        bufp->chgQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        bufp->chgQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        bufp->chgQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        bufp->chgQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        bufp->chgQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+279,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
        bufp->chgIData(oldp+280,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
        bufp->chgBit(oldp+281,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
        bufp->chgBit(oldp+282,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
        bufp->chgBit(oldp+283,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+284,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+285,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+286,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
        bufp->chgCData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
        bufp->chgBit(oldp+288,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
        bufp->chgBit(oldp+289,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data))));
        bufp->chgIData(oldp+290,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+291,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),7);
        bufp->chgCData(oldp+292,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last),21);
        bufp->chgCData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last),7);
        __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][0U];
        __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][1U];
        __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][2U];
        __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][3U];
        bufp->chgWData(oldp+295,(__Vtemp_h514ffd78__0),128);
        __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][0U];
        __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][1U];
        __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][2U];
        __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][3U];
        bufp->chgWData(oldp+299,(__Vtemp_h515029b7__0),128);
        __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][0U];
        __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][1U];
        __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][2U];
        __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][3U];
        bufp->chgWData(oldp+303,(__Vtemp_h519b1c56__0),128);
        __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][0U];
        __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][1U];
        __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][2U];
        __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][3U];
        bufp->chgWData(oldp+307,(__Vtemp_h519b008b__0),128);
        __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][0U];
        __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][1U];
        __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][2U];
        __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][3U];
        bufp->chgWData(oldp+311,(__Vtemp_h519b0ce5__0),128);
        __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][0U];
        __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][1U];
        __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][2U];
        __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][3U];
        bufp->chgWData(oldp+315,(__Vtemp_h519b709c__0),128);
        __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][0U];
        __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][1U];
        __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][2U];
        __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][3U];
        bufp->chgWData(oldp+319,(__Vtemp_h519859b8__0),128);
        __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][0U];
        __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][1U];
        __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][2U];
        __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][3U];
        bufp->chgWData(oldp+323,(__Vtemp_h5198b3e9__0),128);
        __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][0U];
        __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][1U];
        __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][2U];
        __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][0U][3U];
        bufp->chgWData(oldp+327,(__Vtemp_h5198a475__0),128);
        __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][0U];
        __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][1U];
        __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][2U];
        __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [4U][1U][3U];
        bufp->chgWData(oldp+331,(__Vtemp_h5198b0b6__0),128);
        __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][0U];
        __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][1U];
        __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][2U];
        __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][0U][3U];
        bufp->chgWData(oldp+335,(__Vtemp_h5198b361__0),128);
        __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][0U];
        __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][1U];
        __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][2U];
        __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [5U][1U][3U];
        bufp->chgWData(oldp+339,(__Vtemp_h51987e24__0),128);
        __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][0U];
        __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][1U];
        __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][2U];
        __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][0U][3U];
        bufp->chgWData(oldp+343,(__Vtemp_h51984517__0),128);
        __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][0U];
        __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][1U];
        __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][2U];
        __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [6U][1U][3U];
        bufp->chgWData(oldp+347,(__Vtemp_h51984e58__0),128);
        __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][0U];
        __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][1U];
        __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][2U];
        __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][0U][3U];
        bufp->chgWData(oldp+351,(__Vtemp_h51a6c506__0),128);
        __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][0U];
        __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][1U];
        __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][2U];
        __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [7U][1U][3U];
        bufp->chgWData(oldp+355,(__Vtemp_h51a728c5__0),128);
        bufp->chgWData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
        bufp->chgWData(oldp+363,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
        bufp->chgCData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
        bufp->chgBit(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
        bufp->chgCData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
        bufp->chgBit(oldp+370,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
        bufp->chgCData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
        bufp->chgCData(oldp+372,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
        bufp->chgWData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+377,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
        bufp->chgCData(oldp+379,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),6);
        bufp->chgWData(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+416,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+422,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+428,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+434,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+440,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+446,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
        bufp->chgQData(oldp+470,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
        bufp->chgQData(oldp+472,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
        bufp->chgQData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
        bufp->chgQData(oldp+476,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
        bufp->chgQData(oldp+478,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
        bufp->chgQData(oldp+480,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
        bufp->chgQData(oldp+482,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
        bufp->chgQData(oldp+484,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
        bufp->chgQData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
        bufp->chgQData(oldp+488,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
        bufp->chgQData(oldp+490,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
        bufp->chgQData(oldp+492,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
        bufp->chgQData(oldp+494,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
        bufp->chgQData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
        bufp->chgQData(oldp+498,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
        bufp->chgQData(oldp+500,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
        bufp->chgQData(oldp+502,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
        bufp->chgQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
        bufp->chgQData(oldp+506,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
        bufp->chgQData(oldp+508,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
        bufp->chgQData(oldp+510,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
        bufp->chgQData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
        bufp->chgQData(oldp+514,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
        bufp->chgQData(oldp+516,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
        bufp->chgQData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
        bufp->chgQData(oldp+520,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
        bufp->chgQData(oldp+522,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
        bufp->chgQData(oldp+524,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
        bufp->chgQData(oldp+526,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
        bufp->chgQData(oldp+528,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
        bufp->chgQData(oldp+530,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
        bufp->chgQData(oldp+532,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
        bufp->chgBit(oldp+534,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
        bufp->chgBit(oldp+535,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
        bufp->chgBit(oldp+536,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
        bufp->chgCData(oldp+537,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
        bufp->chgCData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
        bufp->chgCData(oldp+539,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch),3);
        bufp->chgQData(oldp+540,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        bufp->chgQData(oldp+542,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        bufp->chgQData(oldp+544,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        bufp->chgQData(oldp+546,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        bufp->chgQData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        bufp->chgQData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        bufp->chgQData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
        bufp->chgQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    }
    bufp->chgBit(oldp+556,(vlSelf->clk));
    bufp->chgBit(oldp+557,(vlSelf->rst));
    bufp->chgQData(oldp+558,(vlSelf->pip_pc),64);
    bufp->chgQData(oldp+560,(vlSelf->pip_dnpc),64);
    bufp->chgQData(oldp+562,(vlSelf->pip_mem_pc),64);
    bufp->chgBit(oldp+564,(vlSelf->Ebreak));
    bufp->chgBit(oldp+565,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+566,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+567,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+568,(vlSelf->io_master_awprot),3);
    bufp->chgCData(oldp+569,(vlSelf->io_master_awid),4);
    bufp->chgBit(oldp+570,(vlSelf->io_master_awuser));
    bufp->chgCData(oldp+571,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+572,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+573,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+574,(vlSelf->io_master_awlock));
    bufp->chgCData(oldp+575,(vlSelf->io_master_awcache),4);
    bufp->chgCData(oldp+576,(vlSelf->io_master_awqos),4);
    bufp->chgCData(oldp+577,(vlSelf->io_master_awregion),4);
    bufp->chgBit(oldp+578,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+579,(vlSelf->io_master_wvalid));
    bufp->chgQData(oldp+580,(vlSelf->io_master_wdata),64);
    bufp->chgCData(oldp+582,(vlSelf->io_master_wstrb),8);
    bufp->chgBit(oldp+583,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+584,(vlSelf->io_master_wuser));
    bufp->chgBit(oldp+585,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+586,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+587,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+588,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+589,(vlSelf->io_master_buser));
    bufp->chgBit(oldp+590,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+591,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+592,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+593,(vlSelf->io_master_arprot),3);
    bufp->chgCData(oldp+594,(vlSelf->io_master_arid),4);
    bufp->chgBit(oldp+595,(vlSelf->io_master_aruser));
    bufp->chgCData(oldp+596,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+597,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+598,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+599,(vlSelf->io_master_arlock));
    bufp->chgCData(oldp+600,(vlSelf->io_master_arcache),4);
    bufp->chgCData(oldp+601,(vlSelf->io_master_arqos),4);
    bufp->chgCData(oldp+602,(vlSelf->io_master_arregion),4);
    bufp->chgBit(oldp+603,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+604,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+605,(vlSelf->io_master_rresp),2);
    bufp->chgQData(oldp+606,(vlSelf->io_master_rdata),64);
    bufp->chgBit(oldp+608,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+609,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+610,(vlSelf->io_master_ruser));
    bufp->chgBit(oldp+611,(vlSelf->io_slave_awready));
    bufp->chgBit(oldp+612,(vlSelf->io_slave_awvalid));
    bufp->chgIData(oldp+613,(vlSelf->io_slave_awaddr),32);
    bufp->chgCData(oldp+614,(vlSelf->io_slave_awid),4);
    bufp->chgCData(oldp+615,(vlSelf->io_slave_awlen),8);
    bufp->chgCData(oldp+616,(vlSelf->io_slave_awsize),3);
    bufp->chgCData(oldp+617,(vlSelf->io_slave_awburst),2);
    bufp->chgBit(oldp+618,(vlSelf->io_slave_wready));
    bufp->chgBit(oldp+619,(vlSelf->io_slave_wvalid));
    bufp->chgQData(oldp+620,(vlSelf->io_slave_wdata),64);
    bufp->chgCData(oldp+622,(vlSelf->io_slave_wstrb),8);
    bufp->chgBit(oldp+623,(vlSelf->io_slave_wlast));
    bufp->chgBit(oldp+624,(vlSelf->io_slave_bready));
    bufp->chgBit(oldp+625,(vlSelf->io_slave_bvalid));
    bufp->chgCData(oldp+626,(vlSelf->io_slave_bresp),2);
    bufp->chgCData(oldp+627,(vlSelf->io_slave_bid),4);
    bufp->chgBit(oldp+628,(vlSelf->io_slave_arready));
    bufp->chgBit(oldp+629,(vlSelf->io_slave_arvalid));
    bufp->chgIData(oldp+630,(vlSelf->io_slave_araddr),32);
    bufp->chgCData(oldp+631,(vlSelf->io_slave_arid),4);
    bufp->chgCData(oldp+632,(vlSelf->io_slave_arlen),8);
    bufp->chgCData(oldp+633,(vlSelf->io_slave_arsize),3);
    bufp->chgCData(oldp+634,(vlSelf->io_slave_arburst),2);
    bufp->chgBit(oldp+635,(vlSelf->io_slave_rready));
    bufp->chgBit(oldp+636,(vlSelf->io_slave_rvalid));
    bufp->chgCData(oldp+637,(vlSelf->io_slave_rresp),2);
    bufp->chgQData(oldp+638,(vlSelf->io_slave_rdata),64);
    bufp->chgBit(oldp+640,(vlSelf->io_slave_rlast));
    bufp->chgCData(oldp+641,(vlSelf->io_slave_rid),4);
    bufp->chgCData(oldp+642,(((IData)(vlSelf->rst) ? 0U
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
                                           ? (((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit)) 
                                                & (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
                                                   == 
                                                   (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                    >> 0xbU))) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last) 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                      >> 4U))))
                                               ? 0U
                                               : ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                   ? 2U
                                                   : 0U))
                                           : ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                               ? 1U
                                               : 0U)))))),3);
    bufp->chgCData(oldp+643,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->chgCData(oldp+644,(((IData)(vlSelf->rst) ? 0U
                               : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                   ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                       & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)))
                                       ? 1U : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                                                ? 1U
                                                : 0U))
                                   : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                       ? (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o))
                                           ? 0U : ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                                                    ? 1U
                                                    : 0U))
                                       : 0U)))),2);
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
