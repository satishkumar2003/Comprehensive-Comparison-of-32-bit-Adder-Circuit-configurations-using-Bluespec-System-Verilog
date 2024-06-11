// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMKTESTBENCH_H_
#define _VMKTESTBENCH_H_  // guard

#include "verilated_heavy.h"

//==========

class VmkTestbench__Syms;
class VmkTestbench_VerilatedVcd;


//----------

VL_MODULE(VmkTestbench) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    CData/*0:0*/ mkTestbench__DOT__adder_1_available;
    CData/*0:0*/ mkTestbench__DOT__adder_1_available_EN;
    CData/*0:0*/ mkTestbench__DOT__adder_1_cin;
    CData/*0:0*/ mkTestbench__DOT__cin;
    CData/*7:0*/ mkTestbench__DOT__count;
    CData/*7:0*/ mkTestbench__DOT__count_D_IN;
    CData/*0:0*/ mkTestbench__DOT__cout;
    CData/*0:0*/ mkTestbench__DOT__overflow_flag;
    CData/*7:0*/ mkTestbench__DOT__rng_cin_r;
    CData/*7:0*/ mkTestbench__DOT__rng_cin_r_D_IN;
    CData/*1:0*/ mkTestbench__DOT__state;
    CData/*1:0*/ mkTestbench__DOT__state_D_IN;
    CData/*0:0*/ mkTestbench__DOT__state_EN;
    CData/*0:0*/ mkTestbench__DOT__CAN_FIRE_RL_get_results;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1204;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1312;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1420;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1528;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1636;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1744;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1852;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh1960;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2068;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2176;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2284;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2392;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2500;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2608;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2716;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2824;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh2932;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3040;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3148;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3256;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3364;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3472;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3580;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3688;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3796;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh3904;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh4012;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh4120;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh4228;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh4336;
    CData/*0:0*/ mkTestbench__DOT__x___05Fh4444;
    IData/*31:0*/ mkTestbench__DOT__a;
    IData/*31:0*/ mkTestbench__DOT__adder_1_in1;
    IData/*31:0*/ mkTestbench__DOT__adder_1_in2;
    IData/*31:0*/ mkTestbench__DOT__b;
    IData/*31:0*/ mkTestbench__DOT__rng_a_r;
    IData/*31:0*/ mkTestbench__DOT__rng_a_r_D_IN;
    IData/*31:0*/ mkTestbench__DOT__rng_b_r;
    IData/*31:0*/ mkTestbench__DOT__rng_b_r_D_IN;
    IData/*31:0*/ mkTestbench__DOT__sum;
    IData/*31:0*/ mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9;
    IData/*31:0*/ mkTestbench__DOT__p___05Fh425;
    QData/*32:0*/ mkTestbench__DOT__adder_1_result;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VmkTestbench__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VmkTestbench);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VmkTestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VmkTestbench();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VmkTestbench__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VmkTestbench__Syms* symsp, bool first);
  private:
    static QData _change_request(VmkTestbench__Syms* __restrict vlSymsp);
    static QData _change_request_1(VmkTestbench__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VmkTestbench__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VmkTestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VmkTestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__3(VmkTestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VmkTestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VmkTestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VmkTestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
