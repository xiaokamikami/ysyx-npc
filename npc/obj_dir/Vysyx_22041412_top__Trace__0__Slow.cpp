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
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declQuad(c+489,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+491,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+493,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+495,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+496,"Ebreak", false,-1);
    tracep->declBit(c+497,"io_master_awready", false,-1);
    tracep->declBit(c+498,"io_master_awvalid", false,-1);
    tracep->declBus(c+499,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+500,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+501,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+502,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+503,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+504,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+505,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+506,"io_master_awlock", false,-1);
    tracep->declBus(c+507,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+508,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+509,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+510,"io_master_wready", false,-1);
    tracep->declBit(c+511,"io_master_wvalid", false,-1);
    tracep->declQuad(c+512,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+514,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+515,"io_master_wlast", false,-1);
    tracep->declBus(c+516,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+517,"io_master_bready", false,-1);
    tracep->declBit(c+518,"io_master_bvalid", false,-1);
    tracep->declBus(c+519,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+520,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+521,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+522,"io_master_arready", false,-1);
    tracep->declBit(c+523,"io_master_arvalid", false,-1);
    tracep->declBus(c+524,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+525,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+526,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+527,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+528,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+529,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+530,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+531,"io_master_arlock", false,-1);
    tracep->declBus(c+532,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+533,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+534,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+535,"io_master_rready", false,-1);
    tracep->declBit(c+536,"io_master_rvalid", false,-1);
    tracep->declBus(c+537,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+538,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+540,"io_master_rlast", false,-1);
    tracep->declBus(c+541,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+542,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+543,"io_slave_awready", false,-1);
    tracep->declBit(c+544,"io_slave_awvalid", false,-1);
    tracep->declBus(c+545,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+546,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+547,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+548,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+549,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+550,"io_slave_wready", false,-1);
    tracep->declBit(c+551,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+552,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+554,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+555,"io_slave_wlast", false,-1);
    tracep->declBit(c+556,"io_slave_bready", false,-1);
    tracep->declBit(c+557,"io_slave_bvalid", false,-1);
    tracep->declBus(c+558,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+559,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+560,"io_slave_arready", false,-1);
    tracep->declBit(c+561,"io_slave_arvalid", false,-1);
    tracep->declBus(c+562,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+563,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+564,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+565,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+566,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+567,"io_slave_rready", false,-1);
    tracep->declBit(c+568,"io_slave_rvalid", false,-1);
    tracep->declBus(c+569,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+570,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+572,"io_slave_rlast", false,-1);
    tracep->declBus(c+573,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declQuad(c+489,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+491,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+493,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+495,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+496,"Ebreak", false,-1);
    tracep->declBit(c+497,"io_master_awready", false,-1);
    tracep->declBit(c+498,"io_master_awvalid", false,-1);
    tracep->declBus(c+499,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+500,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+501,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+502,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+503,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+504,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+505,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+506,"io_master_awlock", false,-1);
    tracep->declBus(c+507,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+508,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+509,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+510,"io_master_wready", false,-1);
    tracep->declBit(c+511,"io_master_wvalid", false,-1);
    tracep->declQuad(c+512,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+514,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+515,"io_master_wlast", false,-1);
    tracep->declBus(c+516,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+517,"io_master_bready", false,-1);
    tracep->declBit(c+518,"io_master_bvalid", false,-1);
    tracep->declBus(c+519,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+520,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+521,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+522,"io_master_arready", false,-1);
    tracep->declBit(c+523,"io_master_arvalid", false,-1);
    tracep->declBus(c+524,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+525,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+526,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+527,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+528,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+529,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+530,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+531,"io_master_arlock", false,-1);
    tracep->declBus(c+532,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+533,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+534,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+535,"io_master_rready", false,-1);
    tracep->declBit(c+536,"io_master_rvalid", false,-1);
    tracep->declBus(c+537,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+538,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+540,"io_master_rlast", false,-1);
    tracep->declBus(c+541,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+542,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+543,"io_slave_awready", false,-1);
    tracep->declBit(c+544,"io_slave_awvalid", false,-1);
    tracep->declBus(c+545,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+546,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+547,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+548,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+549,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+550,"io_slave_wready", false,-1);
    tracep->declBit(c+551,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+552,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+554,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+555,"io_slave_wlast", false,-1);
    tracep->declBit(c+556,"io_slave_bready", false,-1);
    tracep->declBit(c+557,"io_slave_bvalid", false,-1);
    tracep->declBus(c+558,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+559,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+560,"io_slave_arready", false,-1);
    tracep->declBit(c+561,"io_slave_arvalid", false,-1);
    tracep->declBus(c+562,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+563,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+564,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+565,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+566,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+567,"io_slave_rready", false,-1);
    tracep->declBit(c+568,"io_slave_rvalid", false,-1);
    tracep->declBus(c+569,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+570,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+572,"io_slave_rlast", false,-1);
    tracep->declBus(c+573,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+651,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+652,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+653,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+654,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+655,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+651,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+204,"r_valid", false,-1);
    tracep->declBit(c+23,"r_ready", false,-1);
    tracep->declBit(c+656,"w_valid", false,-1);
    tracep->declBit(c+657,"w_ready", false,-1);
    tracep->declQuad(c+24,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+658,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+524,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+660,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+26,"r_strb", false,-1, 7,0);
    tracep->declBus(c+661,"w_strb", false,-1, 7,0);
    tracep->declBus(c+528,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+662,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+27,"r_last_o", false,-1);
    tracep->declBit(c+663,"w_last_o", false,-1);
    tracep->declBit(c+188,"if_ar_valid", false,-1);
    tracep->declBit(c+100,"if_ar_ready", false,-1);
    tracep->declBus(c+474,"if_ar_data", false,-1, 31,0);
    tracep->declBus(c+189,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+656,"mem_rw_valid", false,-1);
    tracep->declBit(c+28,"mem_rw_ready", false,-1);
    tracep->declBit(c+664,"mem_rw_wen", false,-1);
    tracep->declQuad(c+665,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+658,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+660,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+662,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+661,"mem_rw_size", false,-1, 7,0);
    tracep->declBus(c+667,"pip_stall", false,-1, 5,0);
    tracep->declBit(c+668,"pip_rst", false,-1);
    tracep->declBit(c+669,"if_en", false,-1);
    tracep->declBit(c+670,"id_en", false,-1);
    tracep->declBit(c+671,"ex_en", false,-1);
    tracep->declBit(c+672,"mem_en", false,-1);
    tracep->declBit(c+673,"wb_en", false,-1);
    tracep->declBit(c+674,"id_wait", false,-1);
    tracep->declBit(c+484,"ex_stall", false,-1);
    tracep->declBit(c+675,"mul_stall", false,-1);
    tracep->declBit(c+485,"ex_wait", false,-1);
    tracep->declBit(c+676,"mem_wait", false,-1);
    tracep->declBit(c+677,"mem_busy", false,-1);
    tracep->declBit(c+478,"mem_stall", false,-1);
    tracep->declBit(c+205,"icache_ar_valid", false,-1);
    tracep->declBit(c+210,"icache_ar_ready", false,-1);
    tracep->declQuad(c+458,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+29,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+101,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+211,"icache_last_i", false,-1);
    tracep->declBus(c+574,"if_imm", false,-1, 31,0);
    tracep->declQuad(c+575,"if_pc", false,-1, 63,0);
    tracep->declBit(c+577,"if_ready_o", false,-1);
    tracep->declBit(c+486,"id_valid_o", false,-1);
    tracep->declBit(c+110,"if_jr_ready", false,-1);
    tracep->declBus(c+444,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+578,"id_pc", false,-1, 63,0);
    tracep->declBus(c+580,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+581,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+582,"id_mul_en", false,-1);
    tracep->declQuad(c+583,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+445,"id_func3", false,-1, 2,0);
    tracep->declBit(c+446,"id_func7", false,-1);
    tracep->declBus(c+585,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+586,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+447,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+448,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+587,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+589,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+591,"id_ready_o", false,-1);
    tracep->declBit(c+592,"csr_jar_en", false,-1);
    tracep->declBus(c+593,"csr", false,-1, 11,0);
    tracep->declBus(c+594,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+449,"id_csr_en", false,-1);
    tracep->declBus(c+595,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+596,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declBus(c+214,"ex_imm", false,-1, 31,0);
    tracep->declQuad(c+215,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+97,"ex_mul_en", false,-1);
    tracep->declQuad(c+247,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+249,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+251,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+597,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+598,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+599,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+600,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+18,"ex_func7", false,-1);
    tracep->declBus(c+441,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+479,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+601,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+603,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+605,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+607,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+609,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+247,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+217,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+611,"ex_csr_en", false,-1);
    tracep->declBus(c+481,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+612,"ex_vaild_o", false,-1);
    tracep->declBit(c+612,"ex_ready_o", false,-1);
    tracep->declBit(c+482,"csr_ready_o", false,-1);
    tracep->declBit(c+483,"csr_stall", false,-1);
    tracep->declBit(c+98,"alu_ready_o", false,-1);
    tracep->declBus(c+111,"mem_imm", false,-1, 31,0);
    tracep->declBus(c+613,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+614,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+112,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+113,"mem_rw_type", false,-1);
    tracep->declBit(c+615,"mem_ram_en", false,-1);
    tracep->declBit(c+616,"mem_reg_en", false,-1);
    tracep->declQuad(c+114,"mem_addr", false,-1, 63,0);
    tracep->declQuad(c+116,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+617,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+118,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+120,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+678,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+619,"mem_res", false,-1, 63,0);
    tracep->declBit(c+122,"mem_csr_jar_en", false,-1);
    tracep->declQuad(c+621,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+623,"mem_valid_o", false,-1);
    tracep->declBit(c+30,"wb_reg_en", false,-1);
    tracep->declBit(c+680,"wb_rst", false,-1);
    tracep->declBus(c+624,"wb_imm", false,-1, 31,0);
    tracep->declBus(c+625,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+626,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+628,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+19,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+21,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+206,"wb_opcode", false,-1, 6,0);
    tracep->declBit(c+630,"wb_csr_jar_en", false,-1);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declQuad(c+247,"scr1", false,-1, 63,0);
    tracep->declQuad(c+249,"scr2", false,-1, 63,0);
    tracep->declQuad(c+215,"imm", false,-1, 63,0);
    tracep->declBus(c+441,"opcode", false,-1, 6,0);
    tracep->declBus(c+600,"func3", false,-1, 2,0);
    tracep->declBit(c+18,"func7", false,-1);
    tracep->declBit(c+97,"mul_en", false,-1);
    tracep->declBit(c+591,"ready_i", false,-1);
    tracep->declBit(c+98,"ready_o", false,-1);
    tracep->declQuad(c+607,"result", false,-1, 63,0);
    tracep->declBus(c+631,"Mode", false,-1, 4,0);
    tracep->declQuad(c+247,"AU", false,-1, 63,0);
    tracep->declQuad(c+249,"BU", false,-1, 63,0);
    tracep->declQuad(c+632,"AY", false,-1, 63,0);
    tracep->declQuad(c+634,"BY", false,-1, 63,0);
    tracep->declBit(c+99,"mul_ready_o", false,-1);
    tracep->declQuad(c+453,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+636,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+607,"Alusu", false,-1, 63,0);
    tracep->declBit(c+442,"rv64i_en", false,-1);
    tracep->declBit(c+443,"rv64r_en", false,-1);
    tracep->declQuad(c+247,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+249,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+682,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+651,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+453,"out", false,-1, 63,0);
    tracep->declBus(c+631,"key", false,-1, 4,0);
    tracep->declQuad(c+683,"default_out", false,-1, 63,0);
    tracep->declArray(c+255,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+682,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+651,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+655,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+453,"out", false,-1, 63,0);
    tracep->declBus(c+631,"key", false,-1, 4,0);
    tracep->declQuad(c+683,"default_out", false,-1, 63,0);
    tracep->declArray(c+255,"lut", false,-1, 1172,0);
    tracep->declBus(c+685,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+356+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+407+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+455,"lut_out", false,-1, 63,0);
    tracep->declBit(c+457,"hit", false,-1);
    tracep->declBus(c+686,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+97,"en", false,-1);
    tracep->declQuad(c+247,"rsA", false,-1, 63,0);
    tracep->declQuad(c+249,"rsB", false,-1, 63,0);
    tracep->declBus(c+600,"func3", false,-1, 2,0);
    tracep->declBit(c+443,"rv64_en", false,-1);
    tracep->declBit(c+591,"ready_i", false,-1);
    tracep->declBit(c+99,"ready_o", false,-1);
    tracep->declQuad(c+636,"result", false,-1, 63,0);
    tracep->declBus(c+253,"rsAW", false,-1, 31,0);
    tracep->declBus(c+254,"rsBW", false,-1, 31,0);
    tracep->declQuad(c+636,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+444,"instr", false,-1, 31,0);
    tracep->declBus(c+448,"opcode", false,-1, 6,0);
    tracep->declBus(c+445,"func3", false,-1, 2,0);
    tracep->declBit(c+446,"func7", false,-1);
    tracep->declBus(c+585,"Rs1", false,-1, 4,0);
    tracep->declBus(c+586,"Rs2", false,-1, 4,0);
    tracep->declBus(c+447,"Rd", false,-1, 4,0);
    tracep->declQuad(c+583,"imme", false,-1, 63,0);
    tracep->declBus(c+580,"V1Type", false,-1, 1,0);
    tracep->declBus(c+581,"V2Type", false,-1, 1,0);
    tracep->declBit(c+582,"Mul_en", false,-1);
    tracep->declBit(c+638,"I_type", false,-1);
    tracep->declBit(c+639,"U_type", false,-1);
    tracep->declBit(c+450,"J_type", false,-1);
    tracep->declBit(c+451,"B_type", false,-1);
    tracep->declBit(c+452,"S_type", false,-1);
    tracep->declBit(c+640,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declQuad(c+575,"pc", false,-1, 63,0);
    tracep->declQuad(c+118,"mem_dnpc", false,-1, 63,0);
    tracep->declBus(c+574,"imm_data", false,-1, 31,0);
    tracep->declBit(c+110,"jarl_rady", false,-1);
    tracep->declBit(c+486,"valid_i", false,-1);
    tracep->declBit(c+577,"ready_o", false,-1);
    tracep->declBit(c+100,"ready_i", false,-1);
    tracep->declBit(c+188,"valid_o", false,-1);
    tracep->declBus(c+474,"r_data_i", false,-1, 31,0);
    tracep->declBus(c+189,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+475,"state", false,-1, 2,0);
    tracep->declBit(c+476,"jar", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBus(c+189,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+188,"cpu_valid", false,-1);
    tracep->declBus(c+474,"cpu_read_data", false,-1, 31,0);
    tracep->declBit(c+100,"cpu_ready", false,-1);
    tracep->declBit(c+210,"axi_ready_i", false,-1);
    tracep->declBit(c+205,"axi_valid_o", false,-1);
    tracep->declBit(c+211,"axi_r_last_i", false,-1);
    tracep->declBus(c+101,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+458,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+29,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+190,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+191,"cache_index", false,-1, 6,0);
    tracep->declBus(c+192,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+124,"[0]", false,-1, 127,0);
    tracep->declArray(c+128,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+132,"[0]", false,-1, 127,0);
    tracep->declArray(c+136,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+140,"[0]", false,-1, 127,0);
    tracep->declArray(c+144,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+148,"[0]", false,-1, 127,0);
    tracep->declArray(c+152,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+156,"[0]", false,-1, 127,0);
    tracep->declArray(c+160,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+164,"[0]", false,-1, 127,0);
    tracep->declArray(c+168,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+172,"[0]", false,-1, 127,0);
    tracep->declArray(c+176,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+180,"[0]", false,-1, 127,0);
    tracep->declArray(c+184,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+102,"read_data", false,-1, 127,0);
    tracep->declArray(c+106,"write_data", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+193+i*1,"write_en", true,(i+0));
    }
    tracep->declBit(c+212,"hit", false,-1);
    tracep->declBus(c+230,"tag_v", false,-1, 7,0);
    tracep->declBit(c+477,"bust_num", false,-1);
    tracep->declBus(c+213,"state", false,-1, 2,0);
    tracep->declBus(c+641,"next_state", false,-1, 2,0);
    tracep->declBus(c+207,"cache_write_point", false,-1, 2,0);
    tracep->declBus(c+208,"cache_write_point_last", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+33,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+231,"CEN", false,-1);
    tracep->declBit(c+460,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+37,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+232,"CEN", false,-1);
    tracep->declBit(c+461,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+41,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+233,"CEN", false,-1);
    tracep->declBit(c+462,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+45,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+234,"CEN", false,-1);
    tracep->declBit(c+463,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+49,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+235,"CEN", false,-1);
    tracep->declBit(c+464,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+53,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+236,"CEN", false,-1);
    tracep->declBit(c+465,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+57,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+237,"CEN", false,-1);
    tracep->declBit(c+466,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+61,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+238,"CEN", false,-1);
    tracep->declBit(c+467,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+65,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+239,"CEN", false,-1);
    tracep->declBit(c+468,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+69,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+240,"CEN", false,-1);
    tracep->declBit(c+469,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+73,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+241,"CEN", false,-1);
    tracep->declBit(c+470,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+77,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+242,"CEN", false,-1);
    tracep->declBit(c+471,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+81,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+243,"CEN", false,-1);
    tracep->declBit(c+202,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+85,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+244,"CEN", false,-1);
    tracep->declBit(c+472,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+89,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+245,"CEN", false,-1);
    tracep->declBit(c+203,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+651,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+93,"Q", false,-1, 127,0);
    tracep->declBit(c+487,"CLK", false,-1);
    tracep->declBit(c+246,"CEN", false,-1);
    tracep->declBit(c+473,"WEN", false,-1);
    tracep->declBus(c+201,"A", false,-1, 5,0);
    tracep->declArray(c+106,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+651,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+651,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+689,"DATA_DEPTH", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBus(c+112,"func3", false,-1, 2,0);
    tracep->declQuad(c+114,"addr", false,-1, 63,0);
    tracep->declQuad(c+116,"wdata", false,-1, 63,0);
    tracep->declBit(c+113,"wen", false,-1);
    tracep->declBit(c+612,"ready_i", false,-1);
    tracep->declBit(c+615,"valid_i", false,-1);
    tracep->declBit(c+623,"ready_o", false,-1);
    tracep->declQuad(c+621,"rdata", false,-1, 63,0);
    tracep->declQuad(c+621,"r_data", false,-1, 63,0);
    tracep->declQuad(c+642,"sram_data_r", false,-1, 63,0);
    tracep->declBus(c+123,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBus(c+585,"Ra", false,-1, 4,0);
    tracep->declBus(c+586,"Rb", false,-1, 4,0);
    tracep->declBus(c+625,"Rw", false,-1, 4,0);
    tracep->declBit(c+30,"Wen", false,-1);
    tracep->declQuad(c+587,"BusA", false,-1, 63,0);
    tracep->declQuad(c+589,"BusB", false,-1, 63,0);
    tracep->declQuad(c+628,"BusW", false,-1, 63,0);
    tracep->declBit(c+680,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+292+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+644,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+651,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+652,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+653,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+654,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+655,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+204,"r_valid_i", false,-1);
    tracep->declBit(c+656,"w_valid_i", false,-1);
    tracep->declBit(c+23,"r_ready_o", false,-1);
    tracep->declBit(c+657,"w_ready_o", false,-1);
    tracep->declQuad(c+24,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+658,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+660,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+524,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+661,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+26,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+528,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+662,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+27,"r_last_o", false,-1);
    tracep->declBit(c+663,"w_last_o", false,-1);
    tracep->declBit(c+497,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+498,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+499,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+500,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+501,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+502,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+503,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+504,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+505,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+506,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+507,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+508,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+509,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+510,"axi_w_ready_i", false,-1);
    tracep->declBit(c+511,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+512,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+514,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+515,"axi_w_last_o", false,-1);
    tracep->declBus(c+516,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+517,"axi_b_ready_o", false,-1);
    tracep->declBit(c+518,"axi_b_valid_i", false,-1);
    tracep->declBus(c+519,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+520,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+521,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+522,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+523,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+524,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+525,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+526,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+527,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+528,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+529,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+530,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+531,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+532,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+533,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+534,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+535,"axi_r_ready_o", false,-1);
    tracep->declBit(c+536,"axi_r_valid_i", false,-1);
    tracep->declBus(c+537,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+538,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+540,"axi_r_last_i", false,-1);
    tracep->declBus(c+541,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+542,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+690,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+691,"axi_id", false,-1, 3,0);
    tracep->declBus(c+680,"axi_user", false,-1, 0,0);
    tracep->declBus(c+692,"axi_len", false,-1, 7,0);
    tracep->declBus(c+693,"axi_size", false,-1, 2,0);
    tracep->declBit(c+209,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+651,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+652,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+653,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+654,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+655,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+205,"if_ar_valid", false,-1);
    tracep->declBit(c+210,"if_ar_ready", false,-1);
    tracep->declQuad(c+458,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+29,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+101,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+211,"if_last_i", false,-1);
    tracep->declBit(c+656,"mem_rw_valid", false,-1);
    tracep->declBit(c+28,"mem_rw_ready", false,-1);
    tracep->declBit(c+664,"mem_rw_wen", false,-1);
    tracep->declQuad(c+665,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+658,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+660,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+662,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+661,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+694,"mem_last_i", false,-1);
    tracep->declBit(c+204,"r_valid_i", false,-1);
    tracep->declBit(c+656,"w_valid_i", false,-1);
    tracep->declBit(c+23,"r_ready_o", false,-1);
    tracep->declBit(c+657,"w_ready_o", false,-1);
    tracep->declQuad(c+24,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+658,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+660,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+524,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+661,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+26,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+528,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+662,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+27,"r_last_i", false,-1);
    tracep->declBit(c+663,"w_last_i", false,-1);
    tracep->declBus(c+31,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+645,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+32,"rd_state", false,-1, 1,0);
    tracep->declBus(c+646,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+695,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+696,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+697,"wr_state", false,-1, 1,0);
    tracep->declBus(c+698,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+487,"clk", false,-1);
    tracep->declBit(c+488,"rst", false,-1);
    tracep->declBit(c+611,"en", false,-1);
    tracep->declQuad(c+479,"pc", false,-1, 63,0);
    tracep->declBus(c+481,"addr", false,-1, 2,0);
    tracep->declBus(c+600,"func3", false,-1, 2,0);
    tracep->declQuad(c+247,"data_i", false,-1, 63,0);
    tracep->declQuad(c+609,"data_o", false,-1, 63,0);
    tracep->declBit(c+482,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+218+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declQuad(c+609,"data_r", false,-1, 63,0);
    tracep->declQuad(c+647,"data_w", false,-1, 63,0);
    tracep->declQuad(c+649,"data", false,-1, 63,0);
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
VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_chg_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22041412_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_register(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_0, vlSelf);
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_1, vlSelf);
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_2, vlSelf);
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_3, vlSelf);
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_4, vlSelf);
    tracep->addFullCb(&Vysyx_22041412_top___024root__trace_full_top_5, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_1, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_2, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_3, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_4, vlSelf);
    tracep->addChgCb(&Vysyx_22041412_top___024root__trace_chg_top_5, vlSelf);
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
    bufp->fullBit(oldp+18,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullQData(oldp+19,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+21,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_22041412_top__DOT__r_ready));
    bufp->fullQData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
    bufp->fullCData(oldp+26,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                               ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                               : 0xffU)),8);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+28,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                   ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                   : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullWData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+89,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullBit(oldp+98,((1U & ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)) 
                                  | ((IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o) 
                                     & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))))));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul_ready_o));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullCData(oldp+101,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullWData(oldp+102,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    bufp->fullWData(oldp+106,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullBit(oldp+110,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+113,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullQData(oldp+114,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
    bufp->fullQData(oldp+116,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_1(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_1\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_1((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_1(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullQData(oldp+118,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
    bufp->fullCData(oldp+123,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xfU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                   ? 0xffU
                                                   : 0U))))),8);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+124,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+128,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+132,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+136,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+140,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+144,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+148,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+152,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+156,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+160,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+164,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+168,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+172,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+176,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+180,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+184,(__Vtemp_h51a728c5__0),128);
    bufp->fullBit(oldp+188,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullIData(oldp+189,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullIData(oldp+190,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+191,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+192,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+193,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[0]));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[1]));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[2]));
    bufp->fullBit(oldp+196,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[3]));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[4]));
    bufp->fullBit(oldp+198,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[5]));
    bufp->fullBit(oldp+199,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[6]));
    bufp->fullBit(oldp+200,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[7]));
    bufp->fullCData(oldp+201,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+202,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+205,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullCData(oldp+206,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullCData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point_last),3);
    bufp->fullBit(oldp+209,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    bufp->fullCData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
    bufp->fullQData(oldp+215,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullBit(oldp+217,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullQData(oldp+218,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+220,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+224,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+226,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullCData(oldp+230,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullBit(oldp+231,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+232,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+233,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_2(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_2\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_2((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_2(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<37>/*1183:0*/ __Vtemp_he331c0ba__0;
    // Body
    bufp->fullBit(oldp+235,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+237,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+238,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+239,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+240,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+244,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+245,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+246,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullQData(oldp+247,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+249,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullIData(oldp+253,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+254,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
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
    bufp->fullWData(oldp+255,(__Vtemp_he331c0ba__0),1173);
    bufp->fullQData(oldp+292,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+300,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+304,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+308,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+310,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+312,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+314,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+316,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+320,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+322,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+324,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+326,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+328,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+330,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+332,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+334,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+336,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+338,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+340,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+342,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+344,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+346,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+348,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+350,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+352,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+354,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_3(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_3\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_3((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_3(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+356,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+362,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+368,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+374,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+380,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+386,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+389,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+392,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+395,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+398,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+401,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+404,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+407,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+409,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+411,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+413,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+415,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+417,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+419,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+421,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+423,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+425,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+427,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+429,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+431,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+433,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+435,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+437,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+439,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullCData(oldp+441,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullBit(oldp+442,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+443,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullIData(oldp+444,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullCData(oldp+445,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+446,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+447,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                ? 0U : ((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 7U))))),5);
    bufp->fullCData(oldp+448,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullBit(oldp+449,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+450,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+451,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+452,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullQData(oldp+453,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+455,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+458,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullBit(oldp+460,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+465,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+466,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+470,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+471,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+472,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_4(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_4\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_4((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_4(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullIData(oldp+474,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->fullCData(oldp+475,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullBit(oldp+476,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+477,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullBit(oldp+478,(((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                             | ((IData)(vlSelf->ysyx_22041412_top__DOT__csr_stall) 
                                | (IData)(vlSelf->ysyx_22041412_top__DOT__mem_busy)))));
    bufp->fullQData(oldp+479,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullCData(oldp+481,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+482,(vlSelf->ysyx_22041412_top__DOT__csr_ready_o));
    bufp->fullBit(oldp+483,(vlSelf->ysyx_22041412_top__DOT__csr_stall));
    bufp->fullBit(oldp+484,(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
                             | (IData)(vlSelf->ysyx_22041412_top__DOT__mul_stall))));
    bufp->fullBit(oldp+485,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
    bufp->fullBit(oldp+487,(vlSelf->clk));
    bufp->fullBit(oldp+488,(vlSelf->rst));
    bufp->fullQData(oldp+489,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+491,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+493,(vlSelf->pip_mem_pc),64);
    bufp->fullIData(oldp+495,(vlSelf->pip_imm),32);
    bufp->fullBit(oldp+496,(vlSelf->Ebreak));
    bufp->fullBit(oldp+497,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+498,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+499,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+500,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+501,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+502,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+503,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+504,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+505,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+506,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+507,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+508,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+509,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+510,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+511,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+512,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+514,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+515,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+516,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+517,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+518,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+519,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+520,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+521,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+522,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+523,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+524,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+525,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+526,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+527,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+528,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+529,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+530,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+531,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+532,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+533,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+534,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+535,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+536,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+537,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+538,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+540,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+541,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+542,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+543,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+544,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+545,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+546,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+547,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+548,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+549,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+550,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+551,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+552,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+554,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+555,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+556,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+557,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+558,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+559,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+560,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+561,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+562,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+563,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+564,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+565,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+566,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+567,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+568,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+569,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+570,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+572,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+573,(vlSelf->io_slave_rid),4);
    bufp->fullIData(oldp+574,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+575,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+577,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullQData(oldp+578,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+580,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+582,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                >> 0x19U))));
    bufp->fullQData(oldp+583,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+585,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+586,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullQData(oldp+587,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                               [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+589,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_5(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_top_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_top_5\n"); );
    // Init
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22041412_top___024root__trace_full_sub_5((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22041412_top___024root__trace_full_sub_5(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041412_top___024root__trace_full_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+591,(vlSelf->ysyx_22041412_top__DOT__id_ready_o));
    bufp->fullBit(oldp+592,(((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                             & ((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id)) 
                                | (1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_csr_id))))));
    bufp->fullSData(oldp+593,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+594,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullCData(oldp+595,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+596,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullCData(oldp+597,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+598,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+599,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullCData(oldp+600,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullQData(oldp+601,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                                ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                                : (
                                                   ((0U 
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
    bufp->fullQData(oldp+603,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
                                ? vlSelf->ysyx_22041412_top__DOT__id_imm_data
                                : (((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0))
                                    ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                    : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                        & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0))
                                        ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                        : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h11280b58__0) 
                                            & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                            ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                            : (((0U 
                                                 == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type)) 
                                                & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0))
                                                ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                                : vlSelf->ysyx_22041412_top__DOT__id_rsB)))))),64);
    bufp->fullQData(oldp+605,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
                                ? vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu
                                : (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                    & (IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0))
                                    ? vlSelf->ysyx_22041412_top__DOT__mem_res
                                    : (((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hc71a1041__0) 
                                        & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))
                                        ? vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data
                                        : ((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_hcfebd1d4__0)
                                            ? vlSelf->ysyx_22041412_top__DOT__wb_data
                                            : vlSelf->ysyx_22041412_top__DOT__id_rsB))))),64);
    bufp->fullQData(oldp+607,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+609,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+611,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullBit(oldp+612,(vlSelf->ysyx_22041412_top__DOT__ex_vaild_o));
    bufp->fullCData(oldp+613,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+614,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullBit(oldp+615,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+616,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullQData(oldp+617,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+619,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+621,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
    bufp->fullBit(oldp+623,(vlSelf->ysyx_22041412_top__DOT__mem_valid_o));
    bufp->fullIData(oldp+624,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
    bufp->fullCData(oldp+625,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+626,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+628,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullBit(oldp+630,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
    bufp->fullCData(oldp+631,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+632,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+634,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullQData(oldp+636,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullBit(oldp+638,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+639,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+640,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+641,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state),3);
    bufp->fullQData(oldp+642,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
    bufp->fullBit(oldp+644,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullCData(oldp+645,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+646,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullQData(oldp+647,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+649,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullIData(oldp+651,(0x40U),32);
    bufp->fullIData(oldp+652,(0x20U),32);
    bufp->fullIData(oldp+653,(4U),32);
    bufp->fullIData(oldp+654,(8U),32);
    bufp->fullIData(oldp+655,(1U),32);
    bufp->fullBit(oldp+656,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+657,(vlSelf->ysyx_22041412_top__DOT__w_ready));
    bufp->fullQData(oldp+658,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+660,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+661,(vlSelf->ysyx_22041412_top__DOT__mem_rw_size),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullBit(oldp+663,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullBit(oldp+664,(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen));
    bufp->fullQData(oldp+665,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullCData(oldp+667,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
    bufp->fullBit(oldp+668,(vlSelf->ysyx_22041412_top__DOT__pip_rst));
    bufp->fullBit(oldp+669,(vlSelf->ysyx_22041412_top__DOT__if_en));
    bufp->fullBit(oldp+670,(vlSelf->ysyx_22041412_top__DOT__id_en));
    bufp->fullBit(oldp+671,(vlSelf->ysyx_22041412_top__DOT__ex_en));
    bufp->fullBit(oldp+672,(vlSelf->ysyx_22041412_top__DOT__mem_en));
    bufp->fullBit(oldp+673,(vlSelf->ysyx_22041412_top__DOT__wb_en));
    bufp->fullBit(oldp+674,(vlSelf->ysyx_22041412_top__DOT__id_wait));
    bufp->fullBit(oldp+675,(vlSelf->ysyx_22041412_top__DOT__mul_stall));
    bufp->fullBit(oldp+676,(vlSelf->ysyx_22041412_top__DOT__mem_wait));
    bufp->fullBit(oldp+677,(vlSelf->ysyx_22041412_top__DOT__mem_busy));
    bufp->fullQData(oldp+678,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullBit(oldp+680,(0U));
    bufp->fullIData(oldp+681,(0x11U),32);
    bufp->fullIData(oldp+682,(5U),32);
    bufp->fullQData(oldp+683,(0ULL),64);
    bufp->fullIData(oldp+685,(0x45U),32);
    bufp->fullIData(oldp+686,(0x11U),32);
    bufp->fullIData(oldp+687,(0x80U),32);
    bufp->fullIData(oldp+688,(6U),32);
    bufp->fullIData(oldp+689,(0x10000U),32);
    bufp->fullIData(oldp+690,(3U),32);
    bufp->fullCData(oldp+691,(0U),4);
    bufp->fullCData(oldp+692,(0U),8);
    bufp->fullCData(oldp+693,(3U),3);
    bufp->fullBit(oldp+694,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i));
    bufp->fullCData(oldp+695,(1U),3);
    bufp->fullCData(oldp+696,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+698,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
}
