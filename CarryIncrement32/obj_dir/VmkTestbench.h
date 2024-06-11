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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh2447;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh5177;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh7907;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh859;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205;
        CData/*0:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206;
        CData/*0:0*/ mkTestbench__DOT__carry_in___05Fh2023;
        CData/*0:0*/ mkTestbench__DOT__carry_in___05Fh4860;
        CData/*0:0*/ mkTestbench__DOT__carry_in___05Fh7590;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1208;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1316;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1424;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1532;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1640;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1748;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1856;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2903;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3011;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3119;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3227;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3335;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3443;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5633;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5741;
    };
    struct {
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5849;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5957;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6065;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6173;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8363;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8471;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8579;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8687;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8795;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8903;
        IData/*31:0*/ mkTestbench__DOT__a;
        IData/*31:0*/ mkTestbench__DOT__adder_1_in1;
        IData/*31:0*/ mkTestbench__DOT__adder_1_in2;
        IData/*31:0*/ mkTestbench__DOT__b;
        IData/*31:0*/ mkTestbench__DOT__rng_a_r;
        IData/*31:0*/ mkTestbench__DOT__rng_a_r_D_IN;
        IData/*31:0*/ mkTestbench__DOT__rng_b_r;
        IData/*31:0*/ mkTestbench__DOT__rng_b_r_D_IN;
        IData/*31:0*/ mkTestbench__DOT__sum;
        QData/*32:0*/ mkTestbench__DOT__adder_1_result;
    };
    
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
