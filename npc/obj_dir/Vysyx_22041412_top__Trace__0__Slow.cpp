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
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+803,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+805,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+807,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+809,"Ebreak", false,-1);
    tracep->declQuad(c+810,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+812,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+814,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+816,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+818,"io_master_awready", false,-1);
    tracep->declBit(c+819,"io_master_awvalid", false,-1);
    tracep->declBus(c+820,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+821,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+822,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+823,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+824,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+825,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+826,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+827,"io_master_awlock", false,-1);
    tracep->declBus(c+828,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+829,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+830,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+831,"io_master_wready", false,-1);
    tracep->declBit(c+832,"io_master_wvalid", false,-1);
    tracep->declQuad(c+833,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+835,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+836,"io_master_wlast", false,-1);
    tracep->declBus(c+837,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+838,"io_master_bready", false,-1);
    tracep->declBit(c+839,"io_master_bvalid", false,-1);
    tracep->declBus(c+840,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+841,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+842,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+843,"io_master_arready", false,-1);
    tracep->declBit(c+844,"io_master_arvalid", false,-1);
    tracep->declBus(c+845,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+846,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+847,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+848,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+849,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+850,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+851,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+852,"io_master_arlock", false,-1);
    tracep->declBus(c+853,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+854,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+856,"io_master_rready", false,-1);
    tracep->declBit(c+857,"io_master_rvalid", false,-1);
    tracep->declBus(c+858,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+859,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+861,"io_master_rlast", false,-1);
    tracep->declBus(c+862,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+863,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+864,"io_slave_awready", false,-1);
    tracep->declBit(c+865,"io_slave_awvalid", false,-1);
    tracep->declBus(c+866,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+867,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+868,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+869,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+870,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+871,"io_slave_wready", false,-1);
    tracep->declBit(c+872,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+873,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+875,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+876,"io_slave_wlast", false,-1);
    tracep->declBit(c+877,"io_slave_bready", false,-1);
    tracep->declBit(c+878,"io_slave_bvalid", false,-1);
    tracep->declBus(c+879,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+880,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+881,"io_slave_arready", false,-1);
    tracep->declBit(c+882,"io_slave_arvalid", false,-1);
    tracep->declBus(c+883,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+884,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+885,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+886,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+887,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+888,"io_slave_rready", false,-1);
    tracep->declBit(c+889,"io_slave_rvalid", false,-1);
    tracep->declBus(c+890,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+891,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+893,"io_slave_rlast", false,-1);
    tracep->declBus(c+894,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+803,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+805,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+807,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+809,"Ebreak", false,-1);
    tracep->declQuad(c+810,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+812,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+814,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+816,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+818,"io_master_awready", false,-1);
    tracep->declBit(c+819,"io_master_awvalid", false,-1);
    tracep->declBus(c+820,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+821,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+822,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+823,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+824,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+825,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+826,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+827,"io_master_awlock", false,-1);
    tracep->declBus(c+828,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+829,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+830,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+831,"io_master_wready", false,-1);
    tracep->declBit(c+832,"io_master_wvalid", false,-1);
    tracep->declQuad(c+833,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+835,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+836,"io_master_wlast", false,-1);
    tracep->declBus(c+837,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+838,"io_master_bready", false,-1);
    tracep->declBit(c+839,"io_master_bvalid", false,-1);
    tracep->declBus(c+840,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+841,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+842,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+843,"io_master_arready", false,-1);
    tracep->declBit(c+844,"io_master_arvalid", false,-1);
    tracep->declBus(c+845,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+846,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+847,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+848,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+849,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+850,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+851,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+852,"io_master_arlock", false,-1);
    tracep->declBus(c+853,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+854,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+856,"io_master_rready", false,-1);
    tracep->declBit(c+857,"io_master_rvalid", false,-1);
    tracep->declBus(c+858,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+859,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+861,"io_master_rlast", false,-1);
    tracep->declBus(c+862,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+863,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+864,"io_slave_awready", false,-1);
    tracep->declBit(c+865,"io_slave_awvalid", false,-1);
    tracep->declBus(c+866,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+867,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+868,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+869,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+870,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+871,"io_slave_wready", false,-1);
    tracep->declBit(c+872,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+873,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+875,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+876,"io_slave_wlast", false,-1);
    tracep->declBit(c+877,"io_slave_bready", false,-1);
    tracep->declBit(c+878,"io_slave_bvalid", false,-1);
    tracep->declBus(c+879,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+880,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+881,"io_slave_arready", false,-1);
    tracep->declBit(c+882,"io_slave_arvalid", false,-1);
    tracep->declBus(c+883,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+884,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+885,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+886,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+887,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+888,"io_slave_rready", false,-1);
    tracep->declBit(c+889,"io_slave_rvalid", false,-1);
    tracep->declBus(c+890,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+891,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+893,"io_slave_rlast", false,-1);
    tracep->declBus(c+894,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+899,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+900,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+899,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"r_valid", false,-1);
    tracep->declBit(c+19,"r_ready", false,-1);
    tracep->declBit(c+20,"w_valid", false,-1);
    tracep->declBit(c+21,"w_ready", false,-1);
    tracep->declQuad(c+22,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+833,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+845,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+820,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+850,"r_size", false,-1, 2,0);
    tracep->declBus(c+825,"w_size", false,-1, 2,0);
    tracep->declBus(c+849,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+824,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+24,"r_last_o", false,-1);
    tracep->declBit(c+25,"w_last_o", false,-1);
    tracep->declBit(c+26,"if_ar_valid", false,-1);
    tracep->declBit(c+27,"if_ar_ready", false,-1);
    tracep->declArray(c+28,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+32,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+33,"mem_r_valid", false,-1);
    tracep->declBit(c+34,"mem_r_ready", false,-1);
    tracep->declQuad(c+35,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+39,"mem_r_last", false,-1);
    tracep->declBit(c+20,"mem_w_valid", false,-1);
    tracep->declBit(c+21,"mem_w_ready", false,-1);
    tracep->declQuad(c+40,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+42,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+43,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+44,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+836,"mem_w_last", false,-1);
    tracep->declBit(c+45,"icache_ar_valid", false,-1);
    tracep->declBit(c+46,"icache_ar_ready", false,-1);
    tracep->declQuad(c+47,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+49,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+50,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+51,"icache_last_i", false,-1);
    tracep->declBus(c+52,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+53,"if_pc", false,-1, 63,0);
    tracep->declBit(c+55,"if_ready_o", false,-1);
    tracep->declBit(c+56,"if_jr_ready", false,-1);
    tracep->declBus(c+57,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+58,"id_pc", false,-1, 63,0);
    tracep->declBus(c+60,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+61,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+62,"id_mul_en", false,-1);
    tracep->declQuad(c+63,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+65,"id_func3", false,-1, 2,0);
    tracep->declBit(c+66,"id_func7", false,-1);
    tracep->declBus(c+67,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+68,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+69,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+70,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+71,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+73,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+75,"id_vaild_o", false,-1);
    tracep->declBit(c+76,"id_ready_o", false,-1);
    tracep->declBit(c+77,"csr_jar_en", false,-1);
    tracep->declBus(c+78,"csr", false,-1, 11,0);
    tracep->declBus(c+79,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+80,"id_csr_en", false,-1);
    tracep->declBus(c+81,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+82,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+83,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+85,"ex_mul_en", false,-1);
    tracep->declQuad(c+86,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+88,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+90,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+92,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+93,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+94,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+95,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+96,"ex_func7", false,-1);
    tracep->declBus(c+97,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+98,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+100,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+102,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+104,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+106,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+108,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+86,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+110,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+111,"ex_csr_en", false,-1);
    tracep->declBus(c+112,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+113,"ex_wait", false,-1);
    tracep->declBit(c+114,"ex_load_wait", false,-1);
    tracep->declBit(c+904,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+115,"alu_ready_o", false,-1);
    tracep->declBit(c+75,"ex_valid_o", false,-1);
    tracep->declBit(c+116,"ex_ready_o", false,-1);
    tracep->declBit(c+117,"csr_ready_o", false,-1);
    tracep->declBus(c+118,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+119,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+120,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+121,"mem_rw_type", false,-1);
    tracep->declBit(c+122,"mem_ram_en", false,-1);
    tracep->declBit(c+123,"mem_reg_en", false,-1);
    tracep->declBus(c+124,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+125,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+127,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+129,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+131,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+905,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+133,"mem_res", false,-1, 63,0);
    tracep->declQuad(c+135,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+137,"mem_valid_o", false,-1);
    tracep->declBit(c+138,"sram_ready_o", false,-1);
    tracep->declBit(c+139,"wb_reg_en", false,-1);
    tracep->declBus(c+140,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+141,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+143,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+145,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+147,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+149,"wb_opcode", false,-1, 6,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declQuad(c+86,"scr1", false,-1, 63,0);
    tracep->declQuad(c+88,"scr2", false,-1, 63,0);
    tracep->declQuad(c+83,"imm", false,-1, 63,0);
    tracep->declBus(c+97,"opcode", false,-1, 6,0);
    tracep->declBus(c+95,"func3", false,-1, 2,0);
    tracep->declBit(c+96,"func7", false,-1);
    tracep->declBit(c+85,"mul_en", false,-1);
    tracep->declBit(c+76,"ready_i", false,-1);
    tracep->declBit(c+75,"valid_i", false,-1);
    tracep->declBit(c+115,"ready_o", false,-1);
    tracep->declQuad(c+106,"result", false,-1, 63,0);
    tracep->declBus(c+150,"Mode", false,-1, 4,0);
    tracep->declQuad(c+86,"AU", false,-1, 63,0);
    tracep->declQuad(c+88,"BU", false,-1, 63,0);
    tracep->declQuad(c+151,"AY", false,-1, 63,0);
    tracep->declQuad(c+153,"BY", false,-1, 63,0);
    tracep->declBit(c+155,"mul_ready_o", false,-1);
    tracep->declQuad(c+156,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+158,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+106,"Alusu", false,-1, 63,0);
    tracep->declBit(c+160,"rv64i_en", false,-1);
    tracep->declBit(c+161,"rv64r_en", false,-1);
    tracep->declQuad(c+86,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+88,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+907,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+908,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+899,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+156,"out", false,-1, 63,0);
    tracep->declBus(c+150,"key", false,-1, 4,0);
    tracep->declQuad(c+909,"default_out", false,-1, 63,0);
    tracep->declArray(c+162,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+907,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+908,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+899,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+903,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+156,"out", false,-1, 63,0);
    tracep->declBus(c+150,"key", false,-1, 4,0);
    tracep->declQuad(c+909,"default_out", false,-1, 63,0);
    tracep->declArray(c+162,"lut", false,-1, 1172,0);
    tracep->declBus(c+911,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+199+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+250+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+284,"lut_out", false,-1, 63,0);
    tracep->declBit(c+286,"hit", false,-1);
    tracep->declBus(c+912,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+85,"en", false,-1);
    tracep->declQuad(c+86,"rsA", false,-1, 63,0);
    tracep->declQuad(c+88,"rsB", false,-1, 63,0);
    tracep->declBus(c+95,"func3", false,-1, 2,0);
    tracep->declBit(c+161,"rv64_en", false,-1);
    tracep->declBit(c+76,"ready_i", false,-1);
    tracep->declBit(c+155,"ready_o", false,-1);
    tracep->declQuad(c+158,"result", false,-1, 63,0);
    tracep->declBus(c+287,"rsAW", false,-1, 31,0);
    tracep->declBus(c+288,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+158,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+57,"instr", false,-1, 31,0);
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->declBus(c+65,"func3", false,-1, 2,0);
    tracep->declBit(c+66,"func7", false,-1);
    tracep->declBus(c+67,"Rs1", false,-1, 4,0);
    tracep->declBus(c+68,"Rs2", false,-1, 4,0);
    tracep->declBus(c+69,"Rd", false,-1, 4,0);
    tracep->declQuad(c+63,"imme", false,-1, 63,0);
    tracep->declBus(c+60,"V1Type", false,-1, 1,0);
    tracep->declBus(c+61,"V2Type", false,-1, 1,0);
    tracep->declBit(c+62,"Mul_en", false,-1);
    tracep->declBit(c+289,"I_type", false,-1);
    tracep->declBit(c+290,"U_type", false,-1);
    tracep->declBit(c+291,"J_type", false,-1);
    tracep->declBit(c+292,"B_type", false,-1);
    tracep->declBit(c+293,"S_type", false,-1);
    tracep->declBit(c+294,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+53,"pc", false,-1, 63,0);
    tracep->declQuad(c+129,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+52,"imm_data", false,-1, 31,0);
    tracep->declBit(c+56,"jarl_rady", false,-1);
    tracep->declBit(c+75,"valid_i", false,-1);
    tracep->declBit(c+55,"ready_o", false,-1);
    tracep->declBit(c+27,"ready_i", false,-1);
    tracep->declBit(c+26,"valid_o", false,-1);
    tracep->declArray(c+28,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+32,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+295,"state", false,-1, 2,0);
    tracep->declArray(c+296,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+300,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+301,"offset", false,-1, 3,0);
    tracep->declBit(c+302,"jar", false,-1);
    tracep->declBit(c+303,"jal", false,-1);
    tracep->declBit(c+304,"one_line", false,-1);
    tracep->declBus(c+305,"dnpc", false,-1, 31,0);
    tracep->declBit(c+306,"dnpc_v", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+810,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+812,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+32,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+26,"cpu_valid", false,-1);
    tracep->declArray(c+28,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+27,"cpu_ready", false,-1);
    tracep->declBit(c+46,"axi_ready_i", false,-1);
    tracep->declBit(c+45,"axi_valid_o", false,-1);
    tracep->declBit(c+51,"axi_r_last_i", false,-1);
    tracep->declBus(c+50,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+47,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+49,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+307,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+308,"cache_index", false,-1, 6,0);
    tracep->declBus(c+301,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+309,"[0]", false,-1, 127,0);
    tracep->declArray(c+313,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+317,"[0]", false,-1, 127,0);
    tracep->declArray(c+321,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+325,"[0]", false,-1, 127,0);
    tracep->declArray(c+329,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+333,"[0]", false,-1, 127,0);
    tracep->declArray(c+337,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+341,"[0]", false,-1, 127,0);
    tracep->declArray(c+345,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+349,"[0]", false,-1, 127,0);
    tracep->declArray(c+353,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+357,"[0]", false,-1, 127,0);
    tracep->declArray(c+361,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+365,"[0]", false,-1, 127,0);
    tracep->declArray(c+369,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+373,"write_data", false,-1, 127,0);
    tracep->declBus(c+377,"write_en", false,-1, 7,0);
    tracep->declBus(c+378,"tag_v", false,-1, 7,0);
    tracep->declBus(c+379,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+380,"bust_num", false,-1);
    tracep->declBus(c+381,"state", false,-1, 2,0);
    tracep->declBus(c+895,"next_state", false,-1, 2,0);
    tracep->declBus(c+382,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+383,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+387,"CEN", false,-1);
    tracep->declBit(c+388,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+390,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+394,"CEN", false,-1);
    tracep->declBit(c+395,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+396,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+400,"CEN", false,-1);
    tracep->declBit(c+401,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+402,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+406,"CEN", false,-1);
    tracep->declBit(c+407,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+408,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+412,"CEN", false,-1);
    tracep->declBit(c+413,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+414,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+418,"CEN", false,-1);
    tracep->declBit(c+419,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+420,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+424,"CEN", false,-1);
    tracep->declBit(c+425,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+426,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+430,"CEN", false,-1);
    tracep->declBit(c+431,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+432,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+436,"CEN", false,-1);
    tracep->declBit(c+437,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+438,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+442,"CEN", false,-1);
    tracep->declBit(c+443,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+444,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+448,"CEN", false,-1);
    tracep->declBit(c+449,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+450,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+454,"CEN", false,-1);
    tracep->declBit(c+455,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+456,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+460,"CEN", false,-1);
    tracep->declBit(c+461,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+462,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+466,"CEN", false,-1);
    tracep->declBit(c+467,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+468,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+472,"CEN", false,-1);
    tracep->declBit(c+473,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+474,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+478,"CEN", false,-1);
    tracep->declBit(c+479,"WEN", false,-1);
    tracep->declBus(c+389,"A", false,-1, 5,0);
    tracep->declArray(c+373,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBus(c+67,"Ra", false,-1, 4,0);
    tracep->declBus(c+68,"Rb", false,-1, 4,0);
    tracep->declBus(c+140,"Rw", false,-1, 4,0);
    tracep->declBit(c+139,"Wen", false,-1);
    tracep->declQuad(c+71,"BusA", false,-1, 63,0);
    tracep->declQuad(c+73,"BusB", false,-1, 63,0);
    tracep->declQuad(c+143,"BusW", false,-1, 63,0);
    tracep->declBit(c+802,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+480+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+544,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+899,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+900,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+833,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+820,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+845,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+825,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+850,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+849,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+824,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+24,"r_last_o", false,-1);
    tracep->declBit(c+25,"w_last_o", false,-1);
    tracep->declBit(c+818,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+819,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+820,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+821,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+822,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+823,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+824,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+825,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+826,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+827,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+828,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+829,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+830,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+831,"axi_w_ready_i", false,-1);
    tracep->declBit(c+832,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+833,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+835,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+836,"axi_w_last_o", false,-1);
    tracep->declBus(c+837,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+838,"axi_b_ready_o", false,-1);
    tracep->declBit(c+839,"axi_b_valid_i", false,-1);
    tracep->declBus(c+840,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+841,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+842,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+843,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+844,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+845,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+846,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+847,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+848,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+849,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+850,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+851,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+852,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+853,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+854,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+855,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+856,"axi_r_ready_o", false,-1);
    tracep->declBit(c+857,"axi_r_valid_i", false,-1);
    tracep->declBus(c+858,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+859,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+861,"axi_r_last_i", false,-1);
    tracep->declBus(c+862,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+863,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+915,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+916,"axi_id", false,-1, 3,0);
    tracep->declBus(c+917,"axi_user", false,-1, 0,0);
    tracep->declBus(c+918,"axi_len", false,-1, 7,0);
    tracep->declBus(c+919,"axi_size", false,-1, 2,0);
    tracep->declBit(c+545,"axi_aw_valid", false,-1);
    tracep->declBus(c+546,"wd_count", false,-1, 7,0);
    tracep->declBit(c+547,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+899,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+900,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declBit(c+45,"if_ar_valid", false,-1);
    tracep->declBit(c+46,"if_ar_ready", false,-1);
    tracep->declQuad(c+47,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+49,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+50,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+51,"if_last_i", false,-1);
    tracep->declBit(c+33,"mem_r_valid", false,-1);
    tracep->declBit(c+34,"mem_r_ready", false,-1);
    tracep->declQuad(c+35,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+39,"mem_r_last_i", false,-1);
    tracep->declBit(c+20,"mem_w_valid", false,-1);
    tracep->declBit(c+21,"mem_w_ready", false,-1);
    tracep->declQuad(c+40,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+42,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+43,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+44,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+836,"mem_w_last_i", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+833,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+820,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+845,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+825,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+850,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+849,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+824,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+24,"r_last_i", false,-1);
    tracep->declBit(c+25,"w_last_i", false,-1);
    tracep->declBus(c+548,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+896,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+549,"rd_state", false,-1, 1,0);
    tracep->declBus(c+897,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+920,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+921,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+922,"wr_state", false,-1, 1,0);
    tracep->declBus(c+923,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declBit(c+111,"en", false,-1);
    tracep->declQuad(c+98,"pc", false,-1, 63,0);
    tracep->declBus(c+112,"addr", false,-1, 2,0);
    tracep->declBus(c+95,"func3", false,-1, 2,0);
    tracep->declQuad(c+86,"data_i", false,-1, 63,0);
    tracep->declQuad(c+108,"data_o", false,-1, 63,0);
    tracep->declBit(c+117,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+550+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+108,"data_r", false,-1, 63,0);
    tracep->declQuad(c+562,"data_w", false,-1, 63,0);
    tracep->declQuad(c+564,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+900,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+899,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+814,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+816,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+120,"func3", false,-1, 2,0);
    tracep->declBus(c+124,"addr", false,-1, 31,0);
    tracep->declQuad(c+125,"wdata", false,-1, 63,0);
    tracep->declBit(c+121,"wen", false,-1);
    tracep->declBit(c+116,"ex_ready_i", false,-1);
    tracep->declBit(c+122,"mem_valid_i", false,-1);
    tracep->declBit(c+138,"mem_ready_o", false,-1);
    tracep->declQuad(c+135,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+34,"r_ready_i", false,-1);
    tracep->declBit(c+33,"r_valid_o", false,-1);
    tracep->declBit(c+39,"r_last_i", false,-1);
    tracep->declBus(c+38,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+35,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+21,"w_ready_i", false,-1);
    tracep->declBit(c+836,"w_last_i", false,-1);
    tracep->declBit(c+20,"w_valid_o", false,-1);
    tracep->declBus(c+44,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+43,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+40,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+42,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+566,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+568,"dcache_ready_i", false,-1);
    tracep->declBit(c+569,"dcache_valid_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+801,"clk", false,-1);
    tracep->declBit(c+802,"rst", false,-1);
    tracep->declQuad(c+814,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+816,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+121,"cpu_rw_en", false,-1);
    tracep->declBus(c+124,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+569,"cpu_valid", false,-1);
    tracep->declQuad(c+125,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+120,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+566,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+568,"cpu_ready", false,-1);
    tracep->declBit(c+21,"axi_w_ready_i", false,-1);
    tracep->declBit(c+20,"axi_w_valid_o", false,-1);
    tracep->declBit(c+836,"axi_w_last_i", false,-1);
    tracep->declBus(c+43,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+40,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+42,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+44,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+34,"axi_r_ready_i", false,-1);
    tracep->declBit(c+33,"axi_r_valid_o", false,-1);
    tracep->declBit(c+39,"axi_r_last_i", false,-1);
    tracep->declBus(c+38,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+35,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+570,"cache_rd_ready", false,-1);
    tracep->declBit(c+571,"cache_wr_ready", false,-1);
    tracep->declBus(c+572,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+573,"cache_index", false,-1, 6,0);
    tracep->declBus(c+574,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+575,"write_data", false,-1, 127,0);
    tracep->declArray(c+924,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+579,"write_en", false,-1, 7,0);
    tracep->declBit(c+580,"rw_strb_en", false,-1);
    tracep->declArray(c+581,"rw_strb", false,-1, 127,0);
    tracep->declQuad(c+585,"rw_strb_64", false,-1, 63,0);
    tracep->declBit(c+587,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+588,"[0]", false,-1, 127,0);
    tracep->declArray(c+592,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+596,"[0]", false,-1, 127,0);
    tracep->declArray(c+600,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+604,"[0]", false,-1, 127,0);
    tracep->declArray(c+608,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+612,"[0]", false,-1, 127,0);
    tracep->declArray(c+616,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+620,"[0]", false,-1, 127,0);
    tracep->declArray(c+624,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+628,"[0]", false,-1, 127,0);
    tracep->declArray(c+632,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+636,"[0]", false,-1, 127,0);
    tracep->declArray(c+640,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+644,"[0]", false,-1, 127,0);
    tracep->declArray(c+648,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+652,"device", false,-1);
    tracep->declArray(c+653,"write_back_data", false,-1, 127,0);
    tracep->declBus(c+928,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+657,"tag_v", false,-1, 7,0);
    tracep->declBus(c+658,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+929,"bust_rd", false,-1);
    tracep->declBus(c+659,"rd_state", false,-1, 2,0);
    tracep->declBus(c+898,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+660,"wr_state", false,-1, 2,0);
    tracep->declQuad(c+661,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+663,"cache_write_data", false,-1, 127,0);
    tracep->declBus(c+667,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+668,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+672,"CEN", false,-1);
    tracep->declBit(c+673,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+679,"cen", false,-1);
    tracep->declBit(c+680,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+681,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+685,"CEN", false,-1);
    tracep->declBit(c+686,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+687,"cen", false,-1);
    tracep->declBit(c+688,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+689,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+693,"CEN", false,-1);
    tracep->declBit(c+694,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+695,"cen", false,-1);
    tracep->declBit(c+696,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+697,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+701,"CEN", false,-1);
    tracep->declBit(c+702,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+703,"cen", false,-1);
    tracep->declBit(c+704,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+705,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+709,"CEN", false,-1);
    tracep->declBit(c+710,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+711,"cen", false,-1);
    tracep->declBit(c+712,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+713,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+717,"CEN", false,-1);
    tracep->declBit(c+718,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+719,"cen", false,-1);
    tracep->declBit(c+720,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+721,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+725,"CEN", false,-1);
    tracep->declBit(c+726,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+727,"cen", false,-1);
    tracep->declBit(c+728,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+729,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+733,"CEN", false,-1);
    tracep->declBit(c+734,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+735,"cen", false,-1);
    tracep->declBit(c+736,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+737,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+741,"CEN", false,-1);
    tracep->declBit(c+742,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+743,"cen", false,-1);
    tracep->declBit(c+744,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+745,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+749,"CEN", false,-1);
    tracep->declBit(c+750,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+751,"cen", false,-1);
    tracep->declBit(c+752,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+753,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+757,"CEN", false,-1);
    tracep->declBit(c+758,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+759,"cen", false,-1);
    tracep->declBit(c+760,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+761,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+765,"CEN", false,-1);
    tracep->declBit(c+766,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+767,"cen", false,-1);
    tracep->declBit(c+768,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+769,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+773,"CEN", false,-1);
    tracep->declBit(c+774,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+775,"cen", false,-1);
    tracep->declBit(c+776,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+777,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+781,"CEN", false,-1);
    tracep->declBit(c+782,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+783,"cen", false,-1);
    tracep->declBit(c+784,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+785,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+789,"CEN", false,-1);
    tracep->declBit(c+790,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+791,"cen", false,-1);
    tracep->declBit(c+792,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+913,"Bits", false,-1, 31,0);
    tracep->declBus(c+899,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+914,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+913,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+793,"Q", false,-1, 127,0);
    tracep->declBit(c+801,"CLK", false,-1);
    tracep->declBit(c+797,"CEN", false,-1);
    tracep->declBit(c+798,"WEN", false,-1);
    tracep->declArray(c+674,"BWEN", false,-1, 127,0);
    tracep->declBus(c+678,"A", false,-1, 5,0);
    tracep->declArray(c+575,"D", false,-1, 127,0);
    tracep->declBit(c+799,"cen", false,-1);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->declArray(c+581,"bwen", false,-1, 127,0);
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
    bufp->fullBit(oldp+18,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_22041412_top__DOT__r_ready));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_22041412_top__DOT__w_ready));
    bufp->fullQData(oldp+22,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
    bufp->fullBit(oldp+24,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullWData(oldp+28,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
    bufp->fullBit(oldp+34,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready))));
    bufp->fullQData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__mem_r_data),64);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__mem_r_last));
    bufp->fullQData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullIData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+65,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+66,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+69,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+70,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+71,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+77,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+80,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+98,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+100,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
                                                : (
                                                   ((0U 
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
    bufp->fullQData(oldp+102,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+104,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+108,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+121,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+137,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+155,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+156,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+160,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+161,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+162,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+199,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+202,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+205,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+208,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+211,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+214,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+217,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+220,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+223,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+226,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+229,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+232,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+235,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+286,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+287,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+288,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+289,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+290,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+291,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+292,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+293,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+294,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+295,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
    bufp->fullCData(oldp+301,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+302,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+303,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+304,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+305,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+306,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+307,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+308,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+309,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+313,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+317,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+321,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+325,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+329,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+333,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+337,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+341,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+345,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+349,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+353,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+357,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+361,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+365,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+369,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullCData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullCData(oldp+379,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
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
    bufp->fullBit(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+387,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+388,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+389,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+394,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+395,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+400,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+401,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+406,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+407,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+412,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+413,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+418,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+419,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+424,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+425,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+430,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+431,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+436,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+437,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+442,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+443,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+448,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+449,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+454,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+455,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+460,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+466,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+472,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+478,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+479,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+480,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+482,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+484,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+488,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+490,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+492,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+494,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+498,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+500,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+502,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+506,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+508,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+510,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+514,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+516,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+520,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+522,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+524,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+526,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+528,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+530,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+532,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+534,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+536,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+540,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+542,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+546,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+547,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+560,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+562,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+564,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+566,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+568,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+569,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+570,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+571,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+572,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+573,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+574,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+575,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+579,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),8);
    bufp->fullBit(oldp+580,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullQData(oldp+585,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
    bufp->fullBit(oldp+587,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_hcd4d3a7a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_hcd4d3a7a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_hcd4d3a7a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_hcd4d3a7a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+588,(__Vtemp_hcd4d3a7a__0),128);
    __Vtemp_hcd4d5e3f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_hcd4d5e3f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_hcd4d5e3f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_hcd4d5e3f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+592,(__Vtemp_hcd4d5e3f__0),128);
    __Vtemp_hcd526284__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_hcd526284__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_hcd526284__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_hcd526284__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+596,(__Vtemp_hcd526284__0),128);
    __Vtemp_hcd524dc3__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_hcd524dc3__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_hcd524dc3__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_hcd524dc3__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+600,(__Vtemp_hcd524dc3__0),128);
    __Vtemp_hcd52414f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_hcd52414f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_hcd52414f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_hcd52414f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+604,(__Vtemp_hcd52414f__0),128);
    __Vtemp_hcd521a10__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_hcd521a10__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_hcd521a10__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_hcd521a10__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+608,(__Vtemp_hcd521a10__0),128);
    __Vtemp_hcd52509e__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_hcd52509e__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_hcd52509e__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_hcd52509e__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+612,(__Vtemp_hcd52509e__0),128);
    __Vtemp_hcd522cdd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_hcd522cdd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_hcd522cdd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_hcd522cdd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+616,(__Vtemp_hcd522cdd__0),128);
    __Vtemp_hcd521e29__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_hcd521e29__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_hcd521e29__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_hcd521e29__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+620,(__Vtemp_hcd521e29__0),128);
    __Vtemp_hcd51f9ec__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_hcd51f9ec__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_hcd51f9ec__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_hcd51f9ec__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+624,(__Vtemp_hcd51f9ec__0),128);
    __Vtemp_hcd552a7d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_hcd552a7d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_hcd552a7d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_hcd552a7d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+628,(__Vtemp_hcd552a7d__0),128);
    __Vtemp_hcd550dbe__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_hcd550dbe__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_hcd550dbe__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_hcd550dbe__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+632,(__Vtemp_hcd550dbe__0),128);
    __Vtemp_hcd54f9cb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_hcd54f9cb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_hcd54f9cb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_hcd54f9cb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+636,(__Vtemp_hcd54f9cb__0),128);
    __Vtemp_hcd54de8a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_hcd54de8a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_hcd54de8a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_hcd54de8a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+640,(__Vtemp_hcd54de8a__0),128);
    __Vtemp_hcd550a9a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_hcd550a9a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_hcd550a9a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_hcd550a9a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+644,(__Vtemp_hcd550a9a__0),128);
    __Vtemp_hcd54ecdb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_hcd54ecdb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_hcd54ecdb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_hcd54ecdb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+648,(__Vtemp_hcd54ecdb__0),128);
    bufp->fullBit(oldp+652,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullWData(oldp+653,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),128);
    bufp->fullCData(oldp+657,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullQData(oldp+661,(((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
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
    bufp->fullWData(oldp+663,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
    bufp->fullCData(oldp+667,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point),3);
    bufp->fullWData(oldp+668,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+672,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
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
    bufp->fullWData(oldp+674,(__Vtemp_h88b423c3__0),128);
    bufp->fullCData(oldp+678,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+679,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+680,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+681,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+686,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+687,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+688,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+689,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+693,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+695,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+696,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+697,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+701,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+702,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+703,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+704,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+705,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+709,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+711,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+712,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+713,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+717,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+718,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+719,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+720,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+721,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+725,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+726,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+727,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+728,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+729,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+733,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+734,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+735,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+736,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+737,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+741,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+742,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+743,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+744,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+745,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+749,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+750,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+751,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+752,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+753,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+757,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+758,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+759,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+760,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+761,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+765,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+766,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+767,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+768,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+769,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+773,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+774,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+775,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+776,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+777,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+781,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+782,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+783,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+784,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+785,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+789,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+790,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+791,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+792,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+793,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+797,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+798,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+799,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+800,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+801,(vlSelf->clk));
    bufp->fullBit(oldp+802,(vlSelf->rst));
    bufp->fullQData(oldp+803,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+805,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+807,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+809,(vlSelf->Ebreak));
    bufp->fullQData(oldp+810,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+812,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+814,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+816,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+818,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+819,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+820,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+821,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+822,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+823,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+824,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+825,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+826,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+827,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+828,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+829,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+830,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+831,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+832,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+833,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+835,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+836,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+837,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+838,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+839,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+840,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+841,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+842,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+843,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+844,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+845,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+846,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+847,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+848,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+849,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+850,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+851,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+852,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+853,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+854,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+855,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+856,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+857,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+858,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+859,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+861,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+862,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+863,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+864,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+865,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+866,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+867,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+868,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+869,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+870,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+871,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+872,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+873,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+875,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+876,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+877,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+878,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+879,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+880,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+881,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+882,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+883,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+884,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+885,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+886,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+887,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+888,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+889,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+890,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+891,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+893,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+894,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+895,(((IData)(vlSelf->rst)
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
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                  ? 1U
                                                  : 0U)))))),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullCData(oldp+898,(((IData)(vlSelf->rst)
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                         ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                              ? 0U : 
                                             (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last) 
                                               & ((0x11U 
                                                   < 
                                                   (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                    >> 0x1bU)) 
                                                  | (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))))
                                               ? 0U
                                               : ((
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
                                                   & (0x11U 
                                                      >= 
                                                      (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                       >> 0x1bU)))
                                                   ? 5U
                                                   : 4U))))
                                         : ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  != (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v))
                                                  ? 0U
                                                  : 4U))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o)
                                                  ? 2U
                                                  : 0U)
                                                 : 
                                                (((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                                  & (0x11U 
                                                     >= 
                                                     (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                      >> 0x1bU)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
                                                   & ((0x11U 
                                                       < 
                                                       (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                                        >> 0x1bU)) 
                                                      & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type))))
                                                   ? 4U
                                                   : 0U))))))),3);
    bufp->fullIData(oldp+899,(0x40U),32);
    bufp->fullIData(oldp+900,(0x20U),32);
    bufp->fullIData(oldp+901,(4U),32);
    bufp->fullIData(oldp+902,(8U),32);
    bufp->fullIData(oldp+903,(1U),32);
    bufp->fullBit(oldp+904,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+905,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+907,(0x11U),32);
    bufp->fullIData(oldp+908,(5U),32);
    bufp->fullQData(oldp+909,(0ULL),64);
    bufp->fullIData(oldp+911,(0x45U),32);
    bufp->fullIData(oldp+912,(0x11U),32);
    bufp->fullIData(oldp+913,(0x80U),32);
    bufp->fullIData(oldp+914,(6U),32);
    bufp->fullIData(oldp+915,(3U),32);
    bufp->fullCData(oldp+916,(0U),4);
    bufp->fullBit(oldp+917,(0U));
    bufp->fullCData(oldp+918,(0U),8);
    bufp->fullCData(oldp+919,(3U),3);
    bufp->fullCData(oldp+920,(1U),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+923,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullWData(oldp+924,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+928,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+929,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
}
