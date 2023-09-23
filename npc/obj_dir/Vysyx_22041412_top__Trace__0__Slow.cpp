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
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+629,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+631,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+633,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+635,"Ebreak", false,-1);
    tracep->declQuad(c+636,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+638,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+640,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+642,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+644,"io_master_awready", false,-1);
    tracep->declBit(c+645,"io_master_awvalid", false,-1);
    tracep->declBus(c+646,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+647,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+648,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+649,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+650,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+652,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+653,"io_master_awlock", false,-1);
    tracep->declBus(c+654,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+655,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+656,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+657,"io_master_wready", false,-1);
    tracep->declBit(c+658,"io_master_wvalid", false,-1);
    tracep->declQuad(c+659,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+661,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+662,"io_master_wlast", false,-1);
    tracep->declBus(c+663,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+664,"io_master_bready", false,-1);
    tracep->declBit(c+665,"io_master_bvalid", false,-1);
    tracep->declBus(c+666,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+667,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+668,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+669,"io_master_arready", false,-1);
    tracep->declBit(c+670,"io_master_arvalid", false,-1);
    tracep->declBus(c+671,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+672,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+673,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+674,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+675,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+676,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+677,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+678,"io_master_arlock", false,-1);
    tracep->declBus(c+679,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+680,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+681,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+682,"io_master_rready", false,-1);
    tracep->declBit(c+683,"io_master_rvalid", false,-1);
    tracep->declBus(c+684,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+685,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+687,"io_master_rlast", false,-1);
    tracep->declBus(c+688,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+689,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+690,"io_slave_awready", false,-1);
    tracep->declBit(c+691,"io_slave_awvalid", false,-1);
    tracep->declBus(c+692,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+693,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+694,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+695,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+696,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+697,"io_slave_wready", false,-1);
    tracep->declBit(c+698,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+699,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"io_slave_wlast", false,-1);
    tracep->declBit(c+703,"io_slave_bready", false,-1);
    tracep->declBit(c+704,"io_slave_bvalid", false,-1);
    tracep->declBus(c+705,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+706,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+707,"io_slave_arready", false,-1);
    tracep->declBit(c+708,"io_slave_arvalid", false,-1);
    tracep->declBus(c+709,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+710,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+711,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+712,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+713,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+714,"io_slave_rready", false,-1);
    tracep->declBit(c+715,"io_slave_rvalid", false,-1);
    tracep->declBus(c+716,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+717,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+719,"io_slave_rlast", false,-1);
    tracep->declBus(c+720,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+629,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+631,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+633,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+635,"Ebreak", false,-1);
    tracep->declQuad(c+636,"Icache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+638,"Icache_L1_hit", false,-1, 63,0);
    tracep->declQuad(c+640,"Dcache_L1_miss", false,-1, 63,0);
    tracep->declQuad(c+642,"Dcache_L1_hit", false,-1, 63,0);
    tracep->declBit(c+644,"io_master_awready", false,-1);
    tracep->declBit(c+645,"io_master_awvalid", false,-1);
    tracep->declBus(c+646,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+647,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+648,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+649,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+650,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+652,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+653,"io_master_awlock", false,-1);
    tracep->declBus(c+654,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+655,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+656,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+657,"io_master_wready", false,-1);
    tracep->declBit(c+658,"io_master_wvalid", false,-1);
    tracep->declQuad(c+659,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+661,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+662,"io_master_wlast", false,-1);
    tracep->declBus(c+663,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+664,"io_master_bready", false,-1);
    tracep->declBit(c+665,"io_master_bvalid", false,-1);
    tracep->declBus(c+666,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+667,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+668,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+669,"io_master_arready", false,-1);
    tracep->declBit(c+670,"io_master_arvalid", false,-1);
    tracep->declBus(c+671,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+672,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+673,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+674,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+675,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+676,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+677,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+678,"io_master_arlock", false,-1);
    tracep->declBus(c+679,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+680,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+681,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+682,"io_master_rready", false,-1);
    tracep->declBit(c+683,"io_master_rvalid", false,-1);
    tracep->declBus(c+684,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+685,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+687,"io_master_rlast", false,-1);
    tracep->declBus(c+688,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+689,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+690,"io_slave_awready", false,-1);
    tracep->declBit(c+691,"io_slave_awvalid", false,-1);
    tracep->declBus(c+692,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+693,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+694,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+695,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+696,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+697,"io_slave_wready", false,-1);
    tracep->declBit(c+698,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+699,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+701,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+702,"io_slave_wlast", false,-1);
    tracep->declBit(c+703,"io_slave_bready", false,-1);
    tracep->declBit(c+704,"io_slave_bvalid", false,-1);
    tracep->declBus(c+705,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+706,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+707,"io_slave_arready", false,-1);
    tracep->declBit(c+708,"io_slave_arvalid", false,-1);
    tracep->declBus(c+709,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+710,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+711,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+712,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+713,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+714,"io_slave_rready", false,-1);
    tracep->declBit(c+715,"io_slave_rvalid", false,-1);
    tracep->declBus(c+716,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+717,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+719,"io_slave_rlast", false,-1);
    tracep->declBus(c+720,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+724,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+725,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+726,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+727,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+728,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+724,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+33,"r_valid", false,-1);
    tracep->declBit(c+683,"r_ready", false,-1);
    tracep->declBit(c+34,"w_valid", false,-1);
    tracep->declBit(c+657,"w_ready", false,-1);
    tracep->declQuad(c+685,"axi_r_data", false,-1, 63,0);
    tracep->declBus(c+671,"axi_r_addr", false,-1, 31,0);
    tracep->declQuad(c+659,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+646,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+676,"r_size", false,-1, 2,0);
    tracep->declBus(c+651,"w_size", false,-1, 2,0);
    tracep->declBus(c+675,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+650,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+687,"r_last_o", false,-1);
    tracep->declBit(c+662,"w_last_o", false,-1);
    tracep->declBit(c+35,"if_ar_valid", false,-1);
    tracep->declBit(c+36,"if_ar_ready", false,-1);
    tracep->declArray(c+37,"if_ar_data", false,-1, 127,0);
    tracep->declBus(c+41,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+42,"if_read_vaild", false,-1);
    tracep->declBit(c+43,"if_read_clean", false,-1);
    tracep->declBit(c+44,"mem_r_valid", false,-1);
    tracep->declBit(c+721,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+45,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+46,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last", false,-1);
    tracep->declBit(c+34,"mem_w_valid", false,-1);
    tracep->declBit(c+657,"mem_w_ready", false,-1);
    tracep->declQuad(c+47,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+49,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+50,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+51,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+662,"mem_w_last", false,-1);
    tracep->declBit(c+52,"icache_ar_valid", false,-1);
    tracep->declBit(c+21,"icache_ar_ready", false,-1);
    tracep->declQuad(c+22,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+53,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+54,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"icache_last_i", false,-1);
    tracep->declBit(c+55,"Icache_clear", false,-1);
    tracep->declBus(c+56,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+57,"if_pc", false,-1, 63,0);
    tracep->declBit(c+59,"if_ready_o", false,-1);
    tracep->declBit(c+60,"if_jr_ready", false,-1);
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
    tracep->declBit(c+79,"id_vaild_o", false,-1);
    tracep->declBit(c+80,"id_ready_o", false,-1);
    tracep->declBit(c+81,"csr_jar_en", false,-1);
    tracep->declBus(c+82,"csr", false,-1, 11,0);
    tracep->declBus(c+83,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+84,"id_csr_en", false,-1);
    tracep->declBus(c+85,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+86,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declQuad(c+87,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+89,"ex_mul_en", false,-1);
    tracep->declQuad(c+90,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+92,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+94,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+96,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+97,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+98,"ex_func7", false,-1);
    tracep->declBus(c+99,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+100,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+102,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+104,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+106,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+108,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+110,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+90,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+112,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+113,"ex_csr_en", false,-1);
    tracep->declBus(c+114,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+115,"ex_wait", false,-1);
    tracep->declBit(c+116,"ex_load_wait", false,-1);
    tracep->declBit(c+729,"ex_mem_load_wait", false,-1);
    tracep->declBit(c+117,"alu_ready_o", false,-1);
    tracep->declBit(c+79,"ex_valid_o", false,-1);
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
    tracep->declQuad(c+730,"mem_temp", false,-1, 63,0);
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
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declQuad(c+90,"scr1", false,-1, 63,0);
    tracep->declQuad(c+92,"scr2", false,-1, 63,0);
    tracep->declQuad(c+87,"imm", false,-1, 63,0);
    tracep->declBus(c+99,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declBit(c+98,"func7", false,-1);
    tracep->declBit(c+89,"mul_en", false,-1);
    tracep->declBit(c+80,"ready_i", false,-1);
    tracep->declBit(c+79,"valid_i", false,-1);
    tracep->declBit(c+117,"ready_o", false,-1);
    tracep->declQuad(c+108,"result", false,-1, 63,0);
    tracep->declBus(c+152,"Mode", false,-1, 4,0);
    tracep->declQuad(c+90,"AU", false,-1, 63,0);
    tracep->declQuad(c+92,"BU", false,-1, 63,0);
    tracep->declQuad(c+153,"AY", false,-1, 63,0);
    tracep->declQuad(c+155,"BY", false,-1, 63,0);
    tracep->declBit(c+157,"mul_ready_o", false,-1);
    tracep->declQuad(c+158,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+160,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+108,"Alusu", false,-1, 63,0);
    tracep->declBit(c+162,"rv64i_en", false,-1);
    tracep->declBit(c+163,"rv64r_en", false,-1);
    tracep->declQuad(c+90,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+92,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+732,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+733,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+724,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+158,"out", false,-1, 63,0);
    tracep->declBus(c+152,"key", false,-1, 4,0);
    tracep->declQuad(c+734,"default_out", false,-1, 63,0);
    tracep->declArray(c+164,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+732,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+733,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+724,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+728,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+158,"out", false,-1, 63,0);
    tracep->declBus(c+152,"key", false,-1, 4,0);
    tracep->declQuad(c+734,"default_out", false,-1, 63,0);
    tracep->declArray(c+164,"lut", false,-1, 1172,0);
    tracep->declBus(c+736,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+737,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+89,"en", false,-1);
    tracep->declQuad(c+90,"rsA", false,-1, 63,0);
    tracep->declQuad(c+92,"rsB", false,-1, 63,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declBit(c+163,"rv64_en", false,-1);
    tracep->declBit(c+80,"ready_i", false,-1);
    tracep->declBit(c+157,"ready_o", false,-1);
    tracep->declQuad(c+160,"result", false,-1, 63,0);
    tracep->declBus(c+289,"rsAW", false,-1, 31,0);
    tracep->declBus(c+290,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+160,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+61,"instr", false,-1, 31,0);
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
    tracep->declBit(c+291,"I_type", false,-1);
    tracep->declBit(c+292,"U_type", false,-1);
    tracep->declBit(c+293,"J_type", false,-1);
    tracep->declBit(c+294,"B_type", false,-1);
    tracep->declBit(c+295,"S_type", false,-1);
    tracep->declBit(c+296,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+57,"pc", false,-1, 63,0);
    tracep->declQuad(c+131,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+56,"imm_data", false,-1, 31,0);
    tracep->declBit(c+60,"jarl_rady", false,-1);
    tracep->declBit(c+79,"valid_i", false,-1);
    tracep->declBit(c+59,"ready_o", false,-1);
    tracep->declBit(c+36,"ready_i", false,-1);
    tracep->declBit(c+35,"valid_o", false,-1);
    tracep->declArray(c+37,"r_data_i", false,-1, 127,0);
    tracep->declBus(c+41,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+42,"if_read_vaild", false,-1);
    tracep->declBit(c+43,"if_read_clean", false,-1);
    tracep->declBit(c+55,"cache_clear", false,-1);
    tracep->declBus(c+297,"state", false,-1, 2,0);
    tracep->declBus(c+298,"cache_state", false,-1, 1,0);
    tracep->declArray(c+299,"read_imm_data", false,-1, 127,0);
    tracep->declBus(c+303,"r_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+304,"imm_data_4mux1", false,-1, 31,0);
    tracep->declBus(c+305,"offset", false,-1, 3,0);
    tracep->declBus(c+306,"pc_offset", false,-1, 3,0);
    tracep->declBit(c+307,"jar", false,-1);
    tracep->declBit(c+308,"jal", false,-1);
    tracep->declBit(c+309,"one_line", false,-1);
    tracep->declBus(c+310,"dnpc", false,-1, 31,0);
    tracep->declBit(c+311,"dnpc_v", false,-1);
    tracep->declBus(c+312,"get_pc", false,-1, 27,0);
    tracep->declBit(c+313,"imm_ready", false,-1);
    tracep->declBit(c+314,"wait_ok", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+636,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+638,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+41,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+35,"cpu_valid", false,-1);
    tracep->declArray(c+37,"cpu_read_data", false,-1, 127,0);
    tracep->declBit(c+36,"cpu_ready", false,-1);
    tracep->declBit(c+42,"cpu_read_vaild", false,-1);
    tracep->declBit(c+43,"cpu_read_clean", false,-1);
    tracep->declBit(c+55,"cache_clear", false,-1);
    tracep->declBit(c+21,"axi_ready_i", false,-1);
    tracep->declBit(c+52,"axi_valid_o", false,-1);
    tracep->declBit(c+24,"axi_r_last_i", false,-1);
    tracep->declBus(c+54,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+22,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+53,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+315,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+316,"cache_index", false,-1, 6,0);
    tracep->declBus(c+305,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+317,"[0]", false,-1, 127,0);
    tracep->declArray(c+321,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+325,"[0]", false,-1, 127,0);
    tracep->declArray(c+329,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+333,"[0]", false,-1, 127,0);
    tracep->declArray(c+337,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+341,"[0]", false,-1, 127,0);
    tracep->declArray(c+345,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+349,"write_data", false,-1, 127,0);
    tracep->declBus(c+353,"write_en", false,-1, 3,0);
    tracep->declBus(c+25,"tag_v", false,-1, 3,0);
    tracep->declBus(c+26,"tag_v_w", false,-1, 1,0);
    tracep->declBit(c+354,"bust_num", false,-1);
    tracep->declBus(c+355,"state", false,-1, 2,0);
    tracep->declBus(c+722,"next_state", false,-1, 2,0);
    tracep->declBus(c+356,"cache_write_point", false,-1, 1,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+357,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+361,"CEN", false,-1);
    tracep->declBit(c+362,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+364,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+368,"CEN", false,-1);
    tracep->declBit(c+369,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+370,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+374,"CEN", false,-1);
    tracep->declBit(c+375,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+376,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+380,"CEN", false,-1);
    tracep->declBit(c+381,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+382,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+386,"CEN", false,-1);
    tracep->declBit(c+387,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+388,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+392,"CEN", false,-1);
    tracep->declBit(c+393,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+394,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+398,"CEN", false,-1);
    tracep->declBit(c+399,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+400,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+404,"CEN", false,-1);
    tracep->declBit(c+405,"WEN", false,-1);
    tracep->declBus(c+363,"A", false,-1, 5,0);
    tracep->declArray(c+349,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBus(c+71,"Ra", false,-1, 4,0);
    tracep->declBus(c+72,"Rb", false,-1, 4,0);
    tracep->declBus(c+142,"Rw", false,-1, 4,0);
    tracep->declBit(c+141,"Wen", false,-1);
    tracep->declQuad(c+75,"BusA", false,-1, 63,0);
    tracep->declQuad(c+77,"BusB", false,-1, 63,0);
    tracep->declQuad(c+145,"BusW", false,-1, 63,0);
    tracep->declBit(c+628,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+406+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+470,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+724,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+725,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+726,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+727,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+728,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declBit(c+33,"r_valid_i", false,-1);
    tracep->declBit(c+34,"w_valid_i", false,-1);
    tracep->declBit(c+683,"r_ready_o", false,-1);
    tracep->declBit(c+657,"w_ready_o", false,-1);
    tracep->declQuad(c+685,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+659,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+646,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+671,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+651,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+676,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+675,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+650,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+687,"r_last_o", false,-1);
    tracep->declBit(c+662,"w_last_o", false,-1);
    tracep->declBit(c+644,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+645,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+646,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+647,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+648,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+649,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+650,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+651,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+652,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+653,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+654,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+655,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+656,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+657,"axi_w_ready_i", false,-1);
    tracep->declBit(c+658,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+659,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+661,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+662,"axi_w_last_o", false,-1);
    tracep->declBus(c+663,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+664,"axi_b_ready_o", false,-1);
    tracep->declBit(c+665,"axi_b_valid_i", false,-1);
    tracep->declBus(c+666,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+667,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+668,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+669,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+670,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+671,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+672,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+673,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+674,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+675,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+676,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+677,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+678,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+679,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+680,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+681,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+682,"axi_r_ready_o", false,-1);
    tracep->declBit(c+683,"axi_r_valid_i", false,-1);
    tracep->declBus(c+684,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+685,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+687,"axi_r_last_i", false,-1);
    tracep->declBus(c+688,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+689,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+740,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+741,"axi_id", false,-1, 3,0);
    tracep->declBus(c+742,"axi_user", false,-1, 0,0);
    tracep->declBus(c+743,"axi_len", false,-1, 7,0);
    tracep->declBus(c+744,"axi_size", false,-1, 2,0);
    tracep->declBit(c+471,"axi_aw_valid", false,-1);
    tracep->declBus(c+472,"wd_count", false,-1, 7,0);
    tracep->declBit(c+473,"w_last_ok", false,-1);
    tracep->declBit(c+474,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+724,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+725,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+726,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+727,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+728,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declBit(c+52,"if_ar_valid", false,-1);
    tracep->declBit(c+21,"if_ar_ready", false,-1);
    tracep->declQuad(c+22,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+53,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+54,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"if_last_i", false,-1);
    tracep->declBit(c+44,"mem_r_valid", false,-1);
    tracep->declBit(c+721,"mem_r_ready", false,-1);
    tracep->declQuad(c+18,"mem_r_data", false,-1, 63,0);
    tracep->declBus(c+45,"mem_r_addr", false,-1, 31,0);
    tracep->declBus(c+46,"mem_r_len", false,-1, 7,0);
    tracep->declBit(c+20,"mem_r_last_i", false,-1);
    tracep->declBit(c+34,"mem_w_valid", false,-1);
    tracep->declBit(c+657,"mem_w_ready", false,-1);
    tracep->declQuad(c+47,"mem_w_data", false,-1, 63,0);
    tracep->declBus(c+49,"mem_w_addr", false,-1, 31,0);
    tracep->declBus(c+50,"mem_w_len", false,-1, 7,0);
    tracep->declBus(c+51,"mem_w_size", false,-1, 2,0);
    tracep->declBit(c+662,"mem_w_last_i", false,-1);
    tracep->declBit(c+33,"r_valid_i", false,-1);
    tracep->declBit(c+34,"w_valid_i", false,-1);
    tracep->declBit(c+683,"r_ready_o", false,-1);
    tracep->declBit(c+657,"w_ready_o", false,-1);
    tracep->declQuad(c+685,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+659,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+646,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+671,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+651,"w_size_i", false,-1, 2,0);
    tracep->declBus(c+676,"r_size_i", false,-1, 2,0);
    tracep->declBus(c+675,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+650,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+687,"r_last_i", false,-1);
    tracep->declBit(c+662,"w_last_i", false,-1);
    tracep->declBus(c+475,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+27,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+476,"rd_state", false,-1, 1,0);
    tracep->declBus(c+723,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+745,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+746,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+747,"wr_state", false,-1, 1,0);
    tracep->declBus(c+748,"wr_next_state", false,-1, 1,0);
    tracep->declBus(c+749,"debug_addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declBit(c+113,"en", false,-1);
    tracep->declQuad(c+100,"pc", false,-1, 63,0);
    tracep->declBus(c+114,"addr", false,-1, 2,0);
    tracep->declBus(c+97,"func3", false,-1, 2,0);
    tracep->declQuad(c+90,"data_i", false,-1, 63,0);
    tracep->declQuad(c+110,"data_o", false,-1, 63,0);
    tracep->declBit(c+139,"valid_i", false,-1);
    tracep->declBit(c+119,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+477+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+110,"data_r", false,-1, 63,0);
    tracep->declQuad(c+489,"data_w", false,-1, 63,0);
    tracep->declQuad(c+491,"data", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_22041412_mem ");
    tracep->declBus(c+725,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+724,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+640,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+642,"cache_hit", false,-1, 63,0);
    tracep->declBus(c+122,"func3", false,-1, 2,0);
    tracep->declBus(c+126,"addr", false,-1, 31,0);
    tracep->declQuad(c+127,"wdata", false,-1, 63,0);
    tracep->declBit(c+123,"wen", false,-1);
    tracep->declBit(c+118,"ex_ready_i", false,-1);
    tracep->declBit(c+124,"mem_valid_i", false,-1);
    tracep->declBit(c+140,"mem_ready_o", false,-1);
    tracep->declQuad(c+137,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+721,"r_ready_i", false,-1);
    tracep->declBit(c+44,"r_valid_o", false,-1);
    tracep->declBit(c+20,"r_last_i", false,-1);
    tracep->declBus(c+46,"r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+45,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+657,"w_ready_i", false,-1);
    tracep->declBit(c+662,"w_last_i", false,-1);
    tracep->declBit(c+34,"w_valid_o", false,-1);
    tracep->declBus(c+51,"w_size_o", false,-1, 2,0);
    tracep->declBus(c+50,"w_len_o", false,-1, 7,0);
    tracep->declQuad(c+47,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+49,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+493,"cache_read_data", false,-1, 63,0);
    tracep->declBit(c+495,"dcache_ready_i", false,-1);
    tracep->declBit(c+496,"dcache_valid_o", false,-1);
    tracep->declBit(c+497,"mem_r_ready_o", false,-1);
    tracep->declBit(c+495,"mem_w_ready_o", false,-1);
    tracep->pushNamePrefix("u_ysyx_22041412_Dcache ");
    tracep->declBit(c+627,"clk", false,-1);
    tracep->declBit(c+628,"rst", false,-1);
    tracep->declQuad(c+640,"cache_miss", false,-1, 63,0);
    tracep->declQuad(c+642,"cache_hit", false,-1, 63,0);
    tracep->declBit(c+123,"cpu_rw_en", false,-1);
    tracep->declBus(c+126,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+496,"cpu_valid", false,-1);
    tracep->declQuad(c+127,"cpu_write_data", false,-1, 63,0);
    tracep->declBus(c+122,"cpu_rw_size", false,-1, 2,0);
    tracep->declQuad(c+493,"cpu_read_data", false,-1, 63,0);
    tracep->declBit(c+495,"cpu_ready", false,-1);
    tracep->declBit(c+657,"axi_w_ready_i", false,-1);
    tracep->declBit(c+34,"axi_w_valid_o", false,-1);
    tracep->declBit(c+662,"axi_w_last_i", false,-1);
    tracep->declBus(c+50,"axi_w_len_o", false,-1, 7,0);
    tracep->declQuad(c+47,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+49,"axi_w_addr_o", false,-1, 31,0);
    tracep->declBus(c+51,"axi_w_size_o", false,-1, 2,0);
    tracep->declBit(c+721,"axi_r_ready_i", false,-1);
    tracep->declBit(c+44,"axi_r_valid_o", false,-1);
    tracep->declBit(c+20,"axi_r_last_i", false,-1);
    tracep->declBus(c+46,"axi_r_len_o", false,-1, 7,0);
    tracep->declQuad(c+18,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+45,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBit(c+498,"cache_rd_ready", false,-1);
    tracep->declBit(c+499,"cache_wr_ready", false,-1);
    tracep->declBus(c+500,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+501,"cache_index", false,-1, 6,0);
    tracep->declBus(c+502,"cache_offset", false,-1, 3,0);
    tracep->declArray(c+503,"write_data", false,-1, 127,0);
    tracep->declArray(c+750,"wrtie_strb", false,-1, 127,0);
    tracep->declBus(c+507,"write_en", false,-1, 3,0);
    tracep->declBit(c+508,"rw_strb_en", false,-1);
    tracep->declArray(c+509,"rw_strb", false,-1, 127,0);
    tracep->declQuad(c+513,"rw_strb_64", false,-1, 63,0);
    tracep->declBit(c+515,"rw_offset", false,-1);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+516,"[0]", false,-1, 127,0);
    tracep->declArray(c+520,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+524,"[0]", false,-1, 127,0);
    tracep->declArray(c+528,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+532,"[0]", false,-1, 127,0);
    tracep->declArray(c+536,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+540,"[0]", false,-1, 127,0);
    tracep->declArray(c+544,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+28,"cache_read_data", false,-1, 63,0);
    tracep->declArray(c+548,"cache_write_data", false,-1, 127,0);
    tracep->declBit(c+552,"device", false,-1);
    tracep->declQuad(c+553,"write_back_data", false,-1, 63,0);
    tracep->declBus(c+754,"write_back_addr", false,-1, 27,0);
    tracep->declBus(c+30,"tag_v", false,-1, 3,0);
    tracep->declBus(c+31,"tag_v_w", false,-1, 1,0);
    tracep->declBit(c+755,"bust_rd", false,-1);
    tracep->declBus(c+555,"rd_state", false,-1, 2,0);
    tracep->declBus(c+32,"rd_next_state", false,-1, 2,0);
    tracep->declBus(c+556,"wr_state", false,-1, 2,0);
    tracep->declBus(c+557,"cache_write_point", false,-1, 1,0);
    tracep->declBus(c+756,"cache_write_point_l1", false,-1, 1,0);
    tracep->declBus(c+557,"cache_rodom_cnt", false,-1, 1,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+558,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+562,"CEN", false,-1);
    tracep->declBit(c+563,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+569,"cen", false,-1);
    tracep->declBit(c+570,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+571,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+575,"CEN", false,-1);
    tracep->declBit(c+576,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+577,"cen", false,-1);
    tracep->declBit(c+578,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+579,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+583,"CEN", false,-1);
    tracep->declBit(c+584,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+585,"cen", false,-1);
    tracep->declBit(c+586,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+587,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+591,"CEN", false,-1);
    tracep->declBit(c+592,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+593,"cen", false,-1);
    tracep->declBit(c+594,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+595,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+600,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+601,"cen", false,-1);
    tracep->declBit(c+602,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+603,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+607,"CEN", false,-1);
    tracep->declBit(c+608,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+609,"cen", false,-1);
    tracep->declBit(c+610,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+611,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+615,"CEN", false,-1);
    tracep->declBit(c+616,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+617,"cen", false,-1);
    tracep->declBit(c+618,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+738,"Bits", false,-1, 31,0);
    tracep->declBus(c+724,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+739,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+738,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+619,"Q", false,-1, 127,0);
    tracep->declBit(c+627,"CLK", false,-1);
    tracep->declBit(c+623,"CEN", false,-1);
    tracep->declBit(c+624,"WEN", false,-1);
    tracep->declArray(c+564,"BWEN", false,-1, 127,0);
    tracep->declBus(c+568,"A", false,-1, 5,0);
    tracep->declArray(c+503,"D", false,-1, 127,0);
    tracep->declBit(c+625,"cen", false,-1);
    tracep->declBit(c+626,"wen", false,-1);
    tracep->declArray(c+509,"bwen", false,-1, 127,0);
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
    bufp->fullCData(oldp+26,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                               ? 0U : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                        ? 1U : ((4U 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                 ? 2U
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v))
                                                  ? 3U
                                                  : 0U))))),2);
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
    bufp->fullCData(oldp+32,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_next_state),3);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_22041412_top__DOT__mem_w_valid));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullWData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),128);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_22041412_top__DOT__if_read_vaild));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_22041412_top__DOT__if_read_clean));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_22041412_top__DOT__mem_r_valid));
    bufp->fullIData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__mem_r_addr),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_22041412_top__DOT__mem_r_len),8);
    bufp->fullQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__mem_w_data),64);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__mem_w_addr),32);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_22041412_top__DOT__mem_w_len),8);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__mem_w_size),3);
    bufp->fullBit(oldp+52,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullIData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_22041412_top__DOT__Icache_clear));
    bufp->fullIData(oldp+56,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
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
    bufp->fullBit(oldp+79,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+81,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+84,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
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
    bufp->fullCData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__cache_state),2);
    bufp->fullWData(oldp+299,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__read_imm_data),128);
    bufp->fullIData(oldp+303,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]
                                : ((4U == (0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                    ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[1U]
                                    : ((8U == (0xfU 
                                               & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                        ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[2U]
                                        : ((0xcU == 
                                            (0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr))
                                            ? vlSelf->ysyx_22041412_top__DOT__if_ar_data[3U]
                                            : 0U))))),32);
    bufp->fullIData(oldp+304,(((0U == (0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc))
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
    bufp->fullCData(oldp+305,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullCData(oldp+306,((0xfU & vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc)),4);
    bufp->fullBit(oldp+307,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+308,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data[0U]))));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__one_line));
    bufp->fullIData(oldp+310,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+311,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc_v));
    bufp->fullIData(oldp+312,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__get_pc),28);
    bufp->fullBit(oldp+313,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__imm_ready));
    bufp->fullBit(oldp+314,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__wait_ok));
    bufp->fullIData(oldp+315,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+316,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    __Vtemp_h05ca32b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h05ca32b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h05ca32b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h05ca32b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+317,(__Vtemp_h05ca32b7__0),128);
    __Vtemp_h05ca16ea__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h05ca16ea__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h05ca16ea__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h05ca16ea__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+321,(__Vtemp_h05ca16ea__0),128);
    __Vtemp_h05df531f__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h05df531f__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h05df531f__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h05df531f__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+325,(__Vtemp_h05df531f__0),128);
    __Vtemp_h05df76e0__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h05df76e0__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h05df76e0__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h05df76e0__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+329,(__Vtemp_h05df76e0__0),128);
    __Vtemp_h05cfa390__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h05cfa390__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h05cfa390__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h05cfa390__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+333,(__Vtemp_h05cfa390__0),128);
    __Vtemp_h05df46cf__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h05df46cf__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h05df46cf__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h05df46cf__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+337,(__Vtemp_h05df46cf__0),128);
    __Vtemp_h05cfb1fd__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h05cfb1fd__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h05cfb1fd__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h05cfb1fd__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+341,(__Vtemp_h05cfb1fd__0),128);
    __Vtemp_h05df55be__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h05df55be__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h05df55be__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h05df55be__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+345,(__Vtemp_h05df55be__0),128);
    bufp->fullWData(oldp+349,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+353,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),4);
    bufp->fullBit(oldp+354,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+355,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+356,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),2);
    bufp->fullWData(oldp+357,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+361,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+362,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+363,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+364,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+370,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+376,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+380,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+381,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+387,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+388,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+393,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+394,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+399,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+400,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+405,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+406,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+408,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+410,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+412,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+414,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+416,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+418,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+420,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+422,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+424,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+426,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+428,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+430,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+432,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+434,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+436,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+438,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+440,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+442,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+444,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+446,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+448,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+450,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+454,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+456,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+460,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+462,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+464,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+466,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+470,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullCData(oldp+472,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__wd_count),8);
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__w_last_ok));
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+476,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+477,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+479,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+481,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+483,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+485,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+489,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+491,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullQData(oldp+493,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__cache_read_data),64);
    bufp->fullBit(oldp+495,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_ready_i));
    bufp->fullBit(oldp+496,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__dcache_valid_o));
    bufp->fullBit(oldp+497,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__mem_r_ready_o));
    bufp->fullBit(oldp+498,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rd_ready));
    bufp->fullBit(oldp+499,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_wr_ready));
    bufp->fullIData(oldp+500,((vlSelf->ysyx_22041412_top__DOT__mem_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+501,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+502,((0xfU & vlSelf->ysyx_22041412_top__DOT__mem_addr)),4);
    bufp->fullWData(oldp+503,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_data),128);
    bufp->fullCData(oldp+507,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_en),4);
    bufp->fullBit(oldp+508,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_en));
    bufp->fullWData(oldp+509,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__bwen),128);
    bufp->fullQData(oldp+513,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rw_strb_64),64);
    bufp->fullBit(oldp+515,((1U & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                   >> 3U))));
    __Vtemp_h282f1a49__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h282f1a49__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h282f1a49__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h282f1a49__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+516,(__Vtemp_h282f1a49__0),128);
    __Vtemp_h282f1690__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h282f1690__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h282f1690__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h282f1690__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+520,(__Vtemp_h282f1690__0),128);
    __Vtemp_h27c01b1c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h27c01b1c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h27c01b1c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h27c01b1c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+524,(__Vtemp_h27c01b1c__0),128);
    __Vtemp_h27bfbedd__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h27bfbedd__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h27bfbedd__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h27bfbedd__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+528,(__Vtemp_h27bfbedd__0),128);
    __Vtemp_h27c03259__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h27c03259__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h27c03259__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h27c03259__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+532,(__Vtemp_h27c03259__0),128);
    __Vtemp_h27bfd69c__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h27bfd69c__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h27bfd69c__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h27bfd69c__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+536,(__Vtemp_h27bfd69c__0),128);
    __Vtemp_h27bfc32d__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h27bfc32d__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h27bfc32d__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h27bfc32d__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+540,(__Vtemp_h27bfc32d__0),128);
    __Vtemp_h27bfe6ee__0[0U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h27bfe6ee__0[1U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h27bfe6ee__0[2U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h27bfe6ee__0[3U] = vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+544,(__Vtemp_h27bfe6ee__0),128);
    bufp->fullWData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_data),128);
    bufp->fullBit(oldp+552,((0x11U < (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                      >> 0x1bU))));
    bufp->fullQData(oldp+553,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_data),64);
    bufp->fullCData(oldp+555,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__rd_state),3);
    bufp->fullCData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wr_state),3);
    bufp->fullCData(oldp+557,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_rodom_cnt),2);
    bufp->fullWData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+562,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen)))));
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
    bufp->fullWData(oldp+564,(__Vtemp_h88b423c3__0),128);
    bufp->fullCData(oldp+568,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__mem_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+569,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+570,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+571,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+578,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__0__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+579,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+586,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+587,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+594,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__1__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+595,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+602,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+603,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+610,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__2__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullWData(oldp+611,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen)))));
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen)))));
    bufp->fullBit(oldp+617,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__cen));
    bufp->fullBit(oldp+618,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram1__DOT__wen));
    bufp->fullWData(oldp+619,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen)))));
    bufp->fullBit(oldp+624,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen)))));
    bufp->fullBit(oldp+625,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__cen));
    bufp->fullBit(oldp+626,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__paper__BRA__3__KET____DOT__cache_ram2__DOT__wen));
    bufp->fullBit(oldp+627,(vlSelf->clk));
    bufp->fullBit(oldp+628,(vlSelf->rst));
    bufp->fullQData(oldp+629,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+631,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+633,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+635,(vlSelf->Ebreak));
    bufp->fullQData(oldp+636,(vlSelf->Icache_L1_miss),64);
    bufp->fullQData(oldp+638,(vlSelf->Icache_L1_hit),64);
    bufp->fullQData(oldp+640,(vlSelf->Dcache_L1_miss),64);
    bufp->fullQData(oldp+642,(vlSelf->Dcache_L1_hit),64);
    bufp->fullBit(oldp+644,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+645,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+646,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+647,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+648,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+649,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+650,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+651,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+652,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+653,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+654,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+655,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+656,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+657,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+658,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+659,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+661,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+662,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+663,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+664,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+665,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+666,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+667,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+668,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+669,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+670,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+671,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+672,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+673,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+674,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+675,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+676,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+677,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+678,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+679,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+680,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+681,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+682,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+683,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+684,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+685,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+687,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+688,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+689,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+690,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+691,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+692,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+693,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+694,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+695,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+696,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+697,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+698,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+699,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+701,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+702,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+703,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+704,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+705,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+706,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+707,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+708,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+709,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+710,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+711,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+712,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+713,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+714,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+715,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+716,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+717,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+719,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+720,(vlSelf->io_slave_rid),4);
    bufp->fullBit(oldp+721,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                             & (IData)(vlSelf->io_master_rvalid))));
    bufp->fullCData(oldp+722,(((IData)(vlSelf->rst)
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
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__if_read_clean)
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
    bufp->fullCData(oldp+723,(((IData)(vlSelf->rst)
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
    bufp->fullIData(oldp+724,(0x40U),32);
    bufp->fullIData(oldp+725,(0x20U),32);
    bufp->fullIData(oldp+726,(4U),32);
    bufp->fullIData(oldp+727,(8U),32);
    bufp->fullIData(oldp+728,(1U),32);
    bufp->fullBit(oldp+729,(vlSelf->ysyx_22041412_top__DOT__ex_mem_load_wait));
    bufp->fullQData(oldp+730,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+732,(0x11U),32);
    bufp->fullIData(oldp+733,(5U),32);
    bufp->fullQData(oldp+734,(0ULL),64);
    bufp->fullIData(oldp+736,(0x45U),32);
    bufp->fullIData(oldp+737,(0x11U),32);
    bufp->fullIData(oldp+738,(0x80U),32);
    bufp->fullIData(oldp+739,(6U),32);
    bufp->fullIData(oldp+740,(3U),32);
    bufp->fullCData(oldp+741,(0U),4);
    bufp->fullBit(oldp+742,(0U));
    bufp->fullCData(oldp+743,(0U),8);
    bufp->fullCData(oldp+744,(3U),3);
    bufp->fullCData(oldp+745,(1U),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+747,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+748,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
    bufp->fullIData(oldp+749,(0x800f4fe0U),32);
    bufp->fullWData(oldp+750,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__wrtie_strb),128);
    bufp->fullIData(oldp+754,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__write_back_addr),28);
    bufp->fullBit(oldp+755,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__bust_rd));
    bufp->fullCData(oldp+756,(vlSelf->ysyx_22041412_top__DOT__u_ysyx_22041412_mem__DOT__u_ysyx_22041412_Dcache__DOT__cache_write_point_l1),2);
}
