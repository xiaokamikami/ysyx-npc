// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22041412_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22041412_TOP___024ROOT_H_
#define VERILATED_VYSYX_22041412_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22041412_top__Syms;

class Vysyx_22041412_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
    };
    struct {
        VL_IN8(io_slave_rvalid,0,0);
        VL_IN8(io_slave_rresp,1,0);
        VL_IN8(io_slave_rlast,0,0);
        VL_IN8(io_slave_rid,3,0);
        CData/*0:0*/ ysyx_22041412_top__DOT__r_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ar_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ar_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_read_vaild;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_read_clean;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_r_valid;
        CData/*7:0*/ ysyx_22041412_top__DOT__mem_r_len;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_r_last;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_w_valid;
        CData/*7:0*/ ysyx_22041412_top__DOT__mem_w_len;
        CData/*2:0*/ ysyx_22041412_top__DOT__mem_w_size;
        CData/*0:0*/ ysyx_22041412_top__DOT__icache_ar_valid;
        CData/*0:0*/ ysyx_22041412_top__DOT__icache_ar_ready;
        CData/*7:0*/ ysyx_22041412_top__DOT__icache_ar_len;
        CData/*0:0*/ ysyx_22041412_top__DOT__icache_last_i;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_clear;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_ready_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_jr_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__if_jr_hit;
        CData/*1:0*/ ysyx_22041412_top__DOT__id_imm_V1Type;
        CData/*1:0*/ ysyx_22041412_top__DOT__id_imm_V2Type;
        CData/*4:0*/ ysyx_22041412_top__DOT__id_Ra;
        CData/*4:0*/ ysyx_22041412_top__DOT__id_Rb;
        CData/*0:0*/ ysyx_22041412_top__DOT__jal_ok;
        CData/*0:0*/ ysyx_22041412_top__DOT__id_vaild_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__id_ready_o;
        CData/*2:0*/ ysyx_22041412_top__DOT__id_csr_id;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_imm_V1Type;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_imm_V2Type;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_mul_en;
        CData/*4:0*/ ysyx_22041412_top__DOT__ex_rw;
        CData/*2:0*/ ysyx_22041412_top__DOT__ex_func3;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_func7;
        CData/*6:0*/ ysyx_22041412_top__DOT__ex_opcode;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_jump_mode;
        CData/*1:0*/ ysyx_22041412_top__DOT__ex_mem_mode;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_csr_jar_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_csr_en;
        CData/*2:0*/ ysyx_22041412_top__DOT__ex_csr_id;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_load_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_mem_load_wait;
        CData/*0:0*/ ysyx_22041412_top__DOT__alu_ready_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__ex_ready_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__csr_ready_o;
        CData/*4:0*/ ysyx_22041412_top__DOT__mem_rw;
        CData/*2:0*/ ysyx_22041412_top__DOT__mem_func3;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_rw_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_ram_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_reg_en;
        CData/*1:0*/ ysyx_22041412_top__DOT__mem_jump_mode;
        CData/*1:0*/ ysyx_22041412_top__DOT__mem_mem_mode;
        CData/*0:0*/ ysyx_22041412_top__DOT__mem_valid_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__wb_reg_en;
        CData/*4:0*/ ysyx_22041412_top__DOT__wb_addr;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_hafc4f4f0__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0;
    };
    struct {
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h703320e1__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h6a1ff02c__0;
        CData/*0:0*/ ysyx_22041412_top__DOT____VdfgTmp_h8e0711ce__0;
        CData/*0:0*/ ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid;
        CData/*7:0*/ ysyx_22041412_top__DOT__axi4__DOT__wd_count;
        CData/*0:0*/ ysyx_22041412_top__DOT__axi4__DOT__w_last_ok;
        CData/*0:0*/ ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid;
        CData/*2:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch;
        CData/*2:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state;
        CData/*2:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state;
        CData/*3:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__write_en;
        CData/*3:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v;
        CData/*1:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v_w;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num;
        CData/*2:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__state;
        CData/*2:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__next_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point;
        CData/*1:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point_l1;
        CData/*1:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__cache_rodom_cnt;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN;
        CData/*0:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN;
        CData/*2:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__state;
        CData/*1:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__cache_state;
        CData/*3:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__offset;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__jump;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__jump_mode;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__one_line;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__imm_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__wait_ok;
        CData/*6:0*/ ysyx_22041412_top__DOT__IF_s1__DOT____VdfgTmp_h669b9d97__0;
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__I_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__U_type;
        CData/*0:0*/ ysyx_22041412_top__DOT__ID_decode__DOT__R_type;
        CData/*4:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mode;
        CData/*0:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready;
        CData/*3:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en;
        CData/*3:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v;
        CData/*1:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd;
    };
    struct {
        CData/*2:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state;
        CData/*2:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_next_state;
        CData/*2:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state;
        CData/*1:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point;
        CData/*1:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point_l1;
        CData/*1:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen;
        CData/*0:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_22041412_top__DOT__csr;
        VL_OUT(io_master_awaddr,31,0);
        VL_OUT(io_master_araddr,31,0);
        VL_OUT(io_slave_awaddr,31,0);
        VL_OUT(io_slave_araddr,31,0);
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__if_ar_data;
        IData/*31:0*/ ysyx_22041412_top__DOT__if_ar_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__mem_r_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__mem_w_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__icache_ar_addr;
        IData/*31:0*/ ysyx_22041412_top__DOT__if_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__id_imm;
        IData/*31:0*/ ysyx_22041412_top__DOT__mem_addr;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT__write_data;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data;
        IData/*31:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__dnpc;
        IData/*27:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__get_pc;
        IData/*31:0*/ ysyx_22041412_top__DOT__IF_s1__DOT__jump_pc;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data;
        IData/*27:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q;
        VlWide<4>/*127:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen;
        IData/*31:0*/ __VdfgTmp_h6cd3955d__0;
    };
    struct {
        IData/*31:0*/ __VdfgTmp_h6cd8c4c6__0;
        IData/*31:0*/ __VdfgTmp_h6cccb7a3__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(pip_pc,63,0);
        VL_OUT64(pip_dnpc,63,0);
        VL_OUT64(pip_mem_pc,63,0);
        VL_OUT64(Icache_L1_miss,63,0);
        VL_OUT64(Icache_L1_hit,63,0);
        VL_OUT64(Dcache_L1_miss,63,0);
        VL_OUT64(Dcache_L1_hit,63,0);
        VL_OUT64(io_master_wdata,63,0);
        VL_IN64(io_master_rdata,63,0);
        VL_OUT64(io_slave_wdata,63,0);
        VL_IN64(io_slave_rdata,63,0);
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_r_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_w_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__icache_ar_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__if_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__id_rsB;
        QData/*63:0*/ ysyx_22041412_top__DOT__jal_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_v1;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_v2;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_rs2;
        QData/*63:0*/ ysyx_22041412_top__DOT__ex_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_wdata;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_dnpc;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_temp;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_res;
        QData/*63:0*/ ysyx_22041412_top__DOT__mem_rdata;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_imm_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_pc;
        QData/*63:0*/ ysyx_22041412_top__DOT__wb_dnpc;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data_r;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data_w;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT__data;
        QData/*63:0*/ ysyx_22041412_top__DOT__csr_reg__DOT____Vlvbound_h6fd2383c__0;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__AY;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__BY;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data;
        QData/*63:0*/ ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out;
        QData/*63:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data;
        QData/*63:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64;
        QData/*63:0*/ ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 2>, 4> ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data;
        VlUnpacked<VlUnpacked<IData/*20:0*/, 4>, 128> ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_ram;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 128> ysyx_22041412_top__DOT__Icache_L1__DOT__cache_fwen_ct;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram;
    };
    struct {
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__Icache_L1__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<QData/*63:0*/, 6> ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg;
        VlUnpacked<VlWide<3>/*68:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 17> ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 2>, 4> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data;
        VlUnpacked<VlUnpacked<IData/*20:0*/, 4>, 128> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_tag_ram;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 128> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_fwen_ct;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 128> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_d_ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22041412_top__DOT__M_reg__DOT__DataReg;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_22041412_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_22041412_top___024root(Vysyx_22041412_top__Syms* symsp, const char* v__name);
    ~Vysyx_22041412_top___024root();
    VL_UNCOPYABLE(Vysyx_22041412_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
