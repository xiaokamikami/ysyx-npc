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
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+804,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+806,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+808,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+810,"Ebreak", false,-1);
    tracep->declQuad(c+811,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+813,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+815,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+817,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+819,"io_master_awready", false,-1);
    tracep->declBit(c+820,"io_master_awvalid", false,-1);
    tracep->declBus(c+821,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+822,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+823,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+825,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+826,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+827,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+828,"io_master_awlock", false,-1);
    tracep->declBus(c+829,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+830,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+831,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+832,"io_master_wready", false,-1);
    tracep->declBit(c+833,"io_master_wvalid", false,-1);
    tracep->declQuad(c+834,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+836,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+837,"io_master_wlast", false,-1);
    tracep->declBus(c+838,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+839,"io_master_bready", false,-1);
    tracep->declBit(c+840,"io_master_bvalid", false,-1);
    tracep->declBus(c+841,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+842,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+844,"io_master_arready", false,-1);
    tracep->declBit(c+845,"io_master_arvalid", false,-1);
    tracep->declBus(c+846,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+847,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+848,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+850,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+851,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+852,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+853,"io_master_arlock", false,-1);
    tracep->declBus(c+854,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+856,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+857,"io_master_rready", false,-1);
    tracep->declBit(c+858,"io_master_rvalid", false,-1);
    tracep->declBus(c+859,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+860,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+862,"io_master_rlast", false,-1);
    tracep->declBus(c+863,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+864,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+865,"io_slave_awready", false,-1);
    tracep->declBit(c+866,"io_slave_awvalid", false,-1);
    tracep->declBus(c+867,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+868,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+869,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+870,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+871,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+872,"io_slave_wready", false,-1);
    tracep->declBit(c+873,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+874,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+876,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+877,"io_slave_wlast", false,-1);
    tracep->declBit(c+878,"io_slave_bready", false,-1);
    tracep->declBit(c+879,"io_slave_bvalid", false,-1);
    tracep->declBus(c+880,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+881,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+882,"io_slave_arready", false,-1);
    tracep->declBit(c+883,"io_slave_arvalid", false,-1);
    tracep->declBus(c+884,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+885,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+886,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"io_slave_rready", false,-1);
    tracep->declBit(c+890,"io_slave_rvalid", false,-1);
    tracep->declBus(c+891,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+892,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+894,"io_slave_rlast", false,-1);
    tracep->declBus(c+895,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+804,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+806,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+808,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+810,"Ebreak", false,-1);
    tracep->declQuad(c+811,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+813,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+815,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+817,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+819,"io_master_awready", false,-1);
    tracep->declBit(c+820,"io_master_awvalid", false,-1);
    tracep->declBus(c+821,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+822,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+823,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+824,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+825,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+826,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+827,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+828,"io_master_awlock", false,-1);
    tracep->declBus(c+829,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+830,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+831,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+832,"io_master_wready", false,-1);
    tracep->declBit(c+833,"io_master_wvalid", false,-1);
    tracep->declQuad(c+834,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+836,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+837,"io_master_wlast", false,-1);
    tracep->declBus(c+838,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+839,"io_master_bready", false,-1);
    tracep->declBit(c+840,"io_master_bvalid", false,-1);
    tracep->declBus(c+841,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+842,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+843,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+844,"io_master_arready", false,-1);
    tracep->declBit(c+845,"io_master_arvalid", false,-1);
    tracep->declBus(c+846,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+847,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+848,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+849,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+850,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+851,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+852,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+853,"io_master_arlock", false,-1);
    tracep->declBus(c+854,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+855,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+856,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+857,"io_master_rready", false,-1);
    tracep->declBit(c+858,"io_master_rvalid", false,-1);
    tracep->declBus(c+859,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+860,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+862,"io_master_rlast", false,-1);
    tracep->declBus(c+863,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+864,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+865,"io_slave_awready", false,-1);
    tracep->declBit(c+866,"io_slave_awvalid", false,-1);
    tracep->declBus(c+867,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+868,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+869,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+870,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+871,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+872,"io_slave_wready", false,-1);
    tracep->declBit(c+873,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+874,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+876,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+877,"io_slave_wlast", false,-1);
    tracep->declBit(c+878,"io_slave_bready", false,-1);
    tracep->declBit(c+879,"io_slave_bvalid", false,-1);
    tracep->declBus(c+880,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+881,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+882,"io_slave_arready", false,-1);
    tracep->declBit(c+883,"io_slave_arvalid", false,-1);
    tracep->declBus(c+884,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+885,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+886,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"io_slave_rready", false,-1);
    tracep->declBit(c+890,"io_slave_rvalid", false,-1);
    tracep->declBus(c+891,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+892,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+894,"io_slave_rlast", false,-1);
    tracep->declBus(c+895,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+900,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+900,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"r_valid", false,-1);
    tracep->declBit(c+19,"r_ready", false,-1);
    tracep->declBit(c+20,"w_valid", false,-1);
    tracep->declBit(c+21,"w_ready", false,-1);
    tracep->declQuad(c+22,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+834,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+846,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+821,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+851,"r_size", false,-1, 2,0);
    tracep->declBus(c+826,"w_size", false,-1, 2,0);
    tracep->declBus(c+850,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+825,"w_len_i", false,-1, 7,0);
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
    tracep->declBit(c+40,"mem_w_valid", false,-1);
    tracep->declBit(c+21,"mem_w_ready", false,-1);
    tracep->declQuad(c+41,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+43,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+44,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+45,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+46,"mem_w_last", false,-1);
    tracep->declBit(c+47,"icache_ar_valid", false,-1);
    tracep->declBit(c+48,"icache_ar_ready", false,-1);
    tracep->declQuad(c+49,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+51,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+52,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+53,"icache_last_i", false,-1);
    tracep->declBus(c+54,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+55,"if_pc", false,-1, 63,0);
    tracep->declBit(c+57,"if_ready_o", false,-1);
    tracep->declBit(c+58,"if_jr_ready", false,-1);
    tracep->declBus(c+59,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+60,"id_pc", false,-1, 63,0);
    tracep->declBus(c+62,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+63,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+64,"id_mul_en", false,-1);
    tracep->declQuad(c+65,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+67,"id_func3", false,-1, 2,0);
    tracep->declBit(c+68,"id_func7", false,-1);
    tracep->declBus(c+69,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+70,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+71,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+72,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+73,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+75,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+77,"id_vaild_o", false,-1);
    tracep->declBit(c+78,"id_ready_o", false,-1);
    tracep->declBit(c+79,"csr_jar_en", false,-1);
    tracep->declBus(c+80,"csr", false,-1, 11,0);
    tracep->declBus(c+81,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+82,"id_csr_en", false,-1);
    tracep->declBus(c+83,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+84,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+85,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+87,"ex_mul_en", false,-1);
    tracep->declQuad(c+88,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+90,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+92,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+94,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+95,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+96,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+97,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+98,"ex_func7", false,-1);
    tracep->declBus(c+99,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+100,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+102,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+104,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+106,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+108,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+110,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+88,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+112,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+113,"ex_csr_en", false,-1);
    tracep->declBus(c+114,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+115,"ex_wait", false,-1);
    tracep->declBit(c+116,"ex_load_wait", false,-1);
    tracep->declBit(c+905,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+117,"alu_ready_o", false,-1);
    tracep->declBit(c+77,"ex_valid_o", false,-1);
    tracep->declBit(c+118,"ex_ready_o", false,-1);
    tracep->declBit(c+119,"csr_ready_o", false,-1);
    tracep->declBus(c+120,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+121,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+122,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+123,"mem_rw_type", false,-1);
    tracep->declBit(c+124,"mem_ram_en", false,-1);
    tracep->declBit(c+125,"mem_reg_en", false,-1);
    tracep->declBus(c+126,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+127,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+129,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+131,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+133,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+906,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+135,"mem_res", false,-1, 63,0);
    tracep->declQuad(c+137,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+139,"mem_valid_o", false,-1);
    tracep->declBit(c+140,"sram_ready_o", false,-1);
    tracep->declBit(c+141,"wb_reg_en", false,-1);
    tracep->declBus(c+142,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+143,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+145,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+147,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+149,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+151,"wb_opcode", false,-1, 6,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declQuad(c+88,"scr1", false,-1, 63,0);
    tracep->declQuad(c+90,"scr2", false,-1, 63,0);
    tracep->declQuad(c+85,"imm", false,-1, 63,0);
    tracep->declBus(c+99,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declBit(c+98,"func7", false,-1);
    tracep->declBit(c+87,"mul_en", false,-1);
    tracep->declBit(c+78,"ready_i", false,-1);
    tracep->declBit(c+77,"valid_i", false,-1);
    tracep->declBit(c+117,"ready_o", false,-1);
    tracep->declQuad(c+108,"result", false,-1, 63,0);
    tracep->declBus(c+152,"Mode", false,-1, 4,0);
    tracep->declQuad(c+88,"AU", false,-1, 63,0);
    tracep->declQuad(c+90,"BU", false,-1, 63,0);
    tracep->declQuad(c+153,"AY", false,-1, 63,0);
    tracep->declQuad(c+155,"BY", false,-1, 63,0);
    tracep->declBit(c+157,"mul_ready_o", false,-1);
    tracep->declQuad(c+158,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+160,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+108,"Alusu", false,-1, 63,0);
    tracep->declBit(c+162,"rv64i_en", false,-1);
    tracep->declBit(c+163,"rv64r_en", false,-1);
    tracep->declQuad(c+88,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+90,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+908,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+909,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+900,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+158,"out", false,-1, 63,0);
    tracep->declBus(c+152,"key", false,-1, 4,0);
    tracep->declQuad(c+910,"default_out", false,-1, 63,0);
    tracep->declArray(c+164,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+908,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+909,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+900,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+904,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+158,"out", false,-1, 63,0);
    tracep->declBus(c+152,"key", false,-1, 4,0);
    tracep->declQuad(c+910,"default_out", false,-1, 63,0);
    tracep->declArray(c+164,"lut", false,-1, 1172,0);
    tracep->declBus(c+912,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+201+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+252+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+286,"lut_out", false,-1, 63,0);
    tracep->declBit(c+288,"hit", false,-1);
    tracep->declBus(c+913,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+87,"en", false,-1);
    tracep->declQuad(c+88,"rsA", false,-1, 63,0);
    tracep->declQuad(c+90,"rsB", false,-1, 63,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declBit(c+163,"rv64_en", false,-1);
    tracep->declBit(c+78,"ready_i", false,-1);
    tracep->declBit(c+157,"ready_o", false,-1);
    tracep->declQuad(c+160,"result", false,-1, 63,0);
    tracep->declBus(c+289,"rsAW", false,-1, 31,0);
    tracep->declBus(c+290,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+160,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+59,"instr", false,-1, 31,0);
    tracep->declBus(c+72,"opcode", false,-1, 6,0);
    tracep->declBus(c+67,"func3", false,-1, 2,0);
    tracep->declBit(c+68,"func7", false,-1);
    tracep->declBus(c+69,"Rs1", false,-1, 4,0);
    tracep->declBus(c+70,"Rs2", false,-1, 4,0);
    tracep->declBus(c+71,"Rd", false,-1, 4,0);
    tracep->declQuad(c+65,"imme", false,-1, 63,0);
    tracep->declBus(c+62,"V1Type", false,-1, 1,0);
    tracep->declBus(c+63,"V2Type", false,-1, 1,0);
    tracep->declBit(c+64,"Mul_en", false,-1);
    tracep->declBit(c+291,"I_type", false,-1);
    tracep->declBit(c+292,"U_type", false,-1);
    tracep->declBit(c+293,"J_type", false,-1);
    tracep->declBit(c+294,"B_type", false,-1);
    tracep->declBit(c+295,"S_type", false,-1);
    tracep->declBit(c+296,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+55,"pc", false,-1, 63,0);
    tracep->declQuad(c+131,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+54,"imm_data", false,-1, 31,0);
    tracep->declBit(c+58,"jarl_rady", false,-1);
    tracep->declBit(c+77,"valid_i", false,-1);
    tracep->declBit(c+57,"ready_o", false,-1);
    tracep->declBit(c+27,"ready_i", false,-1);
    tracep->declBit(c+26,"valid_o", false,-1);
    tracep->declArray(c+28,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+32,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+297,"state", false,-1, 2,0);
    tracep->declArray(c+298,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+302,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+303,"offset", false,-1, 3,0);
    tracep->declBit(c+304,"jar", false,-1);
    tracep->declBit(c+305,"jal", false,-1);
    tracep->declBit(c+306,"one_line", false,-1);
    tracep->declBus(c+307,"dnpc", false,-1, 31,0);
    tracep->declBit(c+308,"dnpc_v", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+811,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+813,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+32,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+26,"cpu_valid", false,-1);
    tracep->declArray(c+28,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+27,"cpu_ready", false,-1);
    tracep->declBit(c+48,"axi_ready_i", false,-1);
    tracep->declBit(c+47,"axi_valid_o", false,-1);
    tracep->declBit(c+53,"axi_r_last_i", false,-1);
    tracep->declBus(c+52,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+49,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+51,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+309,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+310,"cache_index", false,-1, 6,0);
    tracep->declBus(c+303,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+311,"[0]", false,-1, 127,0);
    tracep->declArray(c+315,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+319,"[0]", false,-1, 127,0);
    tracep->declArray(c+323,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+327,"[0]", false,-1, 127,0);
    tracep->declArray(c+331,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+335,"[0]", false,-1, 127,0);
    tracep->declArray(c+339,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+343,"[0]", false,-1, 127,0);
    tracep->declArray(c+347,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+351,"[0]", false,-1, 127,0);
    tracep->declArray(c+355,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+359,"[0]", false,-1, 127,0);
    tracep->declArray(c+363,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+367,"[0]", false,-1, 127,0);
    tracep->declArray(c+371,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+375,"write_data", false,-1, 127,0);
    tracep->declBus(c+379,"write_en", false,-1, 7,0);
    tracep->declBus(c+380,"tag_v", false,-1, 7,0);
    tracep->declBus(c+381,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+382,"bust_num", false,-1);
    tracep->declBus(c+383,"state", false,-1, 2,0);
    tracep->declBus(c+896,"next_state", false,-1, 2,0);
    tracep->declBus(c+384,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+385,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+389,"CEN", false,-1);
    tracep->declBit(c+390,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+392,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+396,"CEN", false,-1);
    tracep->declBit(c+397,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+398,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+402,"CEN", false,-1);
    tracep->declBit(c+403,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+404,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+408,"CEN", false,-1);
    tracep->declBit(c+409,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+410,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+414,"CEN", false,-1);
    tracep->declBit(c+415,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+416,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+420,"CEN", false,-1);
    tracep->declBit(c+421,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+422,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+426,"CEN", false,-1);
    tracep->declBit(c+427,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+428,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+432,"CEN", false,-1);
    tracep->declBit(c+433,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+434,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+438,"CEN", false,-1);
    tracep->declBit(c+439,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+440,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+444,"CEN", false,-1);
    tracep->declBit(c+445,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+446,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+450,"CEN", false,-1);
    tracep->declBit(c+451,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+452,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+456,"CEN", false,-1);
    tracep->declBit(c+457,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+458,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+462,"CEN", false,-1);
    tracep->declBit(c+463,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+464,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+468,"CEN", false,-1);
    tracep->declBit(c+469,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+470,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+474,"CEN", false,-1);
    tracep->declBit(c+475,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+476,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+480,"CEN", false,-1);
    tracep->declBit(c+481,"WEN", false,-1);
    tracep->declBus(c+391,"A", false,-1, 5,0);
    tracep->declArray(c+375,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBus(c+69,"Ra", false,-1, 4,0);
    tracep->declBus(c+70,"Rb", false,-1, 4,0);
    tracep->declBus(c+142,"Rw", false,-1, 4,0);
    tracep->declBit(c+141,"Wen", false,-1);
    tracep->declQuad(c+73,"BusA", false,-1, 63,0);
    tracep->declQuad(c+75,"BusB", false,-1, 63,0);
    tracep->declQuad(c+145,"BusW", false,-1, 63,0);
    tracep->declBit(c+803,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+482+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+546,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+900,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+834,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+821,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+846,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+826,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+851,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+850,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+825,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+24,"r_last_o", false,-1);
    tracep->declBit(c+25,"w_last_o", false,-1);
    tracep->declBit(c+819,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+820,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+821,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+822,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+823,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+824,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+825,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+826,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+827,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+828,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+829,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+830,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+831,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+832,"axi_w_ready_i", false,-1);
    tracep->declBit(c+833,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+834,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+836,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+837,"axi_w_last_o", false,-1);
    tracep->declBus(c+838,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+839,"axi_b_ready_o", false,-1);
    tracep->declBit(c+840,"axi_b_valid_i", false,-1);
    tracep->declBus(c+841,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+842,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+843,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+844,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+845,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+846,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+847,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+848,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+849,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+850,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+851,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+852,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+853,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+854,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+855,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+856,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+857,"axi_r_ready_o", false,-1);
    tracep->declBit(c+858,"axi_r_valid_i", false,-1);
    tracep->declBus(c+859,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+860,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+862,"axi_r_last_i", false,-1);
    tracep->declBus(c+863,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+864,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+916,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+917,"axi_id", false,-1, 3,0);
    tracep->declBus(c+918,"axi_user", false,-1, 0,0);
    tracep->declBus(c+919,"axi_len", false,-1, 7,0);
    tracep->declBus(c+920,"axi_size", false,-1, 2,0);
    tracep->declBit(c+547,"axi_aw_valid", false,-1);
    tracep->declBus(c+548,"wd_count", false,-1, 7,0);
    tracep->declBit(c+549,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+900,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+901,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+902,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+903,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declBit(c+47,"if_ar_valid", false,-1);
    tracep->declBit(c+48,"if_ar_ready", false,-1);
    tracep->declQuad(c+49,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+51,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+52,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+53,"if_last_i", false,-1);
    tracep->declBit(c+33,"mem_r_valid", false,-1);
    tracep->declBit(c+34,"mem_r_ready", false,-1);
    tracep->declQuad(c+35,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+37,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+38,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+39,"mem_r_last_i", false,-1);
    tracep->declBit(c+40,"mem_w_valid", false,-1);
    tracep->declBit(c+21,"mem_w_ready", false,-1);
    tracep->declQuad(c+41,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+43,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+44,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+45,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+46,"mem_w_last_i", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+834,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+821,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+846,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+826,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+851,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+850,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+825,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+24,"r_last_i", false,-1);
    tracep->declBit(c+25,"w_last_i", false,-1);
    tracep->declBus(c+550,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+897,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+551,"rd_state", false,-1, 1,0);
    tracep->declBus(c+898,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+552,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+921,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+922,"wr_state", false,-1, 1,0);
    tracep->declBus(c+923,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declBit(c+113,"en", false,-1);
    tracep->declQuad(c+100,"pc", false,-1, 63,0);
    tracep->declBus(c+114,"addr", false,-1, 2,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declQuad(c+88,"data_i", false,-1, 63,0);
    tracep->declQuad(c+110,"data_o", false,-1, 63,0);
    tracep->declBit(c+119,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+553+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+110,"data_r", false,-1, 63,0);
    tracep->declQuad(c+565,"data_w", false,-1, 63,0);
    tracep->declQuad(c+567,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+901,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+900,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+815,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+817,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+122,"func3", false,-1, 2,0);
    tracep->declBus(c+126,"addr", false,-1, 31,0);
    tracep->declQuad(c+127,"wdata", false,-1, 63,0);
    tracep->declBit(c+123,"wen", false,-1);
    tracep->declBit(c+118,"ex_ready_i", false,-1);
    tracep->declBit(c+124,"mem_valid_i", false,-1);
    tracep->declBit(c+140,"mem_ready_o", false,-1);
    tracep->declQuad(c+137,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+34,"r_ready_i", false,-1);
    tracep->declBit(c+33,"r_valid_o", false,-1);
    tracep->declBit(c+39,"r_last_i", false,-1);
    tracep->declBus(c+38,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+35,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+21,"w_ready_i", false,-1);
    tracep->declBit(c+46,"w_last_i", false,-1);
    tracep->declBit(c+40,"w_valid_o", false,-1);
    tracep->declBus(c+45,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+44,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+41,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+43,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+569,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+571,"dcache_ready_i", false,-1);
    tracep->declBit(c+572,"dcache_valid_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+802,"clk", false,-1);
    tracep->declBit(c+803,"rst", false,-1);
    tracep->declQuad(c+815,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+817,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+123,"cpu_rw_en", false,-1);
    tracep->declBus(c+126,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+572,"cpu_valid", false,-1);
    tracep->declQuad(c+127,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+122,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+569,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+571,"cpu_ready", false,-1);
    tracep->declBit(c+21,"axi_w_ready_i", false,-1);
    tracep->declBit(c+40,"axi_w_valid_o", false,-1);
    tracep->declBit(c+46,"axi_w_last_i", false,-1);
    tracep->declBus(c+44,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+41,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+43,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+45,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+34,"axi_r_ready_i", false,-1);
    tracep->declBit(c+33,"axi_r_valid_o", false,-1);
    tracep->declBit(c+39,"axi_r_last_i", false,-1);
    tracep->declBus(c+38,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+35,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+37,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+573,"cache_rd_ready", false,-1);
    tracep->declBit(c+574,"cache_wr_ready", false,-1);
    tracep->declBus(c+575,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+576,"cache_index", false,-1, 6,0);
    tracep->declBus(c+577,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+578,"write_data", false,-1, 127,0);
    tracep->declArray(c+924,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+582,"write_en", false,-1, 7,0);
    tracep->declBit(c+583,"rw_strb_en", false,-1);
    tracep->declArray(c+584,"rw_strb", false,-1, 127,0);
    tracep->declBit(c+588,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+589,"[0]", false,-1, 127,0);
    tracep->declArray(c+593,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+597,"[0]", false,-1, 127,0);
    tracep->declArray(c+601,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+605,"[0]", false,-1, 127,0);
    tracep->declArray(c+609,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+613,"[0]", false,-1, 127,0);
    tracep->declArray(c+617,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+621,"[0]", false,-1, 127,0);
    tracep->declArray(c+625,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+629,"[0]", false,-1, 127,0);
    tracep->declArray(c+633,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+637,"[0]", false,-1, 127,0);
    tracep->declArray(c+641,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+645,"[0]", false,-1, 127,0);
    tracep->declArray(c+649,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+653,"device", false,-1);
    tracep->declArray(c+654,"write_back_data", false,-1, 127,0);
    tracep->declBus(c+928,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+658,"tag_v", false,-1, 7,0);
    tracep->declBus(c+659,"tag_v_w", false,-1, 2,0);
    tracep->declBit(c+929,"bust_rd", false,-1);
    tracep->declBus(c+660,"rd_state", false,-1, 2,0);
    tracep->declBus(c+899,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+661,"wr_state", false,-1, 2,0);
    tracep->declQuad(c+662,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+664,"cache_write_data", false,-1, 127,0);
    tracep->declBus(c+668,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+669,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+673,"CEN", false,-1);
    tracep->declBit(c+674,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+680,"cen", false,-1);
    tracep->declBit(c+681,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+682,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+686,"CEN", false,-1);
    tracep->declBit(c+687,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+688,"cen", false,-1);
    tracep->declBit(c+689,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+690,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+694,"CEN", false,-1);
    tracep->declBit(c+695,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+696,"cen", false,-1);
    tracep->declBit(c+697,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+698,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+702,"CEN", false,-1);
    tracep->declBit(c+703,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+704,"cen", false,-1);
    tracep->declBit(c+705,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+706,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+710,"CEN", false,-1);
    tracep->declBit(c+711,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+712,"cen", false,-1);
    tracep->declBit(c+713,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+714,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+718,"CEN", false,-1);
    tracep->declBit(c+719,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+720,"cen", false,-1);
    tracep->declBit(c+721,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+722,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+726,"CEN", false,-1);
    tracep->declBit(c+727,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+728,"cen", false,-1);
    tracep->declBit(c+729,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+730,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+734,"CEN", false,-1);
    tracep->declBit(c+735,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+736,"cen", false,-1);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+738,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+742,"CEN", false,-1);
    tracep->declBit(c+743,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+744,"cen", false,-1);
    tracep->declBit(c+745,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+746,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+750,"CEN", false,-1);
    tracep->declBit(c+751,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+752,"cen", false,-1);
    tracep->declBit(c+753,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+754,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+758,"CEN", false,-1);
    tracep->declBit(c+759,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+760,"cen", false,-1);
    tracep->declBit(c+761,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+762,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+766,"CEN", false,-1);
    tracep->declBit(c+767,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+768,"cen", false,-1);
    tracep->declBit(c+769,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+770,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+774,"CEN", false,-1);
    tracep->declBit(c+775,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+776,"cen", false,-1);
    tracep->declBit(c+777,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+778,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+782,"CEN", false,-1);
    tracep->declBit(c+783,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+784,"cen", false,-1);
    tracep->declBit(c+785,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+786,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+790,"CEN", false,-1);
    tracep->declBit(c+791,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+792,"cen", false,-1);
    tracep->declBit(c+793,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+914,"Bits", false,-1, 31,0);
    tracep->declBus(c+900,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+915,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+914,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+794,"Q", false,-1, 127,0);
    tracep->declBit(c+802,"CLK", false,-1);
    tracep->declBit(c+798,"CEN", false,-1);
    tracep->declBit(c+799,"WEN", false,-1);
    tracep->declArray(c+675,"BWEN", false,-1, 127,0);
    tracep->declBus(c+679,"A", false,-1, 5,0);
    tracep->declArray(c+578,"D", false,-1, 127,0);
    tracep->declBit(c+800,"cen", false,-1);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declArray(c+584,"bwen", false,-1, 127,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hd1ec6fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_h8fbfdeca__0;
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
    bufp->fullBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__w_valid));
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
    bufp->fullBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
    bufp->fullQData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_22041412_top__DOT__mem_w_last));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+53,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+60,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+67,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+68,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+71,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+72,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+73,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+79,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+82,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+100,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+102,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+104,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+106,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+108,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+139,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+157,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+160,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+162,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+163,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+164,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+201,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+204,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+243,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+280,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+286,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+288,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+289,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+290,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+291,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+292,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+293,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+294,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+295,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+296,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+297,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
    bufp->fullCData(oldp+303,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+304,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+305,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+306,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+308,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+309,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+310,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+311,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+315,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+319,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+323,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+327,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+331,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+335,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+339,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+343,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+347,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+351,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+355,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+359,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+363,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+367,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+371,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullCData(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullCData(oldp+381,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
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
    bufp->fullBit(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+389,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+391,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+416,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+422,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+428,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+434,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+440,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+446,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+470,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+475,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+476,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+480,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+481,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+482,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+484,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+488,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+490,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+492,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+494,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+498,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+500,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+502,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+506,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+508,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+510,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+514,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+516,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+520,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+522,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+524,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+526,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+528,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+530,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+532,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+534,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+536,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+540,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+542,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+544,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+547,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+549,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+551,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullCData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch),3);
    bufp->fullQData(oldp+553,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+555,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+557,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+559,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+561,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+563,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+565,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+567,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+569,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+571,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+572,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+573,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+574,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+575,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+576,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+577,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+578,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+582,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),8);
    bufp->fullBit(oldp+583,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+584,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullBit(oldp+588,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_hcd4d3a7a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_hcd4d3a7a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_hcd4d3a7a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_hcd4d3a7a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+589,(__Vtemp_hcd4d3a7a__0),128);
    __Vtemp_hcd4d5e3f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_hcd4d5e3f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_hcd4d5e3f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_hcd4d5e3f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+593,(__Vtemp_hcd4d5e3f__0),128);
    __Vtemp_hcd526284__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_hcd526284__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_hcd526284__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_hcd526284__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+597,(__Vtemp_hcd526284__0),128);
    __Vtemp_hcd524dc3__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_hcd524dc3__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_hcd524dc3__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_hcd524dc3__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+601,(__Vtemp_hcd524dc3__0),128);
    __Vtemp_hcd52414f__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_hcd52414f__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_hcd52414f__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_hcd52414f__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+605,(__Vtemp_hcd52414f__0),128);
    __Vtemp_hcd521a10__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_hcd521a10__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_hcd521a10__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_hcd521a10__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+609,(__Vtemp_hcd521a10__0),128);
    __Vtemp_hcd52509e__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_hcd52509e__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_hcd52509e__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_hcd52509e__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+613,(__Vtemp_hcd52509e__0),128);
    __Vtemp_hcd522cdd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_hcd522cdd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_hcd522cdd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_hcd522cdd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+617,(__Vtemp_hcd522cdd__0),128);
    __Vtemp_hcd521e29__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_hcd521e29__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_hcd521e29__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_hcd521e29__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+621,(__Vtemp_hcd521e29__0),128);
    __Vtemp_hcd51f9ec__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_hcd51f9ec__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_hcd51f9ec__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_hcd51f9ec__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+625,(__Vtemp_hcd51f9ec__0),128);
    __Vtemp_hcd552a7d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_hcd552a7d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_hcd552a7d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_hcd552a7d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+629,(__Vtemp_hcd552a7d__0),128);
    __Vtemp_hcd550dbe__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_hcd550dbe__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_hcd550dbe__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_hcd550dbe__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+633,(__Vtemp_hcd550dbe__0),128);
    __Vtemp_hcd54f9cb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_hcd54f9cb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_hcd54f9cb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_hcd54f9cb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+637,(__Vtemp_hcd54f9cb__0),128);
    __Vtemp_hcd54de8a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_hcd54de8a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_hcd54de8a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_hcd54de8a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+641,(__Vtemp_hcd54de8a__0),128);
    __Vtemp_hcd550a9a__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_hcd550a9a__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_hcd550a9a__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_hcd550a9a__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+645,(__Vtemp_hcd550a9a__0),128);
    __Vtemp_hcd54ecdb__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_hcd54ecdb__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_hcd54ecdb__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_hcd54ecdb__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+649,(__Vtemp_hcd54ecdb__0),128);
    bufp->fullBit(oldp+653,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullWData(oldp+654,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),128);
    bufp->fullCData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),3);
    bufp->fullCData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullQData(oldp+662,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_read_data),64);
    if ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)) {
        __Vtemp_hd1ec6fdf__0[0U] = 0U;
        __Vtemp_hd1ec6fdf__0[1U] = 0U;
        __Vtemp_hd1ec6fdf__0[2U] = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_wdata);
        __Vtemp_hd1ec6fdf__0[3U] = (IData)((vlSelf->ysyx_22041412_top__DOT__mem_wdata 
                                            >> 0x20U));
    } else {
        __Vtemp_hd1ec6fdf__0[0U] = (IData)(vlSelf->ysyx_22041412_top__DOT__mem_wdata);
        __Vtemp_hd1ec6fdf__0[1U] = (IData)((vlSelf->ysyx_22041412_top__DOT__mem_wdata 
                                            >> 0x20U));
        __Vtemp_hd1ec6fdf__0[2U] = 0U;
        __Vtemp_hd1ec6fdf__0[3U] = 0U;
    }
    bufp->fullWData(oldp+664,(__Vtemp_hd1ec6fdf__0),128);
    bufp->fullCData(oldp+668,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point),3);
    bufp->fullWData(oldp+669,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+674,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
    if (vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en) {
        __Vtemp_h8fbfdeca__0[0U] = 0U;
        __Vtemp_h8fbfdeca__0[1U] = 0U;
        __Vtemp_h8fbfdeca__0[2U] = 0U;
        __Vtemp_h8fbfdeca__0[3U] = 0U;
    } else {
        __Vtemp_h8fbfdeca__0[0U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                        ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 0U)))
                                        : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0xffU
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0xffffU
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffffffffU
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0xffffffffU
                                                     : 0U))))));
        __Vtemp_h8fbfdeca__0[1U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                        ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 0U)))
                                        : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 
                                             ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                               ? 0xffffffffU
                                               : 0U))))));
        __Vtemp_h8fbfdeca__0[2U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                        ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 
                                             ((3U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                               ? 0xffffffffU
                                               : 0U))))
                                        : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 0U)))));
        __Vtemp_h8fbfdeca__0[3U] = (~ ((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
                                        ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0xff000000U
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                ? 0xffff0000U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                    ? 0xffffffffU
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                     ? 0xffffffffU
                                                     : 0U))))
                                        : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0U : 0U)))));
    }
    bufp->fullWData(oldp+675,(__Vtemp_h8fbfdeca__0),128);
    bufp->fullCData(oldp+679,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+680,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+681,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+682,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+686,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+687,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+688,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+689,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+690,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+695,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+696,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+697,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+698,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+702,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+703,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+704,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+705,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+706,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+710,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+711,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+712,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+713,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+714,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+718,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+719,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+720,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+721,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+722,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+726,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+727,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+728,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+729,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+730,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+734,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+735,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+736,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+737,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+738,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+742,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+743,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+744,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+745,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+746,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+750,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+751,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+752,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+753,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__4__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+754,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+758,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+759,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+760,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+761,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+762,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+766,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+767,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+768,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+769,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__5__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+770,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+774,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+775,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+776,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+777,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+778,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+782,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+783,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+784,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+785,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__6__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+786,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+790,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+791,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+792,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+793,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+794,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+798,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+799,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+800,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+801,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__7__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+802,(vlSelf->clk));
    bufp->fullBit(oldp+803,(vlSelf->rst));
    bufp->fullQData(oldp+804,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+806,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+808,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+810,(vlSelf->Ebreak));
    bufp->fullQData(oldp+811,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+813,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+815,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+817,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+819,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+820,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+821,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+822,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+823,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+824,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+825,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+826,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+827,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+828,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+829,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+830,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+831,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+832,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+833,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+834,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+836,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+837,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+838,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+839,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+840,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+841,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+842,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+843,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+844,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+845,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+846,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+847,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+848,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+849,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+850,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+851,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+852,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+853,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+854,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+855,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+856,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+857,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+858,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+859,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+860,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+862,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+863,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+864,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+865,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+866,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+867,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+868,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+869,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+870,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+871,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+872,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+873,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+874,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+876,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+877,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+878,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+879,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+880,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+881,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+882,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+883,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+884,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+885,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+886,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+887,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+888,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+889,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+890,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+891,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+892,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+894,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+895,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+896,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+897,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullCData(oldp+899,(((IData)(vlSelf->rst)
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                         ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                              ? 0U : 
                                             ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last)
                                               ? 0U
                                               : 4U)))
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
    bufp->fullIData(oldp+900,(0x40U),32);
    bufp->fullIData(oldp+901,(0x20U),32);
    bufp->fullIData(oldp+902,(4U),32);
    bufp->fullIData(oldp+903,(8U),32);
    bufp->fullIData(oldp+904,(1U),32);
    bufp->fullBit(oldp+905,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+906,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+908,(0x11U),32);
    bufp->fullIData(oldp+909,(5U),32);
    bufp->fullQData(oldp+910,(0ULL),64);
    bufp->fullIData(oldp+912,(0x45U),32);
    bufp->fullIData(oldp+913,(0x11U),32);
    bufp->fullIData(oldp+914,(0x80U),32);
    bufp->fullIData(oldp+915,(6U),32);
    bufp->fullIData(oldp+916,(3U),32);
    bufp->fullCData(oldp+917,(0U),4);
    bufp->fullBit(oldp+918,(0U));
    bufp->fullCData(oldp+919,(0U),8);
    bufp->fullCData(oldp+920,(3U),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+923,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullWData(oldp+924,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+928,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+929,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
}
