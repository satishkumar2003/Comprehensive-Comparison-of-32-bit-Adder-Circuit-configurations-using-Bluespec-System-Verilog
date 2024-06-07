// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTestbench.h for the primary calling header

#include "VmkTestbench.h"
#include "VmkTestbench__Syms.h"

//==========

VL_CTOR_IMP(VmkTestbench) {
    VmkTestbench__Syms* __restrict vlSymsp = __VlSymsp = new VmkTestbench__Syms(this, name());
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VmkTestbench::__Vconfigure(VmkTestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VmkTestbench::~VmkTestbench() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VmkTestbench::_initial__TOP__3(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_initial__TOP__3\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTestbench__DOT__adder1__DOT__available = 0U;
    vlTOPp->mkTestbench__DOT__adder1__DOT__cin = 0U;
    vlTOPp->mkTestbench__DOT__adder1__DOT__in1 = 0U;
    vlTOPp->mkTestbench__DOT__adder1__DOT__in2 = 0U;
    vlTOPp->mkTestbench__DOT__adder1__DOT__result = 2U;
    vlTOPp->mkTestbench__DOT__state = 2U;
}

void VmkTestbench::_settle__TOP__4(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_settle__TOP__4\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
           ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2));
    vlTOPp->mkTestbench__DOT__state_D_IN = ((0U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                             ? 1U : 2U);
    vlTOPp->mkTestbench__DOT__state_EN = ((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                          | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                             & (1U 
                                                == (IData)(vlTOPp->mkTestbench__DOT__state))));
    vlTOPp->mkTestbench__DOT__adder1__DOT__available_EN 
        = (1U & ((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                 | (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available))));
}

void VmkTestbench::_eval_initial(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_eval_initial\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->_initial__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VmkTestbench::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::final\n"); );
    // Variables
    VmkTestbench__Syms* __restrict vlSymsp = this->__VlSymsp;
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VmkTestbench::_eval_settle(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_eval_settle\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VmkTestbench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_ctor_var_reset\n"); );
    // Body
    CLK = 0;
    RST_N = 0;
    mkTestbench__DOT__state = 0;
    mkTestbench__DOT__state_D_IN = 0;
    mkTestbench__DOT__state_EN = 0;
    mkTestbench__DOT__adder1__DOT__available = 0;
    mkTestbench__DOT__adder1__DOT__available_EN = 0;
    mkTestbench__DOT__adder1__DOT__cin = 0;
    mkTestbench__DOT__adder1__DOT__in1 = 0;
    mkTestbench__DOT__adder1__DOT__in2 = 0;
    mkTestbench__DOT__adder1__DOT__result = 0;
    mkTestbench__DOT__adder1__DOT__temp1___05Fh240 = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = 0;
    }}
}
