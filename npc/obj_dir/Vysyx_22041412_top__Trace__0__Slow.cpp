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
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declQuad(c+557,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+559,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+561,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+563,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+564,"Ebreak", false,-1);
    tracep->declBit(c+565,"io_master_awready", false,-1);
    tracep->declBit(c+566,"io_master_awvalid", false,-1);
    tracep->declBus(c+567,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+568,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+569,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+570,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+571,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+572,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+573,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+574,"io_master_awlock", false,-1);
    tracep->declBus(c+575,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+576,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+577,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+578,"io_master_wready", false,-1);
    tracep->declBit(c+579,"io_master_wvalid", false,-1);
    tracep->declQuad(c+580,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+582,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+583,"io_master_wlast", false,-1);
    tracep->declBus(c+584,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+585,"io_master_bready", false,-1);
    tracep->declBit(c+586,"io_master_bvalid", false,-1);
    tracep->declBus(c+587,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+588,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+589,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+590,"io_master_arready", false,-1);
    tracep->declBit(c+591,"io_master_arvalid", false,-1);
    tracep->declBus(c+592,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+593,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+594,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+595,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+596,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+597,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+598,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+599,"io_master_arlock", false,-1);
    tracep->declBus(c+600,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+601,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+602,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+603,"io_master_rready", false,-1);
    tracep->declBit(c+604,"io_master_rvalid", false,-1);
    tracep->declBus(c+605,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+606,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+608,"io_master_rlast", false,-1);
    tracep->declBus(c+609,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+610,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+611,"io_slave_awready", false,-1);
    tracep->declBit(c+612,"io_slave_awvalid", false,-1);
    tracep->declBus(c+613,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+614,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+615,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+616,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+617,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+618,"io_slave_wready", false,-1);
    tracep->declBit(c+619,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+620,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+622,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+623,"io_slave_wlast", false,-1);
    tracep->declBit(c+624,"io_slave_bready", false,-1);
    tracep->declBit(c+625,"io_slave_bvalid", false,-1);
    tracep->declBus(c+626,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+627,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+628,"io_slave_arready", false,-1);
    tracep->declBit(c+629,"io_slave_arvalid", false,-1);
    tracep->declBus(c+630,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+631,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+632,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+633,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+634,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+635,"io_slave_rready", false,-1);
    tracep->declBit(c+636,"io_slave_rvalid", false,-1);
    tracep->declBus(c+637,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+638,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+640,"io_slave_rlast", false,-1);
    tracep->declBus(c+641,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declQuad(c+557,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+559,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+561,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+563,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+564,"Ebreak", false,-1);
    tracep->declBit(c+565,"io_master_awready", false,-1);
    tracep->declBit(c+566,"io_master_awvalid", false,-1);
    tracep->declBus(c+567,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+568,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+569,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+570,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+571,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+572,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+573,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+574,"io_master_awlock", false,-1);
    tracep->declBus(c+575,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+576,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+577,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+578,"io_master_wready", false,-1);
    tracep->declBit(c+579,"io_master_wvalid", false,-1);
    tracep->declQuad(c+580,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+582,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+583,"io_master_wlast", false,-1);
    tracep->declBus(c+584,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+585,"io_master_bready", false,-1);
    tracep->declBit(c+586,"io_master_bvalid", false,-1);
    tracep->declBus(c+587,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+588,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+589,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+590,"io_master_arready", false,-1);
    tracep->declBit(c+591,"io_master_arvalid", false,-1);
    tracep->declBus(c+592,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+593,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+594,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+595,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+596,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+597,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+598,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+599,"io_master_arlock", false,-1);
    tracep->declBus(c+600,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+601,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+602,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+603,"io_master_rready", false,-1);
    tracep->declBit(c+604,"io_master_rvalid", false,-1);
    tracep->declBus(c+605,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+606,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+608,"io_master_rlast", false,-1);
    tracep->declBus(c+609,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+610,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+611,"io_slave_awready", false,-1);
    tracep->declBit(c+612,"io_slave_awvalid", false,-1);
    tracep->declBus(c+613,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+614,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+615,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+616,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+617,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+618,"io_slave_wready", false,-1);
    tracep->declBit(c+619,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+620,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+622,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+623,"io_slave_wlast", false,-1);
    tracep->declBit(c+624,"io_slave_bready", false,-1);
    tracep->declBit(c+625,"io_slave_bvalid", false,-1);
    tracep->declBus(c+626,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+627,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+628,"io_slave_arready", false,-1);
    tracep->declBit(c+629,"io_slave_arvalid", false,-1);
    tracep->declBus(c+630,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+631,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+632,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+633,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+634,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+635,"io_slave_rready", false,-1);
    tracep->declBit(c+636,"io_slave_rvalid", false,-1);
    tracep->declBus(c+637,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+638,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+640,"io_slave_rlast", false,-1);
    tracep->declBus(c+641,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+645,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+646,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+645,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"r_valid", false,-1);
    tracep->declBit(c+19,"r_ready", false,-1);
    tracep->declBit(c+650,"w_valid", false,-1);
    tracep->declBit(c+651,"w_ready", false,-1);
    tracep->declQuad(c+20,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+652,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+592,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+654,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+22,"r_strb", false,-1, 7,0);
    tracep->declBus(c+655,"w_strb", false,-1, 7,0);
    tracep->declBus(c+596,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+656,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+23,"r_last_o", false,-1);
    tracep->declBit(c+657,"w_last_o", false,-1);
    tracep->declBit(c+24,"if_ar_valid", false,-1);
    tracep->declBit(c+25,"if_ar_ready", false,-1);
    tracep->declBus(c+26,"if_ar_data", false,-1, 31,0);
    tracep->declBus(c+27,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+650,"mem_rw_valid", false,-1);
    tracep->declBit(c+28,"mem_rw_ready", false,-1);
    tracep->declBit(c+658,"mem_rw_wen", false,-1);
    tracep->declQuad(c+659,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+652,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+654,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+656,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+655,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+29,"icache_ar_valid", false,-1);
    tracep->declBit(c+30,"icache_ar_ready", false,-1);
    tracep->declQuad(c+31,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+33,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+34,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+35,"icache_last_i", false,-1);
    tracep->declBus(c+36,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+37,"if_pc", false,-1, 63,0);
    tracep->declBit(c+39,"if_ready_o", false,-1);
    tracep->declBit(c+40,"if_jr_ready", false,-1);
    tracep->declBus(c+41,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+42,"id_pc", false,-1, 63,0);
    tracep->declBus(c+44,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+45,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+46,"id_mul_en", false,-1);
    tracep->declQuad(c+47,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+49,"id_func3", false,-1, 2,0);
    tracep->declBit(c+50,"id_func7", false,-1);
    tracep->declBus(c+51,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+52,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+53,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+54,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+55,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+57,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+59,"id_vaild_o", false,-1);
    tracep->declBit(c+60,"id_ready_o", false,-1);
    tracep->declBit(c+61,"csr_jar_en", false,-1);
    tracep->declBus(c+62,"csr", false,-1, 11,0);
    tracep->declBus(c+63,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+64,"id_csr_en", false,-1);
    tracep->declBus(c+65,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+66,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declBus(c+67,"ex_imm", false,-1, 31,0);
    tracep->declQuad(c+68,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+70,"ex_mul_en", false,-1);
    tracep->declQuad(c+71,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+73,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+75,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+77,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+78,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+79,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+80,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+81,"ex_func7", false,-1);
    tracep->declBus(c+82,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+83,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+85,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+87,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+89,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+91,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+93,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+71,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+95,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+96,"ex_csr_en", false,-1);
    tracep->declBus(c+97,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+98,"ex_wait", false,-1);
    tracep->declBit(c+99,"alu_ready_o", false,-1);
    tracep->declBit(c+59,"ex_valid_o", false,-1);
    tracep->declBit(c+100,"ex_ready_o", false,-1);
    tracep->declBit(c+101,"csr_ready_o", false,-1);
    tracep->declBit(c+102,"csr_stall", false,-1);
    tracep->declBus(c+103,"mem_imm", false,-1, 31,0);
    tracep->declBus(c+104,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+105,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+106,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+107,"mem_rw_type", false,-1);
    tracep->declBit(c+108,"mem_ram_en", false,-1);
    tracep->declBit(c+109,"mem_reg_en", false,-1);
    tracep->declQuad(c+110,"mem_addr", false,-1, 63,0);
    tracep->declQuad(c+112,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+114,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+116,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+118,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+661,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+120,"mem_res", false,-1, 63,0);
    tracep->declBit(c+122,"mem_csr_jar_en", false,-1);
    tracep->declQuad(c+123,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+125,"mem_valid_o", false,-1);
    tracep->declBit(c+126,"sram_ready_o", false,-1);
    tracep->declBit(c+127,"wb_reg_en", false,-1);
    tracep->declBus(c+128,"wb_imm", false,-1, 31,0);
    tracep->declBus(c+129,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+130,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+132,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+134,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+136,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+138,"wb_opcode", false,-1, 6,0);
    tracep->declBit(c+139,"wb_csr_jar_en", false,-1);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declQuad(c+71,"scr1", false,-1, 63,0);
    tracep->declQuad(c+73,"scr2", false,-1, 63,0);
    tracep->declQuad(c+68,"imm", false,-1, 63,0);
    tracep->declBus(c+82,"opcode", false,-1, 6,0);
    tracep->declBus(c+80,"func3", false,-1, 2,0);
    tracep->declBit(c+81,"func7", false,-1);
    tracep->declBit(c+70,"mul_en", false,-1);
    tracep->declBit(c+60,"ready_i", false,-1);
    tracep->declBit(c+59,"valid_i", false,-1);
    tracep->declBit(c+99,"ready_o", false,-1);
    tracep->declQuad(c+91,"result", false,-1, 63,0);
    tracep->declBus(c+140,"Mode", false,-1, 4,0);
    tracep->declQuad(c+71,"AU", false,-1, 63,0);
    tracep->declQuad(c+73,"BU", false,-1, 63,0);
    tracep->declQuad(c+141,"AY", false,-1, 63,0);
    tracep->declQuad(c+143,"BY", false,-1, 63,0);
    tracep->declBit(c+145,"mul_ready_o", false,-1);
    tracep->declQuad(c+146,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+148,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+91,"Alusu", false,-1, 63,0);
    tracep->declBit(c+150,"rv64i_en", false,-1);
    tracep->declBit(c+151,"rv64r_en", false,-1);
    tracep->declQuad(c+71,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+73,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+663,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+664,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+146,"out", false,-1, 63,0);
    tracep->declBus(c+140,"key", false,-1, 4,0);
    tracep->declQuad(c+665,"default_out", false,-1, 63,0);
    tracep->declArray(c+152,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+663,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+664,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+649,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+146,"out", false,-1, 63,0);
    tracep->declBus(c+140,"key", false,-1, 4,0);
    tracep->declQuad(c+665,"default_out", false,-1, 63,0);
    tracep->declArray(c+152,"lut", false,-1, 1172,0);
    tracep->declBus(c+667,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+189+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+240+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+274,"lut_out", false,-1, 63,0);
    tracep->declBit(c+276,"hit", false,-1);
    tracep->declBus(c+668,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+70,"en", false,-1);
    tracep->declQuad(c+71,"rsA", false,-1, 63,0);
    tracep->declQuad(c+73,"rsB", false,-1, 63,0);
    tracep->declBus(c+80,"func3", false,-1, 2,0);
    tracep->declBit(c+151,"rv64_en", false,-1);
    tracep->declBit(c+60,"ready_i", false,-1);
    tracep->declBit(c+145,"ready_o", false,-1);
    tracep->declQuad(c+148,"result", false,-1, 63,0);
    tracep->declBus(c+277,"rsAW", false,-1, 31,0);
    tracep->declBus(c+278,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+148,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+41,"instr", false,-1, 31,0);
    tracep->declBus(c+54,"opcode", false,-1, 6,0);
    tracep->declBus(c+49,"func3", false,-1, 2,0);
    tracep->declBit(c+50,"func7", false,-1);
    tracep->declBus(c+51,"Rs1", false,-1, 4,0);
    tracep->declBus(c+52,"Rs2", false,-1, 4,0);
    tracep->declBus(c+53,"Rd", false,-1, 4,0);
    tracep->declQuad(c+47,"imme", false,-1, 63,0);
    tracep->declBus(c+44,"V1Type", false,-1, 1,0);
    tracep->declBus(c+45,"V2Type", false,-1, 1,0);
    tracep->declBit(c+46,"Mul_en", false,-1);
    tracep->declBit(c+279,"I_type", false,-1);
    tracep->declBit(c+280,"U_type", false,-1);
    tracep->declBit(c+281,"J_type", false,-1);
    tracep->declBit(c+282,"B_type", false,-1);
    tracep->declBit(c+283,"S_type", false,-1);
    tracep->declBit(c+284,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declQuad(c+37,"pc", false,-1, 63,0);
    tracep->declQuad(c+116,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+36,"imm_data", false,-1, 31,0);
    tracep->declBit(c+40,"jarl_rady", false,-1);
    tracep->declBit(c+59,"valid_i", false,-1);
    tracep->declBit(c+39,"ready_o", false,-1);
    tracep->declBit(c+25,"ready_i", false,-1);
    tracep->declBit(c+24,"valid_o", false,-1);
    tracep->declBus(c+26,"r_data_i", false,-1, 31,0);
    tracep->declBus(c+27,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+285,"state", false,-1, 2,0);
    tracep->declBit(c+286,"jar", false,-1);
    tracep->declBit(c+287,"jal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declBus(c+27,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+24,"cpu_valid", false,-1);
    tracep->declBus(c+26,"cpu_read_data", false,-1, 31,0);
    tracep->declBit(c+25,"cpu_ready", false,-1);
    tracep->declBit(c+30,"axi_ready_i", false,-1);
    tracep->declBit(c+29,"axi_valid_o", false,-1);
    tracep->declBit(c+35,"axi_r_last_i", false,-1);
    tracep->declBus(c+34,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+31,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+33,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+288,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+289,"cache_index", false,-1, 6,0);
    tracep->declBus(c+290,"cache_offset", false,-1, 3,0);
    tracep->declBus(c+291,"cache_tag_last", false,-1, 20,0);
    tracep->declBus(c+292,"cache_index_last", false,-1, 6,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+293,"[0]", false,-1, 127,0);
    tracep->declArray(c+297,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+301,"[0]", false,-1, 127,0);
    tracep->declArray(c+305,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+309,"[0]", false,-1, 127,0);
    tracep->declArray(c+313,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+317,"[0]", false,-1, 127,0);
    tracep->declArray(c+321,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+325,"[0]", false,-1, 127,0);
    tracep->declArray(c+329,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+333,"[0]", false,-1, 127,0);
    tracep->declArray(c+337,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+341,"[0]", false,-1, 127,0);
    tracep->declArray(c+345,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+349,"[0]", false,-1, 127,0);
    tracep->declArray(c+353,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+357,"read_data", false,-1, 127,0);
    tracep->declArray(c+361,"write_data", false,-1, 127,0);
    tracep->declBus(c+365,"write_en", false,-1, 7,0);
    tracep->declBit(c+366,"hit", false,-1);
    tracep->declBit(c+669,"hit_p1", false,-1);
    tracep->declBus(c+367,"tag_v", false,-1, 7,0);
    tracep->declBit(c+368,"bust_num", false,-1);
    tracep->declBus(c+369,"state", false,-1, 2,0);
    tracep->declBus(c+642,"next_state", false,-1, 2,0);
    tracep->declBus(c+370,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+371,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+375,"CEN", false,-1);
    tracep->declBit(c+376,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+378,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+382,"CEN", false,-1);
    tracep->declBit(c+383,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+384,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+388,"CEN", false,-1);
    tracep->declBit(c+389,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+390,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+394,"CEN", false,-1);
    tracep->declBit(c+395,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+396,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+400,"CEN", false,-1);
    tracep->declBit(c+401,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+402,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+406,"CEN", false,-1);
    tracep->declBit(c+407,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+408,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+412,"CEN", false,-1);
    tracep->declBit(c+413,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+414,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+418,"CEN", false,-1);
    tracep->declBit(c+419,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+420,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+424,"CEN", false,-1);
    tracep->declBit(c+425,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+426,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+430,"CEN", false,-1);
    tracep->declBit(c+431,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+432,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+436,"CEN", false,-1);
    tracep->declBit(c+437,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+438,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+442,"CEN", false,-1);
    tracep->declBit(c+443,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+444,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+448,"CEN", false,-1);
    tracep->declBit(c+449,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+450,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+454,"CEN", false,-1);
    tracep->declBit(c+455,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+456,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+460,"CEN", false,-1);
    tracep->declBit(c+461,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+670,"Bits", false,-1, 31,0);
    tracep->declBus(c+645,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+671,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+462,"Q", false,-1, 127,0);
    tracep->declBit(c+555,"CLK", false,-1);
    tracep->declBit(c+466,"CEN", false,-1);
    tracep->declBit(c+467,"WEN", false,-1);
    tracep->declBus(c+377,"A", false,-1, 5,0);
    tracep->declArray(c+361,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+645,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+672,"DATA_DEPTH", false,-1, 31,0);
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBus(c+106,"func3", false,-1, 2,0);
    tracep->declQuad(c+110,"addr", false,-1, 63,0);
    tracep->declQuad(c+112,"wdata", false,-1, 63,0);
    tracep->declBit(c+107,"wen", false,-1);
    tracep->declBit(c+100,"ready_i", false,-1);
    tracep->declBit(c+108,"valid_i", false,-1);
    tracep->declBit(c+126,"ready_o", false,-1);
    tracep->declQuad(c+123,"rdata", false,-1, 63,0);
    tracep->declQuad(c+468,"sram_data_r", false,-1, 63,0);
    tracep->declBus(c+470,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBus(c+51,"Ra", false,-1, 4,0);
    tracep->declBus(c+52,"Rb", false,-1, 4,0);
    tracep->declBus(c+129,"Rw", false,-1, 4,0);
    tracep->declBit(c+127,"Wen", false,-1);
    tracep->declQuad(c+55,"BusA", false,-1, 63,0);
    tracep->declQuad(c+57,"BusB", false,-1, 63,0);
    tracep->declQuad(c+132,"BusW", false,-1, 63,0);
    tracep->declBit(c+556,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+471+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+535,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+645,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+646,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+650,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+651,"w_ready_o", false,-1);
    tracep->declQuad(c+20,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+652,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+654,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+592,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+655,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+22,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+596,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+656,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+23,"r_last_o", false,-1);
    tracep->declBit(c+657,"w_last_o", false,-1);
    tracep->declBit(c+565,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+566,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+567,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+568,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+569,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+570,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+571,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+572,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+573,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+574,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+575,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+576,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+577,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+578,"axi_w_ready_i", false,-1);
    tracep->declBit(c+579,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+580,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+582,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+583,"axi_w_last_o", false,-1);
    tracep->declBus(c+584,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+585,"axi_b_ready_o", false,-1);
    tracep->declBit(c+586,"axi_b_valid_i", false,-1);
    tracep->declBus(c+587,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+588,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+589,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+590,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+591,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+592,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+593,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+594,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+595,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+596,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+597,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+598,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+599,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+600,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+601,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+602,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+603,"axi_r_ready_o", false,-1);
    tracep->declBit(c+604,"axi_r_valid_i", false,-1);
    tracep->declBus(c+605,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+606,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+608,"axi_r_last_i", false,-1);
    tracep->declBus(c+609,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+610,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+673,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+674,"axi_id", false,-1, 3,0);
    tracep->declBus(c+675,"axi_user", false,-1, 0,0);
    tracep->declBus(c+676,"axi_len", false,-1, 7,0);
    tracep->declBus(c+677,"axi_size", false,-1, 2,0);
    tracep->declBit(c+536,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+645,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+646,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+647,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+648,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+649,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declBit(c+29,"if_ar_valid", false,-1);
    tracep->declBit(c+30,"if_ar_ready", false,-1);
    tracep->declQuad(c+31,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+33,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+34,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+35,"if_last_i", false,-1);
    tracep->declBit(c+650,"mem_rw_valid", false,-1);
    tracep->declBit(c+28,"mem_rw_ready", false,-1);
    tracep->declBit(c+658,"mem_rw_wen", false,-1);
    tracep->declQuad(c+659,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+652,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+654,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+656,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+655,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+678,"mem_last_i", false,-1);
    tracep->declBit(c+18,"r_valid_i", false,-1);
    tracep->declBit(c+650,"w_valid_i", false,-1);
    tracep->declBit(c+19,"r_ready_o", false,-1);
    tracep->declBit(c+651,"w_ready_o", false,-1);
    tracep->declQuad(c+20,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+652,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+654,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+592,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+655,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+22,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+596,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+656,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+23,"r_last_i", false,-1);
    tracep->declBit(c+657,"w_last_i", false,-1);
    tracep->declBus(c+537,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+643,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+538,"rd_state", false,-1, 1,0);
    tracep->declBus(c+644,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+679,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+680,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+681,"wr_state", false,-1, 1,0);
    tracep->declBus(c+682,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+555,"clk", false,-1);
    tracep->declBit(c+556,"rst", false,-1);
    tracep->declBit(c+96,"en", false,-1);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->declBus(c+97,"addr", false,-1, 2,0);
    tracep->declBus(c+80,"func3", false,-1, 2,0);
    tracep->declQuad(c+71,"data_i", false,-1, 63,0);
    tracep->declQuad(c+93,"data_o", false,-1, 63,0);
    tracep->declBit(c+101,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+539+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+93,"data_r", false,-1, 63,0);
    tracep->declQuad(c+551,"data_w", false,-1, 63,0);
    tracep->declQuad(c+553,"data", false,-1, 63,0);
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
    bufp->fullQData(oldp+20,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
    bufp->fullCData(oldp+22,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                               ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                               : 0xffU)),8);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullIData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+28,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                   ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                   : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullIData(oldp+36,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullQData(oldp+42,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                            & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                               >> 0x19U))));
    bufp->fullQData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+49,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+50,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullCData(oldp+53,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                               ? 0U : ((0x63U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                   >> 7U))))),5);
    bufp->fullCData(oldp+54,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullQData(oldp+55,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                               ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                              [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_22041412_top__DOT__id_vaild_o));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+61,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                            & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                               | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+62,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+64,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
    bufp->fullQData(oldp+68,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullCData(oldp+82,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+85,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                               ? vlSelf->ysyx_22041412_top__DOT__id_pc
                               : ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
                                   ? (QData)((IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                   : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type)) 
                                       & (((IData)(vlSelf->ysyx_22041412_top__DOT__ex_rw) 
                                           == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra)) 
                                          & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h677fa55c__0)))
                                       ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                       : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5f9b0d0d__0))
                                           ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                           : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h5f9b0d0d__0) 
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
                                                            & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hbceeb899__0)))))
                                                   ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                                                   [vlSelf->ysyx_22041412_top__DOT__id_Ra])))))))),64);
    bufp->fullQData(oldp+87,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                               ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                               : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0))
                                   ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                   : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                       & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0))
                                       ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                       : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0) 
                                           & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                           ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                           : (((0U 
                                                == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                               & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0))
                                               ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                               : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
    bufp->fullQData(oldp+89,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
                               ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                               : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0))
                                   ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                   : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0) 
                                       & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h83dd9687__0))
                                       ? vlSelf->ysyx_22041412_top__DOT__mem_rdata
                                       : ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0)
                                           ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                           : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
    bufp->fullQData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hced1f610__0) 
                            & ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h23fa0458__0) 
                               & ((0U != (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw)) 
                                  & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__sram_ready_o)) 
                                     & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_type)) 
                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))))))));
    bufp->fullBit(oldp+99,((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                  | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o) 
                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))))));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_22041412_top__DOT__ex_ready_o));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullBit(oldp+102,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_ready_o)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
    bufp->fullIData(oldp+103,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
    bufp->fullCData(oldp+104,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+105,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+107,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullQData(oldp+110,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
    bufp->fullQData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
    bufp->fullQData(oldp+123,(vlSelf->ysyx_22041412_top__DOT__mem_rdata),64);
    bufp->fullBit(oldp+125,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_22041412_top__DOT__sram_ready_o));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullIData(oldp+128,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullBit(oldp+139,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
    bufp->fullCData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullBit(oldp+145,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+150,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+151,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+152,(__Vtemp_he331c0ba__0),1173);
    bufp->fullWData(oldp+189,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+192,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+195,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+198,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+201,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+204,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+250,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+264,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+268,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+276,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+277,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+278,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+279,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+280,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+281,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+282,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+283,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+284,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+285,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullBit(oldp+286,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+287,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data))));
    bufp->fullIData(oldp+288,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+289,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+290,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_tag_last),21);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_index_last),7);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+293,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+297,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+301,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+305,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+309,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+313,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+317,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+321,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+325,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+329,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+333,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+337,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+341,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+345,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+349,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+353,(__Vtemp_h51a728c5__0),128);
    bufp->fullWData(oldp+357,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    bufp->fullWData(oldp+361,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullCData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en),8);
    bufp->fullBit(oldp+366,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    bufp->fullCData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullBit(oldp+368,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullWData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+375,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+376,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullCData(oldp+377,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullWData(oldp+378,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+383,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+384,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+388,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+389,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+390,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+394,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+395,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+400,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+401,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+402,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+406,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+407,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+408,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+412,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+413,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+414,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+418,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+419,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+420,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+424,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+425,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+426,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+430,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+431,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+432,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+436,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+437,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+438,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+442,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+443,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+444,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+448,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+449,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+450,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+454,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+455,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullWData(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullBit(oldp+460,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullWData(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+466,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullQData(oldp+468,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
    bufp->fullCData(oldp+470,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xfU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                   ? 0xffU
                                                   : 0U))))),8);
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
    bufp->fullBit(oldp+536,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+537,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+538,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullQData(oldp+539,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+541,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+543,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+547,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullQData(oldp+551,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+553,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullBit(oldp+555,(vlSelf->clk));
    bufp->fullBit(oldp+556,(vlSelf->rst));
    bufp->fullQData(oldp+557,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+559,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+561,(vlSelf->pip_mem_pc),64);
    bufp->fullIData(oldp+563,(vlSelf->pip_imm),32);
    bufp->fullBit(oldp+564,(vlSelf->Ebreak));
    bufp->fullBit(oldp+565,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+566,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+567,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+568,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+569,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+570,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+571,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+572,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+573,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+574,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+575,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+576,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+577,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+578,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+579,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+580,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+582,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+583,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+584,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+585,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+586,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+587,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+588,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+589,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+590,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+591,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+592,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+593,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+594,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+595,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+596,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+597,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+598,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+599,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+600,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+601,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+602,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+603,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+604,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+605,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+606,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+608,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+609,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+610,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+611,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+612,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+613,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+614,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+615,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+616,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+617,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+618,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+619,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+620,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+622,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+623,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+624,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+625,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+626,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+627,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+628,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+629,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+630,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+631,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+632,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+633,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+634,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+635,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+636,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+637,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+638,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+640,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+641,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+642,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+643,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+644,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullIData(oldp+645,(0x40U),32);
    bufp->fullIData(oldp+646,(0x20U),32);
    bufp->fullIData(oldp+647,(4U),32);
    bufp->fullIData(oldp+648,(8U),32);
    bufp->fullIData(oldp+649,(1U),32);
    bufp->fullBit(oldp+650,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+651,(vlSelf->ysyx_22041412_top__DOT__w_ready));
    bufp->fullQData(oldp+652,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+654,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+655,(vlSelf->ysyx_22041412_top__DOT__mem_rw_size),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullBit(oldp+657,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullBit(oldp+658,(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen));
    bufp->fullQData(oldp+659,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullQData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+663,(0x11U),32);
    bufp->fullIData(oldp+664,(5U),32);
    bufp->fullQData(oldp+665,(0ULL),64);
    bufp->fullIData(oldp+667,(0x45U),32);
    bufp->fullIData(oldp+668,(0x11U),32);
    bufp->fullBit(oldp+669,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit_p1));
    bufp->fullIData(oldp+670,(0x80U),32);
    bufp->fullIData(oldp+671,(6U),32);
    bufp->fullIData(oldp+672,(0x10000U),32);
    bufp->fullIData(oldp+673,(3U),32);
    bufp->fullCData(oldp+674,(0U),4);
    bufp->fullBit(oldp+675,(0U));
    bufp->fullCData(oldp+676,(0U),8);
    bufp->fullCData(oldp+677,(3U),3);
    bufp->fullBit(oldp+678,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i));
    bufp->fullCData(oldp+679,(1U),3);
    bufp->fullCData(oldp+680,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+681,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+682,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
}
