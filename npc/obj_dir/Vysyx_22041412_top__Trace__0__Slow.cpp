// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_top__Syms.h"


VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_init_sub__TOP__0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+798,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+800,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+802,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+804,"Ebreak", false,-1);
    tracep->declQuad(c+805,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+807,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+809,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+811,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+813,"io_master_awready", false,-1);
    tracep->declBit(c+814,"io_master_awvalid", false,-1);
    tracep->declBus(c+815,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+816,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+817,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+818,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+819,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+821,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+822,"io_master_awlock", false,-1);
    tracep->declBus(c+823,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+825,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+826,"io_master_wready", false,-1);
    tracep->declBit(c+827,"io_master_wvalid", false,-1);
    tracep->declQuad(c+828,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+830,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+831,"io_master_wlast", false,-1);
    tracep->declBus(c+832,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+833,"io_master_bready", false,-1);
    tracep->declBit(c+834,"io_master_bvalid", false,-1);
    tracep->declBus(c+835,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+836,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+837,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+838,"io_master_arready", false,-1);
    tracep->declBit(c+839,"io_master_arvalid", false,-1);
    tracep->declBus(c+840,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+842,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+844,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+845,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+846,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+847,"io_master_arlock", false,-1);
    tracep->declBus(c+848,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+850,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+851,"io_master_rready", false,-1);
    tracep->declBit(c+852,"io_master_rvalid", false,-1);
    tracep->declBus(c+853,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+854,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+856,"io_master_rlast", false,-1);
    tracep->declBus(c+857,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+858,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+859,"io_slave_awready", false,-1);
    tracep->declBit(c+860,"io_slave_awvalid", false,-1);
    tracep->declBus(c+861,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+862,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+863,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+864,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+865,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+866,"io_slave_wready", false,-1);
    tracep->declBit(c+867,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+868,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+870,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+871,"io_slave_wlast", false,-1);
    tracep->declBit(c+872,"io_slave_bready", false,-1);
    tracep->declBit(c+873,"io_slave_bvalid", false,-1);
    tracep->declBus(c+874,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+875,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+876,"io_slave_arready", false,-1);
    tracep->declBit(c+877,"io_slave_arvalid", false,-1);
    tracep->declBus(c+878,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+879,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+880,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+881,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+882,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+883,"io_slave_rready", false,-1);
    tracep->declBit(c+884,"io_slave_rvalid", false,-1);
    tracep->declBus(c+885,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+886,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+888,"io_slave_rlast", false,-1);
    tracep->declBus(c+889,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+798,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+800,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+802,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+804,"Ebreak", false,-1);
    tracep->declQuad(c+805,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+807,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+809,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+811,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+813,"io_master_awready", false,-1);
    tracep->declBit(c+814,"io_master_awvalid", false,-1);
    tracep->declBus(c+815,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+816,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+817,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+818,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+819,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+820,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+821,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+822,"io_master_awlock", false,-1);
    tracep->declBus(c+823,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+825,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+826,"io_master_wready", false,-1);
    tracep->declBit(c+827,"io_master_wvalid", false,-1);
    tracep->declQuad(c+828,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+830,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+831,"io_master_wlast", false,-1);
    tracep->declBus(c+832,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+833,"io_master_bready", false,-1);
    tracep->declBit(c+834,"io_master_bvalid", false,-1);
    tracep->declBus(c+835,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+836,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+837,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+838,"io_master_arready", false,-1);
    tracep->declBit(c+839,"io_master_arvalid", false,-1);
    tracep->declBus(c+840,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+841,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+842,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+844,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+845,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+846,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+847,"io_master_arlock", false,-1);
    tracep->declBus(c+848,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+850,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+851,"io_master_rready", false,-1);
    tracep->declBit(c+852,"io_master_rvalid", false,-1);
    tracep->declBus(c+853,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+854,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+856,"io_master_rlast", false,-1);
    tracep->declBus(c+857,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+858,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+859,"io_slave_awready", false,-1);
    tracep->declBit(c+860,"io_slave_awvalid", false,-1);
    tracep->declBus(c+861,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+862,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+863,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+864,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+865,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+866,"io_slave_wready", false,-1);
    tracep->declBit(c+867,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+868,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+870,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+871,"io_slave_wlast", false,-1);
    tracep->declBit(c+872,"io_slave_bready", false,-1);
    tracep->declBit(c+873,"io_slave_bvalid", false,-1);
    tracep->declBus(c+874,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+875,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+876,"io_slave_arready", false,-1);
    tracep->declBit(c+877,"io_slave_arvalid", false,-1);
    tracep->declBus(c+878,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+879,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+880,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+881,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+882,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+883,"io_slave_rready", false,-1);
    tracep->declBit(c+884,"io_slave_rvalid", false,-1);
    tracep->declBus(c+885,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+886,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+888,"io_slave_rlast", false,-1);
    tracep->declBus(c+889,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+893,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+897,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+893,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+27,"r_valid", false,-1);
    tracep->declBit(c+852,"r_ready", false,-1);
    tracep->declBit(c+28,"w_valid", false,-1);
    tracep->declBit(c+826,"w_ready", false,-1);
    tracep->declQuad(c+854,"axi_r_data", false,-1, 63,0);
    tracep->declBus(c+840,"axi_r_addr", false,-1, 31,0);
    tracep->declQuad(c+828,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+815,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+845,"r_size", false,-1, 2,0);
    tracep->declBus(c+820,"w_size", false,-1, 2,0);
    tracep->declBus(c+844,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+819,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+856,"r_last_o", false,-1);
    tracep->declBit(c+831,"w_last_o", false,-1);
    tracep->declBit(c+29,"if_ar_valid", false,-1);
    tracep->declBit(c+30,"if_ar_ready", false,-1);
    tracep->declArray(c+31,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+35,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+36,"mem_r_valid", false,-1);
    tracep->declBit(c+890,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last", false,-1);
    tracep->declBit(c+28,"mem_w_valid", false,-1);
    tracep->declBit(c+826,"mem_w_ready", false,-1);
    tracep->declQuad(c+39,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+42,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+43,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+831,"mem_w_last", false,-1);
    tracep->declBit(c+44,"icache_ar_valid", false,-1);
    tracep->declBit(c+21,"icache_ar_ready", false,-1);
    tracep->declQuad(c+22,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+45,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+46,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"icache_last_i", false,-1);
    tracep->declBus(c+47,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+48,"if_pc", false,-1, 63,0);
    tracep->declBit(c+50,"if_ready_o", false,-1);
    tracep->declBit(c+51,"if_jr_ready", false,-1);
    tracep->declBus(c+52,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+53,"id_pc", false,-1, 63,0);
    tracep->declBus(c+55,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+56,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+57,"id_mul_en", false,-1);
    tracep->declQuad(c+58,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+60,"id_func3", false,-1, 2,0);
    tracep->declBit(c+61,"id_func7", false,-1);
    tracep->declBus(c+62,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+63,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+64,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+65,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+66,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+68,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+70,"id_vaild_o", false,-1);
    tracep->declBit(c+71,"id_ready_o", false,-1);
    tracep->declBit(c+72,"csr_jar_en", false,-1);
    tracep->declBus(c+73,"csr", false,-1, 11,0);
    tracep->declBus(c+74,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+75,"id_csr_en", false,-1);
    tracep->declBus(c+76,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+77,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+78,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+80,"ex_mul_en", false,-1);
    tracep->declQuad(c+81,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+83,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+85,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+87,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+88,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+89,"ex_func7", false,-1);
    tracep->declBus(c+90,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+91,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+93,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+95,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+97,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+99,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+101,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+81,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+103,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+104,"ex_csr_en", false,-1);
    tracep->declBus(c+105,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+106,"ex_wait", false,-1);
    tracep->declBit(c+107,"ex_load_wait", false,-1);
    tracep->declBit(c+898,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+108,"alu_ready_o", false,-1);
    tracep->declBit(c+70,"ex_valid_o", false,-1);
    tracep->declBit(c+109,"ex_ready_o", false,-1);
    tracep->declBit(c+110,"csr_ready_o", false,-1);
    tracep->declBus(c+111,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+112,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+113,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+114,"mem_rw_type", false,-1);
    tracep->declBit(c+115,"mem_ram_en", false,-1);
    tracep->declBit(c+116,"mem_reg_en", false,-1);
    tracep->declBus(c+117,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+118,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+120,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+122,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+124,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+899,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+126,"mem_res", false,-1, 63,0);
    tracep->declQuad(c+128,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+130,"mem_valid_o", false,-1);
    tracep->declBit(c+131,"sram_ready_o", false,-1);
    tracep->declBit(c+132,"wb_reg_en", false,-1);
    tracep->declBus(c+133,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+134,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+136,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+138,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+140,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+142,"wb_opcode", false,-1, 6,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declQuad(c+81,"scr1", false,-1, 63,0);
    tracep->declQuad(c+83,"scr2", false,-1, 63,0);
    tracep->declQuad(c+78,"imm", false,-1, 63,0);
    tracep->declBus(c+90,"opcode", false,-1, 6,0);
    tracep->declBus(c+88,"func3", false,-1, 2,0);
    tracep->declBit(c+89,"func7", false,-1);
    tracep->declBit(c+80,"mul_en", false,-1);
    tracep->declBit(c+71,"ready_i", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+108,"ready_o", false,-1);
    tracep->declQuad(c+99,"result", false,-1, 63,0);
    tracep->declBus(c+143,"Mode", false,-1, 4,0);
    tracep->declQuad(c+81,"AU", false,-1, 63,0);
    tracep->declQuad(c+83,"BU", false,-1, 63,0);
    tracep->declQuad(c+144,"AY", false,-1, 63,0);
    tracep->declQuad(c+146,"BY", false,-1, 63,0);
    tracep->declBit(c+148,"mul_ready_o", false,-1);
    tracep->declQuad(c+149,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+151,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+99,"Alusu", false,-1, 63,0);
    tracep->declBit(c+153,"rv64i_en", false,-1);
    tracep->declBit(c+154,"rv64r_en", false,-1);
    tracep->declQuad(c+81,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+83,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+901,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+902,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+893,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+149,"out", false,-1, 63,0);
    tracep->declBus(c+143,"key", false,-1, 4,0);
    tracep->declQuad(c+903,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+901,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+902,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+893,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+897,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+149,"out", false,-1, 63,0);
    tracep->declBus(c+143,"key", false,-1, 4,0);
    tracep->declQuad(c+903,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 1172,0);
    tracep->declBus(c+905,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+192+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+243+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+277,"lut_out", false,-1, 63,0);
    tracep->declBit(c+279,"hit", false,-1);
    tracep->declBus(c+906,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+80,"en", false,-1);
    tracep->declQuad(c+81,"rsA", false,-1, 63,0);
    tracep->declQuad(c+83,"rsB", false,-1, 63,0);
    tracep->declBus(c+88,"func3", false,-1, 2,0);
    tracep->declBit(c+154,"rv64_en", false,-1);
    tracep->declBit(c+71,"ready_i", false,-1);
    tracep->declBit(c+148,"ready_o", false,-1);
    tracep->declQuad(c+151,"result", false,-1, 63,0);
    tracep->declBus(c+280,"rsAW", false,-1, 31,0);
    tracep->declBus(c+281,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+151,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+52,"instr", false,-1, 31,0);
    tracep->declBus(c+65,"opcode", false,-1, 6,0);
    tracep->declBus(c+60,"func3", false,-1, 2,0);
    tracep->declBit(c+61,"func7", false,-1);
    tracep->declBus(c+62,"Rs1", false,-1, 4,0);
    tracep->declBus(c+63,"Rs2", false,-1, 4,0);
    tracep->declBus(c+64,"Rd", false,-1, 4,0);
    tracep->declQuad(c+58,"imme", false,-1, 63,0);
    tracep->declBus(c+55,"V1Type", false,-1, 1,0);
    tracep->declBus(c+56,"V2Type", false,-1, 1,0);
    tracep->declBit(c+57,"Mul_en", false,-1);
    tracep->declBit(c+282,"I_type", false,-1);
    tracep->declBit(c+283,"U_type", false,-1);
    tracep->declBit(c+284,"J_type", false,-1);
    tracep->declBit(c+285,"B_type", false,-1);
    tracep->declBit(c+286,"S_type", false,-1);
    tracep->declBit(c+287,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+48,"pc", false,-1, 63,0);
    tracep->declQuad(c+122,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+47,"imm_data", false,-1, 31,0);
    tracep->declBit(c+51,"jarl_rady", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+50,"ready_o", false,-1);
    tracep->declBit(c+30,"ready_i", false,-1);
    tracep->declBit(c+29,"valid_o", false,-1);
    tracep->declArray(c+31,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+35,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+288,"state", false,-1, 2,0);
    tracep->declArray(c+289,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+293,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+294,"imm_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+295,"offset", false,-1, 3,0);
    tracep->declBus(c+296,"pc_offset", false,-1, 3,0);
    tracep->declBit(c+297,"jar", false,-1);
    tracep->declBit(c+298,"jal", false,-1);
    tracep->declBit(c+299,"one_line", false,-1);
    tracep->declBus(c+300,"dnpc", false,-1, 31,0);
    tracep->declBit(c+301,"dnpc_v", false,-1);
    tracep->declBus(c+302,"get_pc", false,-1, 27,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+805,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+807,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+35,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+29,"cpu_valid", false,-1);
    tracep->declArray(c+31,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+30,"cpu_ready", false,-1);
    tracep->declBit(c+21,"axi_ready_i", false,-1);
    tracep->declBit(c+44,"axi_valid_o", false,-1);
    tracep->declBit(c+24,"axi_r_last_i", false,-1);
    tracep->declBus(c+46,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+22,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+45,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+303,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+304,"cache_index", false,-1, 6,0);
    tracep->declBus(c+295,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+305,"[0]", false,-1, 127,0);
    tracep->declArray(c+309,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+313,"[0]", false,-1, 127,0);
    tracep->declArray(c+317,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+321,"[0]", false,-1, 127,0);
    tracep->declArray(c+325,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+329,"[0]", false,-1, 127,0);
    tracep->declArray(c+333,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+337,"[0]", false,-1, 127,0);
    tracep->declArray(c+341,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+345,"[0]", false,-1, 127,0);
    tracep->declArray(c+349,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+353,"[0]", false,-1, 127,0);
    tracep->declArray(c+357,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+361,"[0]", false,-1, 127,0);
    tracep->declArray(c+365,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+369,"write_data", false,-1, 127,0);
    tracep->declBus(c+373,"write_en", false,-1, 7,0);
    tracep->declBus(c+374,"tag_v", false,-1, 7,0);
    tracep->declBus(c+375,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+376,"bust_num", false,-1);
    tracep->declBus(c+377,"state", false,-1, 2,0);
    tracep->declBus(c+891,"next_state", false,-1, 2,0);
    tracep->declBus(c+378,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+379,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+383,"CEN", false,-1);
    tracep->declBit(c+384,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+386,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+390,"CEN", false,-1);
    tracep->declBit(c+391,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+392,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+396,"CEN", false,-1);
    tracep->declBit(c+397,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+398,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+402,"CEN", false,-1);
    tracep->declBit(c+403,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+404,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+408,"CEN", false,-1);
    tracep->declBit(c+409,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+410,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+414,"CEN", false,-1);
    tracep->declBit(c+415,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+416,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+420,"CEN", false,-1);
    tracep->declBit(c+421,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+422,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+426,"CEN", false,-1);
    tracep->declBit(c+427,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+428,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+432,"CEN", false,-1);
    tracep->declBit(c+433,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+434,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+438,"CEN", false,-1);
    tracep->declBit(c+439,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+440,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+444,"CEN", false,-1);
    tracep->declBit(c+445,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+446,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+450,"CEN", false,-1);
    tracep->declBit(c+451,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+452,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+456,"CEN", false,-1);
    tracep->declBit(c+457,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+458,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+462,"CEN", false,-1);
    tracep->declBit(c+463,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+464,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+468,"CEN", false,-1);
    tracep->declBit(c+469,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+470,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+474,"CEN", false,-1);
    tracep->declBit(c+475,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+369,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBus(c+62,"Ra", false,-1, 4,0);
    tracep->declBus(c+63,"Rb", false,-1, 4,0);
    tracep->declBus(c+133,"Rw", false,-1, 4,0);
    tracep->declBit(c+132,"Wen", false,-1);
    tracep->declQuad(c+66,"BusA", false,-1, 63,0);
    tracep->declQuad(c+68,"BusB", false,-1, 63,0);
    tracep->declQuad(c+136,"BusW", false,-1, 63,0);
    tracep->declBit(c+797,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+476+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+540,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+893,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+897,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBit(c+27,"r_valid_i", false,-1);
    tracep->declBit(c+28,"w_valid_i", false,-1);
    tracep->declBit(c+852,"r_ready_o", false,-1);
    tracep->declBit(c+826,"w_ready_o", false,-1);
    tracep->declQuad(c+854,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+828,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+815,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+840,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+820,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+845,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+844,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+819,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+856,"r_last_o", false,-1);
    tracep->declBit(c+831,"w_last_o", false,-1);
    tracep->declBit(c+813,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+814,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+815,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+816,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+817,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+818,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+819,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+820,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+821,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+822,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+823,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+824,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+825,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+826,"axi_w_ready_i", false,-1);
    tracep->declBit(c+827,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+828,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+830,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+831,"axi_w_last_o", false,-1);
    tracep->declBus(c+832,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+833,"axi_b_ready_o", false,-1);
    tracep->declBit(c+834,"axi_b_valid_i", false,-1);
    tracep->declBus(c+835,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+836,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+837,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+838,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+839,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+840,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+841,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+842,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+843,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+844,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+845,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+846,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+847,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+848,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+849,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+850,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+851,"axi_r_ready_o", false,-1);
    tracep->declBit(c+852,"axi_r_valid_i", false,-1);
    tracep->declBus(c+853,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+854,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+856,"axi_r_last_i", false,-1);
    tracep->declBus(c+857,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+858,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+909,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+910,"axi_id", false,-1, 3,0);
    tracep->declBus(c+911,"axi_user", false,-1, 0,0);
    tracep->declBus(c+912,"axi_len", false,-1, 7,0);
    tracep->declBus(c+913,"axi_size", false,-1, 2,0);
    tracep->declBit(c+541,"axi_aw_valid", false,-1);
    tracep->declBus(c+542,"wd_count", false,-1, 7,0);
    tracep->declBit(c+543,"w_last_ok", false,-1);
    tracep->declBit(c+544,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+893,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+897,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBit(c+44,"if_ar_valid", false,-1);
    tracep->declBit(c+21,"if_ar_ready", false,-1);
    tracep->declQuad(c+22,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+45,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+46,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"if_last_i", false,-1);
    tracep->declBit(c+36,"mem_r_valid", false,-1);
    tracep->declBit(c+890,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last_i", false,-1);
    tracep->declBit(c+28,"mem_w_valid", false,-1);
    tracep->declBit(c+826,"mem_w_ready", false,-1);
    tracep->declQuad(c+39,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+42,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+43,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+831,"mem_w_last_i", false,-1);
    tracep->declBit(c+27,"r_valid_i", false,-1);
    tracep->declBit(c+28,"w_valid_i", false,-1);
    tracep->declBit(c+852,"r_ready_o", false,-1);
    tracep->declBit(c+826,"w_ready_o", false,-1);
    tracep->declQuad(c+854,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+828,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+815,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+840,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+820,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+845,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+844,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+819,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+856,"r_last_i", false,-1);
    tracep->declBit(c+831,"w_last_i", false,-1);
    tracep->declBus(c+545,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+25,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+546,"rd_state", false,-1, 1,0);
    tracep->declBus(c+892,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+914,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+915,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+916,"wr_state", false,-1, 1,0);
    tracep->declBus(c+917,"wr_next_state", false,-1, 1,0);
    tracep->declBus(c+918,"debug_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBit(c+104,"en", false,-1);
    tracep->declQuad(c+91,"pc", false,-1, 63,0);
    tracep->declBus(c+105,"addr", false,-1, 2,0);
    tracep->declBus(c+88,"func3", false,-1, 2,0);
    tracep->declQuad(c+81,"data_i", false,-1, 63,0);
    tracep->declQuad(c+101,"data_o", false,-1, 63,0);
    tracep->declBit(c+130,"valid_i", false,-1);
    tracep->declBit(c+110,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+547+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+101,"data_r", false,-1, 63,0);
    tracep->declQuad(c+559,"data_w", false,-1, 63,0);
    tracep->declQuad(c+561,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+894,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+893,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+809,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+811,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+113,"func3", false,-1, 2,0);
    tracep->declBus(c+117,"addr", false,-1, 31,0);
    tracep->declQuad(c+118,"wdata", false,-1, 63,0);
    tracep->declBit(c+114,"wen", false,-1);
    tracep->declBit(c+109,"ex_ready_i", false,-1);
    tracep->declBit(c+115,"mem_valid_i", false,-1);
    tracep->declBit(c+131,"mem_ready_o", false,-1);
    tracep->declQuad(c+128,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+890,"r_ready_i", false,-1);
    tracep->declBit(c+36,"r_valid_o", false,-1);
    tracep->declBit(c+20,"r_last_i", false,-1);
    tracep->declBus(c+38,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+826,"w_ready_i", false,-1);
    tracep->declBit(c+831,"w_last_i", false,-1);
    tracep->declBit(c+28,"w_valid_o", false,-1);
    tracep->declBus(c+43,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+42,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+39,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+41,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+563,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+565,"dcache_ready_i", false,-1);
    tracep->declBit(c+566,"dcache_valid_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+809,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+811,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+114,"cpu_rw_en", false,-1);
    tracep->declBus(c+117,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+566,"cpu_valid", false,-1);
    tracep->declQuad(c+118,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+113,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+563,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+565,"cpu_ready", false,-1);
    tracep->declBit(c+826,"axi_w_ready_i", false,-1);
    tracep->declBit(c+28,"axi_w_valid_o", false,-1);
    tracep->declBit(c+831,"axi_w_last_i", false,-1);
    tracep->declBus(c+42,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+39,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+41,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+43,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+890,"axi_r_ready_i", false,-1);
    tracep->declBit(c+36,"axi_r_valid_o", false,-1);
    tracep->declBit(c+20,"axi_r_last_i", false,-1);
    tracep->declBus(c+38,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+567,"cache_rd_ready", false,-1);
    tracep->declBit(c+568,"cache_wr_ready", false,-1);
    tracep->declBus(c+569,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+570,"cache_index", false,-1, 6,0);
    tracep->declBus(c+571,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+572,"write_data", false,-1, 127,0);
    tracep->declArray(c+919,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+576,"write_en", false,-1, 7,0);
    tracep->declBit(c+577,"rw_strb_en", false,-1);
    tracep->declArray(c+578,"rw_strb", false,-1, 127,0);
    tracep->declQuad(c+582,"rw_strb_64", false,-1, 63,0);
    tracep->declBit(c+584,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+585,"[0]", false,-1, 127,0);
    tracep->declArray(c+589,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+593,"[0]", false,-1, 127,0);
    tracep->declArray(c+597,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+601,"[0]", false,-1, 127,0);
    tracep->declArray(c+605,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+609,"[0]", false,-1, 127,0);
    tracep->declArray(c+613,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+617,"[0]", false,-1, 127,0);
    tracep->declArray(c+621,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+625,"[0]", false,-1, 127,0);
    tracep->declArray(c+629,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+633,"[0]", false,-1, 127,0);
    tracep->declArray(c+637,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+641,"[0]", false,-1, 127,0);
    tracep->declArray(c+645,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+649,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+651,"cache_write_data", false,-1, 127,0);
    tracep->declBit(c+655,"device", false,-1);
    tracep->declQuad(c+656,"write_back_data", false,-1, 63,0);
    tracep->declBus(c+923,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+658,"tag_v", false,-1, 7,0);
    tracep->declBus(c+659,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+924,"bust_rd", false,-1);
    tracep->declBus(c+660,"rd_state", false,-1, 2,0);
    tracep->declBus(c+26,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+661,"wr_state", false,-1, 2,0);
    tracep->declBus(c+925,"debug_addr", false,-1, 31,0);
    tracep->declBus(c+662,"cache_write_point", false,-1, 2,0);
    tracep->declBus(c+926,"cache_write_point_l1", false,-1, 2,0);
    tracep->declBus(c+662,"cache_rodom_cnt", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+663,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+667,"CEN", false,-1);
    tracep->declBit(c+668,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+674,"cen", false,-1);
    tracep->declBit(c+675,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+676,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+680,"CEN", false,-1);
    tracep->declBit(c+681,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+682,"cen", false,-1);
    tracep->declBit(c+683,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+684,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+688,"CEN", false,-1);
    tracep->declBit(c+689,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+690,"cen", false,-1);
    tracep->declBit(c+691,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+692,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+696,"CEN", false,-1);
    tracep->declBit(c+697,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+698,"cen", false,-1);
    tracep->declBit(c+699,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+700,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+704,"CEN", false,-1);
    tracep->declBit(c+705,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+706,"cen", false,-1);
    tracep->declBit(c+707,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+708,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+712,"CEN", false,-1);
    tracep->declBit(c+713,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+714,"cen", false,-1);
    tracep->declBit(c+715,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+716,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+720,"CEN", false,-1);
    tracep->declBit(c+721,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+722,"cen", false,-1);
    tracep->declBit(c+723,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+724,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+728,"CEN", false,-1);
    tracep->declBit(c+729,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+730,"cen", false,-1);
    tracep->declBit(c+731,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+732,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+736,"CEN", false,-1);
    tracep->declBit(c+737,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+738,"cen", false,-1);
    tracep->declBit(c+739,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+740,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+744,"CEN", false,-1);
    tracep->declBit(c+745,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+746,"cen", false,-1);
    tracep->declBit(c+747,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+748,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+752,"CEN", false,-1);
    tracep->declBit(c+753,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+754,"cen", false,-1);
    tracep->declBit(c+755,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+756,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+760,"CEN", false,-1);
    tracep->declBit(c+761,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+762,"cen", false,-1);
    tracep->declBit(c+763,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+764,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+768,"CEN", false,-1);
    tracep->declBit(c+769,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+770,"cen", false,-1);
    tracep->declBit(c+771,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+772,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+776,"CEN", false,-1);
    tracep->declBit(c+777,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+778,"cen", false,-1);
    tracep->declBit(c+779,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+780,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+784,"CEN", false,-1);
    tracep->declBit(c+785,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+786,"cen", false,-1);
    tracep->declBit(c+787,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+907,"Bits", false,-1, 31,0);
    tracep->declBus(c+893,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+908,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+907,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+788,"Q", false,-1, 127,0);
    tracep->declBit(c+796,"CLK", false,-1);
    tracep->declBit(c+792,"CEN", false,-1);
    tracep->declBit(c+793,"WEN", false,-1);
    tracep->declArray(c+669,"BWEN", false,-1, 127,0);
    tracep->declBus(c+673,"A", false,-1, 5,0);
    tracep->declArray(c+572,"D", false,-1, 127,0);
    tracep->declBit(c+794,"cen", false,-1);
    tracep->declBit(c+795,"wen", false,-1);
    tracep->declArray(c+578,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_init_top(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22041412_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_register(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22041412_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_0(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    VlWide<4>/*127:0*/ __Vtemp_h88b423c3__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[14]),5);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[15]),5);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[16]),5);
    bufp->fullQData(oldp+18,(vlSelf->ysyx_22041412_top__DOT__mem_r_data),64);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__mem_r_last));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+22,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullBit(oldp+24,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_next_state),3);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullWData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+36,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
    bufp->fullQData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullIData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+60,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+61,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+64,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+65,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+66,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+68,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+72,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+75,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+93,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                               ? vlSelf->ysyx_22041412_top__DOT__id_pc
                               : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                   ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                   : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                       & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hafc4f4f0__0) 
                                          & ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                             & (3U 
                                                != (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode)))))
                                       ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                       : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0))
                                           ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                           : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5c4fbf2b__0) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                               ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                               : ((
                                                   (0U 
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
    bufp->fullQData(oldp+95,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+97,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+106,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+111,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+153,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+154,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    __Vtemp_he331c0ba__0[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2);
    __Vtemp_he331c0ba__0[1U] = (IData)((vlSelf->ysyx_22041412_top__DOT__ex_v2 
                                        >> 0x20U));
    __Vtemp_he331c0ba__0[2U] = (4U | ((IData)(((1U 
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
    __Vtemp_he331c0ba__0[0xaU] = (0xf00000U | (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0))) 
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
    __Vtemp_he331c0ba__0[0xcU] = (0x20000000U | (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                                  << 0x1eU) 
                                                 | ((IData)(
                                                            ((QData)((IData)(vlSelf->__VdfgTmp_h6cd8c4c6__0)) 
                                                             >> 0x20U)) 
                                                    >> 7U)));
    __Vtemp_he331c0ba__0[0xdU] = (((IData)((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0))) 
                                   >> 2U) | ((IData)(
                                                     ((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                      >> 0x20U)) 
                                             << 0x1eU));
    __Vtemp_he331c0ba__0[0xeU] = (0x80000000U | ((IData)(
                                                         ((QData)((IData)(vlSelf->__VdfgTmp_h6cd3955d__0)) 
                                                          >> 0x20U)) 
                                                 >> 2U));
    __Vtemp_he331c0ba__0[0xfU] = (3U | ((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                        << 3U));
    __Vtemp_he331c0ba__0[0x10U] = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                    >> 0x1dU) | ((IData)(
                                                         (VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041412_top__DOT__ex_v1, 
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
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
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
                                             << (0x3fU 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)))) 
                                    >> 0x13U) | ((IData)(
                                                         ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           << 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2))) 
                                                          >> 0x20U)) 
                                                 << 0xdU));
    __Vtemp_he331c0ba__0[0x15U] = (0x16000U | (((IData)(
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
                                    >> 0xeU) | ((IData)(
                                                        ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                          ^ vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                         >> 0x20U)) 
                                                << 0x12U));
    __Vtemp_he331c0ba__0[0x17U] = (0x1c0000U | (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
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
    __Vtemp_he331c0ba__0[0x19U] = (0x4000000U | (((IData)(
                                                          (vlSelf->ysyx_22041412_top__DOT__ex_v1 
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
    __Vtemp_he331c0ba__0[0x1bU] = (0xa0000000U | ((IData)(
                                                          ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                            & vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                           >> 0x20U)) 
                                                  >> 4U));
    __Vtemp_he331c0ba__0[0x1cU] = ((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                   << 1U);
    __Vtemp_he331c0ba__0[0x1dU] = (((IData)((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0)) 
                                    >> 0x1fU) | ((IData)(
                                                         ((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                          >> 0x20U)) 
                                                 << 1U));
    __Vtemp_he331c0ba__0[0x1eU] = (0x12U | (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                             << 6U) 
                                            | ((IData)(
                                                       ((~ vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbe23a10e__0) 
                                                        >> 0x20U)) 
                                               >> 0x1fU)));
    __Vtemp_he331c0ba__0[0x1fU] = (((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0) 
                                    >> 0x1aU) | ((IData)(
                                                         (vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT____VdfgTmp_hbef5ce99__0 
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
                                    >> 0x15U) | ((IData)(
                                                         ((vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY 
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
                                    >> 0x10U) | ((IData)(
                                                         ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                           + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_he331c0ba__0[0x24U] = (0x20000U | ((IData)(
                                                       ((vlSelf->ysyx_22041412_top__DOT__ex_v1 
                                                         + vlSelf->ysyx_22041412_top__DOT__ex_v2) 
                                                        >> 0x20U)) 
                                               >> 0x10U));
    bufp->fullWData(oldp+155,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+192,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+195,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+198,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+201,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+204,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+245,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+280,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+281,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+282,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+283,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+284,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+285,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+286,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+287,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+288,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+289,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
    bufp->fullIData(oldp+294,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[0U]
                                : ((4U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                    ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[1U]
                                    : ((8U == (0xfU 
                                               & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                        ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[2U]
                                        : ((0xcU == 
                                            (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                            ? vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data[3U]
                                            : 0U))))),32);
    bufp->fullCData(oldp+295,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullCData(oldp+296,((0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc)),4);
    bufp->fullBit(oldp+297,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+298,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+301,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__get_pc),28);
    bufp->fullIData(oldp+303,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+304,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+305,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+309,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+313,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+317,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+321,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+325,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+329,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+333,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+337,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+341,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+345,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+349,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+353,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+357,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+361,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+365,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullCData(oldp+375,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                ? 0U : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                         ? 1U : ((4U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                  ? 2U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                   ? 3U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
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
    bufp->fullBit(oldp+376,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+385,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+416,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+422,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+428,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+434,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+440,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+446,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+470,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+475,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+476,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+478,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+480,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+482,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+484,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+488,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+490,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+492,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+494,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+498,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+500,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+502,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+506,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+508,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+510,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+514,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+516,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+520,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+522,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+524,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+526,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+528,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+530,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+532,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+534,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+536,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+540,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+542,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+543,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__w_last_ok));
    bufp->fullBit(oldp+544,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+546,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+547,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+551,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+553,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+555,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+557,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+559,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+561,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+563,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+565,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+566,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+567,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+568,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+569,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+570,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+571,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+572,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+576,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),8);
    bufp->fullBit(oldp+577,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+578,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullQData(oldp+582,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
    bufp->fullBit(oldp+584,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_hcd4d3a7a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_hcd4d3a7a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_hcd4d3a7a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_hcd4d3a7a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+585,(__Vtemp_hcd4d3a7a__0),128);
    __Vtemp_hcd4d5e3f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_hcd4d5e3f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_hcd4d5e3f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_hcd4d5e3f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+589,(__Vtemp_hcd4d5e3f__0),128);
    __Vtemp_hcd526284__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_hcd526284__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_hcd526284__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_hcd526284__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+593,(__Vtemp_hcd526284__0),128);
    __Vtemp_hcd524dc3__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_hcd524dc3__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_hcd524dc3__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_hcd524dc3__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+597,(__Vtemp_hcd524dc3__0),128);
    __Vtemp_hcd52414f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_hcd52414f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_hcd52414f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_hcd52414f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+601,(__Vtemp_hcd52414f__0),128);
    __Vtemp_hcd521a10__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_hcd521a10__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_hcd521a10__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_hcd521a10__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+605,(__Vtemp_hcd521a10__0),128);
    __Vtemp_hcd52509e__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_hcd52509e__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_hcd52509e__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_hcd52509e__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+609,(__Vtemp_hcd52509e__0),128);
    __Vtemp_hcd522cdd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_hcd522cdd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_hcd522cdd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_hcd522cdd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+613,(__Vtemp_hcd522cdd__0),128);
    __Vtemp_hcd521e29__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_hcd521e29__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_hcd521e29__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_hcd521e29__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+617,(__Vtemp_hcd521e29__0),128);
    __Vtemp_hcd51f9ec__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_hcd51f9ec__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_hcd51f9ec__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_hcd51f9ec__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+621,(__Vtemp_hcd51f9ec__0),128);
    __Vtemp_hcd552a7d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_hcd552a7d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_hcd552a7d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_hcd552a7d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+625,(__Vtemp_hcd552a7d__0),128);
    __Vtemp_hcd550dbe__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_hcd550dbe__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_hcd550dbe__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_hcd550dbe__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+629,(__Vtemp_hcd550dbe__0),128);
    __Vtemp_hcd54f9cb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_hcd54f9cb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_hcd54f9cb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_hcd54f9cb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+633,(__Vtemp_hcd54f9cb__0),128);
    __Vtemp_hcd54de8a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_hcd54de8a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_hcd54de8a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_hcd54de8a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+637,(__Vtemp_hcd54de8a__0),128);
    __Vtemp_hcd550a9a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_hcd550a9a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_hcd550a9a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_hcd550a9a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+641,(__Vtemp_hcd550a9a__0),128);
    __Vtemp_hcd54ecdb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_hcd54ecdb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_hcd54ecdb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_hcd54ecdb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+645,(__Vtemp_hcd54ecdb__0),128);
    bufp->fullQData(oldp+649,(((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
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
    bufp->fullWData(oldp+651,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
    bufp->fullBit(oldp+655,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullQData(oldp+656,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),64);
    bufp->fullCData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullCData(oldp+662,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt),3);
    bufp->fullWData(oldp+663,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+667,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+668,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
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
                                        ? (IData)((vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64 
                                                   >> 0x20U))
                                        : 0U));
    }
    bufp->fullWData(oldp+669,(__Vtemp_h88b423c3__0),128);
    bufp->fullCData(oldp+673,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+674,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+675,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+676,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+680,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+681,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+682,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+683,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+684,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+688,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+689,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+690,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+691,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+692,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+696,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+698,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+699,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+700,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+706,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+707,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+708,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+713,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+714,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+715,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+716,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+720,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+721,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+722,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+723,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+724,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+728,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+729,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+730,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+731,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+732,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+736,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+737,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+738,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+739,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+740,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+744,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+745,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+746,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+747,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+748,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+752,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+753,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+754,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+755,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+756,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+760,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+761,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+762,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+763,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+764,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+768,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+769,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+770,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+771,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+772,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+776,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+777,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+778,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+779,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+780,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+784,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+785,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+786,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+787,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+788,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+792,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+793,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+794,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+795,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+796,(vlSelf->clk));
    bufp->fullBit(oldp+797,(vlSelf->rst));
    bufp->fullQData(oldp+798,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+800,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+802,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+804,(vlSelf->Ebreak));
    bufp->fullQData(oldp+805,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+807,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+809,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+811,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+813,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+814,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+815,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+816,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+817,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+818,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+819,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+820,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+821,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+822,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+823,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+824,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+825,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+826,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+827,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+828,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+830,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+831,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+832,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+833,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+834,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+835,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+836,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+837,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+838,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+839,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+840,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+841,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+842,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+843,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+844,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+845,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+846,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+847,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+848,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+849,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+850,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+851,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+852,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+853,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+854,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+856,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+857,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+858,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+859,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+860,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+861,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+862,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+863,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+864,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+865,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+866,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+867,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+868,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+870,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+871,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+872,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+873,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+874,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+875,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+876,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+877,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+878,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+879,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+880,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+881,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+882,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+883,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+884,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+885,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+886,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+888,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+889,(vlSelf->io_slave_rid),4);
    bufp->fullBit(oldp+890,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                             & (IData)(vlSelf->io_master_rvalid))));
    bufp->fullCData(oldp+891,(((IData)(vlSelf->rst)
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                         ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                              ? 0U : 
                                             ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_last_i)
                                               ? 0U
                                               : 4U)))
                                         : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  != (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                  ? 0U
                                                  : 4U))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                  ? 2U
                                                  : 0U)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)))
                                                  ? 1U
                                                  : 0U)))))),3);
    bufp->fullCData(oldp+892,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                         ? ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_valid)
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                                              ? 1U : 0U))
                                         : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                             ? (((IData)(vlSelf->io_master_rvalid) 
                                                 & (IData)(vlSelf->io_master_rlast))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                                                  ? 1U
                                                  : 0U))
                                             : 0U)))),2);
    bufp->fullIData(oldp+893,(0x40U),32);
    bufp->fullIData(oldp+894,(0x20U),32);
    bufp->fullIData(oldp+895,(4U),32);
    bufp->fullIData(oldp+896,(8U),32);
    bufp->fullIData(oldp+897,(1U),32);
    bufp->fullBit(oldp+898,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+899,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+901,(0x11U),32);
    bufp->fullIData(oldp+902,(5U),32);
    bufp->fullQData(oldp+903,(0ULL),64);
    bufp->fullIData(oldp+905,(0x45U),32);
    bufp->fullIData(oldp+906,(0x11U),32);
    bufp->fullIData(oldp+907,(0x80U),32);
    bufp->fullIData(oldp+908,(6U),32);
    bufp->fullIData(oldp+909,(3U),32);
    bufp->fullCData(oldp+910,(0U),4);
    bufp->fullBit(oldp+911,(0U));
    bufp->fullCData(oldp+912,(0U),8);
    bufp->fullCData(oldp+913,(3U),3);
    bufp->fullCData(oldp+914,(1U),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+917,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullIData(oldp+918,(0x800f4fe0U),32);
    bufp->fullWData(oldp+919,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+923,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+924,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
    bufp->fullIData(oldp+925,(0x81b75f40U),32);
    bufp->fullCData(oldp+926,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point_l1),3);
}
