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
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172;
        CData/*7:0*/ mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh2106;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh4513;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh6924;
        CData/*7:0*/ mkTestbench__DOT__p___05Fh9335;
        CData/*0:0*/ mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167;
        CData/*0:0*/ mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113;
        CData/*0:0*/ mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh10007;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh10115;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh10223;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh10331;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1331;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1439;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1547;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1655;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1763;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh1871;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2562;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2670;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2778;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2886;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh2994;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3102;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3832;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh3940;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh4048;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh4156;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh4264;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh4372;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh4969;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5077;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5185;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5293;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5401;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh5509;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6243;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6351;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6459;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6567;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6675;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh6783;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7380;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7488;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7596;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7704;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7812;
    };
    struct {
        CData/*0:0*/ mkTestbench__DOT__x___05Fh7920;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8654;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8762;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8870;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh8978;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh9086;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh9194;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh9791;
        CData/*0:0*/ mkTestbench__DOT__x___05Fh9899;
        SData/*8:0*/ mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67;
        SData/*8:0*/ mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121;
        SData/*8:0*/ mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175;
        SData/*8:0*/ mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13;
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
