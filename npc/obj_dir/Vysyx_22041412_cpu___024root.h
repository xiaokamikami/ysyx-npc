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
    VL_OUT8(Ebreak,0,0);
    VL_OUT(CP_IMM,31,0);
    VL_OUT64(CP_PC,63,0);
    VL_OUT64(CP_NPC,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ ysyx_22041412_cpu__DOT__pip__DOT__pip_stall;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__pip_rst;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_stall;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_stall;
        CData/*2:0*/ ysyx_22041412_cpu__DOT__pip__DOT__if_start;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_mul_en;
        CData/*6:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_opcode;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_rw;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_Ra;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_Rb;
        CData/*2:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_func3;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_func7;
        CData/*6:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_rw;
        CData/*6:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode;
        CData/*2:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_func3;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_reg_en;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_reg_en;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_addr;
        CData/*6:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type;
        CData/*4:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__rv64w_en;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul_ready;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__ready;
        IData/*31:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_imm;
        IData/*31:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_imm;
        IData/*31:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_imm;
        IData/*31:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_imm;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__if_pc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_pc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__id_rsB;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_v1;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_v2;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__ex_pc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_addr;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_rdata;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_pc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_temp;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__mem_res;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_pc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mux_result;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ua;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__ub;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__mul__DOT__data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__r_data;
        QData/*63:0*/ ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 134217728> ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory;
        VlUnpacked<VlWide<3>/*68:0*/, 14> ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 14> ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 14> ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<31>/*965:0*/ ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4;
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
