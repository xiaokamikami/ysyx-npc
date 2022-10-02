// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22041412_cpu.h for the primary calling header

#ifndef VERILATED_VYSYX_22041412_CPU___024ROOT_H_
#define VERILATED_VYSYX_22041412_CPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22041412_cpu__Syms;
class Vysyx_22041412_cpu_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22041412_cpu___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_OUT8(CP_difftest,0,0);
    VL_OUT8(CP_Immen,0,0);
    VL_OUT(CP_Imm,31,0);
    VL_OUT64(CP_PC,63,0);
    VL_OUT64(CP_NPC,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ ysyx_22041412_cpu__DOT__cpu_count;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Reg_EN;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Imm_EN;
    CData/*3:0*/ ysyx_22041412_cpu__DOT__Imm_Type;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__EQ_EN;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Immdecode__DOT__I_type;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Immdecode__DOT__U_type;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Immdecode__DOT__J_type;
    CData/*4:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__Mode;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__hit;
    IData/*31:0*/ ysyx_22041412_cpu__DOT__Imm;
    IData/*31:0*/ ysyx_22041412_cpu__DOT__ImmMem__DOT__Immaddr;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__rsA;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__rsB;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__rsW;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__immdata;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__ALU_S;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__ALU_A;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__DNPC;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__PC;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__AY;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__BY;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__Muxsu;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__lut_out;
    QData/*63:0*/ ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__lut_out;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041412_cpu__DOT__X_reg__DOT__DataReg;
    VlUnpacked<IData/*31:0*/, 134217728> ysyx_22041412_cpu__DOT__ImmMem__DOT__ImmMemory;
    VlUnpacked<VlWide<3>/*68:0*/, 11> ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*4:0*/, 11> ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 11> ysyx_22041412_cpu__DOT__Alu__DOT__Mux_ALU__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 1> ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 1> ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 1> ysyx_22041412_cpu__DOT__Mux_ALU_rsa__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_rsb__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*67:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> ysyx_22041412_cpu__DOT__Mux_ALU_result__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*4:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Imm_en__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*4:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 1> ysyx_22041412_cpu__DOT__Mux_Reg_en__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*135:0*/ ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_rsb____pinNumber4;
    VlWide<5>/*135:0*/ ysyx_22041412_cpu__DOT____Vcellinp__Mux_ALU_result____pinNumber4;
    VlWide<24>/*758:0*/ ysyx_22041412_cpu__DOT__Alu__DOT____Vcellinp__Mux_ALU____pinNumber4;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22041412_cpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22041412_cpu___024root);  ///< Copying not allowed
  public:
    Vysyx_22041412_cpu___024root(const char* name);
    ~Vysyx_22041412_cpu___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22041412_cpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
