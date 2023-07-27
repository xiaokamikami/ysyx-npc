// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22041412_top.h"
#include "Vysyx_22041412_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22041412_top::Vysyx_22041412_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22041412_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pip_pc{vlSymsp->TOP.pip_pc}
    , pip_dnpc{vlSymsp->TOP.pip_dnpc}
    , pip_mem_pc{vlSymsp->TOP.pip_mem_pc}
    , pip_imm{vlSymsp->TOP.pip_imm}
    , Ebreak{vlSymsp->TOP.Ebreak}
    , io_master_awready{vlSymsp->TOP.io_master_awready}
    , io_master_awvalid{vlSymsp->TOP.io_master_awvalid}
    , io_master_awaddr{vlSymsp->TOP.io_master_awaddr}
    , io_master_awprot{vlSymsp->TOP.io_master_awprot}
    , io_master_awid{vlSymsp->TOP.io_master_awid}
    , io_master_awuser{vlSymsp->TOP.io_master_awuser}
    , io_master_awlen{vlSymsp->TOP.io_master_awlen}
    , io_master_awsize{vlSymsp->TOP.io_master_awsize}
    , io_master_awburst{vlSymsp->TOP.io_master_awburst}
    , io_master_awlock{vlSymsp->TOP.io_master_awlock}
    , io_master_awcache{vlSymsp->TOP.io_master_awcache}
    , io_master_awqos{vlSymsp->TOP.io_master_awqos}
    , io_master_awregion{vlSymsp->TOP.io_master_awregion}
    , io_master_wready{vlSymsp->TOP.io_master_wready}
    , io_master_wvalid{vlSymsp->TOP.io_master_wvalid}
    , io_master_wdata{vlSymsp->TOP.io_master_wdata}
    , io_master_wstrb{vlSymsp->TOP.io_master_wstrb}
    , io_master_wlast{vlSymsp->TOP.io_master_wlast}
    , io_master_wuser{vlSymsp->TOP.io_master_wuser}
    , io_master_bready{vlSymsp->TOP.io_master_bready}
    , io_master_bvalid{vlSymsp->TOP.io_master_bvalid}
    , io_master_bresp{vlSymsp->TOP.io_master_bresp}
    , io_master_bid{vlSymsp->TOP.io_master_bid}
    , io_master_buser{vlSymsp->TOP.io_master_buser}
    , io_master_arready{vlSymsp->TOP.io_master_arready}
    , io_master_arvalid{vlSymsp->TOP.io_master_arvalid}
    , io_master_araddr{vlSymsp->TOP.io_master_araddr}
    , io_master_arprot{vlSymsp->TOP.io_master_arprot}
    , io_master_arid{vlSymsp->TOP.io_master_arid}
    , io_master_aruser{vlSymsp->TOP.io_master_aruser}
    , io_master_arlen{vlSymsp->TOP.io_master_arlen}
    , io_master_arsize{vlSymsp->TOP.io_master_arsize}
    , io_master_arburst{vlSymsp->TOP.io_master_arburst}
    , io_master_arlock{vlSymsp->TOP.io_master_arlock}
    , io_master_arcache{vlSymsp->TOP.io_master_arcache}
    , io_master_arqos{vlSymsp->TOP.io_master_arqos}
    , io_master_arregion{vlSymsp->TOP.io_master_arregion}
    , io_master_rready{vlSymsp->TOP.io_master_rready}
    , io_master_rvalid{vlSymsp->TOP.io_master_rvalid}
    , io_master_rresp{vlSymsp->TOP.io_master_rresp}
    , io_master_rdata{vlSymsp->TOP.io_master_rdata}
    , io_master_rlast{vlSymsp->TOP.io_master_rlast}
    , io_master_rid{vlSymsp->TOP.io_master_rid}
    , io_master_ruser{vlSymsp->TOP.io_master_ruser}
    , io_slave_awready{vlSymsp->TOP.io_slave_awready}
    , io_slave_awvalid{vlSymsp->TOP.io_slave_awvalid}
    , io_slave_awaddr{vlSymsp->TOP.io_slave_awaddr}
    , io_slave_awid{vlSymsp->TOP.io_slave_awid}
    , io_slave_awlen{vlSymsp->TOP.io_slave_awlen}
    , io_slave_awsize{vlSymsp->TOP.io_slave_awsize}
    , io_slave_awburst{vlSymsp->TOP.io_slave_awburst}
    , io_slave_wready{vlSymsp->TOP.io_slave_wready}
    , io_slave_wvalid{vlSymsp->TOP.io_slave_wvalid}
    , io_slave_wdata{vlSymsp->TOP.io_slave_wdata}
    , io_slave_wstrb{vlSymsp->TOP.io_slave_wstrb}
    , io_slave_wlast{vlSymsp->TOP.io_slave_wlast}
    , io_slave_bready{vlSymsp->TOP.io_slave_bready}
    , io_slave_bvalid{vlSymsp->TOP.io_slave_bvalid}
    , io_slave_bresp{vlSymsp->TOP.io_slave_bresp}
    , io_slave_bid{vlSymsp->TOP.io_slave_bid}
    , io_slave_arready{vlSymsp->TOP.io_slave_arready}
    , io_slave_arvalid{vlSymsp->TOP.io_slave_arvalid}
    , io_slave_araddr{vlSymsp->TOP.io_slave_araddr}
    , io_slave_arid{vlSymsp->TOP.io_slave_arid}
    , io_slave_arlen{vlSymsp->TOP.io_slave_arlen}
    , io_slave_arsize{vlSymsp->TOP.io_slave_arsize}
    , io_slave_arburst{vlSymsp->TOP.io_slave_arburst}
    , io_slave_rready{vlSymsp->TOP.io_slave_rready}
    , io_slave_rvalid{vlSymsp->TOP.io_slave_rvalid}
    , io_slave_rresp{vlSymsp->TOP.io_slave_rresp}
    , io_slave_rdata{vlSymsp->TOP.io_slave_rdata}
    , io_slave_rlast{vlSymsp->TOP.io_slave_rlast}
    , io_slave_rid{vlSymsp->TOP.io_slave_rid}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22041412_top::Vysyx_22041412_top(const char* _vcname__)
    : Vysyx_22041412_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22041412_top::~Vysyx_22041412_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22041412_top___024root___eval_initial(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___eval_settle(Vysyx_22041412_top___024root* vlSelf);
void Vysyx_22041412_top___024root___eval(Vysyx_22041412_top___024root* vlSelf);
QData Vysyx_22041412_top___024root___change_request(Vysyx_22041412_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22041412_top___024root___eval_debug_assertions(Vysyx_22041412_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22041412_top___024root___final(Vysyx_22041412_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22041412_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22041412_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22041412_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22041412_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22041412_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22041412_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22041412_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22041412_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22041412_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22041412_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22041412_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/kami/ysyx-workbench/npc/vsrc/ysyx_22041412_top.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22041412_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_22041412_top::final() {
    Vysyx_22041412_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22041412_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22041412_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_22041412_top___024root__traceInitTop(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22041412_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22041412_top___024root*>(voidSelf);
    Vysyx_22041412_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_22041412_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_22041412_top___024root__traceRegister(Vysyx_22041412_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041412_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_22041412_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
