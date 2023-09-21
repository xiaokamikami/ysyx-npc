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
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+797,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+799,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+801,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+803,"Ebreak", false,-1);
    tracep->declQuad(c+804,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+806,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+808,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+810,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+812,"io_master_awready", false,-1);
    tracep->declBit(c+813,"io_master_awvalid", false,-1);
    tracep->declBus(c+814,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+815,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+816,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+817,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+818,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+819,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+820,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+821,"io_master_awlock", false,-1);
    tracep->declBus(c+822,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+823,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+825,"io_master_wready", false,-1);
    tracep->declBit(c+826,"io_master_wvalid", false,-1);
    tracep->declQuad(c+827,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+829,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+830,"io_master_wlast", false,-1);
    tracep->declBus(c+831,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+832,"io_master_bready", false,-1);
    tracep->declBit(c+833,"io_master_bvalid", false,-1);
    tracep->declBus(c+834,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+835,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+836,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+837,"io_master_arready", false,-1);
    tracep->declBit(c+838,"io_master_arvalid", false,-1);
    tracep->declBus(c+839,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+841,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+842,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+843,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+844,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+845,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+846,"io_master_arlock", false,-1);
    tracep->declBus(c+847,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+848,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+850,"io_master_rready", false,-1);
    tracep->declBit(c+851,"io_master_rvalid", false,-1);
    tracep->declBus(c+852,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+853,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+855,"io_master_rlast", false,-1);
    tracep->declBus(c+856,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+857,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+858,"io_slave_awready", false,-1);
    tracep->declBit(c+859,"io_slave_awvalid", false,-1);
    tracep->declBus(c+860,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+861,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+862,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+863,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+864,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+865,"io_slave_wready", false,-1);
    tracep->declBit(c+866,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+867,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+869,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+870,"io_slave_wlast", false,-1);
    tracep->declBit(c+871,"io_slave_bready", false,-1);
    tracep->declBit(c+872,"io_slave_bvalid", false,-1);
    tracep->declBus(c+873,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+874,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+875,"io_slave_arready", false,-1);
    tracep->declBit(c+876,"io_slave_arvalid", false,-1);
    tracep->declBus(c+877,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+878,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+879,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+880,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+881,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+882,"io_slave_rready", false,-1);
    tracep->declBit(c+883,"io_slave_rvalid", false,-1);
    tracep->declBus(c+884,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+885,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+887,"io_slave_rlast", false,-1);
    tracep->declBus(c+888,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+797,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+799,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+801,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+803,"Ebreak", false,-1);
    tracep->declQuad(c+804,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+806,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+808,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+810,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+812,"io_master_awready", false,-1);
    tracep->declBit(c+813,"io_master_awvalid", false,-1);
    tracep->declBus(c+814,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+815,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+816,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+817,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+818,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+819,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+820,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+821,"io_master_awlock", false,-1);
    tracep->declBus(c+822,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+823,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+825,"io_master_wready", false,-1);
    tracep->declBit(c+826,"io_master_wvalid", false,-1);
    tracep->declQuad(c+827,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+829,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+830,"io_master_wlast", false,-1);
    tracep->declBus(c+831,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+832,"io_master_bready", false,-1);
    tracep->declBit(c+833,"io_master_bvalid", false,-1);
    tracep->declBus(c+834,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+835,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+836,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+837,"io_master_arready", false,-1);
    tracep->declBit(c+838,"io_master_arvalid", false,-1);
    tracep->declBus(c+839,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+840,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+841,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+842,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+843,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+844,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+845,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+846,"io_master_arlock", false,-1);
    tracep->declBus(c+847,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+848,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+850,"io_master_rready", false,-1);
    tracep->declBit(c+851,"io_master_rvalid", false,-1);
    tracep->declBus(c+852,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+853,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+855,"io_master_rlast", false,-1);
    tracep->declBus(c+856,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+857,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+858,"io_slave_awready", false,-1);
    tracep->declBit(c+859,"io_slave_awvalid", false,-1);
    tracep->declBus(c+860,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+861,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+862,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+863,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+864,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+865,"io_slave_wready", false,-1);
    tracep->declBit(c+866,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+867,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+869,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+870,"io_slave_wlast", false,-1);
    tracep->declBit(c+871,"io_slave_bready", false,-1);
    tracep->declBit(c+872,"io_slave_bvalid", false,-1);
    tracep->declBus(c+873,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+874,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+875,"io_slave_arready", false,-1);
    tracep->declBit(c+876,"io_slave_arvalid", false,-1);
    tracep->declBus(c+877,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+878,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+879,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+880,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+881,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+882,"io_slave_rready", false,-1);
    tracep->declBit(c+883,"io_slave_rvalid", false,-1);
    tracep->declBus(c+884,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+885,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+887,"io_slave_rlast", false,-1);
    tracep->declBus(c+888,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+892,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+893,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+892,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+27,"r_valid", false,-1);
    tracep->declBit(c+851,"r_ready", false,-1);
    tracep->declBit(c+28,"w_valid", false,-1);
    tracep->declBit(c+825,"w_ready", false,-1);
    tracep->declQuad(c+853,"axi_r_data", false,-1, 63,0);
    tracep->declBus(c+839,"axi_r_addr", false,-1, 31,0);
    tracep->declQuad(c+827,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+814,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+844,"r_size", false,-1, 2,0);
    tracep->declBus(c+819,"w_size", false,-1, 2,0);
    tracep->declBus(c+843,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+818,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+855,"r_last_o", false,-1);
    tracep->declBit(c+830,"w_last_o", false,-1);
    tracep->declBit(c+29,"if_ar_valid", false,-1);
    tracep->declBit(c+30,"if_ar_ready", false,-1);
    tracep->declArray(c+31,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+35,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+36,"mem_r_valid", false,-1);
    tracep->declBit(c+889,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last", false,-1);
    tracep->declBit(c+28,"mem_w_valid", false,-1);
    tracep->declBit(c+825,"mem_w_ready", false,-1);
    tracep->declQuad(c+39,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+42,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+43,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+830,"mem_w_last", false,-1);
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
    tracep->declBus(c+88,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+89,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+90,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+91,"ex_func7", false,-1);
    tracep->declBus(c+92,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+93,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+95,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+97,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+99,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+101,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+103,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+81,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+105,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+106,"ex_csr_en", false,-1);
    tracep->declBus(c+107,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+108,"ex_wait", false,-1);
    tracep->declBit(c+109,"ex_load_wait", false,-1);
    tracep->declBit(c+897,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+110,"alu_ready_o", false,-1);
    tracep->declBit(c+70,"ex_valid_o", false,-1);
    tracep->declBit(c+111,"ex_ready_o", false,-1);
    tracep->declBit(c+112,"csr_ready_o", false,-1);
    tracep->declBus(c+113,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+114,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+115,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+116,"mem_rw_type", false,-1);
    tracep->declBit(c+117,"mem_ram_en", false,-1);
    tracep->declBit(c+118,"mem_reg_en", false,-1);
    tracep->declBus(c+119,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+120,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+122,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+124,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+126,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+898,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+128,"mem_res", false,-1, 63,0);
    tracep->declQuad(c+130,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+132,"mem_valid_o", false,-1);
    tracep->declBit(c+133,"sram_ready_o", false,-1);
    tracep->declBit(c+134,"wb_reg_en", false,-1);
    tracep->declBus(c+135,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+136,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+138,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+140,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+142,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+144,"wb_opcode", false,-1, 6,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declQuad(c+81,"scr1", false,-1, 63,0);
    tracep->declQuad(c+83,"scr2", false,-1, 63,0);
    tracep->declQuad(c+78,"imm", false,-1, 63,0);
    tracep->declBus(c+92,"opcode", false,-1, 6,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
    tracep->declBit(c+91,"func7", false,-1);
    tracep->declBit(c+80,"mul_en", false,-1);
    tracep->declBit(c+71,"ready_i", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+110,"ready_o", false,-1);
    tracep->declQuad(c+101,"result", false,-1, 63,0);
    tracep->declBus(c+145,"Mode", false,-1, 4,0);
    tracep->declQuad(c+81,"AU", false,-1, 63,0);
    tracep->declQuad(c+83,"BU", false,-1, 63,0);
    tracep->declQuad(c+146,"AY", false,-1, 63,0);
    tracep->declQuad(c+148,"BY", false,-1, 63,0);
    tracep->declBit(c+150,"mul_ready_o", false,-1);
    tracep->declQuad(c+151,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+153,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+101,"Alusu", false,-1, 63,0);
    tracep->declBit(c+155,"rv64i_en", false,-1);
    tracep->declBit(c+156,"rv64r_en", false,-1);
    tracep->declQuad(c+81,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+83,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+900,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+901,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+892,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+151,"out", false,-1, 63,0);
    tracep->declBus(c+145,"key", false,-1, 4,0);
    tracep->declQuad(c+902,"default_out", false,-1, 63,0);
    tracep->declArray(c+157,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+900,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+901,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+892,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+896,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+151,"out", false,-1, 63,0);
    tracep->declBus(c+145,"key", false,-1, 4,0);
    tracep->declQuad(c+902,"default_out", false,-1, 63,0);
    tracep->declArray(c+157,"lut", false,-1, 1172,0);
    tracep->declBus(c+904,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+194+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+245+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+279,"lut_out", false,-1, 63,0);
    tracep->declBit(c+281,"hit", false,-1);
    tracep->declBus(c+905,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+80,"en", false,-1);
    tracep->declQuad(c+81,"rsA", false,-1, 63,0);
    tracep->declQuad(c+83,"rsB", false,-1, 63,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
    tracep->declBit(c+156,"rv64_en", false,-1);
    tracep->declBit(c+71,"ready_i", false,-1);
    tracep->declBit(c+150,"ready_o", false,-1);
    tracep->declQuad(c+153,"result", false,-1, 63,0);
    tracep->declBus(c+282,"rsAW", false,-1, 31,0);
    tracep->declBus(c+283,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+153,"data", false,-1, 63,0);
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
    tracep->declBit(c+284,"I_type", false,-1);
    tracep->declBit(c+285,"U_type", false,-1);
    tracep->declBit(c+286,"J_type", false,-1);
    tracep->declBit(c+287,"B_type", false,-1);
    tracep->declBit(c+288,"S_type", false,-1);
    tracep->declBit(c+289,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+48,"pc", false,-1, 63,0);
    tracep->declQuad(c+124,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+47,"imm_data", false,-1, 31,0);
    tracep->declBit(c+51,"jarl_rady", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+50,"ready_o", false,-1);
    tracep->declBit(c+30,"ready_i", false,-1);
    tracep->declBit(c+29,"valid_o", false,-1);
    tracep->declArray(c+31,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+35,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+290,"state", false,-1, 2,0);
    tracep->declArray(c+291,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+295,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+296,"offset", false,-1, 3,0);
    tracep->declBit(c+297,"jar", false,-1);
    tracep->declBit(c+298,"jal", false,-1);
    tracep->declBit(c+299,"one_line", false,-1);
    tracep->declBus(c+300,"dnpc", false,-1, 31,0);
    tracep->declBit(c+301,"dnpc_v", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+804,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+806,"cache_hit", false,-1, 63,0);
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
    tracep->declBus(c+302,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+303,"cache_index", false,-1, 6,0);
    tracep->declBus(c+296,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+304,"[0]", false,-1, 127,0);
    tracep->declArray(c+308,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+312,"[0]", false,-1, 127,0);
    tracep->declArray(c+316,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+320,"[0]", false,-1, 127,0);
    tracep->declArray(c+324,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+328,"[0]", false,-1, 127,0);
    tracep->declArray(c+332,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+336,"[0]", false,-1, 127,0);
    tracep->declArray(c+340,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+344,"[0]", false,-1, 127,0);
    tracep->declArray(c+348,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+352,"[0]", false,-1, 127,0);
    tracep->declArray(c+356,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+360,"[0]", false,-1, 127,0);
    tracep->declArray(c+364,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+368,"write_data", false,-1, 127,0);
    tracep->declBus(c+372,"write_en", false,-1, 7,0);
    tracep->declBus(c+373,"tag_v", false,-1, 7,0);
    tracep->declBus(c+374,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+375,"bust_num", false,-1);
    tracep->declBus(c+376,"state", false,-1, 2,0);
    tracep->declBus(c+890,"next_state", false,-1, 2,0);
    tracep->declBus(c+377,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+378,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+382,"CEN", false,-1);
    tracep->declBit(c+383,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+385,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+389,"CEN", false,-1);
    tracep->declBit(c+390,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+391,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+395,"CEN", false,-1);
    tracep->declBit(c+396,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+397,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+401,"CEN", false,-1);
    tracep->declBit(c+402,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+403,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+407,"CEN", false,-1);
    tracep->declBit(c+408,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+409,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+413,"CEN", false,-1);
    tracep->declBit(c+414,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+415,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+419,"CEN", false,-1);
    tracep->declBit(c+420,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+421,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+425,"CEN", false,-1);
    tracep->declBit(c+426,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+427,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+431,"CEN", false,-1);
    tracep->declBit(c+432,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+433,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+437,"CEN", false,-1);
    tracep->declBit(c+438,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+439,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+443,"CEN", false,-1);
    tracep->declBit(c+444,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+445,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+449,"CEN", false,-1);
    tracep->declBit(c+450,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+451,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+455,"CEN", false,-1);
    tracep->declBit(c+456,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+457,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+461,"CEN", false,-1);
    tracep->declBit(c+462,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+463,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+467,"CEN", false,-1);
    tracep->declBit(c+468,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+469,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+473,"CEN", false,-1);
    tracep->declBit(c+474,"WEN", false,-1);
    tracep->declBus(c+384,"A", false,-1, 5,0);
    tracep->declArray(c+368,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBus(c+62,"Ra", false,-1, 4,0);
    tracep->declBus(c+63,"Rb", false,-1, 4,0);
    tracep->declBus(c+135,"Rw", false,-1, 4,0);
    tracep->declBit(c+134,"Wen", false,-1);
    tracep->declQuad(c+66,"BusA", false,-1, 63,0);
    tracep->declQuad(c+68,"BusB", false,-1, 63,0);
    tracep->declQuad(c+138,"BusW", false,-1, 63,0);
    tracep->declBit(c+796,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+475+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+539,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+892,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+893,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declBit(c+27,"r_valid_i", false,-1);
    tracep->declBit(c+28,"w_valid_i", false,-1);
    tracep->declBit(c+851,"r_ready_o", false,-1);
    tracep->declBit(c+825,"w_ready_o", false,-1);
    tracep->declQuad(c+853,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+827,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+814,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+839,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+819,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+844,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+843,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+818,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+855,"r_last_o", false,-1);
    tracep->declBit(c+830,"w_last_o", false,-1);
    tracep->declBit(c+812,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+813,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+814,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+815,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+816,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+817,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+818,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+819,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+820,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+821,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+822,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+823,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+824,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+825,"axi_w_ready_i", false,-1);
    tracep->declBit(c+826,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+827,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+829,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+830,"axi_w_last_o", false,-1);
    tracep->declBus(c+831,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+832,"axi_b_ready_o", false,-1);
    tracep->declBit(c+833,"axi_b_valid_i", false,-1);
    tracep->declBus(c+834,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+835,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+836,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+837,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+838,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+839,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+840,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+841,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+842,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+843,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+844,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+845,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+846,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+847,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+848,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+849,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+850,"axi_r_ready_o", false,-1);
    tracep->declBit(c+851,"axi_r_valid_i", false,-1);
    tracep->declBus(c+852,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+853,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+855,"axi_r_last_i", false,-1);
    tracep->declBus(c+856,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+857,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+908,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+909,"axi_id", false,-1, 3,0);
    tracep->declBus(c+910,"axi_user", false,-1, 0,0);
    tracep->declBus(c+911,"axi_len", false,-1, 7,0);
    tracep->declBus(c+912,"axi_size", false,-1, 2,0);
    tracep->declBit(c+540,"axi_aw_valid", false,-1);
    tracep->declBus(c+541,"wd_count", false,-1, 7,0);
    tracep->declBit(c+542,"w_last_ok", false,-1);
    tracep->declBit(c+543,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+892,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+893,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+894,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+895,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+896,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declBit(c+44,"if_ar_valid", false,-1);
    tracep->declBit(c+21,"if_ar_ready", false,-1);
    tracep->declQuad(c+22,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+45,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+46,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"if_last_i", false,-1);
    tracep->declBit(c+36,"mem_r_valid", false,-1);
    tracep->declBit(c+889,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last_i", false,-1);
    tracep->declBit(c+28,"mem_w_valid", false,-1);
    tracep->declBit(c+825,"mem_w_ready", false,-1);
    tracep->declQuad(c+39,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+42,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+43,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+830,"mem_w_last_i", false,-1);
    tracep->declBit(c+27,"r_valid_i", false,-1);
    tracep->declBit(c+28,"w_valid_i", false,-1);
    tracep->declBit(c+851,"r_ready_o", false,-1);
    tracep->declBit(c+825,"w_ready_o", false,-1);
    tracep->declQuad(c+853,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+827,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+814,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+839,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+819,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+844,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+843,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+818,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+855,"r_last_i", false,-1);
    tracep->declBit(c+830,"w_last_i", false,-1);
    tracep->declBus(c+544,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+25,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+545,"rd_state", false,-1, 1,0);
    tracep->declBus(c+891,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+913,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+914,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+915,"wr_state", false,-1, 1,0);
    tracep->declBus(c+916,"wr_next_state", false,-1, 1,0);
    tracep->declBus(c+917,"debug_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declBit(c+106,"en", false,-1);
    tracep->declQuad(c+93,"pc", false,-1, 63,0);
    tracep->declBus(c+107,"addr", false,-1, 2,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
    tracep->declQuad(c+81,"data_i", false,-1, 63,0);
    tracep->declQuad(c+103,"data_o", false,-1, 63,0);
    tracep->declBit(c+112,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+546+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+103,"data_r", false,-1, 63,0);
    tracep->declQuad(c+558,"data_w", false,-1, 63,0);
    tracep->declQuad(c+560,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+893,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+892,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+808,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+810,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+115,"func3", false,-1, 2,0);
    tracep->declBus(c+119,"addr", false,-1, 31,0);
    tracep->declQuad(c+120,"wdata", false,-1, 63,0);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBit(c+111,"ex_ready_i", false,-1);
    tracep->declBit(c+117,"mem_valid_i", false,-1);
    tracep->declBit(c+133,"mem_ready_o", false,-1);
    tracep->declQuad(c+130,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+889,"r_ready_i", false,-1);
    tracep->declBit(c+36,"r_valid_o", false,-1);
    tracep->declBit(c+20,"r_last_i", false,-1);
    tracep->declBus(c+38,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+825,"w_ready_i", false,-1);
    tracep->declBit(c+830,"w_last_i", false,-1);
    tracep->declBit(c+28,"w_valid_o", false,-1);
    tracep->declBus(c+43,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+42,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+39,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+41,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+562,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+564,"dcache_ready_i", false,-1);
    tracep->declBit(c+565,"dcache_valid_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+795,"clk", false,-1);
    tracep->declBit(c+796,"rst", false,-1);
    tracep->declQuad(c+808,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+810,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+116,"cpu_rw_en", false,-1);
    tracep->declBus(c+119,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+565,"cpu_valid", false,-1);
    tracep->declQuad(c+120,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+115,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+562,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+564,"cpu_ready", false,-1);
    tracep->declBit(c+825,"axi_w_ready_i", false,-1);
    tracep->declBit(c+28,"axi_w_valid_o", false,-1);
    tracep->declBit(c+830,"axi_w_last_i", false,-1);
    tracep->declBus(c+42,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+39,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+41,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+43,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+889,"axi_r_ready_i", false,-1);
    tracep->declBit(c+36,"axi_r_valid_o", false,-1);
    tracep->declBit(c+20,"axi_r_last_i", false,-1);
    tracep->declBus(c+38,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+566,"cache_rd_ready", false,-1);
    tracep->declBit(c+567,"cache_wr_ready", false,-1);
    tracep->declBus(c+568,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+569,"cache_index", false,-1, 6,0);
    tracep->declBus(c+570,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+571,"write_data", false,-1, 127,0);
    tracep->declArray(c+918,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+575,"write_en", false,-1, 7,0);
    tracep->declBit(c+576,"rw_strb_en", false,-1);
    tracep->declArray(c+577,"rw_strb", false,-1, 127,0);
    tracep->declQuad(c+581,"rw_strb_64", false,-1, 63,0);
    tracep->declBit(c+583,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+584,"[0]", false,-1, 127,0);
    tracep->declArray(c+588,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+592,"[0]", false,-1, 127,0);
    tracep->declArray(c+596,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+600,"[0]", false,-1, 127,0);
    tracep->declArray(c+604,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+608,"[0]", false,-1, 127,0);
    tracep->declArray(c+612,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+616,"[0]", false,-1, 127,0);
    tracep->declArray(c+620,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+624,"[0]", false,-1, 127,0);
    tracep->declArray(c+628,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+632,"[0]", false,-1, 127,0);
    tracep->declArray(c+636,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+640,"[0]", false,-1, 127,0);
    tracep->declArray(c+644,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+648,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+650,"cache_write_data", false,-1, 127,0);
    tracep->declBit(c+654,"device", false,-1);
    tracep->declQuad(c+655,"write_back_data", false,-1, 63,0);
    tracep->declBus(c+922,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+657,"tag_v", false,-1, 7,0);
    tracep->declBus(c+658,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+923,"bust_rd", false,-1);
    tracep->declBus(c+659,"rd_state", false,-1, 2,0);
    tracep->declBus(c+26,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+660,"wr_state", false,-1, 2,0);
    tracep->declBus(c+661,"cache_write_point", false,-1, 2,0);
    tracep->declBus(c+924,"cache_write_point_l1", false,-1, 2,0);
    tracep->declBus(c+661,"cache_rodom_cnt", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+662,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+666,"CEN", false,-1);
    tracep->declBit(c+667,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+673,"cen", false,-1);
    tracep->declBit(c+674,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+675,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+679,"CEN", false,-1);
    tracep->declBit(c+680,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+681,"cen", false,-1);
    tracep->declBit(c+682,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+683,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+687,"CEN", false,-1);
    tracep->declBit(c+688,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+689,"cen", false,-1);
    tracep->declBit(c+690,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+691,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+695,"CEN", false,-1);
    tracep->declBit(c+696,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+697,"cen", false,-1);
    tracep->declBit(c+698,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+699,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+703,"CEN", false,-1);
    tracep->declBit(c+704,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+705,"cen", false,-1);
    tracep->declBit(c+706,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+707,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+711,"CEN", false,-1);
    tracep->declBit(c+712,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+713,"cen", false,-1);
    tracep->declBit(c+714,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+715,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+719,"CEN", false,-1);
    tracep->declBit(c+720,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+721,"cen", false,-1);
    tracep->declBit(c+722,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+723,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+727,"CEN", false,-1);
    tracep->declBit(c+728,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+729,"cen", false,-1);
    tracep->declBit(c+730,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+731,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+735,"CEN", false,-1);
    tracep->declBit(c+736,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+737,"cen", false,-1);
    tracep->declBit(c+738,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+739,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+743,"CEN", false,-1);
    tracep->declBit(c+744,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+745,"cen", false,-1);
    tracep->declBit(c+746,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+747,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+751,"CEN", false,-1);
    tracep->declBit(c+752,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+753,"cen", false,-1);
    tracep->declBit(c+754,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+755,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+759,"CEN", false,-1);
    tracep->declBit(c+760,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+761,"cen", false,-1);
    tracep->declBit(c+762,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+763,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+767,"CEN", false,-1);
    tracep->declBit(c+768,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+769,"cen", false,-1);
    tracep->declBit(c+770,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+771,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+775,"CEN", false,-1);
    tracep->declBit(c+776,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+777,"cen", false,-1);
    tracep->declBit(c+778,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+779,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+783,"CEN", false,-1);
    tracep->declBit(c+784,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+785,"cen", false,-1);
    tracep->declBit(c+786,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+906,"Bits", false,-1, 31,0);
    tracep->declBus(c+892,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+907,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+906,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+787,"Q", false,-1, 127,0);
    tracep->declBit(c+795,"CLK", false,-1);
    tracep->declBit(c+791,"CEN", false,-1);
    tracep->declBit(c+792,"WEN", false,-1);
    tracep->declArray(c+668,"BWEN", false,-1, 127,0);
    tracep->declBus(c+672,"A", false,-1, 5,0);
    tracep->declArray(c+571,"D", false,-1, 127,0);
    tracep->declBit(c+793,"cen", false,-1);
    tracep->declBit(c+794,"wen", false,-1);
    tracep->declArray(c+577,"bwen", false,-1, 127,0);
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
    bufp->fullCData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+95,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+97,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+99,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+115,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+155,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+156,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+157,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+194,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+197,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+200,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+203,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+206,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+209,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+212,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+215,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+218,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+221,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+224,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+227,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+230,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+233,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+236,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+239,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+245,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+282,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+283,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+284,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+286,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+287,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+288,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+289,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+291,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
    bufp->fullCData(oldp+296,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+297,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+298,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+301,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+302,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+303,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+304,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+308,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+312,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+316,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+320,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+324,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+328,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+332,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+336,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+340,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+344,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+348,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+352,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+356,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+360,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+364,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+372,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullCData(oldp+374,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
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
    bufp->fullBit(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+376,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+384,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+389,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+395,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+401,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+407,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+413,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+419,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+425,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+431,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+437,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+443,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+449,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+455,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+477,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+479,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+481,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+483,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+485,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+489,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+491,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+493,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+495,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+497,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+499,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+501,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+503,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+505,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+507,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+509,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+511,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+513,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+515,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+517,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+519,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+521,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+523,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+525,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+527,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+529,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+531,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+533,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+535,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+537,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+539,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+541,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+542,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__w_last_ok));
    bufp->fullBit(oldp+543,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+544,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+546,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+560,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+562,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+564,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+565,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+566,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+567,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+568,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+569,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+570,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+571,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+575,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),8);
    bufp->fullBit(oldp+576,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+577,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullQData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
    bufp->fullBit(oldp+583,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_hcd4d3a7a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_hcd4d3a7a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_hcd4d3a7a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_hcd4d3a7a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+584,(__Vtemp_hcd4d3a7a__0),128);
    __Vtemp_hcd4d5e3f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_hcd4d5e3f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_hcd4d5e3f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_hcd4d5e3f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+588,(__Vtemp_hcd4d5e3f__0),128);
    __Vtemp_hcd526284__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_hcd526284__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_hcd526284__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_hcd526284__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+592,(__Vtemp_hcd526284__0),128);
    __Vtemp_hcd524dc3__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_hcd524dc3__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_hcd524dc3__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_hcd524dc3__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+596,(__Vtemp_hcd524dc3__0),128);
    __Vtemp_hcd52414f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_hcd52414f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_hcd52414f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_hcd52414f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+600,(__Vtemp_hcd52414f__0),128);
    __Vtemp_hcd521a10__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_hcd521a10__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_hcd521a10__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_hcd521a10__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+604,(__Vtemp_hcd521a10__0),128);
    __Vtemp_hcd52509e__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_hcd52509e__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_hcd52509e__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_hcd52509e__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+608,(__Vtemp_hcd52509e__0),128);
    __Vtemp_hcd522cdd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_hcd522cdd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_hcd522cdd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_hcd522cdd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+612,(__Vtemp_hcd522cdd__0),128);
    __Vtemp_hcd521e29__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_hcd521e29__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_hcd521e29__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_hcd521e29__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+616,(__Vtemp_hcd521e29__0),128);
    __Vtemp_hcd51f9ec__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_hcd51f9ec__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_hcd51f9ec__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_hcd51f9ec__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+620,(__Vtemp_hcd51f9ec__0),128);
    __Vtemp_hcd552a7d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_hcd552a7d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_hcd552a7d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_hcd552a7d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+624,(__Vtemp_hcd552a7d__0),128);
    __Vtemp_hcd550dbe__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_hcd550dbe__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_hcd550dbe__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_hcd550dbe__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+628,(__Vtemp_hcd550dbe__0),128);
    __Vtemp_hcd54f9cb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_hcd54f9cb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_hcd54f9cb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_hcd54f9cb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+632,(__Vtemp_hcd54f9cb__0),128);
    __Vtemp_hcd54de8a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_hcd54de8a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_hcd54de8a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_hcd54de8a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+636,(__Vtemp_hcd54de8a__0),128);
    __Vtemp_hcd550a9a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_hcd550a9a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_hcd550a9a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_hcd550a9a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+640,(__Vtemp_hcd550a9a__0),128);
    __Vtemp_hcd54ecdb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_hcd54ecdb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_hcd54ecdb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_hcd54ecdb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+644,(__Vtemp_hcd54ecdb__0),128);
    bufp->fullQData(oldp+648,(((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
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
    bufp->fullWData(oldp+650,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
    bufp->fullBit(oldp+654,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullQData(oldp+655,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),64);
    bufp->fullCData(oldp+657,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),3);
    bufp->fullCData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt),3);
    bufp->fullWData(oldp+662,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+666,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+667,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
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
    bufp->fullWData(oldp+668,(__Vtemp_h88b423c3__0),128);
    bufp->fullCData(oldp+672,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+673,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+674,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+675,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+679,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+680,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+681,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+682,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+683,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+687,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+688,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+689,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+690,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+691,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+695,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+696,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+697,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+698,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+699,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+703,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+705,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+706,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+707,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+711,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+712,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+713,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+714,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+715,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+719,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+720,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+721,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+722,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+723,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+727,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+728,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+729,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+730,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+731,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+735,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+736,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+737,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+738,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+739,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+743,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+744,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+745,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+746,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+747,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+751,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+752,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+753,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+754,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+755,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+759,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+760,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+761,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+762,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+763,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+767,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+768,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+769,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+770,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+771,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+775,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+776,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+777,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+778,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+779,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+783,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+784,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+785,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+786,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+787,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+791,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+792,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+793,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+794,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+795,(vlSelf->clk));
    bufp->fullBit(oldp+796,(vlSelf->rst));
    bufp->fullQData(oldp+797,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+799,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+801,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+803,(vlSelf->Ebreak));
    bufp->fullQData(oldp+804,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+806,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+808,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+810,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+812,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+813,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+814,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+815,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+816,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+817,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+818,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+819,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+820,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+821,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+822,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+823,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+824,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+825,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+826,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+827,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+829,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+830,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+831,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+832,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+833,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+834,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+835,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+836,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+837,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+838,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+839,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+840,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+841,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+842,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+843,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+844,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+845,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+846,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+847,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+848,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+849,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+850,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+851,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+852,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+853,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+855,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+856,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+857,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+858,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+859,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+860,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+861,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+862,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+863,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+864,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+865,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+866,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+867,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+869,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+870,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+871,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+872,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+873,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+874,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+875,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+876,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+877,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+878,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+879,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+880,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+881,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+882,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+883,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+884,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+885,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+887,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+888,(vlSelf->io_slave_rid),4);
    bufp->fullBit(oldp+889,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                             & (IData)(vlSelf->io_master_rvalid))));
    bufp->fullCData(oldp+890,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+891,(((IData)(vlSelf->rst)
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
    bufp->fullIData(oldp+892,(0x40U),32);
    bufp->fullIData(oldp+893,(0x20U),32);
    bufp->fullIData(oldp+894,(4U),32);
    bufp->fullIData(oldp+895,(8U),32);
    bufp->fullIData(oldp+896,(1U),32);
    bufp->fullBit(oldp+897,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+898,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+900,(0x11U),32);
    bufp->fullIData(oldp+901,(5U),32);
    bufp->fullQData(oldp+902,(0ULL),64);
    bufp->fullIData(oldp+904,(0x45U),32);
    bufp->fullIData(oldp+905,(0x11U),32);
    bufp->fullIData(oldp+906,(0x80U),32);
    bufp->fullIData(oldp+907,(6U),32);
    bufp->fullIData(oldp+908,(3U),32);
    bufp->fullCData(oldp+909,(0U),4);
    bufp->fullBit(oldp+910,(0U));
    bufp->fullCData(oldp+911,(0U),8);
    bufp->fullCData(oldp+912,(3U),3);
    bufp->fullCData(oldp+913,(1U),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+916,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullIData(oldp+917,(0x800f4fe0U),32);
    bufp->fullWData(oldp+918,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+922,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+923,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
    bufp->fullCData(oldp+924,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point_l1),3);
}
