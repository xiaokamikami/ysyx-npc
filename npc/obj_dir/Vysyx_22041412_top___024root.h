// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22041412_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22041412_TOP___024ROOT_H_
#define VERILATED_VYSYX_22041412_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22041412_top__Syms;
class Vysyx_22041412_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22041412_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(Ebreak,0,0);
    VL_IN8(io_master_awready,0,0);
    VL_OUT8(io_master_awvalid,0,0);
    VL_OUT8(io_master_awprot,2,0);
    VL_OUT8(io_master_awid,3,0);
    VL_OUT8(io_master_awuser,0,0);
    VL_OUT8(io_master_awlen,7,0);
    VL_OUT8(io_master_awsize,2,0);
    VL_OUT8(io_master_awburst,1,0);
    VL_OUT8(io_master_awlock,0,0);
    VL_OUT8(io_master_awcache,3,0);
    VL_OUT8(io_master_awqos,3,0);
    VL_OUT8(io_master_awregion,3,0);
    VL_IN8(io_master_wready,0,0);
    VL_OUT8(io_master_wvalid,0,0);
    VL_OUT8(io_master_wstrb,7,0);
    VL_OUT8(io_master_wlast,0,0);
    VL_OUT8(io_master_wuser,0,0);
    VL_OUT8(io_master_bready,0,0);
    VL_IN8(io_master_bvalid,0,0);
    VL_IN8(io_master_bresp,1,0);
    VL_IN8(io_master_bid,3,0);
    VL_IN8(io_master_buser,0,0);
    VL_IN8(io_master_arready,0,0);
    VL_OUT8(io_master_arvalid,0,0);
    VL_OUT8(io_master_arprot,2,0);
    VL_OUT8(io_master_arid,3,0);
    VL_OUT8(io_master_aruser,0,0);
    VL_OUT8(io_master_arlen,7,0);
    VL_OUT8(io_master_arsize,2,0);
    VL_OUT8(io_master_arburst,1,0);
    VL_OUT8(io_master_arlock,0,0);
    VL_OUT8(io_master_arcache,3,0);
    VL_OUT8(io_master_arqos,3,0);
    VL_OUT8(io_master_arregion,3,0);
    VL_OUT8(io_master_rready,0,0);
    VL_IN8(io_master_rvalid,0,0);
    VL_IN8(io_master_rresp,1,0);
    VL_IN8(io_master_rlast,0,0);
    VL_IN8(io_master_rid,3,0);
    VL_IN8(io_master_ruser,0,0);
    VL_IN8(io_slave_awready,0,0);
    VL_OUT8(io_slave_awvalid,0,0);
    VL_OUT8(io_slave_awid,3,0);
    VL_OUT8(io_slave_awlen,7,0);
    VL_OUT8(io_slave_awsize,2,0);
    VL_OUT8(io_slave_awburst,1,0);
    VL_IN8(io_slave_wready,0,0);
    VL_OUT8(io_slave_wvalid,0,0);
    VL_OUT8(io_slave_wstrb,7,0);
    VL_OUT8(io_slave_wlast,0,0);
    VL_OUT8(io_slave_bready,0,0);
    VL_IN8(io_slave_bvalid,0,0);
    VL_IN8(io_slave_bresp,1,0);
    VL_IN8(io_slave_bid,3,0);
    VL_IN8(io_slave_arready,0,0);
    VL_OUT8(io_slave_arvalid,0,0);
    VL_OUT8(io_slave_arid,3,0);
    VL_OUT8(io_slave_arlen,7,0);
    VL_OUT8(io_slave_arsize,2,0);
    VL_OUT8(io_slave_arburst,1,0);
    VL_OUT8(io_slave_rready,0,0);
    VL_IN8(io_slave_rvalid,0,0);
    VL_IN8(io_slave_rresp,1,0);
    VL_IN8(io_slave_rlast,0,0);
    VL_IN8(io_slave_rid,3,0);
    VL_OUT(pip_imm,31,0);
    VL_OUT(io_master_awaddr,31,0);
    VL_OUT(io_master_araddr,31,0);
    VL_OUT(io_slave_awaddr,31,0);
    VL_OUT(io_slave_araddr,31,0);
    VL_OUT64(pip_pc,63,0);
    VL_OUT64(pip_dnpc,63,0);
    VL_OUT64(pip_mem_pc,63,0);
    VL_OUT64(io_master_wdata,63,0);
    VL_IN64(io_master_rdata,63,0);
    VL_OUT64(io_slave_wdata,63,0);
    VL_IN64(io_slave_rdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22041412_top__DOT__r_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__r_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__w_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__w_ready;
        CData/*7:0*/ ysyx_22041412_top__DOT__r_strb;
        CData/*7:0*/ ysyx_22041412_top__DOT__w_strb;
        CData/*7:0*/ ysyx_22041412_top__DOT__r_len_i;
        CData/*7:0*/ ysyx_22041412_top__DOT__w_len_i;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ar_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ar_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ar_wen_w;
        CData/*7:0*/ ysyx_22041412_top__DOT__if_ar_len;
        CData/*7:0*/ ysyx_22041412_top__DOT__if_ar_size;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_rw_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_rw_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_rw_wen;
        CData/*7:0*/ ysyx_22041412_top__DOT__mem_rw_len;
        CData/*7:0*/ ysyx_22041412_top__DOT__mem_rw_size;
        CData/*5:0*/ ysyx_22041412_top__DOT__pip_stall;
        CData/*0:0*/ ysyx_22041412_top__DOT__pip_rst;
        CData/*0:0*/ ysyx_22041412_top__DOT__id_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_wait;
        CData/*7:0*/ ysyx_22041412_top__DOT__if_r_strb;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ready_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_jr_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__jar_end;
        CData/*1:0*/ ysyx_22041412_top__DOT__id_imm_V1Type;
        CData/*1:0*/ ysyx_22041412_top__DOT__id_imm_V2Type;
        CData/*4:0*/ ysyx_22041412_top__DOT__id_Ra;
        CData/*4:0*/ ysyx_22041412_top__DOT__id_Rb;
        CData/*0:0*/ ysyx_22041412_top__DOT__csr_jar_en;
        CData/*2:0*/ ysyx_22041412_top__DOT__id_csr_id;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_imm_V1Type;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_imm_V2Type;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_mul_en;
        CData/*4:0*/ ysyx_22041412_top__DOT__ex_rw;
        CData/*4:0*/ ysyx_22041412_top__DOT__ex_Ra;
        CData/*4:0*/ ysyx_22041412_top__DOT__ex_Rb;
        CData/*2:0*/ ysyx_22041412_top__DOT__ex_func3;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_func7;
        CData/*6:0*/ ysyx_22041412_top__DOT__ex_opcode;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_csr_jar_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_csr_en;
        CData/*2:0*/ ysyx_22041412_top__DOT__ex_csr_id;
        CData/*4:0*/ ysyx_22041412_top__DOT__mem_rw;
        CData/*6:0*/ ysyx_22041412_top__DOT__mem_opcode;
        CData/*2:0*/ ysyx_22041412_top__DOT__mem_func3;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_rw_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_ram_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_reg_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_csr_jar_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_valid_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__wb_reg_en;
        CData/*4:0*/ ysyx_22041412_top__DOT__wb_addr;
        CData/*6:0*/ ysyx_22041412_top__DOT__wb_opcode;
        CData/*0:0*/ ysyx_22041412_top__DOT__wb_csr_jar_en;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi4__DOT__aw_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi4__DOT__aw_next_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi4__DOT__ar_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi4__DOT__ar_next_state;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_sram__DOT__valid_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__I_type;
    };
    struct {
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__U_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__R_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__ready;
        CData/*4:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mode;
        CData/*0:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22041412_top__DOT__MEM_dram__DOT__readyo;
        SData/*11:0*/ ysyx_22041412_top__DOT__csr;
        IData/*31:0*/ ysyx_22041412_top__DOT__axi_r_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__axi_w_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__if_ar_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__mem_rw_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__if_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__id_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__ex_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__mem_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__wb_imm;
        QData/*63:0*/ ysyx_22041412_top__DOT__axi_r_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__axi_w_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__if_ar_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_rw_r_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_rw_w_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__if_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_rsB;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_v1;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_v2;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_rs2;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_addr;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_wdata;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_dnpc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_temp;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_res;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_dnpc;
        QData/*63:0*/ ysyx_22041412_top__DOT__IF_sram__DOT__dnpc;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data_r;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22041412_top__DOT__MEM_dram__DOT__r_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r;
        VlUnpacked<QData/*63:0*/, 6> ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg;
        VlUnpacked<VlWide<3>/*68:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22041412_top__DOT__M_reg__DOT__DataReg;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<37>/*1172:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4;
    QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22041412_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22041412_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22041412_top___024root(const char* name);
    ~Vysyx_22041412_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22041412_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
