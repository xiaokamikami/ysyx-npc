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
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declQuad(c+564,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+566,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+568,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+570,"Ebreak", false,-1);
    tracep->declQuad(c+571,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+573,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+575,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+577,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+579,"io_master_awready", false,-1);
    tracep->declBit(c+580,"io_master_awvalid", false,-1);
    tracep->declBus(c+581,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+582,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+583,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+584,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+585,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+586,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+587,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+588,"io_master_awlock", false,-1);
    tracep->declBus(c+589,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+590,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+591,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+592,"io_master_wready", false,-1);
    tracep->declBit(c+593,"io_master_wvalid", false,-1);
    tracep->declQuad(c+594,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+596,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+597,"io_master_wlast", false,-1);
    tracep->declBus(c+598,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+599,"io_master_bready", false,-1);
    tracep->declBit(c+600,"io_master_bvalid", false,-1);
    tracep->declBus(c+601,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+602,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+603,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+604,"io_master_arready", false,-1);
    tracep->declBit(c+605,"io_master_arvalid", false,-1);
    tracep->declBus(c+606,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+607,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+608,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+609,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+610,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+611,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+612,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+613,"io_master_arlock", false,-1);
    tracep->declBus(c+614,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+615,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+616,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+617,"io_master_rready", false,-1);
    tracep->declBit(c+618,"io_master_rvalid", false,-1);
    tracep->declBus(c+619,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+620,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+622,"io_master_rlast", false,-1);
    tracep->declBus(c+623,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+624,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+625,"io_slave_awready", false,-1);
    tracep->declBit(c+626,"io_slave_awvalid", false,-1);
    tracep->declBus(c+627,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+628,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+629,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+630,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+631,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+632,"io_slave_wready", false,-1);
    tracep->declBit(c+633,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+634,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+636,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+637,"io_slave_wlast", false,-1);
    tracep->declBit(c+638,"io_slave_bready", false,-1);
    tracep->declBit(c+639,"io_slave_bvalid", false,-1);
    tracep->declBus(c+640,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+641,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+642,"io_slave_arready", false,-1);
    tracep->declBit(c+643,"io_slave_arvalid", false,-1);
    tracep->declBus(c+644,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+645,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+646,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+647,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+648,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+649,"io_slave_rready", false,-1);
    tracep->declBit(c+650,"io_slave_rvalid", false,-1);
    tracep->declBus(c+651,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+652,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+654,"io_slave_rlast", false,-1);
    tracep->declBus(c+655,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declQuad(c+564,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+566,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+568,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+570,"Ebreak", false,-1);
    tracep->declQuad(c+571,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+573,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+575,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+577,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+579,"io_master_awready", false,-1);
    tracep->declBit(c+580,"io_master_awvalid", false,-1);
    tracep->declBus(c+581,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+582,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+583,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+584,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+585,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+586,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+587,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+588,"io_master_awlock", false,-1);
    tracep->declBus(c+589,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+590,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+591,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+592,"io_master_wready", false,-1);
    tracep->declBit(c+593,"io_master_wvalid", false,-1);
    tracep->declQuad(c+594,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+596,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+597,"io_master_wlast", false,-1);
    tracep->declBus(c+598,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+599,"io_master_bready", false,-1);
    tracep->declBit(c+600,"io_master_bvalid", false,-1);
    tracep->declBus(c+601,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+602,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+603,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+604,"io_master_arready", false,-1);
    tracep->declBit(c+605,"io_master_arvalid", false,-1);
    tracep->declBus(c+606,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+607,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+608,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+609,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+610,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+611,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+612,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+613,"io_master_arlock", false,-1);
    tracep->declBus(c+614,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+615,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+616,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+617,"io_master_rready", false,-1);
    tracep->declBit(c+618,"io_master_rvalid", false,-1);
    tracep->declBus(c+619,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+620,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+622,"io_master_rlast", false,-1);
    tracep->declBus(c+623,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+624,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+625,"io_slave_awready", false,-1);
    tracep->declBit(c+626,"io_slave_awvalid", false,-1);
    tracep->declBus(c+627,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+628,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+629,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+630,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+631,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+632,"io_slave_wready", false,-1);
    tracep->declBit(c+633,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+634,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+636,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+637,"io_slave_wlast", false,-1);
    tracep->declBit(c+638,"io_slave_bready", false,-1);
    tracep->declBit(c+639,"io_slave_bvalid", false,-1);
    tracep->declBus(c+640,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+641,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+642,"io_slave_arready", false,-1);
    tracep->declBit(c+643,"io_slave_arvalid", false,-1);
    tracep->declBus(c+644,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+645,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+646,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+647,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+648,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+649,"io_slave_rready", false,-1);
    tracep->declBit(c+650,"io_slave_rvalid", false,-1);
    tracep->declBus(c+651,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+652,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+654,"io_slave_rlast", false,-1);
    tracep->declBus(c+655,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+659,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+662,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+663,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+659,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"r_valid", false,-1);
    tracep->declBit(c+19,"r_ready", false,-1);
    tracep->declBit(c+20,"w_valid", false,-1);
    tracep->declBit(c+21,"w_ready", false,-1);
    tracep->declQuad(c+22,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+594,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+606,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+581,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+24,"r_strb", false,-1, 7,0);
    tracep->declBus(c+596,"w_strb", false,-1, 7,0);
    tracep->declBus(c+610,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_o", false,-1);
    tracep->declBit(c+664,"w_last_o", false,-1);
    tracep->declBit(c+27,"if_ar_valid", false,-1);
    tracep->declBit(c+28,"if_ar_ready", false,-1);
    tracep->declArray(c+29,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+33,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+34,"mem_rw_valid", false,-1);
    tracep->declBit(c+35,"mem_rw_ready", false,-1);
    tracep->declBit(c+36,"mem_rw_wen", false,-1);
    tracep->declQuad(c+37,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+39,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+665,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+42,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+43,"icache_ar_valid", false,-1);
    tracep->declBit(c+44,"icache_ar_ready", false,-1);
    tracep->declQuad(c+45,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+47,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+48,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+49,"icache_last_i", false,-1);
    tracep->declBus(c+50,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+51,"if_pc", false,-1, 63,0);
    tracep->declBit(c+53,"if_ready_o", false,-1);
    tracep->declBit(c+54,"if_jr_ready", false,-1);
    tracep->declBus(c+55,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+56,"id_pc", false,-1, 63,0);
    tracep->declBus(c+58,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+59,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+60,"id_mul_en", false,-1);
    tracep->declQuad(c+61,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+63,"id_func3", false,-1, 2,0);
    tracep->declBit(c+64,"id_func7", false,-1);
    tracep->declBus(c+65,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+66,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+67,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+68,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+69,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+71,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+73,"id_vaild_o", false,-1);
    tracep->declBit(c+74,"id_ready_o", false,-1);
    tracep->declBit(c+75,"csr_jar_en", false,-1);
    tracep->declBus(c+76,"csr", false,-1, 11,0);
    tracep->declBus(c+77,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+78,"id_csr_en", false,-1);
    tracep->declBus(c+79,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+80,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+81,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+83,"ex_mul_en", false,-1);
    tracep->declQuad(c+84,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+86,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+88,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+90,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+91,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+92,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+93,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+94,"ex_func7", false,-1);
    tracep->declBus(c+95,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+96,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+98,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+100,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+102,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+104,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+106,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+84,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+108,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+109,"ex_csr_en", false,-1);
    tracep->declBus(c+110,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+111,"ex_wait", false,-1);
    tracep->declBit(c+112,"ex_load_wait", false,-1);
    tracep->declBit(c+666,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+113,"alu_ready_o", false,-1);
    tracep->declBit(c+73,"ex_valid_o", false,-1);
    tracep->declBit(c+114,"ex_ready_o", false,-1);
    tracep->declBit(c+115,"csr_ready_o", false,-1);
    tracep->declBus(c+116,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+117,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+118,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+36,"mem_rw_type", false,-1);
    tracep->declBit(c+119,"mem_ram_en", false,-1);
    tracep->declBit(c+120,"mem_reg_en", false,-1);
    tracep->declBus(c+121,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+122,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+124,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+126,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+128,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+667,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+130,"mem_res", false,-1, 63,0);
    tracep->declQuad(c+132,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+134,"mem_valid_o", false,-1);
    tracep->declBit(c+135,"sram_ready_o", false,-1);
    tracep->declBit(c+136,"wb_reg_en", false,-1);
    tracep->declBus(c+137,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+138,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+140,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+142,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+144,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+146,"wb_opcode", false,-1, 6,0);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declQuad(c+84,"scr1", false,-1, 63,0);
    tracep->declQuad(c+86,"scr2", false,-1, 63,0);
    tracep->declQuad(c+81,"imm", false,-1, 63,0);
    tracep->declBus(c+95,"opcode", false,-1, 6,0);
    tracep->declBus(c+93,"func3", false,-1, 2,0);
    tracep->declBit(c+94,"func7", false,-1);
    tracep->declBit(c+83,"mul_en", false,-1);
    tracep->declBit(c+74,"ready_i", false,-1);
    tracep->declBit(c+73,"valid_i", false,-1);
    tracep->declBit(c+113,"ready_o", false,-1);
    tracep->declQuad(c+104,"result", false,-1, 63,0);
    tracep->declBus(c+147,"Mode", false,-1, 4,0);
    tracep->declQuad(c+84,"AU", false,-1, 63,0);
    tracep->declQuad(c+86,"BU", false,-1, 63,0);
    tracep->declQuad(c+148,"AY", false,-1, 63,0);
    tracep->declQuad(c+150,"BY", false,-1, 63,0);
    tracep->declBit(c+152,"mul_ready_o", false,-1);
    tracep->declQuad(c+153,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+155,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+104,"Alusu", false,-1, 63,0);
    tracep->declBit(c+157,"rv64i_en", false,-1);
    tracep->declBit(c+158,"rv64r_en", false,-1);
    tracep->declQuad(c+84,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+86,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+669,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+670,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+659,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+153,"out", false,-1, 63,0);
    tracep->declBus(c+147,"key", false,-1, 4,0);
    tracep->declQuad(c+671,"default_out", false,-1, 63,0);
    tracep->declArray(c+159,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+669,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+670,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+659,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+663,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+153,"out", false,-1, 63,0);
    tracep->declBus(c+147,"key", false,-1, 4,0);
    tracep->declQuad(c+671,"default_out", false,-1, 63,0);
    tracep->declArray(c+159,"lut", false,-1, 1172,0);
    tracep->declBus(c+673,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+196+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+247+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+281,"lut_out", false,-1, 63,0);
    tracep->declBit(c+283,"hit", false,-1);
    tracep->declBus(c+674,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+83,"en", false,-1);
    tracep->declQuad(c+84,"rsA", false,-1, 63,0);
    tracep->declQuad(c+86,"rsB", false,-1, 63,0);
    tracep->declBus(c+93,"func3", false,-1, 2,0);
    tracep->declBit(c+158,"rv64_en", false,-1);
    tracep->declBit(c+74,"ready_i", false,-1);
    tracep->declBit(c+152,"ready_o", false,-1);
    tracep->declQuad(c+155,"result", false,-1, 63,0);
    tracep->declBus(c+284,"rsAW", false,-1, 31,0);
    tracep->declBus(c+285,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+155,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+55,"instr", false,-1, 31,0);
    tracep->declBus(c+68,"opcode", false,-1, 6,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBit(c+64,"func7", false,-1);
    tracep->declBus(c+65,"Rs1", false,-1, 4,0);
    tracep->declBus(c+66,"Rs2", false,-1, 4,0);
    tracep->declBus(c+67,"Rd", false,-1, 4,0);
    tracep->declQuad(c+61,"imme", false,-1, 63,0);
    tracep->declBus(c+58,"V1Type", false,-1, 1,0);
    tracep->declBus(c+59,"V2Type", false,-1, 1,0);
    tracep->declBit(c+60,"Mul_en", false,-1);
    tracep->declBit(c+286,"I_type", false,-1);
    tracep->declBit(c+287,"U_type", false,-1);
    tracep->declBit(c+288,"J_type", false,-1);
    tracep->declBit(c+289,"B_type", false,-1);
    tracep->declBit(c+290,"S_type", false,-1);
    tracep->declBit(c+291,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declQuad(c+51,"pc", false,-1, 63,0);
    tracep->declQuad(c+126,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+50,"imm_data", false,-1, 31,0);
    tracep->declBit(c+54,"jarl_rady", false,-1);
    tracep->declBit(c+73,"valid_i", false,-1);
    tracep->declBit(c+53,"ready_o", false,-1);
    tracep->declBit(c+28,"ready_i", false,-1);
    tracep->declBit(c+27,"valid_o", false,-1);
    tracep->declArray(c+29,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+33,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+292,"state", false,-1, 2,0);
    tracep->declArray(c+293,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+297,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+298,"offset", false,-1, 3,0);
    tracep->declBit(c+299,"jar", false,-1);
    tracep->declBit(c+300,"jal", false,-1);
    tracep->declBit(c+301,"one_line", false,-1);
    tracep->declBus(c+302,"dnpc", false,-1, 31,0);
    tracep->declBit(c+303,"dnpc_v", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declQuad(c+571,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+573,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+33,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+27,"cpu_valid", false,-1);
    tracep->declArray(c+29,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+28,"cpu_ready", false,-1);
    tracep->declBit(c+44,"axi_ready_i", false,-1);
    tracep->declBit(c+43,"axi_valid_o", false,-1);
    tracep->declBit(c+49,"axi_r_last_i", false,-1);
    tracep->declBus(c+48,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+45,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+47,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+304,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+305,"cache_index", false,-1, 6,0);
    tracep->declBus(c+298,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+306,"[0]", false,-1, 127,0);
    tracep->declArray(c+310,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+314,"[0]", false,-1, 127,0);
    tracep->declArray(c+318,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+322,"[0]", false,-1, 127,0);
    tracep->declArray(c+326,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+330,"[0]", false,-1, 127,0);
    tracep->declArray(c+334,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+338,"[0]", false,-1, 127,0);
    tracep->declArray(c+342,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+346,"[0]", false,-1, 127,0);
    tracep->declArray(c+350,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+354,"[0]", false,-1, 127,0);
    tracep->declArray(c+358,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+362,"[0]", false,-1, 127,0);
    tracep->declArray(c+366,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+370,"write_data", false,-1, 127,0);
    tracep->declBus(c+374,"write_en", false,-1, 7,0);
    tracep->declBus(c+375,"tag_v", false,-1, 7,0);
    tracep->declBit(c+376,"bust_num", false,-1);
    tracep->declBus(c+377,"state", false,-1, 2,0);
    tracep->declBus(c+656,"next_state", false,-1, 2,0);
    tracep->declBus(c+378,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+379,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+383,"CEN", false,-1);
    tracep->declBit(c+384,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+386,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+390,"CEN", false,-1);
    tracep->declBit(c+391,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+392,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+396,"CEN", false,-1);
    tracep->declBit(c+397,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+398,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+402,"CEN", false,-1);
    tracep->declBit(c+403,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+404,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+408,"CEN", false,-1);
    tracep->declBit(c+409,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+410,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+414,"CEN", false,-1);
    tracep->declBit(c+415,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+416,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+420,"CEN", false,-1);
    tracep->declBit(c+421,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+422,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+426,"CEN", false,-1);
    tracep->declBit(c+427,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+428,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+432,"CEN", false,-1);
    tracep->declBit(c+433,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+434,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+438,"CEN", false,-1);
    tracep->declBit(c+439,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+440,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+444,"CEN", false,-1);
    tracep->declBit(c+445,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+446,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+450,"CEN", false,-1);
    tracep->declBit(c+451,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+452,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+456,"CEN", false,-1);
    tracep->declBit(c+457,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+458,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+462,"CEN", false,-1);
    tracep->declBit(c+463,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+464,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+468,"CEN", false,-1);
    tracep->declBit(c+469,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+675,"Bits", false,-1, 31,0);
    tracep->declBus(c+659,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+676,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+470,"Q", false,-1, 127,0);
    tracep->declBit(c+562,"CLK", false,-1);
    tracep->declBit(c+474,"CEN", false,-1);
    tracep->declBit(c+475,"WEN", false,-1);
    tracep->declBus(c+385,"A", false,-1, 5,0);
    tracep->declArray(c+370,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+660,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+659,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declBus(c+118,"func3", false,-1, 2,0);
    tracep->declBus(c+121,"addr", false,-1, 31,0);
    tracep->declQuad(c+122,"wdata", false,-1, 63,0);
    tracep->declBit(c+36,"wen", false,-1);
    tracep->declBit(c+114,"ex_ready_i", false,-1);
    tracep->declBit(c+119,"mem_valid_i", false,-1);
    tracep->declBit(c+135,"mem_ready_o", false,-1);
    tracep->declQuad(c+132,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+35,"dcache_ready_i", false,-1);
    tracep->declBit(c+34,"dcache_valid_o", false,-1);
    tracep->declBit(c+36,"rw_wen", false,-1);
    tracep->declBus(c+42,"wmask", false,-1, 7,0);
    tracep->declQuad(c+39,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+41,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+37,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+41,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+677,"end_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBus(c+65,"Ra", false,-1, 4,0);
    tracep->declBus(c+66,"Rb", false,-1, 4,0);
    tracep->declBus(c+137,"Rw", false,-1, 4,0);
    tracep->declBit(c+136,"Wen", false,-1);
    tracep->declQuad(c+69,"BusA", false,-1, 63,0);
    tracep->declQuad(c+71,"BusB", false,-1, 63,0);
    tracep->declQuad(c+140,"BusW", false,-1, 63,0);
    tracep->declBit(c+563,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+476+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+540,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+659,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+662,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+663,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+594,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+581,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+606,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+596,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+24,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+610,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_o", false,-1);
    tracep->declBit(c+664,"w_last_o", false,-1);
    tracep->declBit(c+579,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+580,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+581,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+582,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+583,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+584,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+585,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+586,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+587,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+588,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+589,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+590,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+591,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+592,"axi_w_ready_i", false,-1);
    tracep->declBit(c+593,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+594,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+596,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+597,"axi_w_last_o", false,-1);
    tracep->declBus(c+598,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+599,"axi_b_ready_o", false,-1);
    tracep->declBit(c+600,"axi_b_valid_i", false,-1);
    tracep->declBus(c+601,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+602,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+603,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+604,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+605,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+606,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+607,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+608,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+609,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+610,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+611,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+612,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+613,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+614,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+615,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+616,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+617,"axi_r_ready_o", false,-1);
    tracep->declBit(c+618,"axi_r_valid_i", false,-1);
    tracep->declBus(c+619,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+620,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+622,"axi_r_last_i", false,-1);
    tracep->declBus(c+623,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+624,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+678,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+679,"axi_id", false,-1, 3,0);
    tracep->declBus(c+680,"axi_user", false,-1, 0,0);
    tracep->declBus(c+681,"axi_len", false,-1, 7,0);
    tracep->declBus(c+682,"axi_size", false,-1, 2,0);
    tracep->declBit(c+541,"axi_aw_valid", false,-1);
    tracep->declBit(c+542,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+659,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+662,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+663,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declBit(c+43,"if_ar_valid", false,-1);
    tracep->declBit(c+44,"if_ar_ready", false,-1);
    tracep->declQuad(c+45,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+47,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+48,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+49,"if_last_i", false,-1);
    tracep->declBit(c+34,"mem_rw_valid", false,-1);
    tracep->declBit(c+35,"mem_rw_ready", false,-1);
    tracep->declBit(c+36,"mem_rw_wen", false,-1);
    tracep->declQuad(c+37,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+39,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+41,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+665,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+42,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+683,"mem_last_i", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+594,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+581,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+606,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+596,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+24,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+610,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_i", false,-1);
    tracep->declBit(c+664,"w_last_i", false,-1);
    tracep->declBus(c+543,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+657,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+544,"rd_state", false,-1, 1,0);
    tracep->declBus(c+658,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+545,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+684,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+685,"wr_state", false,-1, 1,0);
    tracep->declBus(c+686,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+562,"clk", false,-1);
    tracep->declBit(c+563,"rst", false,-1);
    tracep->declBit(c+109,"en", false,-1);
    tracep->declQuad(c+96,"pc", false,-1, 63,0);
    tracep->declBus(c+110,"addr", false,-1, 2,0);
    tracep->declBus(c+93,"func3", false,-1, 2,0);
    tracep->declQuad(c+84,"data_i", false,-1, 63,0);
    tracep->declQuad(c+106,"data_o", false,-1, 63,0);
    tracep->declBit(c+115,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+546+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+106,"data_r", false,-1, 63,0);
    tracep->declQuad(c+558,"data_w", false,-1, 63,0);
    tracep->declQuad(c+560,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
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
    bufp->fullCData(oldp+24,((0xffU & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                        ? ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                            ? 1U : 
                                           ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                             ? 3U : 
                                            ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                              ? 0xfU
                                              : ((3U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xffU
                                                  : 0U))))
                                        : ((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                            ? 0xffU
                                            : 0U)))),8);
    bufp->fullCData(oldp+25,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch))
                               ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_len)
                               : 0U)),8);
    bufp->fullBit(oldp+26,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullWData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_22041412_top__DOT__mem_rw_ready));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullQData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullQData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+42,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                               ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                 ? 0xfU
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xffU
                                                  : 0U))))),8);
    bufp->fullBit(oldp+43,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+53,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+63,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+64,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+67,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+68,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+69,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+75,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+76,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+78,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+84,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+88,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+98,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+100,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+102,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc3e47ac2__0)
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
    bufp->fullQData(oldp+104,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+111,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_22041412_top__DOT__ex_load_wait));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullIData(oldp+121,(vlSelf->ysyx_22041412_top__DOT__mem_addr),32);
    bufp->fullQData(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+124,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+134,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+147,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+152,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+157,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+158,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+159,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+196,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+199,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+202,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+205,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+208,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+211,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+214,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+217,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+220,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+223,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+226,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+229,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+232,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+235,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+255,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+261,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+267,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+271,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+273,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+277,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+279,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+283,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+284,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+285,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+286,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+287,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+288,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+289,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+290,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__r_data_4mux1),32);
    bufp->fullCData(oldp+298,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+299,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+300,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+301,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+303,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+304,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+305,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+306,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+310,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+314,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+318,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+322,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+326,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+330,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+334,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+338,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+342,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+346,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+350,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+354,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+358,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+362,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+366,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+370,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullCData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
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
    bufp->fullBit(oldp+542,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+543,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+544,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullCData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch),3);
    bufp->fullQData(oldp+546,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+552,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+560,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullBit(oldp+562,(vlSelf->clk));
    bufp->fullBit(oldp+563,(vlSelf->rst));
    bufp->fullQData(oldp+564,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+566,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+568,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+570,(vlSelf->Ebreak));
    bufp->fullQData(oldp+571,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+573,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+575,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+577,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+579,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+580,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+581,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+582,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+583,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+584,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+585,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+586,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+587,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+588,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+589,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+590,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+591,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+592,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+593,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+594,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+596,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+597,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+598,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+599,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+600,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+601,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+602,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+603,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+604,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+605,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+606,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+607,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+608,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+609,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+610,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+611,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+612,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+613,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+614,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+615,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+616,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+617,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+618,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+619,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+620,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+622,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+623,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+624,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+625,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+626,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+627,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+628,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+629,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+630,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+631,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+632,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+633,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+634,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+636,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+637,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+638,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+639,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+640,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+641,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+642,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+643,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+644,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+645,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+646,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+647,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+648,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+649,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+650,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+651,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+652,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+654,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+655,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+656,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+657,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+658,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                         ? (((IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid) 
                                             & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)))
                                             ? 1U : 
                                            ((IData)(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid)
                                              ? 1U : 0U))
                                         : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state))
                                             ? (((IData)(vlSelf->ysyx_22041412_top__DOT__r_ready) 
                                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__r_valid)
                                                  ? 1U
                                                  : 0U))
                                             : 0U)))),2);
    bufp->fullIData(oldp+659,(0x40U),32);
    bufp->fullIData(oldp+660,(0x20U),32);
    bufp->fullIData(oldp+661,(4U),32);
    bufp->fullIData(oldp+662,(8U),32);
    bufp->fullIData(oldp+663,(1U),32);
    bufp->fullBit(oldp+664,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullCData(oldp+665,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullBit(oldp+666,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+667,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+669,(0x11U),32);
    bufp->fullIData(oldp+670,(5U),32);
    bufp->fullQData(oldp+671,(0ULL),64);
    bufp->fullIData(oldp+673,(0x45U),32);
    bufp->fullIData(oldp+674,(0x11U),32);
    bufp->fullIData(oldp+675,(0x80U),32);
    bufp->fullIData(oldp+676,(6U),32);
    bufp->fullBit(oldp+677,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__end_flag));
    bufp->fullIData(oldp+678,(3U),32);
    bufp->fullCData(oldp+679,(0U),4);
    bufp->fullBit(oldp+680,(0U));
    bufp->fullCData(oldp+681,(0U),8);
    bufp->fullCData(oldp+682,(3U),3);
    bufp->fullBit(oldp+683,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i));
    bufp->fullCData(oldp+684,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+685,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+686,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
}
