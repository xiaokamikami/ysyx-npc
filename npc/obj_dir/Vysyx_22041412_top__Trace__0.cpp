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
    VlWide<4>/*127:0*/ __Vtemp_h05ca32b7__0;
    VlWide<4>/*127:0*/ __Vtemp_h05ca16ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h05df531f__0;
    VlWide<4>/*127:0*/ __Vtemp_h05df76e0__0;
    VlWide<4>/*127:0*/ __Vtemp_h05cfa390__0;
    VlWide<4>/*127:0*/ __Vtemp_h05df46cf__0;
    VlWide<4>/*127:0*/ __Vtemp_h05cfb1fd__0;
    VlWide<4>/*127:0*/ __Vtemp_h05df55be__0;
    VlWide<4>/*127:0*/ __Vtemp_h282f1a49__0;
    VlWide<4>/*127:0*/ __Vtemp_h282f1690__0;
    VlWide<4>/*127:0*/ __Vtemp_h27c01b1c__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bfbedd__0;
    VlWide<4>/*127:0*/ __Vtemp_h27c03259__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bfd69c__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bfc32d__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bfe6ee__0;
    VlWide<4>/*127:0*/ __Vtemp_h88b423c3__0;
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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__mem_r_data),64);
        bufp->chgBit(oldp+19,(vlSelf->ysyx_22041412_top__DOT__mem_r_last));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
        bufp->chgQData(oldp+21,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
        bufp->chgCData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),4);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v_w),2);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
        bufp->chgQData(oldp+27,(((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
                                                      [vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w]
                                                      [
                                                      (1U 
                                                       & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                          >> 0xaU))][3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
                                                                  [vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w]
                                                                  [
                                                                  (1U 
                                                                   & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                                      >> 0xaU))][2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
                                                      [vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w]
                                                      [
                                                      (1U 
                                                       & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                          >> 0xaU))][1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
                                                                  [vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w]
                                                                  [
                                                                  (1U 
                                                                   & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                                      >> 0xaU))][0U]))))),64);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),4);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+31,(vlSelf->ysyx_22041412_top__DOT__r_valid));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
        bufp->chgWData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
        bufp->chgBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__if_read_vaild));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_22041412_top__DOT__if_read_clean));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
        bufp->chgQData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
        bufp->chgCData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
        bufp->chgIData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
        bufp->chgBit(oldp+53,(vlSelf->ysyx_22041412_top__DOT__Icache_clear));
        bufp->chgIData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
        bufp->chgQData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__if_jr_hit));
        bufp->chgIData(oldp+60,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
        bufp->chgQData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                               & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x19U))));
        bufp->chgQData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
        bufp->chgCData(oldp+68,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+69,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+70,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
        bufp->chgCData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
        bufp->chgCData(oldp+72,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                  ? 0U : ((0x63U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                           ? 0U : (0x1fU 
                                                   & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                      >> 7U))))),5);
        bufp->chgCData(oldp+73,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
        bufp->chgQData(oldp+74,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                  ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                 [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
        bufp->chgQData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
        bufp->chgCData(oldp+78,(((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                  ? 1U : ((0x6fU == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                           ? 2U : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                    ? 3U
                                                    : 0U)))),2);
        bufp->chgCData(oldp+79,(((3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                  ? 1U : ((0x23U == 
                                           (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                           ? 2U : 0U))),2);
        bufp->chgQData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__jal_pc),64);
        bufp->chgBit(oldp+82,(vlSelf->ysyx_22041412_top__DOT__jal_ok));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
        bufp->chgBit(oldp+85,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                               & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                  | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
        bufp->chgSData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__csr),12);
        bufp->chgCData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
        bufp->chgBit(oldp+88,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgCData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
        bufp->chgCData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
        bufp->chgQData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
        bufp->chgQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
        bufp->chgQData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
        bufp->chgCData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
        bufp->chgCData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
        bufp->chgBit(oldp+102,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
        bufp->chgCData(oldp+103,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
        bufp->chgQData(oldp+104,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
        bufp->chgCData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__ex_jump_mode),2);
        bufp->chgCData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__ex_mem_mode),2);
        bufp->chgQData(oldp+108,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
        bufp->chgQData(oldp+110,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
        bufp->chgQData(oldp+112,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
        bufp->chgQData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
        bufp->chgQData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
        bufp->chgBit(oldp+118,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
        bufp->chgCData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
        bufp->chgCData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
        bufp->chgCData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
        bufp->chgBit(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
        bufp->chgIData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
        bufp->chgCData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__mem_jump_mode),2);
        bufp->chgCData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__mem_mem_mode),2);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
        bufp->chgBit(oldp+146,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
        bufp->chgBit(oldp+147,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
        bufp->chgCData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
        bufp->chgQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
        bufp->chgCData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
        bufp->chgQData(oldp+159,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
        bufp->chgQData(oldp+161,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
        bufp->chgBit(oldp+163,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
        bufp->chgQData(oldp+164,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
        bufp->chgQData(oldp+166,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
        bufp->chgBit(oldp+168,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        bufp->chgBit(oldp+169,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
        bufp->chgWData(oldp+170,(__Vtemp_he331c0ba__0),1173);
        bufp->chgWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        bufp->chgWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        bufp->chgWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        bufp->chgWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        bufp->chgWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        bufp->chgWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        bufp->chgWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        bufp->chgWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        bufp->chgWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        bufp->chgWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        bufp->chgWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        bufp->chgWData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        bufp->chgWData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        bufp->chgWData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        bufp->chgWData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        bufp->chgWData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        bufp->chgWData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        bufp->chgQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        bufp->chgQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        bufp->chgQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        bufp->chgQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        bufp->chgQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        bufp->chgQData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        bufp->chgQData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        bufp->chgQData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        bufp->chgQData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        bufp->chgQData(oldp+286,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        bufp->chgQData(oldp+288,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        bufp->chgQData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        bufp->chgQData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+294,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+295,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
        bufp->chgIData(oldp+296,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
        bufp->chgIData(oldp+297,((IData)(vlSelf->ysyx_22041412_top__DOT__id_pc)),32);
        bufp->chgBit(oldp+298,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
        bufp->chgBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
        bufp->chgBit(oldp+300,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+301,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+302,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        bufp->chgBit(oldp+303,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
        bufp->chgIData(oldp+304,((IData)(vlSelf->ysyx_22041412_top__DOT__jal_pc)),32);
        bufp->chgCData(oldp+305,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
        bufp->chgCData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__cache_state),2);
        bufp->chgWData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
        bufp->chgIData(oldp+311,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                   ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]
                                   : ((4U == (0xfU 
                                              & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                       ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[1U]
                                       : ((8U == (0xfU 
                                                  & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                           ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[2U]
                                           : ((0xcU 
                                               == (0xfU 
                                                   & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                               ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[3U]
                                               : 0U))))),32);
        bufp->chgIData(oldp+312,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                   ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[0U]
                                   : ((4U == (0xfU 
                                              & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                       ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[1U]
                                       : ((8U == (0xfU 
                                                  & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                           ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[2U]
                                           : ((0xcU 
                                               == (0xfU 
                                                   & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                               ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[3U]
                                               : 0U))))),32);
        bufp->chgCData(oldp+313,((0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc)),4);
        bufp->chgBit(oldp+314,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jump));
        bufp->chgBit(oldp+315,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_imm))));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
        bufp->chgIData(oldp+317,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
        bufp->chgBit(oldp+318,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
        bufp->chgIData(oldp+319,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__get_pc),28);
        bufp->chgBit(oldp+320,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__imm_ready));
        bufp->chgBit(oldp+321,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__wait_ok));
        bufp->chgIData(oldp+322,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jump_pc),32);
        bufp->chgIData(oldp+323,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+324,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),7);
        bufp->chgCData(oldp+325,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
        __Vtemp_h05ca32b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][0U];
        __Vtemp_h05ca32b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][1U];
        __Vtemp_h05ca32b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][2U];
        __Vtemp_h05ca32b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][0U][3U];
        bufp->chgWData(oldp+326,(__Vtemp_h05ca32b7__0),128);
        __Vtemp_h05ca16ea__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][0U];
        __Vtemp_h05ca16ea__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][1U];
        __Vtemp_h05ca16ea__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][2U];
        __Vtemp_h05ca16ea__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [0U][1U][3U];
        bufp->chgWData(oldp+330,(__Vtemp_h05ca16ea__0),128);
        __Vtemp_h05df531f__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][0U];
        __Vtemp_h05df531f__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][1U];
        __Vtemp_h05df531f__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][2U];
        __Vtemp_h05df531f__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][0U][3U];
        bufp->chgWData(oldp+334,(__Vtemp_h05df531f__0),128);
        __Vtemp_h05df76e0__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][0U];
        __Vtemp_h05df76e0__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][1U];
        __Vtemp_h05df76e0__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][2U];
        __Vtemp_h05df76e0__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [1U][1U][3U];
        bufp->chgWData(oldp+338,(__Vtemp_h05df76e0__0),128);
        __Vtemp_h05cfa390__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][0U];
        __Vtemp_h05cfa390__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][1U];
        __Vtemp_h05cfa390__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][2U];
        __Vtemp_h05cfa390__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][0U][3U];
        bufp->chgWData(oldp+342,(__Vtemp_h05cfa390__0),128);
        __Vtemp_h05df46cf__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][0U];
        __Vtemp_h05df46cf__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][1U];
        __Vtemp_h05df46cf__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][2U];
        __Vtemp_h05df46cf__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [2U][1U][3U];
        bufp->chgWData(oldp+346,(__Vtemp_h05df46cf__0),128);
        __Vtemp_h05cfb1fd__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][0U];
        __Vtemp_h05cfb1fd__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][1U];
        __Vtemp_h05cfb1fd__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][2U];
        __Vtemp_h05cfb1fd__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][0U][3U];
        bufp->chgWData(oldp+350,(__Vtemp_h05cfb1fd__0),128);
        __Vtemp_h05df55be__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][0U];
        __Vtemp_h05df55be__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][1U];
        __Vtemp_h05df55be__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][2U];
        __Vtemp_h05df55be__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
            [3U][1U][3U];
        bufp->chgWData(oldp+354,(__Vtemp_h05df55be__0),128);
        bufp->chgWData(oldp+358,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
        bufp->chgCData(oldp+362,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),4);
        bufp->chgBit(oldp+363,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
        bufp->chgCData(oldp+364,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
        bufp->chgCData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),2);
        bufp->chgCData(oldp+366,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_rodom_cnt),2);
        bufp->chgWData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+371,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+372,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
        bufp->chgCData(oldp+373,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                           >> 4U))),6);
        bufp->chgWData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
        bufp->chgWData(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
        bufp->chgBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
        bufp->chgWData(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
        bufp->chgBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
        bufp->chgQData(oldp+416,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
        bufp->chgQData(oldp+418,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
        bufp->chgQData(oldp+420,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
        bufp->chgQData(oldp+422,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
        bufp->chgQData(oldp+424,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
        bufp->chgQData(oldp+426,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
        bufp->chgQData(oldp+428,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
        bufp->chgQData(oldp+430,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
        bufp->chgQData(oldp+432,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
        bufp->chgQData(oldp+434,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
        bufp->chgQData(oldp+436,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
        bufp->chgQData(oldp+438,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
        bufp->chgQData(oldp+440,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
        bufp->chgQData(oldp+442,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
        bufp->chgQData(oldp+444,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
        bufp->chgQData(oldp+446,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
        bufp->chgQData(oldp+448,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
        bufp->chgQData(oldp+450,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
        bufp->chgQData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
        bufp->chgQData(oldp+454,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
        bufp->chgQData(oldp+456,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
        bufp->chgQData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
        bufp->chgQData(oldp+460,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
        bufp->chgQData(oldp+462,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
        bufp->chgQData(oldp+464,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
        bufp->chgQData(oldp+466,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
        bufp->chgQData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
        bufp->chgQData(oldp+470,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
        bufp->chgQData(oldp+472,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
        bufp->chgQData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
        bufp->chgQData(oldp+476,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
        bufp->chgQData(oldp+478,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
        bufp->chgBit(oldp+480,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
        bufp->chgBit(oldp+481,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
        bufp->chgCData(oldp+482,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
        bufp->chgBit(oldp+483,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__w_last_ok));
        bufp->chgBit(oldp+484,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
        bufp->chgCData(oldp+485,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
        bufp->chgCData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
        bufp->chgQData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        bufp->chgQData(oldp+489,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        bufp->chgQData(oldp+491,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        bufp->chgQData(oldp+493,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        bufp->chgQData(oldp+495,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        bufp->chgQData(oldp+497,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        bufp->chgQData(oldp+499,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
        bufp->chgQData(oldp+501,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
        bufp->chgQData(oldp+503,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
        bufp->chgBit(oldp+505,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
        bufp->chgBit(oldp+506,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
        bufp->chgBit(oldp+507,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
        bufp->chgIData(oldp+508,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+509,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                           >> 4U))),7);
        bufp->chgCData(oldp+510,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
        bufp->chgWData(oldp+511,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
        bufp->chgCData(oldp+515,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),4);
        bufp->chgBit(oldp+516,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
        bufp->chgWData(oldp+517,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
        bufp->chgQData(oldp+521,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
        bufp->chgBit(oldp+523,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 3U))));
        __Vtemp_h282f1a49__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][0U];
        __Vtemp_h282f1a49__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][1U];
        __Vtemp_h282f1a49__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][2U];
        __Vtemp_h282f1a49__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][0U][3U];
        bufp->chgWData(oldp+524,(__Vtemp_h282f1a49__0),128);
        __Vtemp_h282f1690__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][0U];
        __Vtemp_h282f1690__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][1U];
        __Vtemp_h282f1690__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][2U];
        __Vtemp_h282f1690__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [0U][1U][3U];
        bufp->chgWData(oldp+528,(__Vtemp_h282f1690__0),128);
        __Vtemp_h27c01b1c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][0U];
        __Vtemp_h27c01b1c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][1U];
        __Vtemp_h27c01b1c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][2U];
        __Vtemp_h27c01b1c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][0U][3U];
        bufp->chgWData(oldp+532,(__Vtemp_h27c01b1c__0),128);
        __Vtemp_h27bfbedd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][0U];
        __Vtemp_h27bfbedd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][1U];
        __Vtemp_h27bfbedd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][2U];
        __Vtemp_h27bfbedd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [1U][1U][3U];
        bufp->chgWData(oldp+536,(__Vtemp_h27bfbedd__0),128);
        __Vtemp_h27c03259__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][0U];
        __Vtemp_h27c03259__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][1U];
        __Vtemp_h27c03259__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][2U];
        __Vtemp_h27c03259__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][0U][3U];
        bufp->chgWData(oldp+540,(__Vtemp_h27c03259__0),128);
        __Vtemp_h27bfd69c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][0U];
        __Vtemp_h27bfd69c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][1U];
        __Vtemp_h27bfd69c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][2U];
        __Vtemp_h27bfd69c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [2U][1U][3U];
        bufp->chgWData(oldp+544,(__Vtemp_h27bfd69c__0),128);
        __Vtemp_h27bfc32d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][0U];
        __Vtemp_h27bfc32d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][1U];
        __Vtemp_h27bfc32d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][2U];
        __Vtemp_h27bfc32d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][0U][3U];
        bufp->chgWData(oldp+548,(__Vtemp_h27bfc32d__0),128);
        __Vtemp_h27bfe6ee__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][0U];
        __Vtemp_h27bfe6ee__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][1U];
        __Vtemp_h27bfe6ee__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][2U];
        __Vtemp_h27bfe6ee__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
            [3U][1U][3U];
        bufp->chgWData(oldp+552,(__Vtemp_h27bfe6ee__0),128);
        bufp->chgWData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
        bufp->chgBit(oldp+560,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                         >> 0x1bU))));
        bufp->chgQData(oldp+561,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),64);
        bufp->chgCData(oldp+563,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
        bufp->chgCData(oldp+564,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
        bufp->chgCData(oldp+565,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point),2);
        bufp->chgCData(oldp+566,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt),2);
        bufp->chgWData(oldp+567,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
        if (vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en) {
            __Vtemp_h88b423c3__0[0U] = 0U;
            __Vtemp_h88b423c3__0[1U] = 0U;
            __Vtemp_h88b423c3__0[2U] = 0U;
            __Vtemp_h88b423c3__0[3U] = 0U;
        } else {
            __Vtemp_h88b423c3__0[0U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? 0U : (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64)));
            __Vtemp_h88b423c3__0[1U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? 0U : (IData)(
                                                           (vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64 
                                                            >> 0x20U))));
            __Vtemp_h88b423c3__0[2U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64)
                                            : 0U));
            __Vtemp_h88b423c3__0[3U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                            ? (IData)(
                                                      (vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64 
                                                       >> 0x20U))
                                            : 0U));
        }
        bufp->chgWData(oldp+573,(__Vtemp_h88b423c3__0),128);
        bufp->chgCData(oldp+577,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                           >> 4U))),6);
        bufp->chgBit(oldp+578,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+579,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+580,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+586,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+587,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+588,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+594,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+595,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+596,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+602,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+603,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+604,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+610,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+611,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+612,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+618,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+619,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
        bufp->chgWData(oldp+620,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
        bufp->chgBit(oldp+624,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
        bufp->chgBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
        bufp->chgBit(oldp+626,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
        bufp->chgBit(oldp+627,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
        bufp->chgWData(oldp+628,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
        bufp->chgBit(oldp+632,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
        bufp->chgBit(oldp+633,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
        bufp->chgBit(oldp+634,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
        bufp->chgBit(oldp+635,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    }
    bufp->chgBit(oldp+636,(vlSelf->clk));
    bufp->chgBit(oldp+637,(vlSelf->rst));
    bufp->chgQData(oldp+638,(vlSelf->pip_pc),64);
    bufp->chgQData(oldp+640,(vlSelf->pip_dnpc),64);
    bufp->chgQData(oldp+642,(vlSelf->pip_mem_pc),64);
    bufp->chgBit(oldp+644,(vlSelf->Ebreak));
    bufp->chgQData(oldp+645,(vlSelf->Icache_L1_miss),64);
    bufp->chgQData(oldp+647,(vlSelf->Icache_L1_hit),64);
    bufp->chgQData(oldp+649,(vlSelf->Dcache_L1_miss),64);
    bufp->chgQData(oldp+651,(vlSelf->Dcache_L1_hit),64);
    bufp->chgBit(oldp+653,(vlSelf->io_master_awready));
    bufp->chgBit(oldp+654,(vlSelf->io_master_awvalid));
    bufp->chgIData(oldp+655,(vlSelf->io_master_awaddr),32);
    bufp->chgCData(oldp+656,(vlSelf->io_master_awprot),3);
    bufp->chgCData(oldp+657,(vlSelf->io_master_awid),4);
    bufp->chgBit(oldp+658,(vlSelf->io_master_awuser));
    bufp->chgCData(oldp+659,(vlSelf->io_master_awlen),8);
    bufp->chgCData(oldp+660,(vlSelf->io_master_awsize),3);
    bufp->chgCData(oldp+661,(vlSelf->io_master_awburst),2);
    bufp->chgBit(oldp+662,(vlSelf->io_master_awlock));
    bufp->chgCData(oldp+663,(vlSelf->io_master_awcache),4);
    bufp->chgCData(oldp+664,(vlSelf->io_master_awqos),4);
    bufp->chgCData(oldp+665,(vlSelf->io_master_awregion),4);
    bufp->chgBit(oldp+666,(vlSelf->io_master_wready));
    bufp->chgBit(oldp+667,(vlSelf->io_master_wvalid));
    bufp->chgQData(oldp+668,(vlSelf->io_master_wdata),64);
    bufp->chgCData(oldp+670,(vlSelf->io_master_wstrb),8);
    bufp->chgBit(oldp+671,(vlSelf->io_master_wlast));
    bufp->chgBit(oldp+672,(vlSelf->io_master_wuser));
    bufp->chgBit(oldp+673,(vlSelf->io_master_bready));
    bufp->chgBit(oldp+674,(vlSelf->io_master_bvalid));
    bufp->chgCData(oldp+675,(vlSelf->io_master_bresp),2);
    bufp->chgCData(oldp+676,(vlSelf->io_master_bid),4);
    bufp->chgBit(oldp+677,(vlSelf->io_master_buser));
    bufp->chgBit(oldp+678,(vlSelf->io_master_arready));
    bufp->chgBit(oldp+679,(vlSelf->io_master_arvalid));
    bufp->chgIData(oldp+680,(vlSelf->io_master_araddr),32);
    bufp->chgCData(oldp+681,(vlSelf->io_master_arprot),3);
    bufp->chgCData(oldp+682,(vlSelf->io_master_arid),4);
    bufp->chgBit(oldp+683,(vlSelf->io_master_aruser));
    bufp->chgCData(oldp+684,(vlSelf->io_master_arlen),8);
    bufp->chgCData(oldp+685,(vlSelf->io_master_arsize),3);
    bufp->chgCData(oldp+686,(vlSelf->io_master_arburst),2);
    bufp->chgBit(oldp+687,(vlSelf->io_master_arlock));
    bufp->chgCData(oldp+688,(vlSelf->io_master_arcache),4);
    bufp->chgCData(oldp+689,(vlSelf->io_master_arqos),4);
    bufp->chgCData(oldp+690,(vlSelf->io_master_arregion),4);
    bufp->chgBit(oldp+691,(vlSelf->io_master_rready));
    bufp->chgBit(oldp+692,(vlSelf->io_master_rvalid));
    bufp->chgCData(oldp+693,(vlSelf->io_master_rresp),2);
    bufp->chgQData(oldp+694,(vlSelf->io_master_rdata),64);
    bufp->chgBit(oldp+696,(vlSelf->io_master_rlast));
    bufp->chgCData(oldp+697,(vlSelf->io_master_rid),4);
    bufp->chgBit(oldp+698,(vlSelf->io_master_ruser));
    bufp->chgBit(oldp+699,(vlSelf->io_slave_awready));
    bufp->chgBit(oldp+700,(vlSelf->io_slave_awvalid));
    bufp->chgIData(oldp+701,(vlSelf->io_slave_awaddr),32);
    bufp->chgCData(oldp+702,(vlSelf->io_slave_awid),4);
    bufp->chgCData(oldp+703,(vlSelf->io_slave_awlen),8);
    bufp->chgCData(oldp+704,(vlSelf->io_slave_awsize),3);
    bufp->chgCData(oldp+705,(vlSelf->io_slave_awburst),2);
    bufp->chgBit(oldp+706,(vlSelf->io_slave_wready));
    bufp->chgBit(oldp+707,(vlSelf->io_slave_wvalid));
    bufp->chgQData(oldp+708,(vlSelf->io_slave_wdata),64);
    bufp->chgCData(oldp+710,(vlSelf->io_slave_wstrb),8);
    bufp->chgBit(oldp+711,(vlSelf->io_slave_wlast));
    bufp->chgBit(oldp+712,(vlSelf->io_slave_bready));
    bufp->chgBit(oldp+713,(vlSelf->io_slave_bvalid));
    bufp->chgCData(oldp+714,(vlSelf->io_slave_bresp),2);
    bufp->chgCData(oldp+715,(vlSelf->io_slave_bid),4);
    bufp->chgBit(oldp+716,(vlSelf->io_slave_arready));
    bufp->chgBit(oldp+717,(vlSelf->io_slave_arvalid));
    bufp->chgIData(oldp+718,(vlSelf->io_slave_araddr),32);
    bufp->chgCData(oldp+719,(vlSelf->io_slave_arid),4);
    bufp->chgCData(oldp+720,(vlSelf->io_slave_arlen),8);
    bufp->chgCData(oldp+721,(vlSelf->io_slave_arsize),3);
    bufp->chgCData(oldp+722,(vlSelf->io_slave_arburst),2);
    bufp->chgBit(oldp+723,(vlSelf->io_slave_rready));
    bufp->chgBit(oldp+724,(vlSelf->io_slave_rvalid));
    bufp->chgCData(oldp+725,(vlSelf->io_slave_rresp),2);
    bufp->chgQData(oldp+726,(vlSelf->io_slave_rdata),64);
    bufp->chgBit(oldp+728,(vlSelf->io_slave_rlast));
    bufp->chgCData(oldp+729,(vlSelf->io_slave_rid),4);
    bufp->chgBit(oldp+730,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                            & (IData)(vlSelf->io_master_rvalid))));
    bufp->chgCData(oldp+731,(((IData)(vlSelf->rst) ? 0U
                               : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                   ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                ? (
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__if_read_vaild) 
                                                    | (IData)(vlSelf->ysyx_22041412_top__DOT__if_read_clean))
                                                    ? 0U
                                                    : 5U)
                                                : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_last_i)
                                                    ? 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT__if_read_vaild) 
                                                     | (IData)(vlSelf->ysyx_22041412_top__DOT__if_read_clean))
                                                     ? 0U
                                                     : 5U)
                                                    : 4U)))
                                   : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                       ? ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                           ? 0U : (
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                    ? 
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT__if_read_vaild) 
                                                     | (IData)(vlSelf->ysyx_22041412_top__DOT__if_read_clean))
                                                     ? 0U
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)) 
                                                        | (IData)(vlSelf->ysyx_22041412_top__DOT__if_read_clean)))
                                                     ? 0U
                                                     : 4U)))
                                       : ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                           ? 0U : (
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)))
                                                    ? 2U
                                                    : 0U)))))),3);
    bufp->chgCData(oldp+732,(((IData)(vlSelf->rst) ? 0U
                               : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                   ? ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_valid)
                                       ? 1U : ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                                                ? 1U
                                                : 0U))
                                   : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                       ? (((IData)(vlSelf->io_master_rvalid) 
                                           & (IData)(vlSelf->io_master_rlast))
                                           ? 0U : ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                                                    ? 1U
                                                    : 0U))
                                       : 0U)))),2);
    bufp->chgCData(oldp+733,(((IData)(vlSelf->rst) ? 0U
                               : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last) 
                                                    & ((0x11U 
                                                        < 
                                                        (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                         >> 0x1bU)) 
                                                       | (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last) 
                                                      & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
                                                     & (0x11U 
                                                        >= 
                                                        (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                         >> 0x1bU)))
                                                     ? 4U
                                                     : 2U)))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_w_valid)
                                                     ? 1U
                                                     : 2U))
                                                : (
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                                     & (0x11U 
                                                        >= 
                                                        (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                         >> 0x1bU))) 
                                                    & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready)))
                                                    ? 1U
                                                    : 
                                                   ((((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                                      & ((0x11U 
                                                          < 
                                                          (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                           >> 0x1bU)) 
                                                         & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)))) 
                                                     & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready)))
                                                     ? 2U
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
