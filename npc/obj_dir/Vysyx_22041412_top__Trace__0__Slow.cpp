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
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+639,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+641,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+643,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+645,"Ebreak", false,-1);
    tracep->declQuad(c+646,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+648,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+650,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+652,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+654,"io_master_awready", false,-1);
    tracep->declBit(c+655,"io_master_awvalid", false,-1);
    tracep->declBus(c+656,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+657,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+658,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+659,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+660,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+661,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+662,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+663,"io_master_awlock", false,-1);
    tracep->declBus(c+664,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+665,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+666,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+667,"io_master_wready", false,-1);
    tracep->declBit(c+668,"io_master_wvalid", false,-1);
    tracep->declQuad(c+669,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+671,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+672,"io_master_wlast", false,-1);
    tracep->declBus(c+673,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+674,"io_master_bready", false,-1);
    tracep->declBit(c+675,"io_master_bvalid", false,-1);
    tracep->declBus(c+676,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+677,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+678,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+679,"io_master_arready", false,-1);
    tracep->declBit(c+680,"io_master_arvalid", false,-1);
    tracep->declBus(c+681,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+682,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+683,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+684,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+685,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+686,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+687,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+688,"io_master_arlock", false,-1);
    tracep->declBus(c+689,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+690,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+691,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+692,"io_master_rready", false,-1);
    tracep->declBit(c+693,"io_master_rvalid", false,-1);
    tracep->declBus(c+694,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+695,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+697,"io_master_rlast", false,-1);
    tracep->declBus(c+698,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+699,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+700,"io_slave_awready", false,-1);
    tracep->declBit(c+701,"io_slave_awvalid", false,-1);
    tracep->declBus(c+702,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+703,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+704,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+705,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+706,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+707,"io_slave_wready", false,-1);
    tracep->declBit(c+708,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+709,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+711,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+712,"io_slave_wlast", false,-1);
    tracep->declBit(c+713,"io_slave_bready", false,-1);
    tracep->declBit(c+714,"io_slave_bvalid", false,-1);
    tracep->declBus(c+715,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+716,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+717,"io_slave_arready", false,-1);
    tracep->declBit(c+718,"io_slave_arvalid", false,-1);
    tracep->declBus(c+719,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+720,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+721,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+722,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+723,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+724,"io_slave_rready", false,-1);
    tracep->declBit(c+725,"io_slave_rvalid", false,-1);
    tracep->declBus(c+726,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+727,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+729,"io_slave_rlast", false,-1);
    tracep->declBus(c+730,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+639,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+641,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+643,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+645,"Ebreak", false,-1);
    tracep->declQuad(c+646,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+648,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+650,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+652,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+654,"io_master_awready", false,-1);
    tracep->declBit(c+655,"io_master_awvalid", false,-1);
    tracep->declBus(c+656,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+657,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+658,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+659,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+660,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+661,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+662,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+663,"io_master_awlock", false,-1);
    tracep->declBus(c+664,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+665,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+666,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+667,"io_master_wready", false,-1);
    tracep->declBit(c+668,"io_master_wvalid", false,-1);
    tracep->declQuad(c+669,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+671,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+672,"io_master_wlast", false,-1);
    tracep->declBus(c+673,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+674,"io_master_bready", false,-1);
    tracep->declBit(c+675,"io_master_bvalid", false,-1);
    tracep->declBus(c+676,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+677,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+678,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+679,"io_master_arready", false,-1);
    tracep->declBit(c+680,"io_master_arvalid", false,-1);
    tracep->declBus(c+681,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+682,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+683,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+684,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+685,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+686,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+687,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+688,"io_master_arlock", false,-1);
    tracep->declBus(c+689,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+690,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+691,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+692,"io_master_rready", false,-1);
    tracep->declBit(c+693,"io_master_rvalid", false,-1);
    tracep->declBus(c+694,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+695,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+697,"io_master_rlast", false,-1);
    tracep->declBus(c+698,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+699,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+700,"io_slave_awready", false,-1);
    tracep->declBit(c+701,"io_slave_awvalid", false,-1);
    tracep->declBus(c+702,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+703,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+704,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+705,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+706,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+707,"io_slave_wready", false,-1);
    tracep->declBit(c+708,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+709,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+711,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+712,"io_slave_wlast", false,-1);
    tracep->declBit(c+713,"io_slave_bready", false,-1);
    tracep->declBit(c+714,"io_slave_bvalid", false,-1);
    tracep->declBus(c+715,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+716,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+717,"io_slave_arready", false,-1);
    tracep->declBit(c+718,"io_slave_arvalid", false,-1);
    tracep->declBus(c+719,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+720,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+721,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+722,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+723,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+724,"io_slave_rready", false,-1);
    tracep->declBit(c+725,"io_slave_rvalid", false,-1);
    tracep->declBus(c+726,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+727,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+729,"io_slave_rlast", false,-1);
    tracep->declBus(c+730,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+735,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+736,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+737,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+738,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+739,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+735,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"r_valid", false,-1);
    tracep->declBit(c+693,"r_ready", false,-1);
    tracep->declBit(c+33,"w_valid", false,-1);
    tracep->declBit(c+667,"w_ready", false,-1);
    tracep->declQuad(c+695,"axi_r_data", false,-1, 63,0);
    tracep->declBus(c+681,"axi_r_addr", false,-1, 31,0);
    tracep->declQuad(c+669,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+656,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+686,"r_size", false,-1, 2,0);
    tracep->declBus(c+661,"w_size", false,-1, 2,0);
    tracep->declBus(c+685,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+660,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+697,"r_last_o", false,-1);
    tracep->declBit(c+672,"w_last_o", false,-1);
    tracep->declBit(c+34,"if_ar_valid", false,-1);
    tracep->declBit(c+35,"if_ar_ready", false,-1);
    tracep->declArray(c+36,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+40,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+41,"if_read_vaild", false,-1);
    tracep->declBit(c+42,"if_read_clean", false,-1);
    tracep->declBit(c+43,"mem_r_valid", false,-1);
    tracep->declBit(c+731,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+44,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+45,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last", false,-1);
    tracep->declBit(c+33,"mem_w_valid", false,-1);
    tracep->declBit(c+667,"mem_w_ready", false,-1);
    tracep->declQuad(c+46,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+48,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+49,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+50,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+672,"mem_w_last", false,-1);
    tracep->declBit(c+51,"icache_ar_valid", false,-1);
    tracep->declBit(c+21,"icache_ar_ready", false,-1);
    tracep->declQuad(c+22,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+52,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+53,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"icache_last_i", false,-1);
    tracep->declBit(c+54,"Icache_clear", false,-1);
    tracep->declBus(c+55,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+56,"if_pc", false,-1, 63,0);
    tracep->declBit(c+58,"if_ready_o", false,-1);
    tracep->declBit(c+59,"if_jr_ready", false,-1);
    tracep->declBit(c+60,"if_jr_hit", false,-1);
    tracep->declBus(c+61,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+62,"id_pc", false,-1, 63,0);
    tracep->declBus(c+64,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+65,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+66,"id_mul_en", false,-1);
    tracep->declQuad(c+67,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+69,"id_func3", false,-1, 2,0);
    tracep->declBit(c+70,"id_func7", false,-1);
    tracep->declBus(c+71,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+72,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+73,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+74,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+75,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+77,"id_rsB", false,-1, 63,0);
    tracep->declBus(c+79,"id_jump_mode", false,-1, 1,0);
    tracep->declBus(c+80,"id_mem_mode", false,-1, 1,0);
    tracep->declQuad(c+81,"jal_pc", false,-1, 63,0);
    tracep->declBit(c+83,"jal_ok", false,-1);
    tracep->declBit(c+84,"id_vaild_o", false,-1);
    tracep->declBit(c+85,"id_ready_o", false,-1);
    tracep->declBit(c+86,"csr_jar_en", false,-1);
    tracep->declBus(c+87,"csr", false,-1, 11,0);
    tracep->declBus(c+88,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+89,"id_csr_en", false,-1);
    tracep->declBus(c+90,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+91,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+92,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+94,"ex_mul_en", false,-1);
    tracep->declQuad(c+95,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+97,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+99,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+101,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+102,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+103,"ex_func7", false,-1);
    tracep->declBus(c+104,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+105,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+107,"ex_jump_mode", false,-1, 1,0);
    tracep->declBus(c+108,"ex_mem_mode", false,-1, 1,0);
    tracep->declQuad(c+109,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+111,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+113,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+115,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+117,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+95,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+119,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+120,"ex_csr_en", false,-1);
    tracep->declBus(c+121,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+122,"ex_wait", false,-1);
    tracep->declBit(c+123,"ex_load_wait", false,-1);
    tracep->declBit(c+740,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+124,"alu_ready_o", false,-1);
    tracep->declBit(c+84,"ex_valid_o", false,-1);
    tracep->declBit(c+125,"ex_ready_o", false,-1);
    tracep->declBit(c+126,"csr_ready_o", false,-1);
    tracep->declBus(c+127,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+128,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+129,"mem_rw_type", false,-1);
    tracep->declBit(c+130,"mem_ram_en", false,-1);
    tracep->declBit(c+131,"mem_reg_en", false,-1);
    tracep->declBus(c+132,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+133,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+135,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+137,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+139,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+741,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+141,"mem_res", false,-1, 63,0);
    tracep->declBus(c+143,"mem_jump_mode", false,-1, 1,0);
    tracep->declBus(c+144,"mem_mem_mode", false,-1, 1,0);
    tracep->declQuad(c+145,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+147,"mem_valid_o", false,-1);
    tracep->declBit(c+148,"sram_ready_o", false,-1);
    tracep->declBit(c+149,"wb_reg_en", false,-1);
    tracep->declBus(c+150,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+151,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+153,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+155,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+157,"wb_dnpc", false,-1, 63,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declQuad(c+95,"scr1", false,-1, 63,0);
    tracep->declQuad(c+97,"scr2", false,-1, 63,0);
    tracep->declQuad(c+92,"imm", false,-1, 63,0);
    tracep->declBus(c+104,"opcode", false,-1, 6,0);
    tracep->declBus(c+102,"func3", false,-1, 2,0);
    tracep->declBit(c+103,"func7", false,-1);
    tracep->declBit(c+94,"mul_en", false,-1);
    tracep->declBit(c+85,"ready_i", false,-1);
    tracep->declBit(c+84,"valid_i", false,-1);
    tracep->declBit(c+124,"ready_o", false,-1);
    tracep->declQuad(c+115,"result", false,-1, 63,0);
    tracep->declBus(c+159,"Mode", false,-1, 4,0);
    tracep->declQuad(c+95,"AU", false,-1, 63,0);
    tracep->declQuad(c+97,"BU", false,-1, 63,0);
    tracep->declQuad(c+160,"AY", false,-1, 63,0);
    tracep->declQuad(c+162,"BY", false,-1, 63,0);
    tracep->declBit(c+164,"mul_ready_o", false,-1);
    tracep->declQuad(c+165,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+167,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+115,"Alusu", false,-1, 63,0);
    tracep->declBit(c+169,"rv64i_en", false,-1);
    tracep->declBit(c+170,"rv64r_en", false,-1);
    tracep->declQuad(c+95,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+97,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+743,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+744,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+735,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+165,"out", false,-1, 63,0);
    tracep->declBus(c+159,"key", false,-1, 4,0);
    tracep->declQuad(c+745,"default_out", false,-1, 63,0);
    tracep->declArray(c+171,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+743,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+744,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+735,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+739,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+165,"out", false,-1, 63,0);
    tracep->declBus(c+159,"key", false,-1, 4,0);
    tracep->declQuad(c+745,"default_out", false,-1, 63,0);
    tracep->declArray(c+171,"lut", false,-1, 1172,0);
    tracep->declBus(c+747,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+208+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+259+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+293,"lut_out", false,-1, 63,0);
    tracep->declBit(c+295,"hit", false,-1);
    tracep->declBus(c+748,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+94,"en", false,-1);
    tracep->declQuad(c+95,"rsA", false,-1, 63,0);
    tracep->declQuad(c+97,"rsB", false,-1, 63,0);
    tracep->declBus(c+102,"func3", false,-1, 2,0);
    tracep->declBit(c+170,"rv64_en", false,-1);
    tracep->declBit(c+85,"ready_i", false,-1);
    tracep->declBit(c+84,"valid_i", false,-1);
    tracep->declBit(c+164,"ready_o", false,-1);
    tracep->declQuad(c+167,"result", false,-1, 63,0);
    tracep->declBus(c+296,"rsAW", false,-1, 31,0);
    tracep->declBus(c+297,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+167,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBus(c+61,"instr", false,-1, 31,0);
    tracep->declBus(c+298,"pc", false,-1, 31,0);
    tracep->declBus(c+74,"opcode", false,-1, 6,0);
    tracep->declBus(c+69,"func3", false,-1, 2,0);
    tracep->declBit(c+70,"func7", false,-1);
    tracep->declBus(c+71,"Rs1", false,-1, 4,0);
    tracep->declBus(c+72,"Rs2", false,-1, 4,0);
    tracep->declBus(c+73,"Rd", false,-1, 4,0);
    tracep->declQuad(c+67,"imme", false,-1, 63,0);
    tracep->declBus(c+64,"V1Type", false,-1, 1,0);
    tracep->declBus(c+65,"V2Type", false,-1, 1,0);
    tracep->declBit(c+66,"Mul_en", false,-1);
    tracep->declQuad(c+81,"jal_pc", false,-1, 63,0);
    tracep->declBit(c+83,"jal_ok", false,-1);
    tracep->declBus(c+80,"mem_mode", false,-1, 1,0);
    tracep->declBus(c+79,"jump_mode", false,-1, 1,0);
    tracep->declBit(c+299,"I_type", false,-1);
    tracep->declBit(c+300,"U_type", false,-1);
    tracep->declBit(c+301,"J_type", false,-1);
    tracep->declBit(c+302,"B_type", false,-1);
    tracep->declBit(c+303,"S_type", false,-1);
    tracep->declBit(c+304,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+56,"pc", false,-1, 63,0);
    tracep->declBus(c+55,"imm_data", false,-1, 31,0);
    tracep->declBit(c+59,"jarl_rady", false,-1);
    tracep->declBit(c+84,"valid_i", false,-1);
    tracep->declBit(c+58,"ready_o", false,-1);
    tracep->declBus(c+305,"jal_pc", false,-1, 31,0);
    tracep->declBit(c+83,"jal_ok", false,-1);
    tracep->declQuad(c+137,"mem_dnpc", false,-1, 63,0);
    tracep->declBit(c+35,"ready_i", false,-1);
    tracep->declBit(c+34,"valid_o", false,-1);
    tracep->declArray(c+36,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+40,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+41,"if_read_vaild", false,-1);
    tracep->declBit(c+42,"if_read_clean", false,-1);
    tracep->declBit(c+54,"cache_clear", false,-1);
    tracep->declBus(c+306,"state", false,-1, 2,0);
    tracep->declBus(c+307,"cache_state", false,-1, 1,0);
    tracep->declArray(c+308,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+312,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+313,"imm_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+749,"offset", false,-1, 3,0);
    tracep->declBus(c+314,"pc_offset", false,-1, 3,0);
    tracep->declBit(c+315,"jump", false,-1);
    tracep->declBit(c+316,"jal", false,-1);
    tracep->declBit(c+750,"jump_mode", false,-1);
    tracep->declBit(c+317,"one_line", false,-1);
    tracep->declBus(c+318,"dnpc", false,-1, 31,0);
    tracep->declBit(c+319,"dnpc_v", false,-1);
    tracep->declBus(c+320,"get_pc", false,-1, 27,0);
    tracep->declBit(c+321,"imm_ready", false,-1);
    tracep->declBit(c+322,"wait_ok", false,-1);
    tracep->declBus(c+323,"jump_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+646,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+648,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+40,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+34,"cpu_valid", false,-1);
    tracep->declArray(c+36,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+35,"cpu_ready", false,-1);
    tracep->declBit(c+41,"cpu_read_vaild", false,-1);
    tracep->declBit(c+42,"cpu_read_clean", false,-1);
    tracep->declBit(c+54,"cache_clear", false,-1);
    tracep->declBit(c+21,"axi_ready_i", false,-1);
    tracep->declBit(c+51,"axi_valid_o", false,-1);
    tracep->declBit(c+24,"axi_r_last_i", false,-1);
    tracep->declBus(c+53,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+22,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+52,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+324,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+325,"cache_index", false,-1, 6,0);
    tracep->declBus(c+326,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+327,"[0]", false,-1, 127,0);
    tracep->declArray(c+331,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+335,"[0]", false,-1, 127,0);
    tracep->declArray(c+339,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+343,"[0]", false,-1, 127,0);
    tracep->declArray(c+347,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+351,"[0]", false,-1, 127,0);
    tracep->declArray(c+355,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+359,"write_data", false,-1, 127,0);
    tracep->declBus(c+363,"write_en", false,-1, 3,0);
    tracep->declBus(c+25,"tag_v", false,-1, 3,0);
    tracep->declBus(c+26,"tag_v_w", false,-1, 1,0);
    tracep->declBit(c+364,"bust_num", false,-1);
    tracep->declBus(c+365,"state", false,-1, 2,0);
    tracep->declBus(c+732,"next_state", false,-1, 2,0);
    tracep->declBus(c+366,"cache_write_point", false,-1, 1,0);
    tracep->declBus(c+751,"cache_write_point_l1", false,-1, 1,0);
    tracep->declBus(c+367,"cache_rodom_cnt", false,-1, 1,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+368,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+372,"CEN", false,-1);
    tracep->declBit(c+373,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+375,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+379,"CEN", false,-1);
    tracep->declBit(c+380,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+381,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+385,"CEN", false,-1);
    tracep->declBit(c+386,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+387,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+391,"CEN", false,-1);
    tracep->declBit(c+392,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+393,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+397,"CEN", false,-1);
    tracep->declBit(c+398,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+399,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+403,"CEN", false,-1);
    tracep->declBit(c+404,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+405,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+409,"CEN", false,-1);
    tracep->declBit(c+410,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+411,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+415,"CEN", false,-1);
    tracep->declBit(c+416,"WEN", false,-1);
    tracep->declBus(c+374,"A", false,-1, 5,0);
    tracep->declArray(c+359,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBus(c+71,"Ra", false,-1, 4,0);
    tracep->declBus(c+72,"Rb", false,-1, 4,0);
    tracep->declBus(c+150,"Rw", false,-1, 4,0);
    tracep->declBit(c+149,"Wen", false,-1);
    tracep->declQuad(c+75,"BusA", false,-1, 63,0);
    tracep->declQuad(c+77,"BusB", false,-1, 63,0);
    tracep->declQuad(c+153,"BusW", false,-1, 63,0);
    tracep->declBit(c+638,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+417+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+481,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+735,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+736,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+737,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+738,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+739,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declBit(c+32,"r_valid_i", false,-1);
    tracep->declBit(c+33,"w_valid_i", false,-1);
    tracep->declBit(c+693,"r_ready_o", false,-1);
    tracep->declBit(c+667,"w_ready_o", false,-1);
    tracep->declQuad(c+695,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+669,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+656,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+681,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+661,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+686,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+685,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+660,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+697,"r_last_o", false,-1);
    tracep->declBit(c+672,"w_last_o", false,-1);
    tracep->declBit(c+654,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+655,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+656,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+657,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+658,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+659,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+660,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+661,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+662,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+663,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+664,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+665,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+666,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+667,"axi_w_ready_i", false,-1);
    tracep->declBit(c+668,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+669,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+671,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+672,"axi_w_last_o", false,-1);
    tracep->declBus(c+673,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+674,"axi_b_ready_o", false,-1);
    tracep->declBit(c+675,"axi_b_valid_i", false,-1);
    tracep->declBus(c+676,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+677,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+678,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+679,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+680,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+681,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+682,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+683,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+684,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+685,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+686,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+687,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+688,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+689,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+690,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+691,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+692,"axi_r_ready_o", false,-1);
    tracep->declBit(c+693,"axi_r_valid_i", false,-1);
    tracep->declBus(c+694,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+695,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+697,"axi_r_last_i", false,-1);
    tracep->declBus(c+698,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+699,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+754,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+755,"axi_id", false,-1, 3,0);
    tracep->declBus(c+756,"axi_user", false,-1, 0,0);
    tracep->declBus(c+757,"axi_len", false,-1, 7,0);
    tracep->declBus(c+758,"axi_size", false,-1, 2,0);
    tracep->declBit(c+482,"axi_aw_valid", false,-1);
    tracep->declBus(c+483,"wd_count", false,-1, 7,0);
    tracep->declBit(c+484,"w_last_ok", false,-1);
    tracep->declBit(c+485,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+735,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+736,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+737,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+738,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+739,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declBit(c+51,"if_ar_valid", false,-1);
    tracep->declBit(c+21,"if_ar_ready", false,-1);
    tracep->declQuad(c+22,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+52,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+53,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"if_last_i", false,-1);
    tracep->declBit(c+43,"mem_r_valid", false,-1);
    tracep->declBit(c+731,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+44,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+45,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last_i", false,-1);
    tracep->declBit(c+33,"mem_w_valid", false,-1);
    tracep->declBit(c+667,"mem_w_ready", false,-1);
    tracep->declQuad(c+46,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+48,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+49,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+50,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+672,"mem_w_last_i", false,-1);
    tracep->declBit(c+32,"r_valid_i", false,-1);
    tracep->declBit(c+33,"w_valid_i", false,-1);
    tracep->declBit(c+693,"r_ready_o", false,-1);
    tracep->declBit(c+667,"w_ready_o", false,-1);
    tracep->declQuad(c+695,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+669,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+656,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+681,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+661,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+686,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+685,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+660,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+697,"r_last_i", false,-1);
    tracep->declBit(c+672,"w_last_i", false,-1);
    tracep->declBus(c+486,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+27,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+487,"rd_state", false,-1, 1,0);
    tracep->declBus(c+733,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+759,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+760,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+761,"wr_state", false,-1, 1,0);
    tracep->declBus(c+762,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declBit(c+120,"en", false,-1);
    tracep->declQuad(c+105,"pc", false,-1, 63,0);
    tracep->declBus(c+121,"addr", false,-1, 2,0);
    tracep->declBus(c+102,"func3", false,-1, 2,0);
    tracep->declQuad(c+95,"data_i", false,-1, 63,0);
    tracep->declQuad(c+117,"data_o", false,-1, 63,0);
    tracep->declBit(c+147,"valid_i", false,-1);
    tracep->declBit(c+126,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+488+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+117,"data_r", false,-1, 63,0);
    tracep->declQuad(c+500,"data_w", false,-1, 63,0);
    tracep->declQuad(c+502,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+736,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+735,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+650,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+652,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+128,"func3", false,-1, 2,0);
    tracep->declBus(c+132,"addr", false,-1, 31,0);
    tracep->declQuad(c+133,"wdata", false,-1, 63,0);
    tracep->declBit(c+129,"wen", false,-1);
    tracep->declBit(c+125,"ex_ready_i", false,-1);
    tracep->declBit(c+130,"mem_valid_i", false,-1);
    tracep->declBit(c+148,"mem_ready_o", false,-1);
    tracep->declQuad(c+145,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+731,"r_ready_i", false,-1);
    tracep->declBit(c+43,"r_valid_o", false,-1);
    tracep->declBit(c+20,"r_last_i", false,-1);
    tracep->declBus(c+45,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+44,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+667,"w_ready_i", false,-1);
    tracep->declBit(c+672,"w_last_i", false,-1);
    tracep->declBit(c+33,"w_valid_o", false,-1);
    tracep->declBus(c+50,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+49,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+46,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+48,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+504,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+148,"dcache_ready_i", false,-1);
    tracep->declBit(c+506,"dcache_valid_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+637,"clk", false,-1);
    tracep->declBit(c+638,"rst", false,-1);
    tracep->declQuad(c+650,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+652,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+129,"cpu_rw_en", false,-1);
    tracep->declBus(c+132,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+506,"cpu_valid", false,-1);
    tracep->declQuad(c+133,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+128,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+504,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+148,"cpu_ready", false,-1);
    tracep->declBit(c+667,"axi_w_ready_i", false,-1);
    tracep->declBit(c+33,"axi_w_valid_o", false,-1);
    tracep->declBit(c+672,"axi_w_last_i", false,-1);
    tracep->declBus(c+49,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+46,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+48,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+731,"axi_r_ready_i", false,-1);
    tracep->declBit(c+43,"axi_r_valid_o", false,-1);
    tracep->declBit(c+20,"axi_r_last_i", false,-1);
    tracep->declBus(c+45,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+44,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+507,"cache_rd_ready", false,-1);
    tracep->declBit(c+508,"cache_wr_ready", false,-1);
    tracep->declBus(c+509,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+510,"cache_index", false,-1, 6,0);
    tracep->declBus(c+511,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+512,"write_data", false,-1, 127,0);
    tracep->declArray(c+763,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+516,"write_en", false,-1, 3,0);
    tracep->declBit(c+517,"rw_strb_en", false,-1);
    tracep->declArray(c+518,"rw_strb", false,-1, 127,0);
    tracep->declQuad(c+522,"rw_strb_64", false,-1, 63,0);
    tracep->declBit(c+524,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+525,"[0]", false,-1, 127,0);
    tracep->declArray(c+529,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+533,"[0]", false,-1, 127,0);
    tracep->declArray(c+537,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+541,"[0]", false,-1, 127,0);
    tracep->declArray(c+545,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+549,"[0]", false,-1, 127,0);
    tracep->declArray(c+553,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+28,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+557,"cache_write_data", false,-1, 127,0);
    tracep->declBit(c+561,"device", false,-1);
    tracep->declQuad(c+562,"write_back_data", false,-1, 63,0);
    tracep->declBus(c+767,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+30,"tag_v", false,-1, 3,0);
    tracep->declBus(c+31,"tag_v_w", false,-1, 1,0);
    tracep->declBit(c+768,"bust_rd", false,-1);
    tracep->declBus(c+564,"rd_state", false,-1, 2,0);
    tracep->declBus(c+734,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+565,"wr_state", false,-1, 2,0);
    tracep->declBus(c+566,"cache_write_point", false,-1, 1,0);
    tracep->declBus(c+769,"cache_write_point_l1", false,-1, 1,0);
    tracep->declBus(c+567,"cache_rodom_cnt", false,-1, 1,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+568,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+572,"CEN", false,-1);
    tracep->declBit(c+573,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+579,"cen", false,-1);
    tracep->declBit(c+580,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+581,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+585,"CEN", false,-1);
    tracep->declBit(c+586,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+587,"cen", false,-1);
    tracep->declBit(c+588,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+589,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+593,"CEN", false,-1);
    tracep->declBit(c+594,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+595,"cen", false,-1);
    tracep->declBit(c+596,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+597,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+601,"CEN", false,-1);
    tracep->declBit(c+602,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+603,"cen", false,-1);
    tracep->declBit(c+604,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+605,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+609,"CEN", false,-1);
    tracep->declBit(c+610,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+611,"cen", false,-1);
    tracep->declBit(c+612,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+613,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+617,"CEN", false,-1);
    tracep->declBit(c+618,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+619,"cen", false,-1);
    tracep->declBit(c+620,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+621,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+625,"CEN", false,-1);
    tracep->declBit(c+626,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+627,"cen", false,-1);
    tracep->declBit(c+628,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+752,"Bits", false,-1, 31,0);
    tracep->declBus(c+735,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+753,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+752,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+629,"Q", false,-1, 127,0);
    tracep->declBit(c+637,"CLK", false,-1);
    tracep->declBit(c+633,"CEN", false,-1);
    tracep->declBit(c+634,"WEN", false,-1);
    tracep->declArray(c+574,"BWEN", false,-1, 127,0);
    tracep->declBus(c+578,"A", false,-1, 5,0);
    tracep->declArray(c+512,"D", false,-1, 127,0);
    tracep->declBit(c+635,"cen", false,-1);
    tracep->declBit(c+636,"wen", false,-1);
    tracep->declArray(c+518,"bwen", false,-1, 127,0);
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
    bufp->fullCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),4);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v_w),2);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullQData(oldp+28,(((8U & vlSelf->ysyx_22041412_top__DOT__mem_addr)
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
    bufp->fullCData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v_w),2);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullWData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+41,(vlSelf->ysyx_22041412_top__DOT__if_read_vaild));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_22041412_top__DOT__if_read_clean));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
    bufp->fullQData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullIData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_22041412_top__DOT__Icache_clear));
    bufp->fullIData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_22041412_top__DOT__if_jr_hit));
    bufp->fullIData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+69,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+70,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+73,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+74,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+75,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullCData(oldp+79,(((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 1U : ((0x6fU == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 2U : ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->fullCData(oldp+80,(((3U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 1U : ((0x23U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 2U : 0U))),2);
    bufp->fullQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__jal_pc),64);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_22041412_top__DOT__jal_ok));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+86,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+89,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+102,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+104,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullCData(oldp+107,(vlSelf->ysyx_22041412_top__DOT__ex_jump_mode),2);
    bufp->fullCData(oldp+108,(vlSelf->ysyx_22041412_top__DOT__ex_mem_mode),2);
    bufp->fullQData(oldp+109,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+111,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+113,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+115,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+127,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+129,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__mem_jump_mode),2);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__mem_mem_mode),2);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+147,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+148,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+149,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+159,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+160,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+162,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+164,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+165,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+167,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+169,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+170,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+171,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+208,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+211,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+214,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+217,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+220,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+223,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+226,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+229,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+232,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+235,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+283,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+285,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+289,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+291,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+295,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+296,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+297,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullIData(oldp+298,((IData)(vlSelf->ysyx_22041412_top__DOT__id_pc)),32);
    bufp->fullBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+300,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+301,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+302,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+303,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+304,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullIData(oldp+305,((IData)(vlSelf->ysyx_22041412_top__DOT__jal_pc)),32);
    bufp->fullCData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__cache_state),2);
    bufp->fullWData(oldp+308,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+312,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]
                                : ((4U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                    ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[1U]
                                    : ((8U == (0xfU 
                                               & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                        ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[2U]
                                        : ((0xcU == 
                                            (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
                                            ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[3U]
                                            : 0U))))),32);
    bufp->fullIData(oldp+313,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
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
    bufp->fullCData(oldp+314,((0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc)),4);
    bufp->fullBit(oldp+315,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jump));
    bufp->fullBit(oldp+316,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_imm))));
    bufp->fullBit(oldp+317,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+319,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+320,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__get_pc),28);
    bufp->fullBit(oldp+321,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__imm_ready));
    bufp->fullBit(oldp+322,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__wait_ok));
    bufp->fullIData(oldp+323,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jump_pc),32);
    bufp->fullIData(oldp+324,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+325,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+326,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    __Vtemp_h05ca32b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h05ca32b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h05ca32b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h05ca32b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+327,(__Vtemp_h05ca32b7__0),128);
    __Vtemp_h05ca16ea__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h05ca16ea__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h05ca16ea__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h05ca16ea__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+331,(__Vtemp_h05ca16ea__0),128);
    __Vtemp_h05df531f__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h05df531f__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h05df531f__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h05df531f__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+335,(__Vtemp_h05df531f__0),128);
    __Vtemp_h05df76e0__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h05df76e0__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h05df76e0__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h05df76e0__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+339,(__Vtemp_h05df76e0__0),128);
    __Vtemp_h05cfa390__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h05cfa390__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h05cfa390__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h05cfa390__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+343,(__Vtemp_h05cfa390__0),128);
    __Vtemp_h05df46cf__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h05df46cf__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h05df46cf__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h05df46cf__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+347,(__Vtemp_h05df46cf__0),128);
    __Vtemp_h05cfb1fd__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h05cfb1fd__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h05cfb1fd__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h05cfb1fd__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+351,(__Vtemp_h05cfb1fd__0),128);
    __Vtemp_h05df55be__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h05df55be__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h05df55be__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h05df55be__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+355,(__Vtemp_h05df55be__0),128);
    bufp->fullWData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+363,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),4);
    bufp->fullBit(oldp+364,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),2);
    bufp->fullCData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_rodom_cnt),2);
    bufp->fullWData(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+372,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+374,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+387,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+393,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+399,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+405,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+411,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+416,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+417,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+419,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+421,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+423,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+425,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+427,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+429,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+431,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+433,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+435,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+437,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+439,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+441,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+443,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+445,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+447,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+449,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+451,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+453,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+455,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+457,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+459,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+461,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+463,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+465,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+467,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+469,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+471,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+473,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+477,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+479,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+481,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+482,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+483,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+484,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__w_last_ok));
    bufp->fullBit(oldp+485,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+486,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+488,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+490,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+492,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+494,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+498,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+500,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+502,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+506,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+507,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+508,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+509,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+510,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+511,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+516,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),4);
    bufp->fullBit(oldp+517,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullQData(oldp+522,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
    bufp->fullBit(oldp+524,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_h282f1a49__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h282f1a49__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h282f1a49__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h282f1a49__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+525,(__Vtemp_h282f1a49__0),128);
    __Vtemp_h282f1690__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h282f1690__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h282f1690__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h282f1690__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+529,(__Vtemp_h282f1690__0),128);
    __Vtemp_h27c01b1c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h27c01b1c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h27c01b1c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h27c01b1c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+533,(__Vtemp_h27c01b1c__0),128);
    __Vtemp_h27bfbedd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h27bfbedd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h27bfbedd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h27bfbedd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+537,(__Vtemp_h27bfbedd__0),128);
    __Vtemp_h27c03259__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h27c03259__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h27c03259__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h27c03259__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+541,(__Vtemp_h27c03259__0),128);
    __Vtemp_h27bfd69c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h27bfd69c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h27bfd69c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h27bfd69c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+545,(__Vtemp_h27bfd69c__0),128);
    __Vtemp_h27bfc32d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h27bfc32d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h27bfc32d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h27bfc32d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+549,(__Vtemp_h27bfc32d__0),128);
    __Vtemp_h27bfe6ee__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h27bfe6ee__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h27bfe6ee__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h27bfe6ee__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+553,(__Vtemp_h27bfe6ee__0),128);
    bufp->fullWData(oldp+557,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
    bufp->fullBit(oldp+561,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullQData(oldp+562,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),64);
    bufp->fullCData(oldp+564,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+565,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullCData(oldp+566,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point),2);
    bufp->fullCData(oldp+567,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt),2);
    bufp->fullWData(oldp+568,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
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
    bufp->fullWData(oldp+574,(__Vtemp_h88b423c3__0),128);
    bufp->fullCData(oldp+578,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+579,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+580,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+586,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+587,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+588,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+589,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+594,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+595,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+596,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+597,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+602,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+603,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+604,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+605,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+610,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+611,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+612,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+613,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+618,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+619,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+620,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+621,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+626,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+627,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+628,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+629,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+633,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+634,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+635,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+636,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+637,(vlSelf->clk));
    bufp->fullBit(oldp+638,(vlSelf->rst));
    bufp->fullQData(oldp+639,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+641,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+643,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+645,(vlSelf->Ebreak));
    bufp->fullQData(oldp+646,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+648,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+650,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+652,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+654,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+655,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+656,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+657,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+658,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+659,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+660,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+661,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+662,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+663,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+664,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+665,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+666,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+667,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+668,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+669,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+671,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+672,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+673,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+674,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+675,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+676,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+677,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+678,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+679,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+680,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+681,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+682,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+683,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+684,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+685,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+686,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+687,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+688,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+689,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+690,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+691,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+692,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+693,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+694,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+695,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+697,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+698,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+699,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+700,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+701,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+702,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+703,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+704,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+705,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+706,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+707,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+708,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+709,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+711,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+712,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+713,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+714,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+715,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+716,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+717,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+718,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+719,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+720,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+721,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+722,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+723,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+724,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+725,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+726,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+727,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+729,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+730,(vlSelf->io_slave_rid),4);
    bufp->fullBit(oldp+731,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                             & (IData)(vlSelf->io_master_rvalid))));
    bufp->fullCData(oldp+732,(((IData)(vlSelf->rst)
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                         ? ((2U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                              ? (((IData)(vlSelf->ysyx_22041412_top__DOT__if_read_vaild) 
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
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                 ? 0U
                                                 : 
                                                ((0U 
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
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state))
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                  & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_ready)))
                                                  ? 2U
                                                  : 0U)))))),3);
    bufp->fullCData(oldp+733,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+734,(((IData)(vlSelf->rst)
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_r_last) 
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
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state))
                                                   ? 
                                                  ((0U 
                                                    != (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__tag_v))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22041412_top__DOT__mem_w_valid)
                                                     ? 1U
                                                     : 2U))
                                                   : 
                                                  ((((IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o) 
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
    bufp->fullIData(oldp+735,(0x40U),32);
    bufp->fullIData(oldp+736,(0x20U),32);
    bufp->fullIData(oldp+737,(4U),32);
    bufp->fullIData(oldp+738,(8U),32);
    bufp->fullIData(oldp+739,(1U),32);
    bufp->fullBit(oldp+740,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+741,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+743,(0x11U),32);
    bufp->fullIData(oldp+744,(5U),32);
    bufp->fullQData(oldp+745,(0ULL),64);
    bufp->fullIData(oldp+747,(0x45U),32);
    bufp->fullIData(oldp+748,(0x11U),32);
    bufp->fullCData(oldp+749,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__offset),4);
    bufp->fullBit(oldp+750,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jump_mode));
    bufp->fullCData(oldp+751,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point_l1),2);
    bufp->fullIData(oldp+752,(0x80U),32);
    bufp->fullIData(oldp+753,(6U),32);
    bufp->fullIData(oldp+754,(3U),32);
    bufp->fullCData(oldp+755,(0U),4);
    bufp->fullBit(oldp+756,(0U));
    bufp->fullCData(oldp+757,(0U),8);
    bufp->fullCData(oldp+758,(3U),3);
    bufp->fullCData(oldp+759,(1U),3);
    bufp->fullCData(oldp+760,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+761,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+762,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullWData(oldp+763,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+767,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+768,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
    bufp->fullCData(oldp+769,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point_l1),2);
}
