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
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declQuad(c+559,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+561,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+563,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+565,"Ebreak", false,-1);
    tracep->declBit(c+566,"io_master_awready", false,-1);
    tracep->declBit(c+567,"io_master_awvalid", false,-1);
    tracep->declBus(c+568,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+569,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+570,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+571,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+572,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+573,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+574,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+575,"io_master_awlock", false,-1);
    tracep->declBus(c+576,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+577,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+578,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+579,"io_master_wready", false,-1);
    tracep->declBit(c+580,"io_master_wvalid", false,-1);
    tracep->declQuad(c+581,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+583,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+584,"io_master_wlast", false,-1);
    tracep->declBus(c+585,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+586,"io_master_bready", false,-1);
    tracep->declBit(c+587,"io_master_bvalid", false,-1);
    tracep->declBus(c+588,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+589,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+590,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+591,"io_master_arready", false,-1);
    tracep->declBit(c+592,"io_master_arvalid", false,-1);
    tracep->declBus(c+593,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+594,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+595,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+596,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+597,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+598,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+599,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+600,"io_master_arlock", false,-1);
    tracep->declBus(c+601,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+602,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+603,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+604,"io_master_rready", false,-1);
    tracep->declBit(c+605,"io_master_rvalid", false,-1);
    tracep->declBus(c+606,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+607,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+609,"io_master_rlast", false,-1);
    tracep->declBus(c+610,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+611,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+612,"io_slave_awready", false,-1);
    tracep->declBit(c+613,"io_slave_awvalid", false,-1);
    tracep->declBus(c+614,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+615,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+616,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+617,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+618,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+619,"io_slave_wready", false,-1);
    tracep->declBit(c+620,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+621,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+623,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+624,"io_slave_wlast", false,-1);
    tracep->declBit(c+625,"io_slave_bready", false,-1);
    tracep->declBit(c+626,"io_slave_bvalid", false,-1);
    tracep->declBus(c+627,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+628,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+629,"io_slave_arready", false,-1);
    tracep->declBit(c+630,"io_slave_arvalid", false,-1);
    tracep->declBus(c+631,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+632,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+633,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+634,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+635,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+636,"io_slave_rready", false,-1);
    tracep->declBit(c+637,"io_slave_rvalid", false,-1);
    tracep->declBus(c+638,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+639,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+641,"io_slave_rlast", false,-1);
    tracep->declBus(c+642,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declQuad(c+559,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+561,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+563,"pip_mem_pc", false,-1, 63,0);
    tracep->declBit(c+565,"Ebreak", false,-1);
    tracep->declBit(c+566,"io_master_awready", false,-1);
    tracep->declBit(c+567,"io_master_awvalid", false,-1);
    tracep->declBus(c+568,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+569,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+570,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+571,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+572,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+573,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+574,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+575,"io_master_awlock", false,-1);
    tracep->declBus(c+576,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+577,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+578,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+579,"io_master_wready", false,-1);
    tracep->declBit(c+580,"io_master_wvalid", false,-1);
    tracep->declQuad(c+581,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+583,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+584,"io_master_wlast", false,-1);
    tracep->declBus(c+585,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+586,"io_master_bready", false,-1);
    tracep->declBit(c+587,"io_master_bvalid", false,-1);
    tracep->declBus(c+588,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+589,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+590,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+591,"io_master_arready", false,-1);
    tracep->declBit(c+592,"io_master_arvalid", false,-1);
    tracep->declBus(c+593,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+594,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+595,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+596,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+597,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+598,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+599,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+600,"io_master_arlock", false,-1);
    tracep->declBus(c+601,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+602,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+603,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+604,"io_master_rready", false,-1);
    tracep->declBit(c+605,"io_master_rvalid", false,-1);
    tracep->declBus(c+606,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+607,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+609,"io_master_rlast", false,-1);
    tracep->declBus(c+610,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+611,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+612,"io_slave_awready", false,-1);
    tracep->declBit(c+613,"io_slave_awvalid", false,-1);
    tracep->declBus(c+614,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+615,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+616,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+617,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+618,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+619,"io_slave_wready", false,-1);
    tracep->declBit(c+620,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+621,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+623,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+624,"io_slave_wlast", false,-1);
    tracep->declBit(c+625,"io_slave_bready", false,-1);
    tracep->declBit(c+626,"io_slave_bvalid", false,-1);
    tracep->declBus(c+627,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+628,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+629,"io_slave_arready", false,-1);
    tracep->declBit(c+630,"io_slave_arvalid", false,-1);
    tracep->declBus(c+631,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+632,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+633,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+634,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+635,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+636,"io_slave_rready", false,-1);
    tracep->declBit(c+637,"io_slave_rvalid", false,-1);
    tracep->declBus(c+638,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+639,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+641,"io_slave_rlast", false,-1);
    tracep->declBus(c+642,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+646,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+650,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+646,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"r_valid", false,-1);
    tracep->declBit(c+19,"r_ready", false,-1);
    tracep->declBit(c+20,"w_valid", false,-1);
    tracep->declBit(c+21,"w_ready", false,-1);
    tracep->declQuad(c+22,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+581,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+593,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+568,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+24,"r_strb", false,-1, 7,0);
    tracep->declBus(c+583,"w_strb", false,-1, 7,0);
    tracep->declBus(c+597,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_o", false,-1);
    tracep->declBit(c+651,"w_last_o", false,-1);
    tracep->declBit(c+27,"if_ar_valid", false,-1);
    tracep->declBit(c+28,"if_ar_ready", false,-1);
    tracep->declBus(c+29,"if_ar_data", false,-1, 31,0);
    tracep->declBus(c+30,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+31,"mem_rw_valid", false,-1);
    tracep->declBit(c+32,"mem_rw_ready", false,-1);
    tracep->declBit(c+33,"mem_rw_wen", false,-1);
    tracep->declQuad(c+34,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+36,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+38,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+652,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+39,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+40,"icache_ar_valid", false,-1);
    tracep->declBit(c+41,"icache_ar_ready", false,-1);
    tracep->declQuad(c+42,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+44,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+45,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+46,"icache_last_i", false,-1);
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
    tracep->declBit(c+109,"alu_ready_o", false,-1);
    tracep->declBit(c+70,"ex_valid_o", false,-1);
    tracep->declBit(c+110,"ex_ready_o", false,-1);
    tracep->declBit(c+111,"csr_ready_o", false,-1);
    tracep->declBus(c+112,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+113,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+114,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+33,"mem_rw_type", false,-1);
    tracep->declBit(c+115,"mem_ram_en", false,-1);
    tracep->declBit(c+116,"mem_reg_en", false,-1);
    tracep->declBus(c+117,"mem_addr", false,-1, 31,0);
    tracep->declQuad(c+118,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+120,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+122,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+124,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+653,"mem_temp", false,-1, 63,0);
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
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declQuad(c+81,"scr1", false,-1, 63,0);
    tracep->declQuad(c+83,"scr2", false,-1, 63,0);
    tracep->declQuad(c+78,"imm", false,-1, 63,0);
    tracep->declBus(c+92,"opcode", false,-1, 6,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
    tracep->declBit(c+91,"func7", false,-1);
    tracep->declBit(c+80,"mul_en", false,-1);
    tracep->declBit(c+71,"ready_i", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+109,"ready_o", false,-1);
    tracep->declQuad(c+101,"result", false,-1, 63,0);
    tracep->declBus(c+143,"Mode", false,-1, 4,0);
    tracep->declQuad(c+81,"AU", false,-1, 63,0);
    tracep->declQuad(c+83,"BU", false,-1, 63,0);
    tracep->declQuad(c+144,"AY", false,-1, 63,0);
    tracep->declQuad(c+146,"BY", false,-1, 63,0);
    tracep->declBit(c+148,"mul_ready_o", false,-1);
    tracep->declQuad(c+149,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+151,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+101,"Alusu", false,-1, 63,0);
    tracep->declBit(c+153,"rv64i_en", false,-1);
    tracep->declBit(c+154,"rv64r_en", false,-1);
    tracep->declQuad(c+81,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+83,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+655,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+656,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+149,"out", false,-1, 63,0);
    tracep->declBus(c+143,"key", false,-1, 4,0);
    tracep->declQuad(c+657,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+655,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+656,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+650,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+149,"out", false,-1, 63,0);
    tracep->declBus(c+143,"key", false,-1, 4,0);
    tracep->declQuad(c+657,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 1172,0);
    tracep->declBus(c+659,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+660,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+80,"en", false,-1);
    tracep->declQuad(c+81,"rsA", false,-1, 63,0);
    tracep->declQuad(c+83,"rsB", false,-1, 63,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
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
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declQuad(c+48,"pc", false,-1, 63,0);
    tracep->declQuad(c+122,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+47,"imm_data", false,-1, 31,0);
    tracep->declBit(c+51,"jarl_rady", false,-1);
    tracep->declBit(c+70,"valid_i", false,-1);
    tracep->declBit(c+50,"ready_o", false,-1);
    tracep->declBit(c+28,"ready_i", false,-1);
    tracep->declBit(c+27,"valid_o", false,-1);
    tracep->declBus(c+29,"r_data_i", false,-1, 31,0);
    tracep->declBus(c+30,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+288,"state", false,-1, 2,0);
    tracep->declBit(c+289,"jar", false,-1);
    tracep->declBit(c+290,"jal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declBus(c+30,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+27,"cpu_valid", false,-1);
    tracep->declBus(c+29,"cpu_read_data", false,-1, 31,0);
    tracep->declBit(c+28,"cpu_ready", false,-1);
    tracep->declBit(c+41,"axi_ready_i", false,-1);
    tracep->declBit(c+40,"axi_valid_o", false,-1);
    tracep->declBit(c+46,"axi_r_last_i", false,-1);
    tracep->declBus(c+45,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+42,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+44,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+291,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+292,"cache_index", false,-1, 6,0);
    tracep->declBus(c+293,"cache_offset", false,-1, 3,0);
    tracep->declBus(c+294,"cache_tag_last", false,-1, 20,0);
    tracep->declBus(c+295,"cache_index_last", false,-1, 6,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+296,"[0]", false,-1, 127,0);
    tracep->declArray(c+300,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+304,"[0]", false,-1, 127,0);
    tracep->declArray(c+308,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+312,"[0]", false,-1, 127,0);
    tracep->declArray(c+316,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+320,"[0]", false,-1, 127,0);
    tracep->declArray(c+324,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+328,"[0]", false,-1, 127,0);
    tracep->declArray(c+332,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+336,"[0]", false,-1, 127,0);
    tracep->declArray(c+340,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+344,"[0]", false,-1, 127,0);
    tracep->declArray(c+348,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+352,"[0]", false,-1, 127,0);
    tracep->declArray(c+356,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+360,"read_data", false,-1, 127,0);
    tracep->declArray(c+364,"write_data", false,-1, 127,0);
    tracep->declBus(c+368,"write_en", false,-1, 7,0);
    tracep->declBit(c+369,"hit", false,-1);
    tracep->declBit(c+661,"hit_p1", false,-1);
    tracep->declBus(c+370,"tag_v", false,-1, 7,0);
    tracep->declBit(c+371,"bust_num", false,-1);
    tracep->declBus(c+372,"state", false,-1, 2,0);
    tracep->declBus(c+643,"next_state", false,-1, 2,0);
    tracep->declBus(c+373,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+374,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+378,"CEN", false,-1);
    tracep->declBit(c+379,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+381,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+385,"CEN", false,-1);
    tracep->declBit(c+386,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+387,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+391,"CEN", false,-1);
    tracep->declBit(c+392,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+393,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+397,"CEN", false,-1);
    tracep->declBit(c+398,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+399,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+403,"CEN", false,-1);
    tracep->declBit(c+404,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+405,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+409,"CEN", false,-1);
    tracep->declBit(c+410,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+411,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+415,"CEN", false,-1);
    tracep->declBit(c+416,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+417,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+421,"CEN", false,-1);
    tracep->declBit(c+422,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+423,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+427,"CEN", false,-1);
    tracep->declBit(c+428,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+429,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+433,"CEN", false,-1);
    tracep->declBit(c+434,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+435,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+439,"CEN", false,-1);
    tracep->declBit(c+440,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+441,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+445,"CEN", false,-1);
    tracep->declBit(c+446,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+447,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+451,"CEN", false,-1);
    tracep->declBit(c+452,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+453,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+457,"CEN", false,-1);
    tracep->declBit(c+458,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+459,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+463,"CEN", false,-1);
    tracep->declBit(c+464,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+662,"Bits", false,-1, 31,0);
    tracep->declBus(c+646,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+663,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+465,"Q", false,-1, 127,0);
    tracep->declBit(c+557,"CLK", false,-1);
    tracep->declBit(c+469,"CEN", false,-1);
    tracep->declBit(c+470,"WEN", false,-1);
    tracep->declBus(c+380,"A", false,-1, 5,0);
    tracep->declArray(c+364,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+647,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+646,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declBus(c+114,"func3", false,-1, 2,0);
    tracep->declBus(c+117,"addr", false,-1, 31,0);
    tracep->declQuad(c+118,"wdata", false,-1, 63,0);
    tracep->declBit(c+33,"wen", false,-1);
    tracep->declBit(c+110,"ex_ready_i", false,-1);
    tracep->declBit(c+115,"mem_valid_i", false,-1);
    tracep->declBit(c+131,"mem_ready_o", false,-1);
    tracep->declQuad(c+128,"r_data_o", false,-1, 63,0);
    tracep->declBit(c+32,"dcache_ready_i", false,-1);
    tracep->declBit(c+31,"dcache_valid_o", false,-1);
    tracep->declBit(c+33,"rw_wen", false,-1);
    tracep->declBus(c+39,"wmask", false,-1, 7,0);
    tracep->declQuad(c+36,"w_data_o", false,-1, 63,0);
    tracep->declBus(c+38,"w_addr_o", false,-1, 31,0);
    tracep->declQuad(c+34,"r_data_i", false,-1, 63,0);
    tracep->declBus(c+38,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+664,"end_flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBus(c+62,"Ra", false,-1, 4,0);
    tracep->declBus(c+63,"Rb", false,-1, 4,0);
    tracep->declBus(c+133,"Rw", false,-1, 4,0);
    tracep->declBit(c+132,"Wen", false,-1);
    tracep->declQuad(c+66,"BusA", false,-1, 63,0);
    tracep->declQuad(c+68,"BusB", false,-1, 63,0);
    tracep->declQuad(c+136,"BusW", false,-1, 63,0);
    tracep->declBit(c+558,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+471+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+535,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+646,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+650,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+581,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+568,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+593,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+583,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+24,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+597,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_o", false,-1);
    tracep->declBit(c+651,"w_last_o", false,-1);
    tracep->declBit(c+566,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+567,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+568,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+569,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+570,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+571,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+572,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+573,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+574,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+575,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+576,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+577,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+578,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+579,"axi_w_ready_i", false,-1);
    tracep->declBit(c+580,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+581,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+583,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+584,"axi_w_last_o", false,-1);
    tracep->declBus(c+585,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+586,"axi_b_ready_o", false,-1);
    tracep->declBit(c+587,"axi_b_valid_i", false,-1);
    tracep->declBus(c+588,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+589,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+590,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+591,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+592,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+593,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+594,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+595,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+596,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+597,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+598,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+599,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+600,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+601,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+602,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+603,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+604,"axi_r_ready_o", false,-1);
    tracep->declBit(c+605,"axi_r_valid_i", false,-1);
    tracep->declBus(c+606,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+607,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+609,"axi_r_last_i", false,-1);
    tracep->declBus(c+610,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+611,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+665,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+666,"axi_id", false,-1, 3,0);
    tracep->declBus(c+667,"axi_user", false,-1, 0,0);
    tracep->declBus(c+668,"axi_len", false,-1, 7,0);
    tracep->declBus(c+669,"axi_size", false,-1, 2,0);
    tracep->declBit(c+536,"axi_aw_valid", false,-1);
    tracep->declBit(c+537,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+646,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+650,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declBit(c+40,"if_ar_valid", false,-1);
    tracep->declBit(c+41,"if_ar_ready", false,-1);
    tracep->declQuad(c+42,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+44,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+45,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+46,"if_last_i", false,-1);
    tracep->declBit(c+31,"mem_rw_valid", false,-1);
    tracep->declBit(c+32,"mem_rw_ready", false,-1);
    tracep->declBit(c+33,"mem_rw_wen", false,-1);
    tracep->declQuad(c+34,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+36,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+38,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+652,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+39,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+670,"mem_last_i", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+20,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+21,"w_ready_o", false,-1);
    tracep->declQuad(c+22,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+581,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+568,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+593,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+583,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+24,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+597,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+25,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+26,"r_last_i", false,-1);
    tracep->declBit(c+651,"w_last_i", false,-1);
    tracep->declBus(c+538,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+644,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+539,"rd_state", false,-1, 1,0);
    tracep->declBus(c+645,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+540,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+671,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+672,"wr_state", false,-1, 1,0);
    tracep->declBus(c+673,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+557,"clk", false,-1);
    tracep->declBit(c+558,"rst", false,-1);
    tracep->declBit(c+106,"en", false,-1);
    tracep->declQuad(c+93,"pc", false,-1, 63,0);
    tracep->declBus(c+107,"addr", false,-1, 2,0);
    tracep->declBus(c+90,"func3", false,-1, 2,0);
    tracep->declQuad(c+81,"data_i", false,-1, 63,0);
    tracep->declQuad(c+103,"data_o", false,-1, 63,0);
    tracep->declBit(c+111,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+541+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+103,"data_r", false,-1, 63,0);
    tracep->declQuad(c+553,"data_w", false,-1, 63,0);
    tracep->declQuad(c+555,"data", false,-1, 63,0);
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
    bufp->fullIData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_22041412_top__DOT__mem_rw_ready));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullQData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullQData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+39,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                               ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                 ? 0xfU
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xffU
                                                  : 0U))))),8);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
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
                                       & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
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
    bufp->fullBit(oldp+108,((((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                              & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0) 
                                 & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0))) 
                             | ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc5912bb2__0) 
                                & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hf5e473dd__0)))));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__alu_ready_o));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullCData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
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
    bufp->fullBit(oldp+289,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+290,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data))));
    bufp->fullIData(oldp+291,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+292,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+293,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last),21);
    bufp->fullCData(oldp+295,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+296,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+300,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+304,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+308,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+312,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+316,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+320,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+324,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+328,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+332,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+336,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+340,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+344,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+348,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+352,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+356,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+360,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    bufp->fullWData(oldp+364,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullBit(oldp+369,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    bufp->fullCData(oldp+370,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullBit(oldp+371,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+372,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+379,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+380,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+385,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+386,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+387,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+393,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+399,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+403,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+404,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+405,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+409,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+410,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+411,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+415,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+416,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+417,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+421,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+422,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+423,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+427,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+428,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+429,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+433,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+434,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+435,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+439,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+440,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+441,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+445,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+446,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+447,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+451,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+452,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+453,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+458,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+459,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+465,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+470,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+471,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+473,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+477,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+479,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+481,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+483,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+485,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+487,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+489,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+491,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+493,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+495,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+497,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+499,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+501,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+503,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+505,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+507,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+509,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+511,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+513,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+515,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+517,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+519,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+521,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+523,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+525,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+527,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+529,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+531,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+533,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullBit(oldp+535,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_aw_valid));
    bufp->fullBit(oldp+537,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+539,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullCData(oldp+540,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_switch),3);
    bufp->fullQData(oldp+541,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+543,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+547,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+551,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+553,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+555,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullBit(oldp+557,(vlSelf->clk));
    bufp->fullBit(oldp+558,(vlSelf->rst));
    bufp->fullQData(oldp+559,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+561,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+563,(vlSelf->pip_mem_pc),64);
    bufp->fullBit(oldp+565,(vlSelf->Ebreak));
    bufp->fullBit(oldp+566,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+567,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+568,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+569,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+570,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+571,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+572,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+573,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+574,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+575,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+576,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+577,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+578,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+579,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+580,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+581,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+583,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+584,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+585,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+586,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+587,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+588,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+589,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+590,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+591,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+592,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+593,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+594,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+595,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+596,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+597,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+598,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+599,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+600,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+601,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+602,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+603,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+604,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+605,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+606,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+607,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+609,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+610,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+611,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+612,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+613,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+614,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+615,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+616,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+617,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+618,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+619,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+620,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+621,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+623,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+624,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+625,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+626,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+627,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+628,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+629,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+630,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+631,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+632,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+633,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+634,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+635,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+636,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+637,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+638,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+639,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+641,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+642,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+643,(((IData)(vlSelf->rst)
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
                                                (((((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid) 
                                                    & (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit)) 
                                                   & (vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last 
                                                      == 
                                                      (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                       >> 0xbU))) 
                                                  & ((IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last) 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                                         >> 4U))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                   ? 2U
                                                   : 0U))
                                                 : 
                                                ((IData)(vlSelf->ysyx_22041412_top__DOT__if_ar_valid)
                                                  ? 1U
                                                  : 0U)))))),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+645,(((IData)(vlSelf->rst)
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
    bufp->fullIData(oldp+646,(0x40U),32);
    bufp->fullIData(oldp+647,(0x20U),32);
    bufp->fullIData(oldp+648,(4U),32);
    bufp->fullIData(oldp+649,(8U),32);
    bufp->fullIData(oldp+650,(1U),32);
    bufp->fullBit(oldp+651,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullCData(oldp+652,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullQData(oldp+653,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+655,(0x11U),32);
    bufp->fullIData(oldp+656,(5U),32);
    bufp->fullQData(oldp+657,(0ULL),64);
    bufp->fullIData(oldp+659,(0x45U),32);
    bufp->fullIData(oldp+660,(0x11U),32);
    bufp->fullBit(oldp+661,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit_p1));
    bufp->fullIData(oldp+662,(0x80U),32);
    bufp->fullIData(oldp+663,(6U),32);
    bufp->fullBit(oldp+664,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__end_flag));
    bufp->fullIData(oldp+665,(3U),32);
    bufp->fullCData(oldp+666,(0U),4);
    bufp->fullBit(oldp+667,(0U));
    bufp->fullCData(oldp+668,(0U),8);
    bufp->fullCData(oldp+669,(3U),3);
    bufp->fullBit(oldp+670,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i));
    bufp->fullCData(oldp+671,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+672,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+673,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
}
