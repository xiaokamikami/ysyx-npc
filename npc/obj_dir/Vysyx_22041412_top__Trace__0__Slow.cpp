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
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declQuad(c+409,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+411,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+413,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+415,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+416,"Ebreak", false,-1);
    tracep->declBit(c+417,"io_master_awready", false,-1);
    tracep->declBit(c+418,"io_master_awvalid", false,-1);
    tracep->declBus(c+419,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+420,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+421,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+422,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+423,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+424,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+425,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+426,"io_master_awlock", false,-1);
    tracep->declBus(c+427,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+428,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+429,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+430,"io_master_wready", false,-1);
    tracep->declBit(c+431,"io_master_wvalid", false,-1);
    tracep->declQuad(c+432,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+434,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+435,"io_master_wlast", false,-1);
    tracep->declBus(c+436,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+437,"io_master_bready", false,-1);
    tracep->declBit(c+438,"io_master_bvalid", false,-1);
    tracep->declBus(c+439,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+440,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+441,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+442,"io_master_arready", false,-1);
    tracep->declBit(c+443,"io_master_arvalid", false,-1);
    tracep->declBus(c+444,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+445,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+446,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+447,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+448,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+449,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+450,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+451,"io_master_arlock", false,-1);
    tracep->declBus(c+452,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+453,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+454,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+455,"io_master_rready", false,-1);
    tracep->declBit(c+456,"io_master_rvalid", false,-1);
    tracep->declBus(c+457,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+458,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+460,"io_master_rlast", false,-1);
    tracep->declBus(c+461,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+463,"io_slave_awready", false,-1);
    tracep->declBit(c+464,"io_slave_awvalid", false,-1);
    tracep->declBus(c+465,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+466,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+467,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+468,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+469,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+470,"io_slave_wready", false,-1);
    tracep->declBit(c+471,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+472,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+474,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+475,"io_slave_wlast", false,-1);
    tracep->declBit(c+476,"io_slave_bready", false,-1);
    tracep->declBit(c+477,"io_slave_bvalid", false,-1);
    tracep->declBus(c+478,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+479,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+480,"io_slave_arready", false,-1);
    tracep->declBit(c+481,"io_slave_arvalid", false,-1);
    tracep->declBus(c+482,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+483,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+484,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+485,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+486,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+487,"io_slave_rready", false,-1);
    tracep->declBit(c+488,"io_slave_rvalid", false,-1);
    tracep->declBus(c+489,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+490,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+492,"io_slave_rlast", false,-1);
    tracep->declBus(c+493,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declQuad(c+409,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+411,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+413,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+415,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+416,"Ebreak", false,-1);
    tracep->declBit(c+417,"io_master_awready", false,-1);
    tracep->declBit(c+418,"io_master_awvalid", false,-1);
    tracep->declBus(c+419,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+420,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+421,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+422,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+423,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+424,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+425,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+426,"io_master_awlock", false,-1);
    tracep->declBus(c+427,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+428,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+429,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+430,"io_master_wready", false,-1);
    tracep->declBit(c+431,"io_master_wvalid", false,-1);
    tracep->declQuad(c+432,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+434,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+435,"io_master_wlast", false,-1);
    tracep->declBus(c+436,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+437,"io_master_bready", false,-1);
    tracep->declBit(c+438,"io_master_bvalid", false,-1);
    tracep->declBus(c+439,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+440,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+441,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+442,"io_master_arready", false,-1);
    tracep->declBit(c+443,"io_master_arvalid", false,-1);
    tracep->declBus(c+444,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+445,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+446,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+447,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+448,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+449,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+450,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+451,"io_master_arlock", false,-1);
    tracep->declBus(c+452,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+453,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+454,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+455,"io_master_rready", false,-1);
    tracep->declBit(c+456,"io_master_rvalid", false,-1);
    tracep->declBus(c+457,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+458,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+460,"io_master_rlast", false,-1);
    tracep->declBus(c+461,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+462,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+463,"io_slave_awready", false,-1);
    tracep->declBit(c+464,"io_slave_awvalid", false,-1);
    tracep->declBus(c+465,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+466,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+467,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+468,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+469,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+470,"io_slave_wready", false,-1);
    tracep->declBit(c+471,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+472,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+474,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+475,"io_slave_wlast", false,-1);
    tracep->declBit(c+476,"io_slave_bready", false,-1);
    tracep->declBit(c+477,"io_slave_bvalid", false,-1);
    tracep->declBus(c+478,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+479,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+480,"io_slave_arready", false,-1);
    tracep->declBit(c+481,"io_slave_arvalid", false,-1);
    tracep->declBus(c+482,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+483,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+484,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+485,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+486,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+487,"io_slave_rready", false,-1);
    tracep->declBit(c+488,"io_slave_rvalid", false,-1);
    tracep->declBus(c+489,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+490,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+492,"io_slave_rlast", false,-1);
    tracep->declBus(c+493,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+610,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+611,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+612,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+610,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+494,"r_valid", false,-1);
    tracep->declBit(c+18,"r_ready", false,-1);
    tracep->declBit(c+615,"w_valid", false,-1);
    tracep->declBit(c+616,"w_ready", false,-1);
    tracep->declQuad(c+19,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+617,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+444,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+619,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+21,"r_strb", false,-1, 7,0);
    tracep->declBus(c+620,"w_strb", false,-1, 7,0);
    tracep->declBus(c+448,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+621,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+22,"r_last_o", false,-1);
    tracep->declBit(c+622,"w_last_o", false,-1);
    tracep->declBit(c+495,"if_ar_valid", false,-1);
    tracep->declBit(c+255,"if_ar_ready", false,-1);
    tracep->declBus(c+496,"if_ar_data", false,-1, 31,0);
    tracep->declBus(c+269,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+615,"mem_rw_valid", false,-1);
    tracep->declBit(c+23,"mem_rw_ready", false,-1);
    tracep->declBit(c+623,"mem_rw_wen", false,-1);
    tracep->declQuad(c+624,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+617,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+619,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+621,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+620,"mem_rw_size", false,-1, 7,0);
    tracep->declBus(c+385,"pip_stall", false,-1, 5,0);
    tracep->declBit(c+626,"pip_rst", false,-1);
    tracep->declBit(c+386,"if_en", false,-1);
    tracep->declBit(c+387,"id_en", false,-1);
    tracep->declBit(c+388,"ex_en", false,-1);
    tracep->declBit(c+389,"mem_en", false,-1);
    tracep->declBit(c+390,"wb_en", false,-1);
    tracep->declBit(c+627,"id_stall", false,-1);
    tracep->declBit(c+628,"id_wait", false,-1);
    tracep->declBit(c+497,"ex_stall", false,-1);
    tracep->declBit(c+498,"mul_stall", false,-1);
    tracep->declBit(c+499,"ex_wait", false,-1);
    tracep->declBit(c+629,"mem_wait", false,-1);
    tracep->declBit(c+500,"mem_busy", false,-1);
    tracep->declBit(c+501,"mem_stall", false,-1);
    tracep->declBit(c+502,"icache_ar_valid", false,-1);
    tracep->declBit(c+503,"icache_ar_ready", false,-1);
    tracep->declQuad(c+504,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+256,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+257,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"icache_last_i", false,-1);
    tracep->declBus(c+251,"if_imm", false,-1, 31,0);
    tracep->declBus(c+630,"if_r_strb", false,-1, 7,0);
    tracep->declQuad(c+252,"if_pc", false,-1, 63,0);
    tracep->declBit(c+506,"if_ready_o", false,-1);
    tracep->declBit(c+386,"id_valid", false,-1);
    tracep->declBit(c+507,"if_jr_en", false,-1);
    tracep->declBit(c+508,"if_jr_ready", false,-1);
    tracep->declBit(c+509,"if_wait", false,-1);
    tracep->declBit(c+254,"jar_end", false,-1);
    tracep->declBus(c+242,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+510,"id_pc", false,-1, 63,0);
    tracep->declBus(c+512,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+513,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+514,"id_mul_en", false,-1);
    tracep->declQuad(c+515,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+243,"id_func3", false,-1, 2,0);
    tracep->declBit(c+244,"id_func7", false,-1);
    tracep->declBus(c+517,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+518,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+245,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+246,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+519,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+521,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+523,"csr_jar_en", false,-1);
    tracep->declBus(c+524,"csr", false,-1, 11,0);
    tracep->declBus(c+525,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+247,"id_csr_en", false,-1);
    tracep->declBus(c+316,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+317,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declBus(c+91,"ex_imm", false,-1, 31,0);
    tracep->declQuad(c+306,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+526,"ex_mul_en", false,-1);
    tracep->declQuad(c+527,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+95,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+97,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+529,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+318,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+319,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+530,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+531,"ex_func7", false,-1);
    tracep->declBus(c+234,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+532,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+534,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+536,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+538,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+540,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+542,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+527,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+320,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+544,"ex_csr_en", false,-1);
    tracep->declBus(c+545,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+546,"csr_ready_o", false,-1);
    tracep->declBit(c+547,"csr_stall", false,-1);
    tracep->declBus(c+92,"mem_imm", false,-1, 31,0);
    tracep->declBus(c+548,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+549,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+550,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+551,"mem_rw_type", false,-1);
    tracep->declBit(c+552,"mem_ram_en", false,-1);
    tracep->declBit(c+553,"mem_reg_en", false,-1);
    tracep->declQuad(c+554,"mem_addr", false,-1, 63,0);
    tracep->declQuad(c+556,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+558,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+560,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+308,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+631,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+562,"mem_res", false,-1, 63,0);
    tracep->declBit(c+310,"mem_csr_jar_en", false,-1);
    tracep->declQuad(c+564,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+566,"ex_ready", false,-1);
    tracep->declBit(c+567,"mem_valid_o", false,-1);
    tracep->declBit(c+568,"wb_reg_en", false,-1);
    tracep->declBit(c+627,"wb_rst", false,-1);
    tracep->declBus(c+93,"wb_imm", false,-1, 31,0);
    tracep->declBus(c+569,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+311,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+570,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+572,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+574,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+94,"wb_opcode", false,-1, 6,0);
    tracep->declBit(c+313,"wb_csr_jar_en", false,-1);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declQuad(c+527,"scr1", false,-1, 63,0);
    tracep->declQuad(c+95,"scr2", false,-1, 63,0);
    tracep->declQuad(c+306,"imm", false,-1, 63,0);
    tracep->declBus(c+234,"opcode", false,-1, 6,0);
    tracep->declBus(c+530,"func3", false,-1, 2,0);
    tracep->declBit(c+531,"func7", false,-1);
    tracep->declBit(c+526,"mul_en", false,-1);
    tracep->declBit(c+566,"ready_i", false,-1);
    tracep->declBit(c+498,"stall", false,-1);
    tracep->declQuad(c+540,"result", false,-1, 63,0);
    tracep->declBus(c+576,"Mode", false,-1, 4,0);
    tracep->declQuad(c+527,"AU", false,-1, 63,0);
    tracep->declQuad(c+95,"BU", false,-1, 63,0);
    tracep->declQuad(c+577,"AY", false,-1, 63,0);
    tracep->declQuad(c+579,"BY", false,-1, 63,0);
    tracep->declBit(c+314,"mul_ready", false,-1);
    tracep->declQuad(c+237,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+581,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+540,"Alusu", false,-1, 63,0);
    tracep->declBit(c+235,"rv64i_en", false,-1);
    tracep->declBit(c+236,"rv64r_en", false,-1);
    tracep->declQuad(c+527,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+95,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+633,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+634,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+610,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+237,"out", false,-1, 63,0);
    tracep->declBus(c+576,"key", false,-1, 4,0);
    tracep->declQuad(c+635,"default_out", false,-1, 63,0);
    tracep->declArray(c+100,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+633,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+634,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+610,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+614,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+237,"out", false,-1, 63,0);
    tracep->declBus(c+576,"key", false,-1, 4,0);
    tracep->declQuad(c+635,"default_out", false,-1, 63,0);
    tracep->declArray(c+100,"lut", false,-1, 1172,0);
    tracep->declBus(c+637,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+183+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+137+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+239,"lut_out", false,-1, 63,0);
    tracep->declBit(c+241,"hit", false,-1);
    tracep->declBus(c+638,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+526,"en", false,-1);
    tracep->declQuad(c+527,"rsA", false,-1, 63,0);
    tracep->declQuad(c+95,"rsB", false,-1, 63,0);
    tracep->declBus(c+530,"func3", false,-1, 2,0);
    tracep->declBit(c+236,"rv64_en", false,-1);
    tracep->declBit(c+566,"ready_i", false,-1);
    tracep->declBit(c+314,"ready_o", false,-1);
    tracep->declQuad(c+581,"result", false,-1, 63,0);
    tracep->declBus(c+583,"rsAW", false,-1, 31,0);
    tracep->declBus(c+99,"rsBW", false,-1, 31,0);
    tracep->declBit(c+314,"ready", false,-1);
    tracep->declQuad(c+581,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+242,"instr", false,-1, 31,0);
    tracep->declBus(c+246,"opcode", false,-1, 6,0);
    tracep->declBus(c+243,"func3", false,-1, 2,0);
    tracep->declBit(c+244,"func7", false,-1);
    tracep->declBus(c+517,"Rs1", false,-1, 4,0);
    tracep->declBus(c+518,"Rs2", false,-1, 4,0);
    tracep->declBus(c+245,"Rd", false,-1, 4,0);
    tracep->declQuad(c+515,"imme", false,-1, 63,0);
    tracep->declBus(c+512,"V1Type", false,-1, 1,0);
    tracep->declBus(c+513,"V2Type", false,-1, 1,0);
    tracep->declBit(c+514,"Mul_en", false,-1);
    tracep->declBit(c+584,"I_type", false,-1);
    tracep->declBit(c+585,"U_type", false,-1);
    tracep->declBit(c+248,"J_type", false,-1);
    tracep->declBit(c+249,"B_type", false,-1);
    tracep->declBit(c+250,"S_type", false,-1);
    tracep->declBit(c+586,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declQuad(c+252,"pc", false,-1, 63,0);
    tracep->declQuad(c+560,"mem_pc", false,-1, 63,0);
    tracep->declBus(c+251,"imm_data", false,-1, 31,0);
    tracep->declBit(c+509,"stall", false,-1);
    tracep->declBit(c+508,"jarl_rady", false,-1);
    tracep->declBit(c+254,"jar_end", false,-1);
    tracep->declBit(c+386,"valid_i", false,-1);
    tracep->declBit(c+255,"ready_i", false,-1);
    tracep->declBit(c+495,"valid", false,-1);
    tracep->declBit(c+506,"ready_o", false,-1);
    tracep->declBus(c+496,"r_data_i", false,-1, 31,0);
    tracep->declBus(c+269,"r_addr_o", false,-1, 31,0);
    tracep->declBit(c+587,"valid_o", false,-1);
    tracep->declBus(c+588,"dnpc", false,-1, 31,0);
    tracep->declBit(c+589,"jar", false,-1);
    tracep->declBit(c+590,"jarl_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBus(c+269,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+495,"cpu_valid", false,-1);
    tracep->declBus(c+496,"cpu_read_data", false,-1, 31,0);
    tracep->declBit(c+255,"cpu_ready", false,-1);
    tracep->declBit(c+503,"axi_ready_i", false,-1);
    tracep->declBit(c+502,"axi_valid", false,-1);
    tracep->declBit(c+503,"axi_ready_o", false,-1);
    tracep->declBit(c+24,"axi_r_last_i", false,-1);
    tracep->declBus(c+257,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+504,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+256,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+270,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+271,"cache_index", false,-1, 5,0);
    tracep->declBus(c+272,"cache_offset", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+274+i*4,"ram_rd_data", true,(i+0), 127,0);
    }
    tracep->declBit(c+273,"ram_rd_cen", false,-1);
    tracep->declArray(c+265,"read_data", false,-1, 127,0);
    tracep->declArray(c+258,"write_data", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+391+i*1,"write_en", true,(i+0));
    }
    tracep->declBus(c+262,"ram_len_mod", false,-1, 20,0);
    tracep->declBus(c+263,"ram_len", false,-1, 6,0);
    tracep->declBit(c+264,"hit", false,-1);
    tracep->declBus(c+591,"tag_v", false,-1, 7,0);
    tracep->declBus(c+639,"switch", false,-1, 3,0);
    tracep->declBus(c+640,"next_switch", false,-1, 3,0);
    tracep->declBit(c+592,"bust_num", false,-1);
    tracep->declQuad(c+593,"axi_rd_data", false,-1, 63,0);
    tracep->declBus(c+595,"state", false,-1, 2,0);
    tracep->declBus(c+596,"next_state", false,-1, 2,0);
    tracep->declBus(c+597,"cache_write_point", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+27,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+399,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+31,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+399,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+51,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+400,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+35,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+400,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+55,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+401,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+43,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+401,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+59,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+402,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+47,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+402,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+63,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+403,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+39,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+403,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+67,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+404,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+71,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+404,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+75,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+405,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+79,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+405,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+83,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+598,"CEN", false,-1);
    tracep->declBit(c+406,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+641,"Bits", false,-1, 31,0);
    tracep->declBus(c+610,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+642,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+87,"Q", false,-1, 127,0);
    tracep->declBit(c+407,"CLK", false,-1);
    tracep->declBit(c+599,"CEN", false,-1);
    tracep->declBit(c+406,"WEN", false,-1);
    tracep->declBus(c+271,"A", false,-1, 5,0);
    tracep->declArray(c+258,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+610,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+610,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+643,"DATA_DEPTH", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBus(c+550,"func3", false,-1, 2,0);
    tracep->declQuad(c+554,"addr", false,-1, 63,0);
    tracep->declQuad(c+556,"wdata", false,-1, 63,0);
    tracep->declBit(c+552,"en", false,-1);
    tracep->declBit(c+551,"wen", false,-1);
    tracep->declBit(c+566,"ready_i", false,-1);
    tracep->declBit(c+500,"stall", false,-1);
    tracep->declBit(c+567,"ready_o", false,-1);
    tracep->declQuad(c+564,"rdata", false,-1, 63,0);
    tracep->declQuad(c+564,"r_data", false,-1, 63,0);
    tracep->declQuad(c+600,"sram_data_r", false,-1, 63,0);
    tracep->declBus(c+602,"wmask", false,-1, 7,0);
    tracep->declBit(c+567,"readyo", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBus(c+517,"Ra", false,-1, 4,0);
    tracep->declBus(c+518,"Rb", false,-1, 4,0);
    tracep->declBus(c+569,"Rw", false,-1, 4,0);
    tracep->declBit(c+568,"Wen", false,-1);
    tracep->declQuad(c+519,"BusA", false,-1, 63,0);
    tracep->declQuad(c+521,"BusB", false,-1, 63,0);
    tracep->declQuad(c+570,"BusW", false,-1, 63,0);
    tracep->declBit(c+627,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+321+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+603,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stall ");
    tracep->declBus(c+385,"stall", false,-1, 5,0);
    tracep->declBit(c+626,"rst", false,-1);
    tracep->declBit(c+627,"stall_from_id", false,-1);
    tracep->declBit(c+497,"stall_from_ex", false,-1);
    tracep->declBit(c+501,"stall_from_mem", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+610,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+611,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+612,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+494,"r_valid_i", false,-1);
    tracep->declBit(c+615,"w_valid_i", false,-1);
    tracep->declBit(c+18,"r_ready_o", false,-1);
    tracep->declBit(c+616,"w_ready_o", false,-1);
    tracep->declQuad(c+19,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+617,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+619,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+444,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+620,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+21,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+448,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+621,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+22,"r_last_o", false,-1);
    tracep->declBit(c+622,"w_last_o", false,-1);
    tracep->declBit(c+417,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+418,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+419,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+420,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+421,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+422,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+423,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+424,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+425,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+426,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+427,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+428,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+429,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+430,"axi_w_ready_i", false,-1);
    tracep->declBit(c+431,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+432,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+434,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+435,"axi_w_last_o", false,-1);
    tracep->declBus(c+436,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+437,"axi_b_ready_o", false,-1);
    tracep->declBit(c+438,"axi_b_valid_i", false,-1);
    tracep->declBus(c+439,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+440,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+441,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+442,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+443,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+444,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+445,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+446,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+447,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+448,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+449,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+450,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+451,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+452,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+453,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+454,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+455,"axi_r_ready_o", false,-1);
    tracep->declBit(c+456,"axi_r_valid_i", false,-1);
    tracep->declBus(c+457,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+458,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+460,"axi_r_last_i", false,-1);
    tracep->declBus(c+461,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+462,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+644,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+645,"axi_id", false,-1, 3,0);
    tracep->declBus(c+627,"axi_user", false,-1, 0,0);
    tracep->declBus(c+646,"axi_len", false,-1, 7,0);
    tracep->declBus(c+647,"axi_size", false,-1, 2,0);
    tracep->declBit(c+315,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+610,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+611,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+612,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+613,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+614,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+502,"if_ar_valid", false,-1);
    tracep->declBit(c+503,"if_ar_ready", false,-1);
    tracep->declQuad(c+504,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+256,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+257,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+24,"if_last_i", false,-1);
    tracep->declBit(c+615,"mem_rw_valid", false,-1);
    tracep->declBit(c+23,"mem_rw_ready", false,-1);
    tracep->declBit(c+623,"mem_rw_wen", false,-1);
    tracep->declQuad(c+624,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+617,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+619,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+621,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+620,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+648,"mem_last_i", false,-1);
    tracep->declBit(c+494,"r_valid_i", false,-1);
    tracep->declBit(c+615,"w_valid_i", false,-1);
    tracep->declBit(c+18,"r_ready_o", false,-1);
    tracep->declBit(c+616,"w_ready_o", false,-1);
    tracep->declQuad(c+19,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+617,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+619,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+444,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+620,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+21,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+448,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+621,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+22,"r_last_i", false,-1);
    tracep->declBit(c+622,"w_last_i", false,-1);
    tracep->declBus(c+25,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+604,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+26,"rd_state", false,-1, 1,0);
    tracep->declBus(c+605,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+649,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+650,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+651,"wr_state", false,-1, 1,0);
    tracep->declBus(c+652,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+407,"clk", false,-1);
    tracep->declBit(c+408,"rst", false,-1);
    tracep->declBit(c+544,"en", false,-1);
    tracep->declQuad(c+532,"pc", false,-1, 63,0);
    tracep->declBus(c+545,"addr", false,-1, 2,0);
    tracep->declBus(c+530,"func3", false,-1, 2,0);
    tracep->declQuad(c+527,"data_i", false,-1, 63,0);
    tracep->declQuad(c+542,"data_o", false,-1, 63,0);
    tracep->declBit(c+546,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+171+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declBit(c+546,"ready", false,-1);
    tracep->declQuad(c+542,"data_r", false,-1, 63,0);
    tracep->declQuad(c+606,"data_w", false,-1, 63,0);
    tracep->declQuad(c+608,"data", false,-1, 63,0);
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
    VlWide<37>/*1183:0*/ __Vtemp_he331c0ba__0;
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
    bufp->fullBit(oldp+18,(vlSelf->ysyx_22041412_top__DOT__r_ready));
    bufp->fullQData(oldp+19,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
    bufp->fullCData(oldp+21,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                               ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                               : 0xffU)),8);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+23,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                   ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                   : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
    bufp->fullBit(oldp+24,(((4U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch)) 
                            & (IData)(vlSelf->ysyx_22041412_top__DOT__r_last_o))));
    bufp->fullCData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullWData(oldp+27,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+31,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+35,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+39,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+43,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+47,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+51,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+55,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+59,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+63,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+67,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+71,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+75,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+79,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+83,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+87,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullQData(oldp+95,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullIData(oldp+99,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
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
    bufp->fullWData(oldp+100,(__Vtemp_he331c0ba__0),1173);
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
    // Body
    bufp->fullQData(oldp+137,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+149,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+163,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+165,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+167,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+169,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    bufp->fullQData(oldp+171,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+173,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+175,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+177,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+179,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+181,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullWData(oldp+183,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+186,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+189,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+192,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+195,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+198,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+201,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+204,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+207,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+210,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+213,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+216,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+219,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+222,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+225,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+228,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+231,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullCData(oldp+234,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullBit(oldp+235,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+236,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullQData(oldp+237,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+239,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+241,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullCData(oldp+243,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+244,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+245,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                ? 0U : ((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 7U))))),5);
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
    // Body
    bufp->fullCData(oldp+246,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullBit(oldp+247,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+248,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+249,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+250,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullIData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+252,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+254,(vlSelf->ysyx_22041412_top__DOT__jar_end));
    bufp->fullBit(oldp+255,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullIData(oldp+256,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullWData(oldp+258,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod),21);
    bufp->fullCData(oldp+263,((0x7fU & vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_len_mod)),7);
    bufp->fullBit(oldp+264,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    bufp->fullWData(oldp+265,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullIData(oldp+270,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+271,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullCData(oldp+272,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullBit(oldp+273,((1U & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                   >> 0xaU))));
    bufp->fullWData(oldp+274,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[0]),128);
    bufp->fullWData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[1]),128);
    bufp->fullWData(oldp+282,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[2]),128);
    bufp->fullWData(oldp+286,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[3]),128);
    bufp->fullWData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[4]),128);
    bufp->fullWData(oldp+294,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[5]),128);
    bufp->fullWData(oldp+298,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[6]),128);
    bufp->fullWData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data[7]),128);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullQData(oldp+308,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullBit(oldp+310,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
    bufp->fullQData(oldp+311,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullBit(oldp+313,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
    bufp->fullBit(oldp+314,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+316,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+317,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullCData(oldp+318,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+319,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullBit(oldp+320,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullQData(oldp+321,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+323,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+325,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+327,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+329,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+331,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+333,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+335,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+337,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+339,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+341,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+343,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+345,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+347,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+349,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+351,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+353,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+355,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+357,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+359,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+361,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+363,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+365,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+367,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
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
    bufp->fullCData(oldp+385,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
    bufp->fullBit(oldp+386,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 1U)))));
    bufp->fullBit(oldp+387,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 2U)))));
    bufp->fullBit(oldp+388,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 3U)))));
    bufp->fullBit(oldp+389,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 4U)))));
    bufp->fullBit(oldp+390,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 5U)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[0]));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[1]));
    bufp->fullBit(oldp+393,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[2]));
    bufp->fullBit(oldp+394,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[3]));
    bufp->fullBit(oldp+395,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[4]));
    bufp->fullBit(oldp+396,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[5]));
    bufp->fullBit(oldp+397,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[6]));
    bufp->fullBit(oldp+398,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[7]));
    bufp->fullBit(oldp+399,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [0U]))));
    bufp->fullBit(oldp+400,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [1U]))));
    bufp->fullBit(oldp+401,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [2U]))));
    bufp->fullBit(oldp+402,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [3U]))));
    bufp->fullBit(oldp+403,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [4U]))));
    bufp->fullBit(oldp+404,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [5U]))));
    bufp->fullBit(oldp+405,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [6U]))));
    bufp->fullBit(oldp+406,((1U & (~ vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en
                                   [7U]))));
    bufp->fullBit(oldp+407,(vlSelf->clk));
    bufp->fullBit(oldp+408,(vlSelf->rst));
    bufp->fullQData(oldp+409,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+411,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+413,(vlSelf->pip_mem_pc),64);
    bufp->fullIData(oldp+415,(vlSelf->pip_imm),32);
    bufp->fullBit(oldp+416,(vlSelf->Ebreak));
    bufp->fullBit(oldp+417,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+418,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+419,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+420,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+421,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+422,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+423,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+424,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+425,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+426,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+427,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+428,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+429,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+430,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+431,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+432,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+434,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+435,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+436,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+437,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+438,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+439,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+440,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+441,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+442,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+443,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+444,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+445,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+446,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+447,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+448,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+449,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+450,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+451,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+452,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+453,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+454,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+455,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+456,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+457,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+458,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+460,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+461,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+462,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+463,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+464,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+465,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+466,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+467,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+468,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+469,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+470,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+471,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+472,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+474,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+475,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+476,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+477,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+478,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+479,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+480,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+481,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+482,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+483,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+484,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+485,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+486,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+487,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+488,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+489,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+490,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+492,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+493,(vlSelf->io_slave_rid),4);
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
    bufp->fullBit(oldp+494,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+495,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullIData(oldp+496,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->fullBit(oldp+497,(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
                             | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))));
    bufp->fullBit(oldp+498,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))));
    bufp->fullBit(oldp+499,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+500,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))));
    bufp->fullBit(oldp+501,(((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                             | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))))));
    bufp->fullBit(oldp+502,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullBit(oldp+503,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullQData(oldp+504,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullBit(oldp+506,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
    bufp->fullBit(oldp+507,(((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                             | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                | ((0x67U == (0x7fU 
                                              & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                   | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))))));
    bufp->fullBit(oldp+508,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullBit(oldp+509,(vlSelf->ysyx_22041412_top__DOT__if_wait));
    bufp->fullQData(oldp+510,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullCData(oldp+512,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+513,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+514,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                >> 0x19U))));
    bufp->fullQData(oldp+515,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+517,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+518,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullQData(oldp+519,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                               [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+521,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+523,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
    bufp->fullSData(oldp+524,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+525,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullBit(oldp+526,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+527,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullCData(oldp+529,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+530,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+531,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullQData(oldp+532,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+534,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+536,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+538,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
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
    bufp->fullQData(oldp+540,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+542,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+544,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+545,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+546,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
    bufp->fullBit(oldp+547,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
    bufp->fullCData(oldp+548,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+549,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+550,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+551,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+552,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+553,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullQData(oldp+554,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
    bufp->fullQData(oldp+556,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+558,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
    bufp->fullQData(oldp+560,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+562,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+564,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
    bufp->fullBit(oldp+566,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
    bufp->fullBit(oldp+567,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
    bufp->fullBit(oldp+568,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullCData(oldp+569,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+570,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullQData(oldp+572,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullQData(oldp+574,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+576,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+577,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+579,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullQData(oldp+581,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullIData(oldp+583,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullBit(oldp+584,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+585,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+586,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullBit(oldp+587,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__valid_o));
    bufp->fullIData(oldp+588,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__dnpc),32);
    bufp->fullBit(oldp+589,(((0x67U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->ysyx_22041412_top__DOT__if_ar_data)) 
                                   | (IData)((0x100073U 
                                              == (0xfff0007fU 
                                                  & vlSelf->ysyx_22041412_top__DOT__if_ar_data))))))));
    bufp->fullBit(oldp+590,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jarl_en));
    bufp->fullCData(oldp+591,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullBit(oldp+592,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullQData(oldp+593,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__axi_rd_data),64);
    bufp->fullCData(oldp+595,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+596,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state),3);
    bufp->fullCData(oldp+597,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullBit(oldp+598,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN)))));
    bufp->fullQData(oldp+600,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
    bufp->fullCData(oldp+602,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xfU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                   ? 0xffU
                                                   : 0U))))),8);
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
    bufp->fullBit(oldp+603,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullCData(oldp+604,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+605,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullQData(oldp+606,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullQData(oldp+608,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullIData(oldp+610,(0x40U),32);
    bufp->fullIData(oldp+611,(0x20U),32);
    bufp->fullIData(oldp+612,(4U),32);
    bufp->fullIData(oldp+613,(8U),32);
    bufp->fullIData(oldp+614,(1U),32);
    bufp->fullBit(oldp+615,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+616,(vlSelf->ysyx_22041412_top__DOT__w_ready));
    bufp->fullQData(oldp+617,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+619,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+620,(vlSelf->ysyx_22041412_top__DOT__mem_rw_size),8);
    bufp->fullCData(oldp+621,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullBit(oldp+622,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullBit(oldp+623,(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen));
    bufp->fullQData(oldp+624,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullBit(oldp+626,(vlSelf->ysyx_22041412_top__DOT__pip_rst));
    bufp->fullBit(oldp+627,(0U));
    bufp->fullBit(oldp+628,(vlSelf->ysyx_22041412_top__DOT__id_wait));
    bufp->fullBit(oldp+629,(vlSelf->ysyx_22041412_top__DOT__mem_wait));
    bufp->fullCData(oldp+630,(vlSelf->ysyx_22041412_top__DOT__if_r_strb),8);
    bufp->fullQData(oldp+631,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
    bufp->fullIData(oldp+633,(0x11U),32);
    bufp->fullIData(oldp+634,(5U),32);
    bufp->fullQData(oldp+635,(0ULL),64);
    bufp->fullIData(oldp+637,(0x45U),32);
    bufp->fullIData(oldp+638,(0x11U),32);
    bufp->fullCData(oldp+639,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__switch),4);
    bufp->fullCData(oldp+640,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_switch),4);
    bufp->fullIData(oldp+641,(0x80U),32);
    bufp->fullIData(oldp+642,(6U),32);
    bufp->fullIData(oldp+643,(0x10000U),32);
    bufp->fullIData(oldp+644,(3U),32);
    bufp->fullCData(oldp+645,(0U),4);
    bufp->fullCData(oldp+646,(0U),8);
    bufp->fullCData(oldp+647,(3U),3);
    bufp->fullBit(oldp+648,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__mem_last_i));
    bufp->fullCData(oldp+649,(1U),3);
    bufp->fullCData(oldp+650,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_switch),3);
    bufp->fullCData(oldp+651,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_state),2);
    bufp->fullCData(oldp+652,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__wr_next_state),2);
}
