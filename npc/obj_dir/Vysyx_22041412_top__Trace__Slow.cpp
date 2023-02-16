// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_top__Syms.h"


void Vysyx_22041412_top___024root__traceInitSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_top___024root__traceInitTop(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22041412_top___024root__traceInitSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+368,"clk", false,-1);
        tracep->declBit(c+369,"rst", false,-1);
        tracep->declQuad(c+370,"pip_pc", false,-1, 63,0);
        tracep->declQuad(c+372,"pip_dnpc", false,-1, 63,0);
        tracep->declQuad(c+374,"pip_mem_pc", false,-1, 63,0);
        tracep->declBus(c+376,"pip_imm", false,-1, 31,0);
        tracep->declBit(c+377,"Ebreak", false,-1);
        tracep->declBit(c+378,"io_master_awready", false,-1);
        tracep->declBit(c+379,"io_master_awvalid", false,-1);
        tracep->declQuad(c+380,"io_master_awaddr", false,-1, 63,0);
        tracep->declBus(c+382,"io_master_awprot", false,-1, 2,0);
        tracep->declBus(c+383,"io_master_awid", false,-1, 3,0);
        tracep->declBus(c+384,"io_master_awuser", false,-1, 0,0);
        tracep->declBus(c+385,"io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+386,"io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+387,"io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+388,"io_master_awlock", false,-1);
        tracep->declBus(c+389,"io_master_awcache", false,-1, 3,0);
        tracep->declBus(c+390,"io_master_awqos", false,-1, 3,0);
        tracep->declBus(c+391,"io_master_awregion", false,-1, 3,0);
        tracep->declBit(c+392,"io_master_wready", false,-1);
        tracep->declBit(c+393,"io_master_wvalid", false,-1);
        tracep->declQuad(c+394,"io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+396,"io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+397,"io_master_wlast", false,-1);
        tracep->declBus(c+398,"io_master_wuser", false,-1, 0,0);
        tracep->declBit(c+399,"io_master_bready", false,-1);
        tracep->declBit(c+400,"io_master_bvalid", false,-1);
        tracep->declBus(c+401,"io_master_bresp", false,-1, 1,0);
        tracep->declBus(c+402,"io_master_bid", false,-1, 3,0);
        tracep->declBus(c+403,"io_master_buser", false,-1, 0,0);
        tracep->declBit(c+404,"io_master_arready", false,-1);
        tracep->declBit(c+405,"io_master_arvalid", false,-1);
        tracep->declQuad(c+406,"io_master_araddr", false,-1, 63,0);
        tracep->declBus(c+408,"io_master_arprot", false,-1, 2,0);
        tracep->declBus(c+409,"io_master_arid", false,-1, 3,0);
        tracep->declBus(c+410,"io_master_aruser", false,-1, 0,0);
        tracep->declBus(c+411,"io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+412,"io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+413,"io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+414,"io_master_arlock", false,-1);
        tracep->declBus(c+415,"io_master_arcache", false,-1, 3,0);
        tracep->declBus(c+416,"io_master_arqos", false,-1, 3,0);
        tracep->declBus(c+417,"io_master_arregion", false,-1, 3,0);
        tracep->declBit(c+418,"io_master_rready", false,-1);
        tracep->declBit(c+419,"io_master_rvalid", false,-1);
        tracep->declBus(c+420,"io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+421,"io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+423,"io_master_rlast", false,-1);
        tracep->declBus(c+424,"io_master_rid", false,-1, 3,0);
        tracep->declBus(c+425,"io_master_ruser", false,-1, 0,0);
        tracep->declBit(c+426,"io_slave_awready", false,-1);
        tracep->declBit(c+427,"io_slave_awvalid", false,-1);
        tracep->declBus(c+428,"io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+429,"io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+430,"io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+431,"io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+432,"io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+433,"io_slave_wready", false,-1);
        tracep->declBit(c+434,"io_slave_wvalid", false,-1);
        tracep->declQuad(c+435,"io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+437,"io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+438,"io_slave_wlast", false,-1);
        tracep->declBit(c+439,"io_slave_bready", false,-1);
        tracep->declBit(c+440,"io_slave_bvalid", false,-1);
        tracep->declBus(c+441,"io_slave_bresp", false,-1, 1,0);
        tracep->declBus(c+442,"io_slave_bid", false,-1, 3,0);
        tracep->declBit(c+443,"io_slave_arready", false,-1);
        tracep->declBit(c+444,"io_slave_arvalid", false,-1);
        tracep->declBus(c+445,"io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+446,"io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+447,"io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+448,"io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+449,"io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+450,"io_slave_rready", false,-1);
        tracep->declBit(c+451,"io_slave_rvalid", false,-1);
        tracep->declBus(c+452,"io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+453,"io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+455,"io_slave_rlast", false,-1);
        tracep->declBus(c+456,"io_slave_rid", false,-1, 3,0);
        tracep->declBit(c+368,"ysyx_22041412_top clk", false,-1);
        tracep->declBit(c+369,"ysyx_22041412_top rst", false,-1);
        tracep->declQuad(c+370,"ysyx_22041412_top pip_pc", false,-1, 63,0);
        tracep->declQuad(c+372,"ysyx_22041412_top pip_dnpc", false,-1, 63,0);
        tracep->declQuad(c+374,"ysyx_22041412_top pip_mem_pc", false,-1, 63,0);
        tracep->declBus(c+376,"ysyx_22041412_top pip_imm", false,-1, 31,0);
        tracep->declBit(c+377,"ysyx_22041412_top Ebreak", false,-1);
        tracep->declBit(c+378,"ysyx_22041412_top io_master_awready", false,-1);
        tracep->declBit(c+379,"ysyx_22041412_top io_master_awvalid", false,-1);
        tracep->declQuad(c+380,"ysyx_22041412_top io_master_awaddr", false,-1, 63,0);
        tracep->declBus(c+382,"ysyx_22041412_top io_master_awprot", false,-1, 2,0);
        tracep->declBus(c+383,"ysyx_22041412_top io_master_awid", false,-1, 3,0);
        tracep->declBus(c+384,"ysyx_22041412_top io_master_awuser", false,-1, 0,0);
        tracep->declBus(c+385,"ysyx_22041412_top io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+386,"ysyx_22041412_top io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+387,"ysyx_22041412_top io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+388,"ysyx_22041412_top io_master_awlock", false,-1);
        tracep->declBus(c+389,"ysyx_22041412_top io_master_awcache", false,-1, 3,0);
        tracep->declBus(c+390,"ysyx_22041412_top io_master_awqos", false,-1, 3,0);
        tracep->declBus(c+391,"ysyx_22041412_top io_master_awregion", false,-1, 3,0);
        tracep->declBit(c+392,"ysyx_22041412_top io_master_wready", false,-1);
        tracep->declBit(c+393,"ysyx_22041412_top io_master_wvalid", false,-1);
        tracep->declQuad(c+394,"ysyx_22041412_top io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+396,"ysyx_22041412_top io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+397,"ysyx_22041412_top io_master_wlast", false,-1);
        tracep->declBus(c+398,"ysyx_22041412_top io_master_wuser", false,-1, 0,0);
        tracep->declBit(c+399,"ysyx_22041412_top io_master_bready", false,-1);
        tracep->declBit(c+400,"ysyx_22041412_top io_master_bvalid", false,-1);
        tracep->declBus(c+401,"ysyx_22041412_top io_master_bresp", false,-1, 1,0);
        tracep->declBus(c+402,"ysyx_22041412_top io_master_bid", false,-1, 3,0);
        tracep->declBus(c+403,"ysyx_22041412_top io_master_buser", false,-1, 0,0);
        tracep->declBit(c+404,"ysyx_22041412_top io_master_arready", false,-1);
        tracep->declBit(c+405,"ysyx_22041412_top io_master_arvalid", false,-1);
        tracep->declQuad(c+406,"ysyx_22041412_top io_master_araddr", false,-1, 63,0);
        tracep->declBus(c+408,"ysyx_22041412_top io_master_arprot", false,-1, 2,0);
        tracep->declBus(c+409,"ysyx_22041412_top io_master_arid", false,-1, 3,0);
        tracep->declBus(c+410,"ysyx_22041412_top io_master_aruser", false,-1, 0,0);
        tracep->declBus(c+411,"ysyx_22041412_top io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+412,"ysyx_22041412_top io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+413,"ysyx_22041412_top io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+414,"ysyx_22041412_top io_master_arlock", false,-1);
        tracep->declBus(c+415,"ysyx_22041412_top io_master_arcache", false,-1, 3,0);
        tracep->declBus(c+416,"ysyx_22041412_top io_master_arqos", false,-1, 3,0);
        tracep->declBus(c+417,"ysyx_22041412_top io_master_arregion", false,-1, 3,0);
        tracep->declBit(c+418,"ysyx_22041412_top io_master_rready", false,-1);
        tracep->declBit(c+419,"ysyx_22041412_top io_master_rvalid", false,-1);
        tracep->declBus(c+420,"ysyx_22041412_top io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+421,"ysyx_22041412_top io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+423,"ysyx_22041412_top io_master_rlast", false,-1);
        tracep->declBus(c+424,"ysyx_22041412_top io_master_rid", false,-1, 3,0);
        tracep->declBus(c+425,"ysyx_22041412_top io_master_ruser", false,-1, 0,0);
        tracep->declBit(c+426,"ysyx_22041412_top io_slave_awready", false,-1);
        tracep->declBit(c+427,"ysyx_22041412_top io_slave_awvalid", false,-1);
        tracep->declBus(c+428,"ysyx_22041412_top io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+429,"ysyx_22041412_top io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+430,"ysyx_22041412_top io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+431,"ysyx_22041412_top io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+432,"ysyx_22041412_top io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+433,"ysyx_22041412_top io_slave_wready", false,-1);
        tracep->declBit(c+434,"ysyx_22041412_top io_slave_wvalid", false,-1);
        tracep->declQuad(c+435,"ysyx_22041412_top io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+437,"ysyx_22041412_top io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+438,"ysyx_22041412_top io_slave_wlast", false,-1);
        tracep->declBit(c+439,"ysyx_22041412_top io_slave_bready", false,-1);
        tracep->declBit(c+440,"ysyx_22041412_top io_slave_bvalid", false,-1);
        tracep->declBus(c+441,"ysyx_22041412_top io_slave_bresp", false,-1, 1,0);
        tracep->declBus(c+442,"ysyx_22041412_top io_slave_bid", false,-1, 3,0);
        tracep->declBit(c+443,"ysyx_22041412_top io_slave_arready", false,-1);
        tracep->declBit(c+444,"ysyx_22041412_top io_slave_arvalid", false,-1);
        tracep->declBus(c+445,"ysyx_22041412_top io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+446,"ysyx_22041412_top io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+447,"ysyx_22041412_top io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+448,"ysyx_22041412_top io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+449,"ysyx_22041412_top io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+450,"ysyx_22041412_top io_slave_rready", false,-1);
        tracep->declBit(c+451,"ysyx_22041412_top io_slave_rvalid", false,-1);
        tracep->declBus(c+452,"ysyx_22041412_top io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+453,"ysyx_22041412_top io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+455,"ysyx_22041412_top io_slave_rlast", false,-1);
        tracep->declBus(c+456,"ysyx_22041412_top io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+459,"ysyx_22041412_top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+460,"ysyx_22041412_top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+461,"ysyx_22041412_top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+462,"ysyx_22041412_top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+463,"ysyx_22041412_top r_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22041412_top r_ready", false,-1);
        tracep->declBit(c+464,"ysyx_22041412_top w_valid", false,-1);
        tracep->declBit(c+465,"ysyx_22041412_top w_ready", false,-1);
        tracep->declQuad(c+2,"ysyx_22041412_top axi_r_data", false,-1, 63,0);
        tracep->declQuad(c+466,"ysyx_22041412_top axi_w_data", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22041412_top axi_r_addr", false,-1, 63,0);
        tracep->declQuad(c+468,"ysyx_22041412_top axi_w_addr", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22041412_top r_strb", false,-1, 7,0);
        tracep->declBus(c+470,"ysyx_22041412_top w_strb", false,-1, 7,0);
        tracep->declBus(c+471,"ysyx_22041412_top r_len_i", false,-1, 7,0);
        tracep->declBus(c+471,"ysyx_22041412_top w_len_i", false,-1, 7,0);
        tracep->declBus(c+7,"ysyx_22041412_top pip_stall", false,-1, 5,0);
        tracep->declBit(c+472,"ysyx_22041412_top pip_rst", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_top if_en", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_top id_en", false,-1);
        tracep->declBit(c+10,"ysyx_22041412_top ex_en", false,-1);
        tracep->declBit(c+11,"ysyx_22041412_top mem_en", false,-1);
        tracep->declBit(c+12,"ysyx_22041412_top wb_en", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_top id_stall", false,-1);
        tracep->declBit(c+14,"ysyx_22041412_top id_wait", false,-1);
        tracep->declBit(c+15,"ysyx_22041412_top ex_stall", false,-1);
        tracep->declBit(c+16,"ysyx_22041412_top mul_stall", false,-1);
        tracep->declBit(c+17,"ysyx_22041412_top ex_wait", false,-1);
        tracep->declBit(c+473,"ysyx_22041412_top mem_wait", false,-1);
        tracep->declBit(c+18,"ysyx_22041412_top mem_busy", false,-1);
        tracep->declBit(c+19,"ysyx_22041412_top mem_stall", false,-1);
        tracep->declBus(c+20,"ysyx_22041412_top if_imm", false,-1, 31,0);
        tracep->declBus(c+6,"ysyx_22041412_top if_r_strb", false,-1, 7,0);
        tracep->declBit(c+21,"ysyx_22041412_top if_r_valid", false,-1);
        tracep->declBit(c+1,"ysyx_22041412_top if_r_ready", false,-1);
        tracep->declQuad(c+22,"ysyx_22041412_top if_pc", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041412_top if_dnpc", false,-1, 63,0);
        tracep->declBus(c+26,"ysyx_22041412_top id_imm", false,-1, 31,0);
        tracep->declQuad(c+27,"ysyx_22041412_top id_pc", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22041412_top id_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+30,"ysyx_22041412_top id_imm_V2Type", false,-1, 1,0);
        tracep->declBit(c+31,"ysyx_22041412_top id_mul_en", false,-1);
        tracep->declQuad(c+32,"ysyx_22041412_top id_imm_data", false,-1, 63,0);
        tracep->declBus(c+34,"ysyx_22041412_top id_func3", false,-1, 2,0);
        tracep->declBit(c+35,"ysyx_22041412_top id_func7", false,-1);
        tracep->declBus(c+36,"ysyx_22041412_top id_Ra", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22041412_top id_Rb", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_22041412_top id_Rw", false,-1, 4,0);
        tracep->declBus(c+39,"ysyx_22041412_top id_opcode", false,-1, 6,0);
        tracep->declQuad(c+40,"ysyx_22041412_top id_rsA", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22041412_top id_rsB", false,-1, 63,0);
        tracep->declBit(c+44,"ysyx_22041412_top csr_jar_en", false,-1);
        tracep->declBus(c+45,"ysyx_22041412_top csr", false,-1, 11,0);
        tracep->declBus(c+46,"ysyx_22041412_top id_csr_id", false,-1, 2,0);
        tracep->declBit(c+47,"ysyx_22041412_top id_csr_en", false,-1);
        tracep->declBus(c+48,"ysyx_22041412_top ex_imm_V1Type", false,-1, 1,0);
        tracep->declBus(c+49,"ysyx_22041412_top ex_imm_V2Type", false,-1, 1,0);
        tracep->declBus(c+50,"ysyx_22041412_top ex_imm", false,-1, 31,0);
        tracep->declQuad(c+51,"ysyx_22041412_top ex_imm_data", false,-1, 63,0);
        tracep->declBit(c+53,"ysyx_22041412_top ex_mul_en", false,-1);
        tracep->declQuad(c+54,"ysyx_22041412_top ex_v1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22041412_top ex_v2", false,-1, 63,0);
        tracep->declQuad(c+58,"ysyx_22041412_top ex_rs2", false,-1, 63,0);
        tracep->declBus(c+60,"ysyx_22041412_top ex_rw", false,-1, 4,0);
        tracep->declBus(c+61,"ysyx_22041412_top ex_Ra", false,-1, 4,0);
        tracep->declBus(c+62,"ysyx_22041412_top ex_Rb", false,-1, 4,0);
        tracep->declBus(c+63,"ysyx_22041412_top ex_func3", false,-1, 2,0);
        tracep->declBit(c+64,"ysyx_22041412_top ex_func7", false,-1);
        tracep->declBus(c+65,"ysyx_22041412_top ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+66,"ysyx_22041412_top ex_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22041412_top ex_v1_in", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22041412_top ex_v2_in", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22041412_top ex_rs2_in", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22041412_top ex_res", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22041412_top csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22041412_top csr_data_i", false,-1, 63,0);
        tracep->declBit(c+78,"ysyx_22041412_top ex_csr_jar_en", false,-1);
        tracep->declBit(c+79,"ysyx_22041412_top ex_csr_en", false,-1);
        tracep->declBus(c+80,"ysyx_22041412_top ex_csr_id", false,-1, 2,0);
        tracep->declBit(c+81,"ysyx_22041412_top csr_ready_o", false,-1);
        tracep->declBit(c+82,"ysyx_22041412_top csr_stall", false,-1);
        tracep->declBus(c+83,"ysyx_22041412_top mem_imm", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_22041412_top mem_rw", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_22041412_top mem_opcode", false,-1, 6,0);
        tracep->declBus(c+86,"ysyx_22041412_top mem_func3", false,-1, 2,0);
        tracep->declBit(c+87,"ysyx_22041412_top mem_rw_type", false,-1);
        tracep->declBit(c+88,"ysyx_22041412_top mem_ram_en", false,-1);
        tracep->declBit(c+89,"ysyx_22041412_top mem_reg_en", false,-1);
        tracep->declQuad(c+90,"ysyx_22041412_top mem_addr", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22041412_top mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+94,"ysyx_22041412_top mem_pc", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22041412_top mem_imm_data", false,-1, 63,0);
        tracep->declQuad(c+474,"ysyx_22041412_top mem_temp", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22041412_top mem_res", false,-1, 63,0);
        tracep->declBit(c+100,"ysyx_22041412_top mem_csr_jar_en", false,-1);
        tracep->declQuad(c+101,"ysyx_22041412_top mem_rdata", false,-1, 63,0);
        tracep->declBit(c+103,"ysyx_22041412_top ex_ready_i", false,-1);
        tracep->declBit(c+104,"ysyx_22041412_top mem_valid_o", false,-1);
        tracep->declBit(c+105,"ysyx_22041412_top wb_reg_en", false,-1);
        tracep->declBit(c+476,"ysyx_22041412_top wb_rst", false,-1);
        tracep->declBus(c+106,"ysyx_22041412_top wb_imm", false,-1, 31,0);
        tracep->declBus(c+107,"ysyx_22041412_top wb_addr", false,-1, 4,0);
        tracep->declQuad(c+108,"ysyx_22041412_top wb_imm_data", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22041412_top wb_data", false,-1, 63,0);
        tracep->declQuad(c+112,"ysyx_22041412_top wb_pc", false,-1, 63,0);
        tracep->declQuad(c+114,"ysyx_22041412_top wb_dnpc", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22041412_top wb_opcode", false,-1, 6,0);
        tracep->declBit(c+117,"ysyx_22041412_top wb_csr_jar_en", false,-1);
        tracep->declBus(c+459,"ysyx_22041412_top axi4 RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top axi4 RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top axi4 AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top axi4 AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+460,"ysyx_22041412_top axi4 AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+461,"ysyx_22041412_top axi4 AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+462,"ysyx_22041412_top axi4 AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+368,"ysyx_22041412_top axi4 clk", false,-1);
        tracep->declBit(c+369,"ysyx_22041412_top axi4 rst", false,-1);
        tracep->declBit(c+463,"ysyx_22041412_top axi4 r_valid_i", false,-1);
        tracep->declBit(c+464,"ysyx_22041412_top axi4 w_valid_i", false,-1);
        tracep->declBit(c+1,"ysyx_22041412_top axi4 r_ready_o", false,-1);
        tracep->declBit(c+465,"ysyx_22041412_top axi4 w_ready_o", false,-1);
        tracep->declQuad(c+2,"ysyx_22041412_top axi4 data_read_o", false,-1, 63,0);
        tracep->declQuad(c+466,"ysyx_22041412_top axi4 rw_w_data_i", false,-1, 63,0);
        tracep->declQuad(c+468,"ysyx_22041412_top axi4 w_addr_i", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22041412_top axi4 r_addr_i", false,-1, 63,0);
        tracep->declBus(c+470,"ysyx_22041412_top axi4 w_size_i", false,-1, 7,0);
        tracep->declBus(c+6,"ysyx_22041412_top axi4 r_size_i", false,-1, 7,0);
        tracep->declBus(c+471,"ysyx_22041412_top axi4 r_len_i", false,-1, 7,0);
        tracep->declBus(c+471,"ysyx_22041412_top axi4 w_len_i", false,-1, 7,0);
        tracep->declBit(c+378,"ysyx_22041412_top axi4 axi_aw_ready_i", false,-1);
        tracep->declBit(c+379,"ysyx_22041412_top axi4 axi_aw_valid_o", false,-1);
        tracep->declQuad(c+380,"ysyx_22041412_top axi4 axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+382,"ysyx_22041412_top axi4 axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+383,"ysyx_22041412_top axi4 axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+384,"ysyx_22041412_top axi4 axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+385,"ysyx_22041412_top axi4 axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+386,"ysyx_22041412_top axi4 axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+387,"ysyx_22041412_top axi4 axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+388,"ysyx_22041412_top axi4 axi_aw_lock_o", false,-1);
        tracep->declBus(c+389,"ysyx_22041412_top axi4 axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+390,"ysyx_22041412_top axi4 axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+391,"ysyx_22041412_top axi4 axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+392,"ysyx_22041412_top axi4 axi_w_ready_i", false,-1);
        tracep->declBit(c+393,"ysyx_22041412_top axi4 axi_w_valid_o", false,-1);
        tracep->declQuad(c+394,"ysyx_22041412_top axi4 axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+396,"ysyx_22041412_top axi4 axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+397,"ysyx_22041412_top axi4 axi_w_last_o", false,-1);
        tracep->declBus(c+398,"ysyx_22041412_top axi4 axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+399,"ysyx_22041412_top axi4 axi_b_ready_o", false,-1);
        tracep->declBit(c+400,"ysyx_22041412_top axi4 axi_b_valid_i", false,-1);
        tracep->declBus(c+401,"ysyx_22041412_top axi4 axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+402,"ysyx_22041412_top axi4 axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+403,"ysyx_22041412_top axi4 axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+404,"ysyx_22041412_top axi4 axi_ar_ready_i", false,-1);
        tracep->declBit(c+405,"ysyx_22041412_top axi4 axi_ar_valid_o", false,-1);
        tracep->declQuad(c+406,"ysyx_22041412_top axi4 axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+408,"ysyx_22041412_top axi4 axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+409,"ysyx_22041412_top axi4 axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+410,"ysyx_22041412_top axi4 axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+411,"ysyx_22041412_top axi4 axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+412,"ysyx_22041412_top axi4 axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+413,"ysyx_22041412_top axi4 axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+414,"ysyx_22041412_top axi4 axi_ar_lock_o", false,-1);
        tracep->declBus(c+415,"ysyx_22041412_top axi4 axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+416,"ysyx_22041412_top axi4 axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+417,"ysyx_22041412_top axi4 axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+418,"ysyx_22041412_top axi4 axi_r_ready_o", false,-1);
        tracep->declBit(c+419,"ysyx_22041412_top axi4 axi_r_valid_i", false,-1);
        tracep->declBus(c+420,"ysyx_22041412_top axi4 axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+421,"ysyx_22041412_top axi4 axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+423,"ysyx_22041412_top axi4 axi_r_last_i", false,-1);
        tracep->declBus(c+424,"ysyx_22041412_top axi4 axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+425,"ysyx_22041412_top axi4 axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+118,"ysyx_22041412_top axi4 aw_state", false,-1, 1,0);
        tracep->declBus(c+457,"ysyx_22041412_top axi4 aw_next_state", false,-1, 1,0);
        tracep->declBus(c+119,"ysyx_22041412_top axi4 ar_state", false,-1, 1,0);
        tracep->declBus(c+458,"ysyx_22041412_top axi4 ar_next_state", false,-1, 1,0);
        tracep->declBus(c+477,"ysyx_22041412_top axi4 AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+478,"ysyx_22041412_top axi4 axi_id", false,-1, 3,0);
        tracep->declBus(c+476,"ysyx_22041412_top axi4 axi_user", false,-1, 0,0);
        tracep->declBus(c+479,"ysyx_22041412_top axi4 axi_len", false,-1, 7,0);
        tracep->declBus(c+480,"ysyx_22041412_top axi4 axi_size", false,-1, 2,0);
        tracep->declBit(c+368,"ysyx_22041412_top IF_sram clk", false,-1);
        tracep->declQuad(c+22,"ysyx_22041412_top IF_sram Addr", false,-1, 63,0);
        tracep->declBus(c+20,"ysyx_22041412_top IF_sram Imm", false,-1, 31,0);
        tracep->declBit(c+13,"ysyx_22041412_top IF_sram stall", false,-1);
        tracep->declBit(c+1,"ysyx_22041412_top IF_sram ready_i", false,-1);
        tracep->declBit(c+21,"ysyx_22041412_top IF_sram valid_o", false,-1);
        tracep->declBus(c+6,"ysyx_22041412_top IF_sram r_size_i", false,-1, 7,0);
        tracep->declBus(c+120,"ysyx_22041412_top IF_sram r_data_i", false,-1, 31,0);
        tracep->declQuad(c+4,"ysyx_22041412_top IF_sram r_addr_o", false,-1, 63,0);
        tracep->declBus(c+20,"ysyx_22041412_top IF_sram imm_data", false,-1, 31,0);
        tracep->declBit(c+121,"ysyx_22041412_top IF_sram valid", false,-1);
        tracep->declBus(c+26,"ysyx_22041412_top ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+39,"ysyx_22041412_top ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+34,"ysyx_22041412_top ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+35,"ysyx_22041412_top ID_decode func7", false,-1);
        tracep->declBus(c+36,"ysyx_22041412_top ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22041412_top ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+38,"ysyx_22041412_top ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+32,"ysyx_22041412_top ID_decode imme", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22041412_top ID_decode V1Type", false,-1, 1,0);
        tracep->declBus(c+30,"ysyx_22041412_top ID_decode V2Type", false,-1, 1,0);
        tracep->declBit(c+31,"ysyx_22041412_top ID_decode Mul_en", false,-1);
        tracep->declBit(c+122,"ysyx_22041412_top ID_decode I_type", false,-1);
        tracep->declBit(c+123,"ysyx_22041412_top ID_decode U_type", false,-1);
        tracep->declBit(c+124,"ysyx_22041412_top ID_decode J_type", false,-1);
        tracep->declBit(c+125,"ysyx_22041412_top ID_decode B_type", false,-1);
        tracep->declBit(c+126,"ysyx_22041412_top ID_decode S_type", false,-1);
        tracep->declBit(c+127,"ysyx_22041412_top ID_decode R_type", false,-1);
        tracep->declBit(c+368,"ysyx_22041412_top csr_reg clk", false,-1);
        tracep->declBit(c+369,"ysyx_22041412_top csr_reg rst", false,-1);
        tracep->declBit(c+79,"ysyx_22041412_top csr_reg en", false,-1);
        tracep->declQuad(c+66,"ysyx_22041412_top csr_reg pc", false,-1, 63,0);
        tracep->declBus(c+80,"ysyx_22041412_top csr_reg addr", false,-1, 2,0);
        tracep->declBus(c+63,"ysyx_22041412_top csr_reg func3", false,-1, 2,0);
        tracep->declQuad(c+54,"ysyx_22041412_top csr_reg data_i", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22041412_top csr_reg data_o", false,-1, 63,0);
        tracep->declBit(c+81,"ysyx_22041412_top csr_reg ready_o", false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+128+i*2,"ysyx_22041412_top csr_reg mcsr_reg", true,(i+0), 63,0);}}
        tracep->declBit(c+81,"ysyx_22041412_top csr_reg ready", false,-1);
        tracep->declQuad(c+76,"ysyx_22041412_top csr_reg data_r", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22041412_top csr_reg data_w", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22041412_top csr_reg data", false,-1, 63,0);
        tracep->declBit(c+368,"ysyx_22041412_top EXE_alu clk", false,-1);
        tracep->declQuad(c+54,"ysyx_22041412_top EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22041412_top EXE_alu scr2", false,-1, 63,0);
        tracep->declQuad(c+51,"ysyx_22041412_top EXE_alu imm", false,-1, 63,0);
        tracep->declBus(c+65,"ysyx_22041412_top EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+63,"ysyx_22041412_top EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+64,"ysyx_22041412_top EXE_alu func7", false,-1);
        tracep->declBit(c+53,"ysyx_22041412_top EXE_alu mul_en", false,-1);
        tracep->declBit(c+103,"ysyx_22041412_top EXE_alu ready_i", false,-1);
        tracep->declBit(c+16,"ysyx_22041412_top EXE_alu stall", false,-1);
        tracep->declQuad(c+74,"ysyx_22041412_top EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22041412_top EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+54,"ysyx_22041412_top EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22041412_top EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+145,"ysyx_22041412_top EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+147,"ysyx_22041412_top EXE_alu BY", false,-1, 63,0);
        tracep->declBit(c+149,"ysyx_22041412_top EXE_alu mul_ready", false,-1);
        tracep->declQuad(c+150,"ysyx_22041412_top EXE_alu mux_result", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22041412_top EXE_alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22041412_top EXE_alu Alusu", false,-1, 63,0);
        tracep->declBit(c+154,"ysyx_22041412_top EXE_alu rv64i_en", false,-1);
        tracep->declBit(c+155,"ysyx_22041412_top EXE_alu rv64r_en", false,-1);
        tracep->declQuad(c+54,"ysyx_22041412_top EXE_alu mul_rsa", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22041412_top EXE_alu mul_rsb", false,-1, 63,0);
        tracep->declBit(c+368,"ysyx_22041412_top EXE_alu mul clk", false,-1);
        tracep->declBit(c+53,"ysyx_22041412_top EXE_alu mul en", false,-1);
        tracep->declQuad(c+54,"ysyx_22041412_top EXE_alu mul rsA", false,-1, 63,0);
        tracep->declQuad(c+56,"ysyx_22041412_top EXE_alu mul rsB", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22041412_top EXE_alu mul func3", false,-1, 2,0);
        tracep->declBit(c+155,"ysyx_22041412_top EXE_alu mul rv64_en", false,-1);
        tracep->declBit(c+103,"ysyx_22041412_top EXE_alu mul ready_i", false,-1);
        tracep->declBit(c+149,"ysyx_22041412_top EXE_alu mul ready_o", false,-1);
        tracep->declQuad(c+152,"ysyx_22041412_top EXE_alu mul result", false,-1, 63,0);
        tracep->declBus(c+156,"ysyx_22041412_top EXE_alu mul rsAW", false,-1, 31,0);
        tracep->declBus(c+157,"ysyx_22041412_top EXE_alu mul rsBW", false,-1, 31,0);
        tracep->declBit(c+149,"ysyx_22041412_top EXE_alu mul ready", false,-1);
        tracep->declQuad(c+152,"ysyx_22041412_top EXE_alu mul data", false,-1, 63,0);
        tracep->declBus(c+481,"ysyx_22041412_top EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+482,"ysyx_22041412_top EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+150,"ysyx_22041412_top EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22041412_top EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+483,"ysyx_22041412_top EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+158,"ysyx_22041412_top EXE_alu Mux_ALU lut", false,-1, 1172,0);
        tracep->declBus(c+481,"ysyx_22041412_top EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+482,"ysyx_22041412_top EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+462,"ysyx_22041412_top EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+150,"ysyx_22041412_top EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+144,"ysyx_22041412_top EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+483,"ysyx_22041412_top EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+158,"ysyx_22041412_top EXE_alu Mux_ALU i0 lut", false,-1, 1172,0);
        tracep->declBus(c+485,"ysyx_22041412_top EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<17; i++) {
                tracep->declArray(c+195+i*3,"ysyx_22041412_top EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declBus(c+246+i*1,"ysyx_22041412_top EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<17; i++) {
                tracep->declQuad(c+263+i*2,"ysyx_22041412_top EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+297,"ysyx_22041412_top EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+299,"ysyx_22041412_top EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+486,"ysyx_22041412_top EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top MEM_dram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+459,"ysyx_22041412_top MEM_dram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+487,"ysyx_22041412_top MEM_dram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+368,"ysyx_22041412_top MEM_dram clk", false,-1);
        tracep->declBus(c+86,"ysyx_22041412_top MEM_dram func3", false,-1, 2,0);
        tracep->declQuad(c+90,"ysyx_22041412_top MEM_dram addr", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22041412_top MEM_dram wdata", false,-1, 63,0);
        tracep->declBit(c+88,"ysyx_22041412_top MEM_dram en", false,-1);
        tracep->declBit(c+87,"ysyx_22041412_top MEM_dram wen", false,-1);
        tracep->declBit(c+103,"ysyx_22041412_top MEM_dram ready_i", false,-1);
        tracep->declBit(c+18,"ysyx_22041412_top MEM_dram stall", false,-1);
        tracep->declBit(c+104,"ysyx_22041412_top MEM_dram ready_o", false,-1);
        tracep->declQuad(c+101,"ysyx_22041412_top MEM_dram rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22041412_top MEM_dram r_data", false,-1, 63,0);
        tracep->declQuad(c+300,"ysyx_22041412_top MEM_dram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+302,"ysyx_22041412_top MEM_dram wmask", false,-1, 7,0);
        tracep->declBit(c+104,"ysyx_22041412_top MEM_dram readyo", false,-1);
        tracep->declBit(c+368,"ysyx_22041412_top M_reg clk", false,-1);
        tracep->declBus(c+36,"ysyx_22041412_top M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+37,"ysyx_22041412_top M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22041412_top M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+105,"ysyx_22041412_top M_reg Wen", false,-1);
        tracep->declQuad(c+40,"ysyx_22041412_top M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+42,"ysyx_22041412_top M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+110,"ysyx_22041412_top M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+476,"ysyx_22041412_top M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+303+i*2,"ysyx_22041412_top M_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBit(c+367,"ysyx_22041412_top M_reg write_en", false,-1);
        tracep->declBus(c+7,"ysyx_22041412_top Stall stall", false,-1, 5,0);
        tracep->declBit(c+472,"ysyx_22041412_top Stall rst", false,-1);
        tracep->declBit(c+13,"ysyx_22041412_top Stall stall_from_id", false,-1);
        tracep->declBit(c+15,"ysyx_22041412_top Stall stall_from_ex", false,-1);
        tracep->declBit(c+19,"ysyx_22041412_top Stall stall_from_mem", false,-1);
    }
}

void Vysyx_22041412_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22041412_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22041412_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22041412_top___024root__traceRegister(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22041412_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22041412_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22041412_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22041412_top___024root__traceFullSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_top___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_top___024root__traceFullSub0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22041412_top__DOT__r_ready));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__axi_r_addr),64);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__if_r_strb),8);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
        tracep->fullBit(oldp+8,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                          >> 1U)))));
        tracep->fullBit(oldp+9,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                          >> 2U)))));
        tracep->fullBit(oldp+10,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                           >> 3U)))));
        tracep->fullBit(oldp+11,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                           >> 4U)))));
        tracep->fullBit(oldp+12,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                           >> 5U)))));
        tracep->fullBit(oldp+13,((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_r_valid)) 
                                        | (IData)(vlSelf->ysyx_22041412_top__DOT__id_wait)))));
        tracep->fullBit(oldp+14,(vlSelf->ysyx_22041412_top__DOT__id_wait));
        tracep->fullBit(oldp+15,((1U & ((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                          & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                          ? 1U : 0U) 
                                        | (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
        tracep->fullBit(oldp+16,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+17,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
        tracep->fullBit(oldp+18,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+19,((1U & (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                                         | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                             ? 1U : 0U)) 
                                        | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                            ? 1U : 0U)))));
        tracep->fullIData(oldp+20,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__imm_data),32);
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22041412_top__DOT__if_r_valid));
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__if_dnpc),64);
        tracep->fullIData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
        tracep->fullBit(oldp+31,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                                  & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0x19U))));
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
        tracep->fullCData(oldp+34,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+35,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
        tracep->fullCData(oldp+38,(((0x23U == (0x7fU 
                                               & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                     ? 0U : ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                              ? 0U : 
                                             (0x1fU 
                                              & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                 >> 7U))))),5);
        tracep->fullCData(oldp+39,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
        tracep->fullQData(oldp+40,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                     ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                    [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
        tracep->fullSData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__csr),12);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
        tracep->fullBit(oldp+47,(((0x73U == (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                   ? 1U : 0U)));
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
        tracep->fullBit(oldp+53,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
        tracep->fullQData(oldp+68,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                     ? vlSelf->ysyx_22041412_top__DOT__id_pc
                                     : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                         ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                         : (((((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                             & (3U 
                                                != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                             ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                             : ((((
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                 & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                                 ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                                 : 
                                                ((((((0U 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                    & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                  ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                  : 
                                                 (((((((0U 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                          != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                         != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra) 
                                                        == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                   ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                   [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))))),64);
        tracep->fullQData(oldp+70,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                     ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                     : (((((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                           & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                          & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                         & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                         ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                         : ((((((0U 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                   != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                             ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                             : ((((
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                 ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                 : 
                                                (((((((0U 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                      & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                         != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                                     & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                        != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                    & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                  ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                  : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
        tracep->fullQData(oldp+72,((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                       == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                      & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                     & (3U != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))
                                     ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                     : ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                            != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                           & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                              == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                          & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                         & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)))
                                         ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                         : ((((((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw)) 
                                               & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw))) 
                                             & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                             ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                             : ((((
                                                   (((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                     != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                                    & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                       != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw))) 
                                                   & ((IData)(vlSelf->ysyx_22041412_top__DOT__id_Rb) 
                                                      == (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr))) 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_reg_en))
                                                 ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                 : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
        tracep->fullBit(oldp+78,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
        tracep->fullBit(oldp+82,((((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))
                                   ? 1U : 0U)));
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
        tracep->fullCData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
        tracep->fullCData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
        tracep->fullBit(oldp+88,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
        tracep->fullBit(oldp+100,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
        tracep->fullBit(oldp+103,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
        tracep->fullBit(oldp+104,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
        tracep->fullCData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_state),2);
        tracep->fullCData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_state),2);
        tracep->fullIData(oldp+120,((IData)(vlSelf->ysyx_22041412_top__DOT__axi_r_data)),32);
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22041412_top__DOT__IF_sram__DOT__valid));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+124,((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        tracep->fullBit(oldp+125,((0x63U == (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        tracep->fullBit(oldp+126,((0x23U == (0x7fU 
                                             & vlSelf->ysyx_22041412_top__DOT__id_imm))));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
        tracep->fullCData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+145,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_top__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+147,((1ULL + (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                                                          >> 0x3fU))))) 
                                              << 0x3fU) 
                                             | (0x7fffffffffffffffULL 
                                                & (~ vlSelf->ysyx_22041412_top__DOT__ex_v2))))),64);
        tracep->fullBit(oldp+149,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
        tracep->fullBit(oldp+154,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        tracep->fullBit(oldp+155,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
        tracep->fullIData(oldp+156,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
        tracep->fullIData(oldp+157,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
        tracep->fullWData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),1173);
        tracep->fullWData(oldp+195,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+198,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+201,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+204,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullCData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+302,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                               ? 3U
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffU
                                                    : 0U))))),8);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+347,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+367,((((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                                    & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+368,(vlSelf->clk));
        tracep->fullBit(oldp+369,(vlSelf->rst));
        tracep->fullQData(oldp+370,(vlSelf->pip_pc),64);
        tracep->fullQData(oldp+372,(vlSelf->pip_dnpc),64);
        tracep->fullQData(oldp+374,(vlSelf->pip_mem_pc),64);
        tracep->fullIData(oldp+376,(vlSelf->pip_imm),32);
        tracep->fullBit(oldp+377,(vlSelf->Ebreak));
        tracep->fullBit(oldp+378,(vlSelf->io_master_awready));
        tracep->fullBit(oldp+379,(vlSelf->io_master_awvalid));
        tracep->fullQData(oldp+380,(vlSelf->io_master_awaddr),64);
        tracep->fullCData(oldp+382,(vlSelf->io_master_awprot),3);
        tracep->fullCData(oldp+383,(vlSelf->io_master_awid),4);
        tracep->fullBit(oldp+384,(vlSelf->io_master_awuser));
        tracep->fullCData(oldp+385,(vlSelf->io_master_awlen),8);
        tracep->fullCData(oldp+386,(vlSelf->io_master_awsize),3);
        tracep->fullCData(oldp+387,(vlSelf->io_master_awburst),2);
        tracep->fullBit(oldp+388,(vlSelf->io_master_awlock));
        tracep->fullCData(oldp+389,(vlSelf->io_master_awcache),4);
        tracep->fullCData(oldp+390,(vlSelf->io_master_awqos),4);
        tracep->fullCData(oldp+391,(vlSelf->io_master_awregion),4);
        tracep->fullBit(oldp+392,(vlSelf->io_master_wready));
        tracep->fullBit(oldp+393,(vlSelf->io_master_wvalid));
        tracep->fullQData(oldp+394,(vlSelf->io_master_wdata),64);
        tracep->fullCData(oldp+396,(vlSelf->io_master_wstrb),8);
        tracep->fullBit(oldp+397,(vlSelf->io_master_wlast));
        tracep->fullBit(oldp+398,(vlSelf->io_master_wuser));
        tracep->fullBit(oldp+399,(vlSelf->io_master_bready));
        tracep->fullBit(oldp+400,(vlSelf->io_master_bvalid));
        tracep->fullCData(oldp+401,(vlSelf->io_master_bresp),2);
        tracep->fullCData(oldp+402,(vlSelf->io_master_bid),4);
        tracep->fullBit(oldp+403,(vlSelf->io_master_buser));
        tracep->fullBit(oldp+404,(vlSelf->io_master_arready));
        tracep->fullBit(oldp+405,(vlSelf->io_master_arvalid));
        tracep->fullQData(oldp+406,(vlSelf->io_master_araddr),64);
        tracep->fullCData(oldp+408,(vlSelf->io_master_arprot),3);
        tracep->fullCData(oldp+409,(vlSelf->io_master_arid),4);
        tracep->fullBit(oldp+410,(vlSelf->io_master_aruser));
        tracep->fullCData(oldp+411,(vlSelf->io_master_arlen),8);
        tracep->fullCData(oldp+412,(vlSelf->io_master_arsize),3);
        tracep->fullCData(oldp+413,(vlSelf->io_master_arburst),2);
        tracep->fullBit(oldp+414,(vlSelf->io_master_arlock));
        tracep->fullCData(oldp+415,(vlSelf->io_master_arcache),4);
        tracep->fullCData(oldp+416,(vlSelf->io_master_arqos),4);
        tracep->fullCData(oldp+417,(vlSelf->io_master_arregion),4);
        tracep->fullBit(oldp+418,(vlSelf->io_master_rready));
        tracep->fullBit(oldp+419,(vlSelf->io_master_rvalid));
        tracep->fullCData(oldp+420,(vlSelf->io_master_rresp),2);
        tracep->fullQData(oldp+421,(vlSelf->io_master_rdata),64);
        tracep->fullBit(oldp+423,(vlSelf->io_master_rlast));
        tracep->fullCData(oldp+424,(vlSelf->io_master_rid),4);
        tracep->fullBit(oldp+425,(vlSelf->io_master_ruser));
        tracep->fullBit(oldp+426,(vlSelf->io_slave_awready));
        tracep->fullBit(oldp+427,(vlSelf->io_slave_awvalid));
        tracep->fullIData(oldp+428,(vlSelf->io_slave_awaddr),32);
        tracep->fullCData(oldp+429,(vlSelf->io_slave_awid),4);
        tracep->fullCData(oldp+430,(vlSelf->io_slave_awlen),8);
        tracep->fullCData(oldp+431,(vlSelf->io_slave_awsize),3);
        tracep->fullCData(oldp+432,(vlSelf->io_slave_awburst),2);
        tracep->fullBit(oldp+433,(vlSelf->io_slave_wready));
        tracep->fullBit(oldp+434,(vlSelf->io_slave_wvalid));
        tracep->fullQData(oldp+435,(vlSelf->io_slave_wdata),64);
        tracep->fullCData(oldp+437,(vlSelf->io_slave_wstrb),8);
        tracep->fullBit(oldp+438,(vlSelf->io_slave_wlast));
        tracep->fullBit(oldp+439,(vlSelf->io_slave_bready));
        tracep->fullBit(oldp+440,(vlSelf->io_slave_bvalid));
        tracep->fullCData(oldp+441,(vlSelf->io_slave_bresp),2);
        tracep->fullCData(oldp+442,(vlSelf->io_slave_bid),4);
        tracep->fullBit(oldp+443,(vlSelf->io_slave_arready));
        tracep->fullBit(oldp+444,(vlSelf->io_slave_arvalid));
        tracep->fullIData(oldp+445,(vlSelf->io_slave_araddr),32);
        tracep->fullCData(oldp+446,(vlSelf->io_slave_arid),4);
        tracep->fullCData(oldp+447,(vlSelf->io_slave_arlen),8);
        tracep->fullCData(oldp+448,(vlSelf->io_slave_arsize),3);
        tracep->fullCData(oldp+449,(vlSelf->io_slave_arburst),2);
        tracep->fullBit(oldp+450,(vlSelf->io_slave_rready));
        tracep->fullBit(oldp+451,(vlSelf->io_slave_rvalid));
        tracep->fullCData(oldp+452,(vlSelf->io_slave_rresp),2);
        tracep->fullQData(oldp+453,(vlSelf->io_slave_rdata),64);
        tracep->fullBit(oldp+455,(vlSelf->io_slave_rlast));
        tracep->fullCData(oldp+456,(vlSelf->io_slave_rid),4);
        tracep->fullCData(oldp+457,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__aw_next_state),2);
        tracep->fullCData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__ar_next_state),2);
        tracep->fullIData(oldp+459,(0x40U),32);
        tracep->fullIData(oldp+460,(4U),32);
        tracep->fullIData(oldp+461,(8U),32);
        tracep->fullIData(oldp+462,(1U),32);
        tracep->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__r_valid));
        tracep->fullBit(oldp+464,(vlSelf->ysyx_22041412_top__DOT__w_valid));
        tracep->fullBit(oldp+465,(vlSelf->ysyx_22041412_top__DOT__w_ready));
        tracep->fullQData(oldp+466,(vlSelf->ysyx_22041412_top__DOT__axi_w_data),64);
        tracep->fullQData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__axi_w_addr),64);
        tracep->fullCData(oldp+470,(vlSelf->ysyx_22041412_top__DOT__w_strb),8);
        tracep->fullCData(oldp+471,(1U),8);
        tracep->fullBit(oldp+472,(vlSelf->ysyx_22041412_top__DOT__pip_rst));
        tracep->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__mem_wait));
        tracep->fullQData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
        tracep->fullBit(oldp+476,(0U));
        tracep->fullIData(oldp+477,(3U),32);
        tracep->fullCData(oldp+478,(0U),4);
        tracep->fullCData(oldp+479,(0U),8);
        tracep->fullCData(oldp+480,(3U),3);
        tracep->fullIData(oldp+481,(0x11U),32);
        tracep->fullIData(oldp+482,(5U),32);
        tracep->fullQData(oldp+483,(0ULL),64);
        tracep->fullIData(oldp+485,(0x45U),32);
        tracep->fullIData(oldp+486,(0x11U),32);
        tracep->fullIData(oldp+487,(0x10000U),32);
    }
}
