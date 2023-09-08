// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_22041412_TOP_H_
#define VERILATED_VYSYX_22041412_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_22041412_top__Syms;
class Vysyx_22041412_top___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vysyx_22041412_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_22041412_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_OUT8(&Ebreak,0,0);
    VL_IN8(&io_master_awready,0,0);
    VL_OUT8(&io_master_awvalid,0,0);
    VL_OUT8(&io_master_awprot,2,0);
    VL_OUT8(&io_master_awid,3,0);
    VL_OUT8(&io_master_awuser,0,0);
    VL_OUT8(&io_master_awlen,7,0);
    VL_OUT8(&io_master_awsize,2,0);
    VL_OUT8(&io_master_awburst,1,0);
    VL_OUT8(&io_master_awlock,0,0);
    VL_OUT8(&io_master_awcache,3,0);
    VL_OUT8(&io_master_awqos,3,0);
    VL_OUT8(&io_master_awregion,3,0);
    VL_IN8(&io_master_wready,0,0);
    VL_OUT8(&io_master_wvalid,0,0);
    VL_OUT8(&io_master_wstrb,7,0);
    VL_OUT8(&io_master_wlast,0,0);
    VL_OUT8(&io_master_wuser,0,0);
    VL_OUT8(&io_master_bready,0,0);
    VL_IN8(&io_master_bvalid,0,0);
    VL_IN8(&io_master_bresp,1,0);
    VL_IN8(&io_master_bid,3,0);
    VL_IN8(&io_master_buser,0,0);
    VL_IN8(&io_master_arready,0,0);
    VL_OUT8(&io_master_arvalid,0,0);
    VL_OUT8(&io_master_arprot,2,0);
    VL_OUT8(&io_master_arid,3,0);
    VL_OUT8(&io_master_aruser,0,0);
    VL_OUT8(&io_master_arlen,7,0);
    VL_OUT8(&io_master_arsize,2,0);
    VL_OUT8(&io_master_arburst,1,0);
    VL_OUT8(&io_master_arlock,0,0);
    VL_OUT8(&io_master_arcache,3,0);
    VL_OUT8(&io_master_arqos,3,0);
    VL_OUT8(&io_master_arregion,3,0);
    VL_OUT8(&io_master_rready,0,0);
    VL_IN8(&io_master_rvalid,0,0);
    VL_IN8(&io_master_rresp,1,0);
    VL_IN8(&io_master_rlast,0,0);
    VL_IN8(&io_master_rid,3,0);
    VL_IN8(&io_master_ruser,0,0);
    VL_IN8(&io_slave_awready,0,0);
    VL_OUT8(&io_slave_awvalid,0,0);
    VL_OUT8(&io_slave_awid,3,0);
    VL_OUT8(&io_slave_awlen,7,0);
    VL_OUT8(&io_slave_awsize,2,0);
    VL_OUT8(&io_slave_awburst,1,0);
    VL_IN8(&io_slave_wready,0,0);
    VL_OUT8(&io_slave_wvalid,0,0);
    VL_OUT8(&io_slave_wstrb,7,0);
    VL_OUT8(&io_slave_wlast,0,0);
    VL_OUT8(&io_slave_bready,0,0);
    VL_IN8(&io_slave_bvalid,0,0);
    VL_IN8(&io_slave_bresp,1,0);
    VL_IN8(&io_slave_bid,3,0);
    VL_IN8(&io_slave_arready,0,0);
    VL_OUT8(&io_slave_arvalid,0,0);
    VL_OUT8(&io_slave_arid,3,0);
    VL_OUT8(&io_slave_arlen,7,0);
    VL_OUT8(&io_slave_arsize,2,0);
    VL_OUT8(&io_slave_arburst,1,0);
    VL_OUT8(&io_slave_rready,0,0);
    VL_IN8(&io_slave_rvalid,0,0);
    VL_IN8(&io_slave_rresp,1,0);
    VL_IN8(&io_slave_rlast,0,0);
    VL_IN8(&io_slave_rid,3,0);
    VL_OUT(&pip_imm,31,0);
    VL_OUT(&io_master_awaddr,31,0);
    VL_OUT(&io_master_araddr,31,0);
    VL_OUT(&io_slave_awaddr,31,0);
    VL_OUT(&io_slave_araddr,31,0);
    VL_OUT64(&pip_pc,63,0);
    VL_OUT64(&pip_dnpc,63,0);
    VL_OUT64(&pip_mem_pc,63,0);
    VL_OUT64(&io_master_wdata,63,0);
    VL_IN64(&io_master_rdata,63,0);
    VL_OUT64(&io_slave_wdata,63,0);
    VL_IN64(&io_slave_rdata,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_22041412_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_22041412_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_22041412_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_22041412_top();
  private:
    VL_UNCOPYABLE(Vysyx_22041412_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
