// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041412_cpu__Syms.h"


void Vysyx_22041412_cpu___024root__traceInitSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_cpu___024root__traceInitTop(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceInitSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+287,"clk", false,-1);
        tracep->declQuad(c+288,"CP_PC", false,-1, 63,0);
        tracep->declQuad(c+290,"CP_NPC", false,-1, 63,0);
        tracep->declBus(c+292,"CP_IMM", false,-1, 31,0);
        tracep->declBit(c+293,"Ebreak", false,-1);
        tracep->declBit(c+287,"ysyx_22041412_cpu clk", false,-1);
        tracep->declQuad(c+288,"ysyx_22041412_cpu CP_PC", false,-1, 63,0);
        tracep->declQuad(c+290,"ysyx_22041412_cpu CP_NPC", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22041412_cpu CP_IMM", false,-1, 31,0);
        tracep->declBit(c+293,"ysyx_22041412_cpu Ebreak", false,-1);
        tracep->declBus(c+294,"ysyx_22041412_cpu cpu_count", false,-1, 3,0);
        tracep->declBit(c+295,"ysyx_22041412_cpu JR_EN", false,-1);
        tracep->declBit(c+296,"ysyx_22041412_cpu Mul_EN", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu Imm", false,-1, 31,0);
        tracep->declBit(c+287,"ysyx_22041412_cpu pip clk", false,-1);
        tracep->declQuad(c+288,"ysyx_22041412_cpu pip pip_pc", false,-1, 63,0);
        tracep->declQuad(c+290,"ysyx_22041412_cpu pip pip_dnpc", false,-1, 63,0);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip pip_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22041412_cpu pip pip_stall", false,-1, 5,0);
        tracep->declBit(c+297,"ysyx_22041412_cpu pip pip_rst", false,-1);
        tracep->declBit(c+3,"ysyx_22041412_cpu pip if_en", false,-1);
        tracep->declBit(c+4,"ysyx_22041412_cpu pip id_en", false,-1);
        tracep->declBit(c+5,"ysyx_22041412_cpu pip ex_en", false,-1);
        tracep->declBit(c+6,"ysyx_22041412_cpu pip mem_en", false,-1);
        tracep->declBit(c+7,"ysyx_22041412_cpu pip wb_en", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip id_stall", false,-1);
        tracep->declBit(c+298,"ysyx_22041412_cpu pip ex_stall", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip mem_stall", false,-1);
        tracep->declBus(c+10,"ysyx_22041412_cpu pip if_imm", false,-1, 31,0);
        tracep->declQuad(c+11,"ysyx_22041412_cpu pip if_pc", false,-1, 63,0);
        tracep->declQuad(c+13,"ysyx_22041412_cpu pip if_dnpc", false,-1, 63,0);
        tracep->declBus(c+299,"ysyx_22041412_cpu pip if_start", false,-1, 2,0);
        tracep->declBit(c+15,"ysyx_22041412_cpu pip id_imm_V1Type", false,-1);
        tracep->declBit(c+16,"ysyx_22041412_cpu pip id_imm_V2Type", false,-1);
        tracep->declBus(c+17,"ysyx_22041412_cpu pip id_imm", false,-1, 31,0);
        tracep->declBit(c+18,"ysyx_22041412_cpu pip id_mul_en", false,-1);
        tracep->declQuad(c+19,"ysyx_22041412_cpu pip id_pc", false,-1, 63,0);
        tracep->declQuad(c+21,"ysyx_22041412_cpu pip id_imm_data", false,-1, 63,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip id_func3", false,-1, 2,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu pip id_func7", false,-1);
        tracep->declBus(c+25,"ysyx_22041412_cpu pip id_Ra", false,-1, 4,0);
        tracep->declBus(c+26,"ysyx_22041412_cpu pip id_Rb", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu pip id_Rw", false,-1, 4,0);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip id_opcode", false,-1, 6,0);
        tracep->declQuad(c+29,"ysyx_22041412_cpu pip id_rsA", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22041412_cpu pip id_rsB", false,-1, 63,0);
        tracep->declBit(c+33,"ysyx_22041412_cpu pip ex_mul_en", false,-1);
        tracep->declBus(c+34,"ysyx_22041412_cpu pip ex_imm", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22041412_cpu pip ex_imm_data", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu pip ex_v1", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu pip ex_v2", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22041412_cpu pip ex_rs2", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22041412_cpu pip ex_rw", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22041412_cpu pip ex_func3", false,-1, 2,0);
        tracep->declBit(c+45,"ysyx_22041412_cpu pip ex_func7", false,-1);
        tracep->declBus(c+46,"ysyx_22041412_cpu pip ex_opcode", false,-1, 6,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip ex_res", false,-1, 63,0);
        tracep->declQuad(c+49,"ysyx_22041412_cpu pip ex_pc", false,-1, 63,0);
        tracep->declBus(c+51,"ysyx_22041412_cpu pip mem_imm", false,-1, 31,0);
        tracep->declBus(c+52,"ysyx_22041412_cpu pip mem_rw", false,-1, 4,0);
        tracep->declBus(c+53,"ysyx_22041412_cpu pip mem_opcode", false,-1, 6,0);
        tracep->declBus(c+54,"ysyx_22041412_cpu pip mem_func3", false,-1, 2,0);
        tracep->declBit(c+55,"ysyx_22041412_cpu pip mem_rw_type", false,-1);
        tracep->declQuad(c+56,"ysyx_22041412_cpu pip mem_addr", false,-1, 63,0);
        tracep->declQuad(c+58,"ysyx_22041412_cpu pip mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+60,"ysyx_22041412_cpu pip mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+62,"ysyx_22041412_cpu pip mem_pc", false,-1, 63,0);
        tracep->declQuad(c+64,"ysyx_22041412_cpu pip mem_imm_data", false,-1, 63,0);
        tracep->declQuad(c+300,"ysyx_22041412_cpu pip mem_temp", false,-1, 63,0);
        tracep->declBit(c+66,"ysyx_22041412_cpu pip mem_ram_en", false,-1);
        tracep->declBit(c+67,"ysyx_22041412_cpu pip wb_rgw_en", false,-1);
        tracep->declBit(c+302,"ysyx_22041412_cpu pip wb_rst", false,-1);
        tracep->declBus(c+1,"ysyx_22041412_cpu pip wb_imm", false,-1, 31,0);
        tracep->declBus(c+68,"ysyx_22041412_cpu pip wb_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"ysyx_22041412_cpu pip wb_imm_data", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22041412_cpu pip wb_data", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22041412_cpu pip wb_pc", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22041412_cpu pip wb_dnpc", false,-1, 63,0);
        tracep->declBus(c+77,"ysyx_22041412_cpu pip wb_opcode", false,-1, 6,0);
        tracep->declBit(c+287,"ysyx_22041412_cpu pip IF_ImmMem clk", false,-1);
        tracep->declQuad(c+11,"ysyx_22041412_cpu pip IF_ImmMem Addr", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_22041412_cpu pip IF_ImmMem Imm", false,-1, 31,0);
        tracep->declBus(c+17,"ysyx_22041412_cpu pip ID_decode instr", false,-1, 31,0);
        tracep->declBus(c+28,"ysyx_22041412_cpu pip ID_decode opcode", false,-1, 6,0);
        tracep->declBus(c+23,"ysyx_22041412_cpu pip ID_decode func3", false,-1, 2,0);
        tracep->declBit(c+24,"ysyx_22041412_cpu pip ID_decode func7", false,-1);
        tracep->declBus(c+25,"ysyx_22041412_cpu pip ID_decode Rs1", false,-1, 4,0);
        tracep->declBus(c+26,"ysyx_22041412_cpu pip ID_decode Rs2", false,-1, 4,0);
        tracep->declBus(c+27,"ysyx_22041412_cpu pip ID_decode Rd", false,-1, 4,0);
        tracep->declQuad(c+21,"ysyx_22041412_cpu pip ID_decode imme", false,-1, 63,0);
        tracep->declBit(c+15,"ysyx_22041412_cpu pip ID_decode V1Type", false,-1);
        tracep->declBit(c+16,"ysyx_22041412_cpu pip ID_decode V2Type", false,-1);
        tracep->declBit(c+18,"ysyx_22041412_cpu pip ID_decode Mul_en", false,-1);
        tracep->declBit(c+78,"ysyx_22041412_cpu pip ID_decode I_type", false,-1);
        tracep->declBit(c+79,"ysyx_22041412_cpu pip ID_decode U_type", false,-1);
        tracep->declBit(c+80,"ysyx_22041412_cpu pip ID_decode J_type", false,-1);
        tracep->declBit(c+81,"ysyx_22041412_cpu pip ID_decode B_type", false,-1);
        tracep->declBit(c+82,"ysyx_22041412_cpu pip ID_decode S_type", false,-1);
        tracep->declBit(c+83,"ysyx_22041412_cpu pip ID_decode R_type", false,-1);
        tracep->declQuad(c+84,"ysyx_22041412_cpu pip ID_decode I_imme", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22041412_cpu pip ID_decode U_imme", false,-1, 63,0);
        tracep->declQuad(c+88,"ysyx_22041412_cpu pip ID_decode J_imme", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22041412_cpu pip ID_decode B_imme", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22041412_cpu pip ID_decode S_imme", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu pip EXE_alu scr1", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu pip EXE_alu scr2", false,-1, 63,0);
        tracep->declBus(c+46,"ysyx_22041412_cpu pip EXE_alu opcode", false,-1, 6,0);
        tracep->declBus(c+44,"ysyx_22041412_cpu pip EXE_alu func3", false,-1, 2,0);
        tracep->declBit(c+45,"ysyx_22041412_cpu pip EXE_alu func7", false,-1);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu result", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_22041412_cpu pip EXE_alu Mode", false,-1, 4,0);
        tracep->declQuad(c+37,"ysyx_22041412_cpu pip EXE_alu AU", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22041412_cpu pip EXE_alu BU", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22041412_cpu pip EXE_alu AY", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22041412_cpu pip EXE_alu BY", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22041412_cpu pip EXE_alu Muxsu", false,-1, 63,0);
        tracep->declQuad(c+47,"ysyx_22041412_cpu pip EXE_alu Alusu", false,-1, 63,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu pip EXE_alu Mux_ALU NR_KEY", false,-1, 31,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu pip EXE_alu Mux_ALU KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu pip EXE_alu Mux_ALU DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+99,"ysyx_22041412_cpu pip EXE_alu Mux_ALU out", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_22041412_cpu pip EXE_alu Mux_ALU key", false,-1, 4,0);
        tracep->declQuad(c+306,"ysyx_22041412_cpu pip EXE_alu Mux_ALU default_out", false,-1, 63,0);
        tracep->declArray(c+101,"ysyx_22041412_cpu pip EXE_alu Mux_ALU lut", false,-1, 965,0);
        tracep->declBus(c+303,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+304,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+308,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+99,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 out", false,-1, 63,0);
        tracep->declBus(c+94,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key", false,-1, 4,0);
        tracep->declQuad(c+306,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 default_out", false,-1, 63,0);
        tracep->declArray(c+101,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut", false,-1, 965,0);
        tracep->declBus(c+309,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<14; i++) {
                tracep->declArray(c+132+i*3,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<14; i++) {
                tracep->declBus(c+174+i*1,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<14; i++) {
                tracep->declQuad(c+188+i*2,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+216,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+218,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 hit", false,-1);
        tracep->declBus(c+310,"ysyx_22041412_cpu pip EXE_alu Mux_ALU i0 i", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu pip MEM_sram ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22041412_cpu pip MEM_sram DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22041412_cpu pip MEM_sram DATA_DEPTH", false,-1, 31,0);
        tracep->declBit(c+287,"ysyx_22041412_cpu pip MEM_sram clk", false,-1);
        tracep->declBus(c+54,"ysyx_22041412_cpu pip MEM_sram func3", false,-1, 2,0);
        tracep->declQuad(c+56,"ysyx_22041412_cpu pip MEM_sram addr", false,-1, 63,0);
        tracep->declQuad(c+60,"ysyx_22041412_cpu pip MEM_sram wdata", false,-1, 63,0);
        tracep->declBit(c+55,"ysyx_22041412_cpu pip MEM_sram wen", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip MEM_sram stall", false,-1);
        tracep->declQuad(c+58,"ysyx_22041412_cpu pip MEM_sram rdata", false,-1, 63,0);
        tracep->declBit(c+219,"ysyx_22041412_cpu pip MEM_sram ready", false,-1);
        tracep->declQuad(c+220,"ysyx_22041412_cpu pip MEM_sram sram_data_r", false,-1, 63,0);
        tracep->declBus(c+222,"ysyx_22041412_cpu pip MEM_sram wmask", false,-1, 7,0);
        tracep->declBit(c+287,"ysyx_22041412_cpu pip M_reg clk", false,-1);
        tracep->declBus(c+25,"ysyx_22041412_cpu pip M_reg Ra", false,-1, 4,0);
        tracep->declBus(c+26,"ysyx_22041412_cpu pip M_reg Rb", false,-1, 4,0);
        tracep->declBus(c+68,"ysyx_22041412_cpu pip M_reg Rw", false,-1, 4,0);
        tracep->declBit(c+67,"ysyx_22041412_cpu pip M_reg Wen", false,-1);
        tracep->declQuad(c+29,"ysyx_22041412_cpu pip M_reg BusA", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22041412_cpu pip M_reg BusB", false,-1, 63,0);
        tracep->declQuad(c+71,"ysyx_22041412_cpu pip M_reg BusW", false,-1, 63,0);
        tracep->declBit(c+302,"ysyx_22041412_cpu pip M_reg rst", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+223+i*2,"ysyx_22041412_cpu pip M_reg DataReg", true,(i+0), 63,0);}}
        tracep->declBus(c+2,"ysyx_22041412_cpu pip Stall stall", false,-1, 5,0);
        tracep->declBit(c+297,"ysyx_22041412_cpu pip Stall rst", false,-1);
        tracep->declBit(c+8,"ysyx_22041412_cpu pip Stall stall_from_id", false,-1);
        tracep->declBit(c+298,"ysyx_22041412_cpu pip Stall stall_from_ex", false,-1);
        tracep->declBit(c+9,"ysyx_22041412_cpu pip Stall stall_from_mem", false,-1);
    }
}

void Vysyx_22041412_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22041412_cpu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22041412_cpu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22041412_cpu___024root__traceRegister(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22041412_cpu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22041412_cpu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22041412_cpu___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22041412_cpu___024root__traceFullSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041412_cpu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041412_cpu___024root* const __restrict vlSelf = static_cast<Vysyx_22041412_cpu___024root*>(voidSelf);
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041412_cpu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041412_cpu___024root__traceFullSub0(Vysyx_22041412_cpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041412_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm),32);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall),6);
        tracep->fullBit(oldp+3,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 1U)))));
        tracep->fullBit(oldp+4,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 2U)))));
        tracep->fullBit(oldp+5,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 3U)))));
        tracep->fullBit(oldp+6,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 4U)))));
        tracep->fullBit(oldp+7,((1U & (~ ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_stall) 
                                          >> 5U)))));
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_stall));
        tracep->fullBit(oldp+9,((((~ (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__ready)) 
                                  & (0ULL != vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr))
                                  ? 1U : 0U)));
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__IF_ImmMem__DOT__ImmMemory
                                   [(0x7ffffffU & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc))]),32);
        tracep->fullQData(oldp+11,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_pc),64);
        tracep->fullQData(oldp+13,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_dnpc),64);
        tracep->fullBit(oldp+15,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type) 
                                  | ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                     & (0x17U == (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))));
        tracep->fullBit(oldp+16,(((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type)
                                   ? (IData)((0x67U 
                                              != (0x707fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))
                                   : ((IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type) 
                                      | ((0x23U == 
                                          (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                         | ((~ ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))) 
                                            & (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type)))))));
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm),32);
        tracep->fullBit(oldp+18,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x19U))));
        tracep->fullQData(oldp+19,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_pc),64);
        tracep->fullQData(oldp+21,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm_data),64);
        tracep->fullCData(oldp+23,((7U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+24,((1U & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+25,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+26,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+27,((0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 7U))),5);
        tracep->fullCData(oldp+28,((0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)),7);
        tracep->fullQData(oldp+29,(((0U == (0x1fU & 
                                            (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg
                                    [(0x1fU & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_rsB),64);
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_mul_en));
        tracep->fullIData(oldp+34,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm),32);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_imm_data),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rs2),64);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_rw),5);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func3),3);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_func7));
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_opcode),7);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Alusu),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_pc),64);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm),32);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw),5);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_opcode),7);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3),3);
        tracep->fullBit(oldp+55,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rw_type));
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_addr),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_rdata),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_wdata),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_pc),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_imm_data),64);
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_ram_en));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_rgw_en));
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_addr),5);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_imm_data),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_data),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_pc),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__wb_opcode),7);
        tracep->fullBit(oldp+78,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__I_type));
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__U_type));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ID_decode__DOT__J_type));
        tracep->fullBit(oldp+81,((0x63U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+82,((0x23U == (0x7fU & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))));
        tracep->fullBit(oldp+83,(((0x33U == (0x7fU 
                                             & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm)))));
        tracep->fullQData(oldp+84,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+86,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm))))),64);
        tracep->fullQData(oldp+88,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                           >> 0x14U)))))))),64);
        tracep->fullQData(oldp+90,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                          >> 7U)))))))),64);
        tracep->fullQData(oldp+92,((((- (QData)((IData)(
                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__id_imm 
                                                                       >> 7U))))))),64);
        tracep->fullCData(oldp+94,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mode),5);
        tracep->fullQData(oldp+95,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v1))))),64);
        tracep->fullQData(oldp+97,((1ULL + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2 
                                                                         >> 0x3fU))))) 
                                             << 0x3fU) 
                                            | (0x7fffffffffffffffULL 
                                               & (~ vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_v2))))),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Muxsu),64);
        tracep->fullWData(oldp+101,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT____Vcellinp__Mux_ALU____pinNumber4),966);
        tracep->fullWData(oldp+132,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+135,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+138,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+141,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+144,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+147,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+150,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+153,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+156,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+159,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+162,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+165,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+168,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+171,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+175,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+176,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+178,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+180,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+181,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+184,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+186,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+187,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__key_list[13]),5);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+218,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__EXE_alu__DOT__Mux_ALU__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+219,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__ready));
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__MEM_sram__DOT__sram_data_r),64);
        tracep->fullCData(oldp+222,(((0U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                      ? 1U : ((1U == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                               ? 3U
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                   ? 0xfU
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_func3))
                                                    ? 0xffU
                                                    : 0U))))),8);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[0]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[1]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[2]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[3]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[4]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[5]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[6]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[7]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[8]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[9]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[10]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[11]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[12]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[13]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[14]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[15]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[16]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[17]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[18]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[19]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[20]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[21]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[22]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[23]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[24]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[25]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[26]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[27]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[28]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[29]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[30]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__M_reg__DOT__DataReg[31]),64);
        tracep->fullBit(oldp+287,(vlSelf->clk));
        tracep->fullQData(oldp+288,(vlSelf->CP_PC),64);
        tracep->fullQData(oldp+290,(vlSelf->CP_NPC),64);
        tracep->fullIData(oldp+292,(vlSelf->CP_IMM),32);
        tracep->fullBit(oldp+293,(vlSelf->Ebreak));
        tracep->fullCData(oldp+294,(vlSelf->ysyx_22041412_cpu__DOT__cpu_count),4);
        tracep->fullBit(oldp+295,(vlSelf->ysyx_22041412_cpu__DOT__JR_EN));
        tracep->fullBit(oldp+296,(vlSelf->ysyx_22041412_cpu__DOT__Mul_EN));
        tracep->fullBit(oldp+297,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__pip_rst));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__ex_stall));
        tracep->fullCData(oldp+299,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__if_start),3);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22041412_cpu__DOT__pip__DOT__mem_temp),64);
        tracep->fullBit(oldp+302,(0U));
        tracep->fullIData(oldp+303,(0xeU),32);
        tracep->fullIData(oldp+304,(5U),32);
        tracep->fullIData(oldp+305,(0x40U),32);
        tracep->fullQData(oldp+306,(0ULL),64);
        tracep->fullIData(oldp+308,(1U),32);
        tracep->fullIData(oldp+309,(0x45U),32);
        tracep->fullIData(oldp+310,(0xeU),32);
        tracep->fullIData(oldp+311,(0x10000U),32);
    }
}
