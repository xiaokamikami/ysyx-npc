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
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declQuad(c+486,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+488,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+490,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+492,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+493,"Ebreak", false,-1);
    tracep->declBit(c+494,"io_master_awready", false,-1);
    tracep->declBit(c+495,"io_master_awvalid", false,-1);
    tracep->declBus(c+496,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+497,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+498,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+499,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+500,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+501,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+502,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+503,"io_master_awlock", false,-1);
    tracep->declBus(c+504,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+505,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+506,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+507,"io_master_wready", false,-1);
    tracep->declBit(c+508,"io_master_wvalid", false,-1);
    tracep->declQuad(c+509,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+511,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+512,"io_master_wlast", false,-1);
    tracep->declBus(c+513,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+514,"io_master_bready", false,-1);
    tracep->declBit(c+515,"io_master_bvalid", false,-1);
    tracep->declBus(c+516,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+517,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+518,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+519,"io_master_arready", false,-1);
    tracep->declBit(c+520,"io_master_arvalid", false,-1);
    tracep->declBus(c+521,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+522,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+523,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+524,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+525,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+526,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+527,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+528,"io_master_arlock", false,-1);
    tracep->declBus(c+529,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+530,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+531,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+532,"io_master_rready", false,-1);
    tracep->declBit(c+533,"io_master_rvalid", false,-1);
    tracep->declBus(c+534,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+535,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+537,"io_master_rlast", false,-1);
    tracep->declBus(c+538,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+539,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+540,"io_slave_awready", false,-1);
    tracep->declBit(c+541,"io_slave_awvalid", false,-1);
    tracep->declBus(c+542,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+543,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+544,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+545,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+546,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+547,"io_slave_wready", false,-1);
    tracep->declBit(c+548,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+549,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+551,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+552,"io_slave_wlast", false,-1);
    tracep->declBit(c+553,"io_slave_bready", false,-1);
    tracep->declBit(c+554,"io_slave_bvalid", false,-1);
    tracep->declBus(c+555,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+556,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+557,"io_slave_arready", false,-1);
    tracep->declBit(c+558,"io_slave_arvalid", false,-1);
    tracep->declBus(c+559,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+560,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+561,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+562,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+563,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+564,"io_slave_rready", false,-1);
    tracep->declBit(c+565,"io_slave_rvalid", false,-1);
    tracep->declBus(c+566,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+567,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+569,"io_slave_rlast", false,-1);
    tracep->declBus(c+570,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_22041412_top ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declQuad(c+486,"pip_pc", false,-1, 63,0);
    tracep->declQuad(c+488,"pip_dnpc", false,-1, 63,0);
    tracep->declQuad(c+490,"pip_mem_pc", false,-1, 63,0);
    tracep->declBus(c+492,"pip_imm", false,-1, 31,0);
    tracep->declBit(c+493,"Ebreak", false,-1);
    tracep->declBit(c+494,"io_master_awready", false,-1);
    tracep->declBit(c+495,"io_master_awvalid", false,-1);
    tracep->declBus(c+496,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+497,"io_master_awprot", false,-1, 2,0);
    tracep->declBus(c+498,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+499,"io_master_awuser", false,-1, 0,0);
    tracep->declBus(c+500,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+501,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+502,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+503,"io_master_awlock", false,-1);
    tracep->declBus(c+504,"io_master_awcache", false,-1, 3,0);
    tracep->declBus(c+505,"io_master_awqos", false,-1, 3,0);
    tracep->declBus(c+506,"io_master_awregion", false,-1, 3,0);
    tracep->declBit(c+507,"io_master_wready", false,-1);
    tracep->declBit(c+508,"io_master_wvalid", false,-1);
    tracep->declQuad(c+509,"io_master_wdata", false,-1, 63,0);
    tracep->declBus(c+511,"io_master_wstrb", false,-1, 7,0);
    tracep->declBit(c+512,"io_master_wlast", false,-1);
    tracep->declBus(c+513,"io_master_wuser", false,-1, 0,0);
    tracep->declBit(c+514,"io_master_bready", false,-1);
    tracep->declBit(c+515,"io_master_bvalid", false,-1);
    tracep->declBus(c+516,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+517,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+518,"io_master_buser", false,-1, 0,0);
    tracep->declBit(c+519,"io_master_arready", false,-1);
    tracep->declBit(c+520,"io_master_arvalid", false,-1);
    tracep->declBus(c+521,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+522,"io_master_arprot", false,-1, 2,0);
    tracep->declBus(c+523,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+524,"io_master_aruser", false,-1, 0,0);
    tracep->declBus(c+525,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+526,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+527,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+528,"io_master_arlock", false,-1);
    tracep->declBus(c+529,"io_master_arcache", false,-1, 3,0);
    tracep->declBus(c+530,"io_master_arqos", false,-1, 3,0);
    tracep->declBus(c+531,"io_master_arregion", false,-1, 3,0);
    tracep->declBit(c+532,"io_master_rready", false,-1);
    tracep->declBit(c+533,"io_master_rvalid", false,-1);
    tracep->declBus(c+534,"io_master_rresp", false,-1, 1,0);
    tracep->declQuad(c+535,"io_master_rdata", false,-1, 63,0);
    tracep->declBit(c+537,"io_master_rlast", false,-1);
    tracep->declBus(c+538,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+539,"io_master_ruser", false,-1, 0,0);
    tracep->declBit(c+540,"io_slave_awready", false,-1);
    tracep->declBit(c+541,"io_slave_awvalid", false,-1);
    tracep->declBus(c+542,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+543,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+544,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+545,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+546,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+547,"io_slave_wready", false,-1);
    tracep->declBit(c+548,"io_slave_wvalid", false,-1);
    tracep->declQuad(c+549,"io_slave_wdata", false,-1, 63,0);
    tracep->declBus(c+551,"io_slave_wstrb", false,-1, 7,0);
    tracep->declBit(c+552,"io_slave_wlast", false,-1);
    tracep->declBit(c+553,"io_slave_bready", false,-1);
    tracep->declBit(c+554,"io_slave_bvalid", false,-1);
    tracep->declBus(c+555,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+556,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+557,"io_slave_arready", false,-1);
    tracep->declBit(c+558,"io_slave_arvalid", false,-1);
    tracep->declBus(c+559,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+560,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+561,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+562,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+563,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+564,"io_slave_rready", false,-1);
    tracep->declBit(c+565,"io_slave_rvalid", false,-1);
    tracep->declBus(c+566,"io_slave_rresp", false,-1, 1,0);
    tracep->declQuad(c+567,"io_slave_rdata", false,-1, 63,0);
    tracep->declBit(c+569,"io_slave_rlast", false,-1);
    tracep->declBus(c+570,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+657,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+658,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+659,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+657,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+328,"r_valid", false,-1);
    tracep->declBit(c+18,"r_ready", false,-1);
    tracep->declBit(c+662,"w_valid", false,-1);
    tracep->declBit(c+663,"w_ready", false,-1);
    tracep->declQuad(c+307,"axi_r_data", false,-1, 63,0);
    tracep->declQuad(c+664,"axi_w_data", false,-1, 63,0);
    tracep->declBus(c+521,"axi_r_addr", false,-1, 31,0);
    tracep->declBus(c+666,"axi_w_addr", false,-1, 31,0);
    tracep->declBus(c+19,"r_strb", false,-1, 7,0);
    tracep->declBus(c+667,"w_strb", false,-1, 7,0);
    tracep->declBus(c+525,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+668,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+20,"r_last_o", false,-1);
    tracep->declBit(c+669,"w_last_o", false,-1);
    tracep->declBit(c+329,"if_ar_valid", false,-1);
    tracep->declBit(c+134,"if_ar_ready", false,-1);
    tracep->declBus(c+452,"if_ar_data", false,-1, 31,0);
    tracep->declBus(c+330,"if_ar_addr", false,-1, 31,0);
    tracep->declBit(c+662,"mem_rw_valid", false,-1);
    tracep->declBit(c+21,"mem_rw_ready", false,-1);
    tracep->declBit(c+670,"mem_rw_wen", false,-1);
    tracep->declQuad(c+671,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+664,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+666,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+668,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+667,"mem_rw_size", false,-1, 7,0);
    tracep->declBus(c+478,"pip_stall", false,-1, 5,0);
    tracep->declBit(c+673,"pip_rst", false,-1);
    tracep->declBit(c+479,"if_en", false,-1);
    tracep->declBit(c+480,"id_en", false,-1);
    tracep->declBit(c+481,"ex_en", false,-1);
    tracep->declBit(c+482,"mem_en", false,-1);
    tracep->declBit(c+483,"wb_en", false,-1);
    tracep->declBit(c+674,"id_stall", false,-1);
    tracep->declBit(c+675,"id_wait", false,-1);
    tracep->declBit(c+571,"ex_stall", false,-1);
    tracep->declBit(c+364,"mul_stall", false,-1);
    tracep->declBit(c+572,"ex_wait", false,-1);
    tracep->declBit(c+676,"mem_wait", false,-1);
    tracep->declBit(c+573,"mem_busy", false,-1);
    tracep->declBit(c+574,"mem_stall", false,-1);
    tracep->declBit(c+331,"icache_ar_valid", false,-1);
    tracep->declBit(c+351,"icache_ar_ready", false,-1);
    tracep->declQuad(c+453,"icache_ar_data", false,-1, 63,0);
    tracep->declBus(c+135,"icache_ar_addr", false,-1, 31,0);
    tracep->declBus(c+136,"icache_ar_len", false,-1, 7,0);
    tracep->declBit(c+352,"icache_last_i", false,-1);
    tracep->declBus(c+93,"if_imm", false,-1, 31,0);
    tracep->declBus(c+677,"if_r_strb", false,-1, 7,0);
    tracep->declQuad(c+94,"if_pc", false,-1, 63,0);
    tracep->declBit(c+96,"if_ready_o", false,-1);
    tracep->declBit(c+479,"id_valid", false,-1);
    tracep->declBit(c+575,"if_jr_en", false,-1);
    tracep->declBit(c+576,"if_jr_ready", false,-1);
    tracep->declBit(c+678,"if_wait", false,-1);
    tracep->declBus(c+439,"id_imm", false,-1, 31,0);
    tracep->declQuad(c+433,"id_pc", false,-1, 63,0);
    tracep->declBus(c+577,"id_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+578,"id_imm_V2Type", false,-1, 1,0);
    tracep->declBit(c+579,"id_mul_en", false,-1);
    tracep->declQuad(c+580,"id_imm_data", false,-1, 63,0);
    tracep->declBus(c+440,"id_func3", false,-1, 2,0);
    tracep->declBit(c+441,"id_func7", false,-1);
    tracep->declBus(c+582,"id_Ra", false,-1, 4,0);
    tracep->declBus(c+583,"id_Rb", false,-1, 4,0);
    tracep->declBus(c+442,"id_Rw", false,-1, 4,0);
    tracep->declBus(c+443,"id_opcode", false,-1, 6,0);
    tracep->declQuad(c+584,"id_rsA", false,-1, 63,0);
    tracep->declQuad(c+586,"id_rsB", false,-1, 63,0);
    tracep->declBit(c+588,"csr_jar_en", false,-1);
    tracep->declBus(c+589,"csr", false,-1, 11,0);
    tracep->declBus(c+590,"id_csr_id", false,-1, 2,0);
    tracep->declBit(c+444,"id_csr_en", false,-1);
    tracep->declBus(c+448,"ex_imm_V1Type", false,-1, 1,0);
    tracep->declBus(c+449,"ex_imm_V2Type", false,-1, 1,0);
    tracep->declBus(c+309,"ex_imm", false,-1, 31,0);
    tracep->declQuad(c+332,"ex_imm_data", false,-1, 63,0);
    tracep->declBit(c+365,"ex_mul_en", false,-1);
    tracep->declQuad(c+591,"ex_v1", false,-1, 63,0);
    tracep->declQuad(c+593,"ex_v2", false,-1, 63,0);
    tracep->declQuad(c+595,"ex_rs2", false,-1, 63,0);
    tracep->declBus(c+597,"ex_rw", false,-1, 4,0);
    tracep->declBus(c+450,"ex_Ra", false,-1, 4,0);
    tracep->declBus(c+451,"ex_Rb", false,-1, 4,0);
    tracep->declBus(c+598,"ex_func3", false,-1, 2,0);
    tracep->declBit(c+599,"ex_func7", false,-1);
    tracep->declBus(c+248,"ex_opcode", false,-1, 6,0);
    tracep->declQuad(c+435,"ex_pc", false,-1, 63,0);
    tracep->declQuad(c+600,"ex_v1_in", false,-1, 63,0);
    tracep->declQuad(c+602,"ex_v2_in", false,-1, 63,0);
    tracep->declQuad(c+604,"ex_rs2_in", false,-1, 63,0);
    tracep->declQuad(c+606,"ex_res", false,-1, 63,0);
    tracep->declQuad(c+608,"csr_data_o", false,-1, 63,0);
    tracep->declQuad(c+591,"csr_data_i", false,-1, 63,0);
    tracep->declBit(c+610,"ex_csr_jar_en", false,-1);
    tracep->declBit(c+611,"ex_csr_en", false,-1);
    tracep->declBus(c+612,"ex_csr_id", false,-1, 2,0);
    tracep->declBit(c+613,"csr_ready_o", false,-1);
    tracep->declBit(c+614,"csr_stall", false,-1);
    tracep->declBus(c+310,"mem_imm", false,-1, 31,0);
    tracep->declBus(c+615,"mem_rw", false,-1, 4,0);
    tracep->declBus(c+616,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+617,"mem_func3", false,-1, 2,0);
    tracep->declBit(c+618,"mem_rw_type", false,-1);
    tracep->declBit(c+619,"mem_ram_en", false,-1);
    tracep->declBit(c+620,"mem_reg_en", false,-1);
    tracep->declQuad(c+621,"mem_addr", false,-1, 63,0);
    tracep->declQuad(c+623,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+366,"mem_pc", false,-1, 63,0);
    tracep->declQuad(c+625,"mem_dnpc", false,-1, 63,0);
    tracep->declQuad(c+311,"mem_imm_data", false,-1, 63,0);
    tracep->declQuad(c+679,"mem_temp", false,-1, 63,0);
    tracep->declQuad(c+627,"mem_res", false,-1, 63,0);
    tracep->declBit(c+313,"mem_csr_jar_en", false,-1);
    tracep->declQuad(c+629,"mem_rdata", false,-1, 63,0);
    tracep->declBit(c+631,"ex_ready", false,-1);
    tracep->declBit(c+632,"mem_valid_o", false,-1);
    tracep->declBit(c+89,"wb_reg_en", false,-1);
    tracep->declBit(c+674,"wb_rst", false,-1);
    tracep->declBus(c+314,"wb_imm", false,-1, 31,0);
    tracep->declBus(c+633,"wb_addr", false,-1, 4,0);
    tracep->declQuad(c+315,"wb_imm_data", false,-1, 63,0);
    tracep->declQuad(c+634,"wb_data", false,-1, 63,0);
    tracep->declQuad(c+317,"wb_pc", false,-1, 63,0);
    tracep->declQuad(c+90,"wb_dnpc", false,-1, 63,0);
    tracep->declBus(c+92,"wb_opcode", false,-1, 6,0);
    tracep->declBit(c+319,"wb_csr_jar_en", false,-1);
    tracep->pushNamePrefix("EXE_alu ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declQuad(c+591,"scr1", false,-1, 63,0);
    tracep->declQuad(c+593,"scr2", false,-1, 63,0);
    tracep->declQuad(c+332,"imm", false,-1, 63,0);
    tracep->declBus(c+248,"opcode", false,-1, 6,0);
    tracep->declBus(c+598,"func3", false,-1, 2,0);
    tracep->declBit(c+599,"func7", false,-1);
    tracep->declBit(c+365,"mul_en", false,-1);
    tracep->declBit(c+631,"ready_i", false,-1);
    tracep->declBit(c+364,"stall", false,-1);
    tracep->declQuad(c+606,"result", false,-1, 63,0);
    tracep->declBus(c+636,"Mode", false,-1, 4,0);
    tracep->declQuad(c+591,"AU", false,-1, 63,0);
    tracep->declQuad(c+593,"BU", false,-1, 63,0);
    tracep->declQuad(c+637,"AY", false,-1, 63,0);
    tracep->declQuad(c+639,"BY", false,-1, 63,0);
    tracep->declBit(c+368,"mul_ready", false,-1);
    tracep->declQuad(c+302,"mux_result", false,-1, 63,0);
    tracep->declQuad(c+641,"mul_result", false,-1, 63,0);
    tracep->declQuad(c+606,"Alusu", false,-1, 63,0);
    tracep->declBit(c+249,"rv64i_en", false,-1);
    tracep->declBit(c+250,"rv64r_en", false,-1);
    tracep->declQuad(c+591,"mul_rsa", false,-1, 63,0);
    tracep->declQuad(c+593,"mul_rsb", false,-1, 63,0);
    tracep->pushNamePrefix("Mux_ALU ");
    tracep->declBus(c+681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+682,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+657,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+302,"out", false,-1, 63,0);
    tracep->declBus(c+636,"key", false,-1, 4,0);
    tracep->declQuad(c+683,"default_out", false,-1, 63,0);
    tracep->declArray(c+97,"lut", false,-1, 1172,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+681,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+682,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+657,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+302,"out", false,-1, 63,0);
    tracep->declBus(c+636,"key", false,-1, 4,0);
    tracep->declQuad(c+683,"default_out", false,-1, 63,0);
    tracep->declArray(c+97,"lut", false,-1, 1172,0);
    tracep->declBus(c+685,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 17; ++i) {
        tracep->declArray(c+251+i*3,"pair_list", true,(i+0), 68,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 17; ++i) {
        tracep->declQuad(c+138+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+304,"lut_out", false,-1, 63,0);
    tracep->declBit(c+306,"hit", false,-1);
    tracep->declBus(c+686,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+365,"en", false,-1);
    tracep->declQuad(c+591,"rsA", false,-1, 63,0);
    tracep->declQuad(c+593,"rsB", false,-1, 63,0);
    tracep->declBus(c+598,"func3", false,-1, 2,0);
    tracep->declBit(c+250,"rv64_en", false,-1);
    tracep->declBit(c+631,"ready_i", false,-1);
    tracep->declBit(c+368,"ready_o", false,-1);
    tracep->declQuad(c+641,"result", false,-1, 63,0);
    tracep->declBus(c+643,"rsAW", false,-1, 31,0);
    tracep->declBus(c+644,"rsBW", false,-1, 31,0);
    tracep->declBit(c+368,"ready", false,-1);
    tracep->declQuad(c+641,"data", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID_decode ");
    tracep->declBus(c+439,"instr", false,-1, 31,0);
    tracep->declBus(c+443,"opcode", false,-1, 6,0);
    tracep->declBus(c+440,"func3", false,-1, 2,0);
    tracep->declBit(c+441,"func7", false,-1);
    tracep->declBus(c+582,"Rs1", false,-1, 4,0);
    tracep->declBus(c+583,"Rs2", false,-1, 4,0);
    tracep->declBus(c+442,"Rd", false,-1, 4,0);
    tracep->declQuad(c+580,"imme", false,-1, 63,0);
    tracep->declBus(c+577,"V1Type", false,-1, 1,0);
    tracep->declBus(c+578,"V2Type", false,-1, 1,0);
    tracep->declBit(c+579,"Mul_en", false,-1);
    tracep->declBit(c+645,"I_type", false,-1);
    tracep->declBit(c+646,"U_type", false,-1);
    tracep->declBit(c+445,"J_type", false,-1);
    tracep->declBit(c+446,"B_type", false,-1);
    tracep->declBit(c+447,"S_type", false,-1);
    tracep->declBit(c+647,"R_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_s1 ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declQuad(c+94,"pc", false,-1, 63,0);
    tracep->declQuad(c+625,"mem_pc", false,-1, 63,0);
    tracep->declBus(c+93,"imm_data", false,-1, 31,0);
    tracep->declBit(c+678,"stall", false,-1);
    tracep->declBit(c+576,"jarl_rady", false,-1);
    tracep->declBit(c+479,"valid_i", false,-1);
    tracep->declBit(c+134,"ready_i", false,-1);
    tracep->declBit(c+329,"valid_o", false,-1);
    tracep->declBit(c+96,"ready_o", false,-1);
    tracep->declBus(c+452,"r_data_i", false,-1, 31,0);
    tracep->declBus(c+330,"r_addr_o", false,-1, 31,0);
    tracep->declBus(c+320,"state", false,-1, 2,0);
    tracep->declBit(c+455,"jar", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Icache_L1 ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declBus(c+330,"cpu_req_addr", false,-1, 31,0);
    tracep->declBit(c+329,"cpu_valid", false,-1);
    tracep->declBus(c+452,"cpu_read_data", false,-1, 31,0);
    tracep->declBit(c+134,"cpu_ready", false,-1);
    tracep->declBit(c+351,"axi_ready_i", false,-1);
    tracep->declBit(c+331,"axi_valid_o", false,-1);
    tracep->declBit(c+352,"axi_r_last_i", false,-1);
    tracep->declBus(c+136,"axi_r_len_i", false,-1, 7,0);
    tracep->declQuad(c+453,"axi_r_data_i", false,-1, 63,0);
    tracep->declBus(c+135,"axi_r_addr_o", false,-1, 31,0);
    tracep->declBus(c+334,"cache_tag", false,-1, 20,0);
    tracep->declBus(c+335,"cache_index", false,-1, 6,0);
    tracep->declBus(c+336,"cache_offset", false,-1, 3,0);
    tracep->pushNamePrefix("ram_rd_data");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+172,"[0]", false,-1, 127,0);
    tracep->declArray(c+176,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+180,"[0]", false,-1, 127,0);
    tracep->declArray(c+184,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declArray(c+188,"[0]", false,-1, 127,0);
    tracep->declArray(c+192,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declArray(c+196,"[0]", false,-1, 127,0);
    tracep->declArray(c+200,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4]");
    tracep->declArray(c+204,"[0]", false,-1, 127,0);
    tracep->declArray(c+208,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5]");
    tracep->declArray(c+212,"[0]", false,-1, 127,0);
    tracep->declArray(c+216,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6]");
    tracep->declArray(c+220,"[0]", false,-1, 127,0);
    tracep->declArray(c+224,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7]");
    tracep->declArray(c+228,"[0]", false,-1, 127,0);
    tracep->declArray(c+232,"[1]", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+337,"read_data", false,-1, 127,0);
    tracep->declArray(c+321,"write_data", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+341+i*1,"write_en", true,(i+0));
    }
    tracep->declBit(c+137,"hit", false,-1);
    tracep->declBus(c+353,"tag_v", false,-1, 7,0);
    tracep->declBit(c+325,"bust_num", false,-1);
    tracep->declBus(c+349,"state", false,-1, 2,0);
    tracep->declBus(c+648,"next_state", false,-1, 2,0);
    tracep->declBus(c+326,"cache_write_point", false,-1, 2,0);
    tracep->declBus(c+327,"cache_write_point_last", false,-1, 2,0);
    tracep->pushNamePrefix("paper[0] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+41,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+462,"CEN", false,-1);
    tracep->declBit(c+456,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+45,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+463,"CEN", false,-1);
    tracep->declBit(c+457,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[1] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+25,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+470,"CEN", false,-1);
    tracep->declBit(c+354,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+29,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+471,"CEN", false,-1);
    tracep->declBit(c+355,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[2] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+49,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+472,"CEN", false,-1);
    tracep->declBit(c+356,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+33,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+473,"CEN", false,-1);
    tracep->declBit(c+357,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[3] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+37,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+464,"CEN", false,-1);
    tracep->declBit(c+358,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+53,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+465,"CEN", false,-1);
    tracep->declBit(c+359,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[4] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+57,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+466,"CEN", false,-1);
    tracep->declBit(c+360,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+61,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+474,"CEN", false,-1);
    tracep->declBit(c+361,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[5] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+65,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+467,"CEN", false,-1);
    tracep->declBit(c+458,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+69,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+475,"CEN", false,-1);
    tracep->declBit(c+362,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[6] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+73,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+468,"CEN", false,-1);
    tracep->declBit(c+459,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+77,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+476,"CEN", false,-1);
    tracep->declBit(c+363,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("paper[7] ");
    tracep->pushNamePrefix("cache_ram1 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+81,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+469,"CEN", false,-1);
    tracep->declBit(c+460,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_ram2 ");
    tracep->declBus(c+687,"Bits", false,-1, 31,0);
    tracep->declBus(c+657,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+688,"Add_Width", false,-1, 31,0);
    tracep->declArray(c+85,"Q", false,-1, 127,0);
    tracep->declBit(c+484,"CLK", false,-1);
    tracep->declBit(c+477,"CEN", false,-1);
    tracep->declBit(c+461,"WEN", false,-1);
    tracep->declBus(c+350,"A", false,-1, 5,0);
    tracep->declArray(c+321,"D", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM_dram ");
    tracep->declBus(c+657,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+657,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+689,"DATA_DEPTH", false,-1, 31,0);
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBus(c+617,"func3", false,-1, 2,0);
    tracep->declQuad(c+621,"addr", false,-1, 63,0);
    tracep->declQuad(c+623,"wdata", false,-1, 63,0);
    tracep->declBit(c+619,"en", false,-1);
    tracep->declBit(c+618,"wen", false,-1);
    tracep->declBit(c+631,"ready_i", false,-1);
    tracep->declBit(c+573,"stall", false,-1);
    tracep->declBit(c+632,"ready_o", false,-1);
    tracep->declQuad(c+629,"rdata", false,-1, 63,0);
    tracep->declQuad(c+629,"r_data", false,-1, 63,0);
    tracep->declQuad(c+649,"sram_data_r", false,-1, 63,0);
    tracep->declBus(c+651,"wmask", false,-1, 7,0);
    tracep->declBit(c+632,"readyo", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("M_reg ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBus(c+582,"Ra", false,-1, 4,0);
    tracep->declBus(c+583,"Rb", false,-1, 4,0);
    tracep->declBus(c+633,"Rw", false,-1, 4,0);
    tracep->declBit(c+89,"Wen", false,-1);
    tracep->declQuad(c+584,"BusA", false,-1, 63,0);
    tracep->declQuad(c+586,"BusB", false,-1, 63,0);
    tracep->declQuad(c+634,"BusW", false,-1, 63,0);
    tracep->declBit(c+674,"rst", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+369+i*2,"DataReg", true,(i+0), 63,0);
    }
    tracep->declBit(c+652,"write_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stall ");
    tracep->declBus(c+478,"stall", false,-1, 5,0);
    tracep->declBit(c+673,"rst", false,-1);
    tracep->declBit(c+674,"stall_from_id", false,-1);
    tracep->declBit(c+571,"stall_from_ex", false,-1);
    tracep->declBit(c+574,"stall_from_mem", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4 ");
    tracep->declBus(c+657,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+658,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+659,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declBit(c+328,"r_valid_i", false,-1);
    tracep->declBit(c+662,"w_valid_i", false,-1);
    tracep->declBit(c+18,"r_ready_o", false,-1);
    tracep->declBit(c+663,"w_ready_o", false,-1);
    tracep->declQuad(c+307,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+664,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+666,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+521,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+667,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+19,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+525,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+668,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+20,"r_last_o", false,-1);
    tracep->declBit(c+669,"w_last_o", false,-1);
    tracep->declBit(c+494,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+495,"axi_aw_valid_o", false,-1);
    tracep->declBus(c+496,"axi_aw_addr_o", false,-1, 31,0);
    tracep->declBus(c+497,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+498,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+499,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+500,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+501,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+502,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+503,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+504,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+505,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+506,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+507,"axi_w_ready_i", false,-1);
    tracep->declBit(c+508,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+509,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+511,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+512,"axi_w_last_o", false,-1);
    tracep->declBus(c+513,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+514,"axi_b_ready_o", false,-1);
    tracep->declBit(c+515,"axi_b_valid_i", false,-1);
    tracep->declBus(c+516,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+517,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+518,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+519,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+520,"axi_ar_valid_o", false,-1);
    tracep->declBus(c+521,"axi_ar_addr_o", false,-1, 31,0);
    tracep->declBus(c+522,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+523,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+524,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+525,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+526,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+527,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+528,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+529,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+530,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+531,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+532,"axi_r_ready_o", false,-1);
    tracep->declBit(c+533,"axi_r_valid_i", false,-1);
    tracep->declBus(c+534,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+535,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+537,"axi_r_last_i", false,-1);
    tracep->declBus(c+538,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+539,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+690,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+691,"axi_id", false,-1, 3,0);
    tracep->declBus(c+674,"axi_user", false,-1, 0,0);
    tracep->declBus(c+692,"axi_len", false,-1, 7,0);
    tracep->declBus(c+693,"axi_size", false,-1, 2,0);
    tracep->declBit(c+22,"axi_ar_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_Arbiter ");
    tracep->declBus(c+657,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+658,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+659,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+660,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+661,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declBit(c+331,"if_ar_valid", false,-1);
    tracep->declBit(c+351,"if_ar_ready", false,-1);
    tracep->declQuad(c+453,"if_ar_data", false,-1, 63,0);
    tracep->declBus(c+135,"if_ar_addr", false,-1, 31,0);
    tracep->declBus(c+136,"if_ar_len", false,-1, 7,0);
    tracep->declBit(c+352,"if_last_i", false,-1);
    tracep->declBit(c+662,"mem_rw_valid", false,-1);
    tracep->declBit(c+21,"mem_rw_ready", false,-1);
    tracep->declBit(c+670,"mem_rw_wen", false,-1);
    tracep->declQuad(c+671,"mem_rw_r_data", false,-1, 63,0);
    tracep->declQuad(c+664,"mem_rw_w_data", false,-1, 63,0);
    tracep->declBus(c+666,"mem_rw_addr", false,-1, 31,0);
    tracep->declBus(c+668,"mem_rw_len", false,-1, 7,0);
    tracep->declBus(c+667,"mem_rw_size", false,-1, 7,0);
    tracep->declBit(c+694,"mem_last_i", false,-1);
    tracep->declBit(c+328,"r_valid_i", false,-1);
    tracep->declBit(c+662,"w_valid_i", false,-1);
    tracep->declBit(c+18,"r_ready_o", false,-1);
    tracep->declBit(c+663,"w_ready_o", false,-1);
    tracep->declQuad(c+307,"data_read_o", false,-1, 63,0);
    tracep->declQuad(c+664,"rw_w_data_i", false,-1, 63,0);
    tracep->declBus(c+666,"w_addr_i", false,-1, 31,0);
    tracep->declBus(c+521,"r_addr_i", false,-1, 31,0);
    tracep->declBus(c+667,"w_size_i", false,-1, 7,0);
    tracep->declBus(c+19,"r_size_i", false,-1, 7,0);
    tracep->declBus(c+525,"r_len_i", false,-1, 7,0);
    tracep->declBus(c+668,"w_len_i", false,-1, 7,0);
    tracep->declBit(c+20,"r_last_i", false,-1);
    tracep->declBit(c+669,"w_last_i", false,-1);
    tracep->declBus(c+23,"rd_switch", false,-1, 2,0);
    tracep->declBus(c+653,"rd_next_switch", false,-1, 2,0);
    tracep->declBus(c+24,"rd_state", false,-1, 1,0);
    tracep->declBus(c+654,"rd_next_state", false,-1, 1,0);
    tracep->declBus(c+695,"wr_switch", false,-1, 2,0);
    tracep->declBus(c+696,"wr_next_switch", false,-1, 2,0);
    tracep->declBus(c+697,"wr_state", false,-1, 1,0);
    tracep->declBus(c+698,"wr_next_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_reg ");
    tracep->declBit(c+484,"clk", false,-1);
    tracep->declBit(c+485,"rst", false,-1);
    tracep->declBit(c+611,"en", false,-1);
    tracep->declQuad(c+435,"pc", false,-1, 63,0);
    tracep->declBus(c+612,"addr", false,-1, 2,0);
    tracep->declBus(c+598,"func3", false,-1, 2,0);
    tracep->declQuad(c+591,"data_i", false,-1, 63,0);
    tracep->declQuad(c+608,"data_o", false,-1, 63,0);
    tracep->declBit(c+613,"ready_o", false,-1);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+236+i*2,"mcsr_reg", true,(i+0), 63,0);
    }
    tracep->declBit(c+613,"ready", false,-1);
    tracep->declQuad(c+608,"data_r", false,-1, 63,0);
    tracep->declQuad(c+437,"data_w", false,-1, 63,0);
    tracep->declQuad(c+655,"data", false,-1, 63,0);
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
    bufp->fullCData(oldp+19,(((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                               ? (IData)(vlSelf->ysyx_22041412_top__DOT__mem_rw_size)
                               : 0xffU)),8);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_22041412_top__DOT__r_last_o));
    bufp->fullBit(oldp+21,((1U & ((2U == (IData)(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch))
                                   ? (IData)(vlSelf->ysyx_22041412_top__DOT__r_ready)
                                   : (IData)(vlSelf->ysyx_22041412_top__DOT__w_ready)))));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_22041412_top__DOT__axi4__DOT__axi_ar_valid));
    bufp->fullCData(oldp+23,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_switch),3);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_state),2);
    bufp->fullWData(oldp+25,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+29,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__1__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+33,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+37,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+41,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+45,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__0__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+49,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__2__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+53,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__3__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+57,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+61,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__4__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+65,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+69,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__5__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+73,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+77,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__6__KET____DOT__cache_ram2__Q),128);
    bufp->fullWData(oldp+81,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram1__Q),128);
    bufp->fullWData(oldp+85,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellout__paper__BRA__7__KET____DOT__cache_ram2__Q),128);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_22041412_top__DOT__wb_reg_en));
    bufp->fullQData(oldp+90,(vlSelf->ysyx_22041412_top__DOT__wb_dnpc),64);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_22041412_top__DOT__wb_opcode),7);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_22041412_top__DOT__if_imm),32);
    bufp->fullQData(oldp+94,(vlSelf->ysyx_22041412_top__DOT__if_pc),64);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_22041412_top__DOT__if_ready_o));
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
    bufp->fullWData(oldp+97,(__Vtemp_he331c0ba__0),1173);
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
    bufp->fullBit(oldp+134,(vlSelf->ysyx_22041412_top__DOT__if_ar_ready));
    bufp->fullIData(oldp+135,(vlSelf->ysyx_22041412_top__DOT__icache_ar_addr),32);
    bufp->fullCData(oldp+136,(vlSelf->ysyx_22041412_top__DOT__icache_ar_len),8);
    bufp->fullBit(oldp+137,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__hit));
    bufp->fullQData(oldp+138,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
    bufp->fullQData(oldp+152,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
    bufp->fullQData(oldp+154,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
    bufp->fullQData(oldp+156,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
    bufp->fullQData(oldp+158,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
    bufp->fullQData(oldp+160,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
    bufp->fullQData(oldp+162,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
    bufp->fullQData(oldp+164,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
    bufp->fullQData(oldp+166,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[14]),64);
    bufp->fullQData(oldp+168,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[15]),64);
    bufp->fullQData(oldp+170,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[16]),64);
    __Vtemp_h514ffd78__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][0U];
    __Vtemp_h514ffd78__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][1U];
    __Vtemp_h514ffd78__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][2U];
    __Vtemp_h514ffd78__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][0U][3U];
    bufp->fullWData(oldp+172,(__Vtemp_h514ffd78__0),128);
    __Vtemp_h515029b7__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][0U];
    __Vtemp_h515029b7__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][1U];
    __Vtemp_h515029b7__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][2U];
    __Vtemp_h515029b7__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [0U][1U][3U];
    bufp->fullWData(oldp+176,(__Vtemp_h515029b7__0),128);
    __Vtemp_h519b1c56__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][0U];
    __Vtemp_h519b1c56__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][1U];
    __Vtemp_h519b1c56__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][2U];
    __Vtemp_h519b1c56__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][0U][3U];
    bufp->fullWData(oldp+180,(__Vtemp_h519b1c56__0),128);
    __Vtemp_h519b008b__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][0U];
    __Vtemp_h519b008b__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][1U];
    __Vtemp_h519b008b__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][2U];
    __Vtemp_h519b008b__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [1U][1U][3U];
    bufp->fullWData(oldp+184,(__Vtemp_h519b008b__0),128);
    __Vtemp_h519b0ce5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][0U];
    __Vtemp_h519b0ce5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][1U];
    __Vtemp_h519b0ce5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][2U];
    __Vtemp_h519b0ce5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][0U][3U];
    bufp->fullWData(oldp+188,(__Vtemp_h519b0ce5__0),128);
    __Vtemp_h519b709c__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][0U];
    __Vtemp_h519b709c__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][1U];
    __Vtemp_h519b709c__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][2U];
    __Vtemp_h519b709c__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [2U][1U][3U];
    bufp->fullWData(oldp+192,(__Vtemp_h519b709c__0),128);
    __Vtemp_h519859b8__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][0U];
    __Vtemp_h519859b8__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][1U];
    __Vtemp_h519859b8__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][2U];
    __Vtemp_h519859b8__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][0U][3U];
    bufp->fullWData(oldp+196,(__Vtemp_h519859b8__0),128);
    __Vtemp_h5198b3e9__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][0U];
    __Vtemp_h5198b3e9__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][1U];
    __Vtemp_h5198b3e9__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][2U];
    __Vtemp_h5198b3e9__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [3U][1U][3U];
    bufp->fullWData(oldp+200,(__Vtemp_h5198b3e9__0),128);
    __Vtemp_h5198a475__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][0U];
    __Vtemp_h5198a475__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][1U];
    __Vtemp_h5198a475__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][2U];
    __Vtemp_h5198a475__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][0U][3U];
    bufp->fullWData(oldp+204,(__Vtemp_h5198a475__0),128);
    __Vtemp_h5198b0b6__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][0U];
    __Vtemp_h5198b0b6__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][1U];
    __Vtemp_h5198b0b6__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][2U];
    __Vtemp_h5198b0b6__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [4U][1U][3U];
    bufp->fullWData(oldp+208,(__Vtemp_h5198b0b6__0),128);
    __Vtemp_h5198b361__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][0U];
    __Vtemp_h5198b361__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][1U];
    __Vtemp_h5198b361__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][2U];
    __Vtemp_h5198b361__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][0U][3U];
    bufp->fullWData(oldp+212,(__Vtemp_h5198b361__0),128);
    __Vtemp_h51987e24__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][0U];
    __Vtemp_h51987e24__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][1U];
    __Vtemp_h51987e24__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][2U];
    __Vtemp_h51987e24__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [5U][1U][3U];
    bufp->fullWData(oldp+216,(__Vtemp_h51987e24__0),128);
    __Vtemp_h51984517__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][0U];
    __Vtemp_h51984517__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][1U];
    __Vtemp_h51984517__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][2U];
    __Vtemp_h51984517__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][0U][3U];
    bufp->fullWData(oldp+220,(__Vtemp_h51984517__0),128);
    __Vtemp_h51984e58__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][0U];
    __Vtemp_h51984e58__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][1U];
    __Vtemp_h51984e58__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][2U];
    __Vtemp_h51984e58__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [6U][1U][3U];
    bufp->fullWData(oldp+224,(__Vtemp_h51984e58__0),128);
    __Vtemp_h51a6c506__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][0U];
    __Vtemp_h51a6c506__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][1U];
    __Vtemp_h51a6c506__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][2U];
    __Vtemp_h51a6c506__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][0U][3U];
    bufp->fullWData(oldp+228,(__Vtemp_h51a6c506__0),128);
    __Vtemp_h51a728c5__0[0U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][0U];
    __Vtemp_h51a728c5__0[1U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][1U];
    __Vtemp_h51a728c5__0[2U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][2U];
    __Vtemp_h51a728c5__0[3U] = vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__ram_rd_data
        [7U][1U][3U];
    bufp->fullWData(oldp+232,(__Vtemp_h51a728c5__0),128);
    bufp->fullQData(oldp+236,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[0]),64);
    bufp->fullQData(oldp+238,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[1]),64);
    bufp->fullQData(oldp+240,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[2]),64);
    bufp->fullQData(oldp+242,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[3]),64);
    bufp->fullQData(oldp+244,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[4]),64);
    bufp->fullQData(oldp+246,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__mcsr_reg[5]),64);
    bufp->fullCData(oldp+248,(vlSelf->ysyx_22041412_top__DOT__ex_opcode),7);
    bufp->fullBit(oldp+249,((0x1bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
    bufp->fullBit(oldp+250,((0x3bU == (IData)(vlSelf->ysyx_22041412_top__DOT__ex_opcode))));
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
    bufp->fullWData(oldp+251,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
    bufp->fullWData(oldp+254,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
    bufp->fullWData(oldp+257,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
    bufp->fullWData(oldp+260,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
    bufp->fullWData(oldp+263,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
    bufp->fullWData(oldp+266,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
    bufp->fullWData(oldp+269,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
    bufp->fullWData(oldp+272,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
    bufp->fullWData(oldp+275,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
    bufp->fullWData(oldp+278,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
    bufp->fullWData(oldp+281,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
    bufp->fullWData(oldp+284,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
    bufp->fullWData(oldp+287,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
    bufp->fullWData(oldp+290,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
    bufp->fullWData(oldp+293,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[14]),69);
    bufp->fullWData(oldp+296,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[15]),69);
    bufp->fullWData(oldp+299,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[16]),69);
    bufp->fullQData(oldp+302,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mux_result),64);
    bufp->fullQData(oldp+304,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+306,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+307,(vlSelf->ysyx_22041412_top__DOT__axi_r_data),64);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_22041412_top__DOT__ex_imm),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_22041412_top__DOT__mem_imm),32);
    bufp->fullQData(oldp+311,(vlSelf->ysyx_22041412_top__DOT__mem_imm_data),64);
    bufp->fullBit(oldp+313,(vlSelf->ysyx_22041412_top__DOT__mem_csr_jar_en));
    bufp->fullIData(oldp+314,(vlSelf->ysyx_22041412_top__DOT__wb_imm),32);
    bufp->fullQData(oldp+315,(vlSelf->ysyx_22041412_top__DOT__wb_imm_data),64);
    bufp->fullQData(oldp+317,(vlSelf->ysyx_22041412_top__DOT__wb_pc),64);
    bufp->fullBit(oldp+319,(vlSelf->ysyx_22041412_top__DOT__wb_csr_jar_en));
    bufp->fullCData(oldp+320,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__state),3);
    bufp->fullWData(oldp+321,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_data),128);
    bufp->fullBit(oldp+325,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__bust_num));
    bufp->fullCData(oldp+326,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point),3);
    bufp->fullCData(oldp+327,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__cache_write_point_last),3);
    bufp->fullBit(oldp+328,(vlSelf->ysyx_22041412_top__DOT__r_valid));
    bufp->fullBit(oldp+329,(vlSelf->ysyx_22041412_top__DOT__if_ar_valid));
    bufp->fullIData(oldp+330,(vlSelf->ysyx_22041412_top__DOT__if_ar_addr),32);
    bufp->fullBit(oldp+331,(vlSelf->ysyx_22041412_top__DOT__icache_ar_valid));
    bufp->fullQData(oldp+332,(vlSelf->ysyx_22041412_top__DOT__ex_imm_data),64);
    bufp->fullIData(oldp+334,((vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+335,((0x7fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+336,((0xfU & vlSelf->ysyx_22041412_top__DOT__if_ar_addr)),4);
    bufp->fullWData(oldp+337,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__read_data),128);
    bufp->fullBit(oldp+341,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[0]));
    bufp->fullBit(oldp+342,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[1]));
    bufp->fullBit(oldp+343,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[2]));
    bufp->fullBit(oldp+344,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[3]));
    bufp->fullBit(oldp+345,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[4]));
    bufp->fullBit(oldp+346,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[5]));
    bufp->fullBit(oldp+347,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[6]));
    bufp->fullBit(oldp+348,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__write_en[7]));
    bufp->fullCData(oldp+349,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__state),3);
    bufp->fullCData(oldp+350,((0x3fU & (vlSelf->ysyx_22041412_top__DOT__if_ar_addr 
                                        >> 4U))),6);
    bufp->fullBit(oldp+351,(vlSelf->ysyx_22041412_top__DOT__icache_ar_ready));
    bufp->fullBit(oldp+352,(vlSelf->ysyx_22041412_top__DOT__icache_last_i));
    bufp->fullCData(oldp+353,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__tag_v),8);
    bufp->fullBit(oldp+354,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+355,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+356,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+357,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+358,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+359,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+360,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+361,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+362,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+363,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+364,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en))));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_22041412_top__DOT__ex_mul_en));
    bufp->fullQData(oldp+366,(vlSelf->ysyx_22041412_top__DOT__mem_pc),64);
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
    bufp->fullBit(oldp+368,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready));
    bufp->fullQData(oldp+369,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[0]),64);
    bufp->fullQData(oldp+371,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[1]),64);
    bufp->fullQData(oldp+373,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[2]),64);
    bufp->fullQData(oldp+375,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[3]),64);
    bufp->fullQData(oldp+377,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[4]),64);
    bufp->fullQData(oldp+379,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[5]),64);
    bufp->fullQData(oldp+381,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[6]),64);
    bufp->fullQData(oldp+383,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[7]),64);
    bufp->fullQData(oldp+385,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[8]),64);
    bufp->fullQData(oldp+387,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[9]),64);
    bufp->fullQData(oldp+389,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[10]),64);
    bufp->fullQData(oldp+391,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[11]),64);
    bufp->fullQData(oldp+393,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[12]),64);
    bufp->fullQData(oldp+395,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[13]),64);
    bufp->fullQData(oldp+397,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[14]),64);
    bufp->fullQData(oldp+399,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[15]),64);
    bufp->fullQData(oldp+401,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[16]),64);
    bufp->fullQData(oldp+403,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[17]),64);
    bufp->fullQData(oldp+405,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[18]),64);
    bufp->fullQData(oldp+407,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[19]),64);
    bufp->fullQData(oldp+409,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[20]),64);
    bufp->fullQData(oldp+411,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[21]),64);
    bufp->fullQData(oldp+413,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[22]),64);
    bufp->fullQData(oldp+415,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[23]),64);
    bufp->fullQData(oldp+417,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[24]),64);
    bufp->fullQData(oldp+419,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[25]),64);
    bufp->fullQData(oldp+421,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[26]),64);
    bufp->fullQData(oldp+423,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[27]),64);
    bufp->fullQData(oldp+425,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[28]),64);
    bufp->fullQData(oldp+427,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[29]),64);
    bufp->fullQData(oldp+429,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[30]),64);
    bufp->fullQData(oldp+431,(vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg[31]),64);
    bufp->fullQData(oldp+433,(vlSelf->ysyx_22041412_top__DOT__id_pc),64);
    bufp->fullQData(oldp+435,(vlSelf->ysyx_22041412_top__DOT__ex_pc),64);
    bufp->fullQData(oldp+437,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_w),64);
    bufp->fullIData(oldp+439,(vlSelf->ysyx_22041412_top__DOT__id_imm),32);
    bufp->fullCData(oldp+440,((7U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+441,((1U & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+442,(((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                ? 0U : ((0x63U == (0x7fU 
                                                   & vlSelf->ysyx_22041412_top__DOT__id_imm))
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                                    >> 7U))))),5);
    bufp->fullCData(oldp+443,((0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)),7);
    bufp->fullBit(oldp+444,((0x73U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+445,((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+446,((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullBit(oldp+447,((0x23U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm))));
    bufp->fullCData(oldp+448,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V1Type),2);
    bufp->fullCData(oldp+449,(vlSelf->ysyx_22041412_top__DOT__ex_imm_V2Type),2);
    bufp->fullCData(oldp+450,(vlSelf->ysyx_22041412_top__DOT__ex_Ra),5);
    bufp->fullCData(oldp+451,(vlSelf->ysyx_22041412_top__DOT__ex_Rb),5);
    bufp->fullIData(oldp+452,(vlSelf->ysyx_22041412_top__DOT__if_ar_data),32);
    bufp->fullQData(oldp+453,(vlSelf->ysyx_22041412_top__DOT__icache_ar_data),64);
    bufp->fullBit(oldp+455,(vlSelf->ysyx_22041412_top__DOT__IF_s1__DOT__jar));
    bufp->fullBit(oldp+456,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+457,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+458,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+459,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+460,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__WEN));
    bufp->fullBit(oldp+461,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__WEN));
    bufp->fullBit(oldp+462,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+463,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__0__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+464,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+465,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__3__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+466,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+467,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+469,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+470,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+471,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__1__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+472,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram1__CEN));
    bufp->fullBit(oldp+473,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__2__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+474,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__4__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+475,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__5__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+476,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__6__KET____DOT__cache_ram2__CEN));
    bufp->fullBit(oldp+477,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT____Vcellinp__paper__BRA__7__KET____DOT__cache_ram2__CEN));
    bufp->fullCData(oldp+478,(vlSelf->ysyx_22041412_top__DOT__pip_stall),6);
    bufp->fullBit(oldp+479,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 1U)))));
    bufp->fullBit(oldp+480,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 2U)))));
    bufp->fullBit(oldp+481,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 3U)))));
    bufp->fullBit(oldp+482,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 4U)))));
    bufp->fullBit(oldp+483,((1U & (~ ((IData)(vlSelf->ysyx_22041412_top__DOT__pip_stall) 
                                      >> 5U)))));
    bufp->fullBit(oldp+484,(vlSelf->clk));
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
    bufp->fullBit(oldp+485,(vlSelf->rst));
    bufp->fullQData(oldp+486,(vlSelf->pip_pc),64);
    bufp->fullQData(oldp+488,(vlSelf->pip_dnpc),64);
    bufp->fullQData(oldp+490,(vlSelf->pip_mem_pc),64);
    bufp->fullIData(oldp+492,(vlSelf->pip_imm),32);
    bufp->fullBit(oldp+493,(vlSelf->Ebreak));
    bufp->fullBit(oldp+494,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+495,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+496,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+497,(vlSelf->io_master_awprot),3);
    bufp->fullCData(oldp+498,(vlSelf->io_master_awid),4);
    bufp->fullBit(oldp+499,(vlSelf->io_master_awuser));
    bufp->fullCData(oldp+500,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+501,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+502,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+503,(vlSelf->io_master_awlock));
    bufp->fullCData(oldp+504,(vlSelf->io_master_awcache),4);
    bufp->fullCData(oldp+505,(vlSelf->io_master_awqos),4);
    bufp->fullCData(oldp+506,(vlSelf->io_master_awregion),4);
    bufp->fullBit(oldp+507,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+508,(vlSelf->io_master_wvalid));
    bufp->fullQData(oldp+509,(vlSelf->io_master_wdata),64);
    bufp->fullCData(oldp+511,(vlSelf->io_master_wstrb),8);
    bufp->fullBit(oldp+512,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+513,(vlSelf->io_master_wuser));
    bufp->fullBit(oldp+514,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+515,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+516,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+517,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+518,(vlSelf->io_master_buser));
    bufp->fullBit(oldp+519,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+520,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+521,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+522,(vlSelf->io_master_arprot),3);
    bufp->fullCData(oldp+523,(vlSelf->io_master_arid),4);
    bufp->fullBit(oldp+524,(vlSelf->io_master_aruser));
    bufp->fullCData(oldp+525,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+526,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+527,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+528,(vlSelf->io_master_arlock));
    bufp->fullCData(oldp+529,(vlSelf->io_master_arcache),4);
    bufp->fullCData(oldp+530,(vlSelf->io_master_arqos),4);
    bufp->fullCData(oldp+531,(vlSelf->io_master_arregion),4);
    bufp->fullBit(oldp+532,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+533,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+534,(vlSelf->io_master_rresp),2);
    bufp->fullQData(oldp+535,(vlSelf->io_master_rdata),64);
    bufp->fullBit(oldp+537,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+538,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+539,(vlSelf->io_master_ruser));
    bufp->fullBit(oldp+540,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+541,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+542,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+543,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+544,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+545,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+546,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+547,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+548,(vlSelf->io_slave_wvalid));
    bufp->fullQData(oldp+549,(vlSelf->io_slave_wdata),64);
    bufp->fullCData(oldp+551,(vlSelf->io_slave_wstrb),8);
    bufp->fullBit(oldp+552,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+553,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+554,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+555,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+556,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+557,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+558,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+559,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+560,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+561,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+562,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+563,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+564,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+565,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+566,(vlSelf->io_slave_rresp),2);
    bufp->fullQData(oldp+567,(vlSelf->io_slave_rdata),64);
    bufp->fullBit(oldp+569,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+570,(vlSelf->io_slave_rid),4);
    bufp->fullBit(oldp+571,(((IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait) 
                             | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__ready)) 
                                & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_mul_en)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyx_22041412_top__DOT__ex_wait));
    bufp->fullBit(oldp+573,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyx_22041412_top__DOT__mem_wait) 
                             | (((~ (IData)(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo)) 
                                 & (IData)(vlSelf->ysyx_22041412_top__DOT__mem_ram_en)) 
                                | ((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                                   & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))))));
    bufp->fullBit(oldp+575,(((0x6fU == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                             | ((0x63U == (0x7fU & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                | ((0x67U == (0x7fU 
                                              & vlSelf->ysyx_22041412_top__DOT__id_imm)) 
                                   | (IData)(vlSelf->ysyx_22041412_top__DOT__csr_jar_en))))));
    bufp->fullBit(oldp+576,(vlSelf->ysyx_22041412_top__DOT__if_jr_ready));
    bufp->fullCData(oldp+577,(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type),2);
    bufp->fullCData(oldp+578,(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type),2);
    bufp->fullBit(oldp+579,(((IData)(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type) 
                             & (vlSelf->ysyx_22041412_top__DOT__id_imm 
                                >> 0x19U))));
    bufp->fullQData(oldp+580,(vlSelf->ysyx_22041412_top__DOT__id_imm_data),64);
    bufp->fullCData(oldp+582,(vlSelf->ysyx_22041412_top__DOT__id_Ra),5);
    bufp->fullCData(oldp+583,(vlSelf->ysyx_22041412_top__DOT__id_Rb),5);
    bufp->fullQData(oldp+584,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_Ra))
                                ? 0ULL : vlSelf->ysyx_22041412_top__DOT__M_reg__DOT__DataReg
                               [vlSelf->ysyx_22041412_top__DOT__id_Ra])),64);
    bufp->fullQData(oldp+586,(vlSelf->ysyx_22041412_top__DOT__id_rsB),64);
    bufp->fullBit(oldp+588,(vlSelf->ysyx_22041412_top__DOT__csr_jar_en));
    bufp->fullSData(oldp+589,(vlSelf->ysyx_22041412_top__DOT__csr),12);
    bufp->fullCData(oldp+590,(vlSelf->ysyx_22041412_top__DOT__id_csr_id),3);
    bufp->fullQData(oldp+591,(vlSelf->ysyx_22041412_top__DOT__ex_v1),64);
    bufp->fullQData(oldp+593,(vlSelf->ysyx_22041412_top__DOT__ex_v2),64);
    bufp->fullQData(oldp+595,(vlSelf->ysyx_22041412_top__DOT__ex_rs2),64);
    bufp->fullCData(oldp+597,(vlSelf->ysyx_22041412_top__DOT__ex_rw),5);
    bufp->fullCData(oldp+598,(vlSelf->ysyx_22041412_top__DOT__ex_func3),3);
    bufp->fullBit(oldp+599,(vlSelf->ysyx_22041412_top__DOT__ex_func7));
    bufp->fullQData(oldp+600,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V1Type))
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
    bufp->fullQData(oldp+602,(((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__id_imm_V2Type))
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
    bufp->fullQData(oldp+604,(((IData)(vlSelf->ysyx_22041412_top__DOT____VdfgTmp_h8e605235__0)
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
    bufp->fullQData(oldp+606,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Alusu),64);
    bufp->fullQData(oldp+608,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data_r),64);
    bufp->fullBit(oldp+610,(vlSelf->ysyx_22041412_top__DOT__ex_csr_jar_en));
    bufp->fullBit(oldp+611,(vlSelf->ysyx_22041412_top__DOT__ex_csr_en));
    bufp->fullCData(oldp+612,(vlSelf->ysyx_22041412_top__DOT__ex_csr_id),3);
    bufp->fullBit(oldp+613,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready));
    bufp->fullBit(oldp+614,(((~ (IData)(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__ready)) 
                             & (IData)(vlSelf->ysyx_22041412_top__DOT__ex_csr_en))));
    bufp->fullCData(oldp+615,(vlSelf->ysyx_22041412_top__DOT__mem_rw),5);
    bufp->fullCData(oldp+616,(vlSelf->ysyx_22041412_top__DOT__mem_opcode),7);
    bufp->fullCData(oldp+617,(vlSelf->ysyx_22041412_top__DOT__mem_func3),3);
    bufp->fullBit(oldp+618,(vlSelf->ysyx_22041412_top__DOT__mem_rw_type));
    bufp->fullBit(oldp+619,(vlSelf->ysyx_22041412_top__DOT__mem_ram_en));
    bufp->fullBit(oldp+620,(vlSelf->ysyx_22041412_top__DOT__mem_reg_en));
    bufp->fullQData(oldp+621,(vlSelf->ysyx_22041412_top__DOT__mem_addr),64);
    bufp->fullQData(oldp+623,(vlSelf->ysyx_22041412_top__DOT__mem_wdata),64);
    bufp->fullQData(oldp+625,(vlSelf->ysyx_22041412_top__DOT__mem_dnpc),64);
    bufp->fullQData(oldp+627,(vlSelf->ysyx_22041412_top__DOT__mem_res),64);
    bufp->fullQData(oldp+629,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__r_data),64);
    bufp->fullBit(oldp+631,((1U & (~ (IData)(vlSelf->ysyx_22041412_top__DOT__ex_wait)))));
    bufp->fullBit(oldp+632,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__readyo));
    bufp->fullCData(oldp+633,(vlSelf->ysyx_22041412_top__DOT__wb_addr),5);
    bufp->fullQData(oldp+634,(vlSelf->ysyx_22041412_top__DOT__wb_data),64);
    bufp->fullCData(oldp+636,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__Mode),5);
    bufp->fullQData(oldp+637,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__AY),64);
    bufp->fullQData(oldp+639,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__BY),64);
    bufp->fullQData(oldp+641,(vlSelf->ysyx_22041412_top__DOT__EXE_alu__DOT__mul__DOT__data),64);
    bufp->fullIData(oldp+643,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v1)),32);
    bufp->fullIData(oldp+644,((IData)(vlSelf->ysyx_22041412_top__DOT__ex_v2)),32);
    bufp->fullBit(oldp+645,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__I_type));
    bufp->fullBit(oldp+646,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__U_type));
    bufp->fullBit(oldp+647,(vlSelf->ysyx_22041412_top__DOT__ID_decode__DOT__R_type));
    bufp->fullCData(oldp+648,(vlSelf->ysyx_22041412_top__DOT__Icache_L1__DOT__next_state),3);
    bufp->fullQData(oldp+649,(vlSelf->ysyx_22041412_top__DOT__MEM_dram__DOT__sram_data_r),64);
    bufp->fullCData(oldp+651,(((0U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                  ? 0xfU
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyx_22041412_top__DOT__mem_func3))
                                                   ? 0xffU
                                                   : 0U))))),8);
    bufp->fullBit(oldp+652,(((IData)(vlSelf->ysyx_22041412_top__DOT__wb_reg_en) 
                             & (0U != (IData)(vlSelf->ysyx_22041412_top__DOT__wb_addr)))));
    bufp->fullCData(oldp+653,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_switch),3);
    bufp->fullCData(oldp+654,(vlSelf->ysyx_22041412_top__DOT__axi_Arbiter__DOT__rd_next_state),2);
    bufp->fullQData(oldp+655,(vlSelf->ysyx_22041412_top__DOT__csr_reg__DOT__data),64);
    bufp->fullIData(oldp+657,(0x40U),32);
    bufp->fullIData(oldp+658,(0x20U),32);
    bufp->fullIData(oldp+659,(4U),32);
    bufp->fullIData(oldp+660,(8U),32);
    bufp->fullIData(oldp+661,(1U),32);
    bufp->fullBit(oldp+662,(vlSelf->ysyx_22041412_top__DOT__mem_rw_valid));
    bufp->fullBit(oldp+663,(vlSelf->ysyx_22041412_top__DOT__w_ready));
    bufp->fullQData(oldp+664,(vlSelf->ysyx_22041412_top__DOT__mem_rw_w_data),64);
    bufp->fullIData(oldp+666,(vlSelf->ysyx_22041412_top__DOT__mem_rw_addr),32);
    bufp->fullCData(oldp+667,(vlSelf->ysyx_22041412_top__DOT__mem_rw_size),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyx_22041412_top__DOT__mem_rw_len),8);
    bufp->fullBit(oldp+669,(vlSelf->ysyx_22041412_top__DOT__w_last_o));
    bufp->fullBit(oldp+670,(vlSelf->ysyx_22041412_top__DOT__mem_rw_wen));
    bufp->fullQData(oldp+671,(vlSelf->ysyx_22041412_top__DOT__mem_rw_r_data),64);
    bufp->fullBit(oldp+673,(vlSelf->ysyx_22041412_top__DOT__pip_rst));
    bufp->fullBit(oldp+674,(0U));
    bufp->fullBit(oldp+675,(vlSelf->ysyx_22041412_top__DOT__id_wait));
    bufp->fullBit(oldp+676,(vlSelf->ysyx_22041412_top__DOT__mem_wait));
    bufp->fullCData(oldp+677,(vlSelf->ysyx_22041412_top__DOT__if_r_strb),8);
    bufp->fullBit(oldp+678,(vlSelf->ysyx_22041412_top__DOT__if_wait));
    bufp->fullQData(oldp+679,(vlSelf->ysyx_22041412_top__DOT__mem_temp),64);
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
