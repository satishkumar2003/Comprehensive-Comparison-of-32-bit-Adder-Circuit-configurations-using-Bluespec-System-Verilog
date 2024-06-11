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
    vlTOPp->mkTestbench__DOT__a = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__adder_1_available = 0U;
    vlTOPp->mkTestbench__DOT__adder_1_cin = 0U;
    vlTOPp->mkTestbench__DOT__adder_1_in1 = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__adder_1_in2 = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__adder_1_result = 0xaaaaaaaaULL;
    vlTOPp->mkTestbench__DOT__b = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__cin = 0U;
    vlTOPp->mkTestbench__DOT__count = 0xaaU;
    vlTOPp->mkTestbench__DOT__cout = 0U;
    vlTOPp->mkTestbench__DOT__overflow_flag = 0U;
    vlTOPp->mkTestbench__DOT__rng_a_r = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__rng_b_r = 0xaaaaaaaaU;
    vlTOPp->mkTestbench__DOT__rng_cin_r = 0xaaU;
    vlTOPp->mkTestbench__DOT__state = 2U;
    vlTOPp->mkTestbench__DOT__sum = 0xaaaaaaaaU;
}

void VmkTestbench::_settle__TOP__4(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_settle__TOP__4\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkTestbench__DOT__count_D_IN = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkTestbench__DOT__count)));
    vlTOPp->mkTestbench__DOT__temp1___05Fh5362 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1fU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh5229 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1eU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh5096 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1dU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4963 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1cU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4830 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1bU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4697 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x1aU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4564 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x19U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4431 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x18U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4298 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x17U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4165 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x16U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh4032 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x15U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3899 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x14U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3766 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x13U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3633 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x12U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3500 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x11U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3367 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0x10U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3234 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xfU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh3101 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xeU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2968 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xdU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2835 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xcU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2702 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xbU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2569 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 0xaU));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2436 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 9U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2303 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 8U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2170 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 7U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh2037 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 6U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1904 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 5U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1771 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 4U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1638 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 3U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1505 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 2U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1372 = (1U 
                                                  & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                      ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                     >> 1U));
    vlTOPp->mkTestbench__DOT__temp1___05Fh1238 = (1U 
                                                  & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     ^ vlTOPp->mkTestbench__DOT__adder_1_in2));
    vlTOPp->mkTestbench__DOT__adder_1_available_EN 
        = (1U & ((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                 | (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available))));
    if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
        vlTOPp->mkTestbench__DOT__rng_a_r_D_IN = ((1U 
                                                   & vlTOPp->mkTestbench__DOT__rng_a_r)
                                                   ? 
                                                  (0x80000000U 
                                                   | ((0x7fffff80U 
                                                       & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                          >> 1U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                               >> 7U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                                >> 1U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                                     >> 5U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                                      >> 1U)) 
                                                                  | (7U 
                                                                     & (~ 
                                                                        (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                                         >> 1U)))))))))
                                                   : 
                                                  (0x7fffffffU 
                                                   & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                      >> 1U)));
        vlTOPp->mkTestbench__DOT__rng_b_r_D_IN = ((1U 
                                                   & vlTOPp->mkTestbench__DOT__rng_b_r)
                                                   ? 
                                                  (0x80000000U 
                                                   | ((0x7fffff80U 
                                                       & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                          >> 1U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                               >> 7U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                                >> 1U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                                     >> 5U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                                      >> 1U)) 
                                                                  | (7U 
                                                                     & (~ 
                                                                        (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                                         >> 1U)))))))))
                                                   : 
                                                  (0x7fffffffU 
                                                   & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                      >> 1U)));
        vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN = 
            ((1U & (IData)(vlTOPp->mkTestbench__DOT__rng_cin_r))
              ? (0x80U | ((0x70U & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                    >> 1U)) | ((0xeU 
                                                & ((~ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                     >> 1U)))))
              : (0x7fU & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                          >> 1U)));
    } else {
        vlTOPp->mkTestbench__DOT__rng_a_r_D_IN = 0xafd7cd41U;
        vlTOPp->mkTestbench__DOT__rng_b_r_D_IN = 0xc9b12e0aU;
        vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN = 0xa5U;
    }
    vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder_1_available) 
           & (2U == (IData)(vlTOPp->mkTestbench__DOT__state)));
    vlTOPp->mkTestbench__DOT__cin___05Fh1371 = (1U 
                                                & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                    & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238))));
    vlTOPp->mkTestbench__DOT__state_D_IN = ((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                              & (0x1eU 
                                                 > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                             | (0U 
                                                == (IData)(vlTOPp->mkTestbench__DOT__state)))
                                             ? 1U : 
                                            ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                              ? 2U : 
                                             ((IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results)
                                               ? 3U
                                               : 0U)));
    vlTOPp->mkTestbench__DOT__state_EN = (((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                             & (0x1eU 
                                                > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                            | (0U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                           | (1U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                          | (IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results));
    vlTOPp->mkTestbench__DOT__cin___05Fh1504 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 1U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372))));
    vlTOPp->mkTestbench__DOT__cin___05Fh1637 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 2U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1504) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1505))));
    vlTOPp->mkTestbench__DOT__cin___05Fh1770 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 3U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1637) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1638))));
    vlTOPp->mkTestbench__DOT__cin___05Fh1903 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 4U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1770) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1771))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2036 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 5U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1903) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1904))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2169 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 6U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2036) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2037))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2302 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 7U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2169) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2170))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2435 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 8U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2302) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2303))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2568 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 9U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2435) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2436))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2701 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xaU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2568) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2569))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2834 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xbU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2701) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2702))));
    vlTOPp->mkTestbench__DOT__cin___05Fh2967 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xcU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2834) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2835))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3100 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xdU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2967) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2968))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3233 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xeU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3100) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3101))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3366 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0xfU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3233) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3234))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3499 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x10U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3366) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3367))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3632 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x11U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3499) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3500))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3765 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x12U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3632) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3633))));
    vlTOPp->mkTestbench__DOT__cin___05Fh3898 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x13U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3765) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3766))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4031 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x14U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3898) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3899))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4164 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x15U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4031) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4032))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4297 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x16U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4164) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4165))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4430 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x17U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4297) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4298))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4563 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x18U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4430) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4431))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4696 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x19U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4563) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4564))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4829 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x1aU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4696) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4697))));
    vlTOPp->mkTestbench__DOT__cin___05Fh4962 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x1bU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4829) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4830))));
    vlTOPp->mkTestbench__DOT__cin___05Fh5095 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x1cU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4962) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4963))));
    vlTOPp->mkTestbench__DOT__cin___05Fh5228 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x1dU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5095) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5096))));
    vlTOPp->mkTestbench__DOT__cin___05Fh5361 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 0x1eU) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5228) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5229))));
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
    mkTestbench__DOT__a = 0;
    mkTestbench__DOT__adder_1_available = 0;
    mkTestbench__DOT__adder_1_available_EN = 0;
    mkTestbench__DOT__adder_1_cin = 0;
    mkTestbench__DOT__adder_1_in1 = 0;
    mkTestbench__DOT__adder_1_in2 = 0;
    mkTestbench__DOT__adder_1_result = 0;
    mkTestbench__DOT__b = 0;
    mkTestbench__DOT__cin = 0;
    mkTestbench__DOT__count = 0;
    mkTestbench__DOT__count_D_IN = 0;
    mkTestbench__DOT__cout = 0;
    mkTestbench__DOT__overflow_flag = 0;
    mkTestbench__DOT__rng_a_r = 0;
    mkTestbench__DOT__rng_a_r_D_IN = 0;
    mkTestbench__DOT__rng_b_r = 0;
    mkTestbench__DOT__rng_b_r_D_IN = 0;
    mkTestbench__DOT__rng_cin_r = 0;
    mkTestbench__DOT__rng_cin_r_D_IN = 0;
    mkTestbench__DOT__state = 0;
    mkTestbench__DOT__state_D_IN = 0;
    mkTestbench__DOT__state_EN = 0;
    mkTestbench__DOT__sum = 0;
    mkTestbench__DOT__CAN_FIRE_RL_get_results = 0;
    mkTestbench__DOT__cin___05Fh1371 = 0;
    mkTestbench__DOT__cin___05Fh1504 = 0;
    mkTestbench__DOT__cin___05Fh1637 = 0;
    mkTestbench__DOT__cin___05Fh1770 = 0;
    mkTestbench__DOT__cin___05Fh1903 = 0;
    mkTestbench__DOT__cin___05Fh2036 = 0;
    mkTestbench__DOT__cin___05Fh2169 = 0;
    mkTestbench__DOT__cin___05Fh2302 = 0;
    mkTestbench__DOT__cin___05Fh2435 = 0;
    mkTestbench__DOT__cin___05Fh2568 = 0;
    mkTestbench__DOT__cin___05Fh2701 = 0;
    mkTestbench__DOT__cin___05Fh2834 = 0;
    mkTestbench__DOT__cin___05Fh2967 = 0;
    mkTestbench__DOT__cin___05Fh3100 = 0;
    mkTestbench__DOT__cin___05Fh3233 = 0;
    mkTestbench__DOT__cin___05Fh3366 = 0;
    mkTestbench__DOT__cin___05Fh3499 = 0;
    mkTestbench__DOT__cin___05Fh3632 = 0;
    mkTestbench__DOT__cin___05Fh3765 = 0;
    mkTestbench__DOT__cin___05Fh3898 = 0;
    mkTestbench__DOT__cin___05Fh4031 = 0;
    mkTestbench__DOT__cin___05Fh4164 = 0;
    mkTestbench__DOT__cin___05Fh4297 = 0;
    mkTestbench__DOT__cin___05Fh4430 = 0;
    mkTestbench__DOT__cin___05Fh4563 = 0;
    mkTestbench__DOT__cin___05Fh4696 = 0;
    mkTestbench__DOT__cin___05Fh4829 = 0;
    mkTestbench__DOT__cin___05Fh4962 = 0;
    mkTestbench__DOT__cin___05Fh5095 = 0;
    mkTestbench__DOT__cin___05Fh5228 = 0;
    mkTestbench__DOT__cin___05Fh5361 = 0;
    mkTestbench__DOT__temp1___05Fh1238 = 0;
    mkTestbench__DOT__temp1___05Fh1372 = 0;
    mkTestbench__DOT__temp1___05Fh1505 = 0;
    mkTestbench__DOT__temp1___05Fh1638 = 0;
    mkTestbench__DOT__temp1___05Fh1771 = 0;
    mkTestbench__DOT__temp1___05Fh1904 = 0;
    mkTestbench__DOT__temp1___05Fh2037 = 0;
    mkTestbench__DOT__temp1___05Fh2170 = 0;
    mkTestbench__DOT__temp1___05Fh2303 = 0;
    mkTestbench__DOT__temp1___05Fh2436 = 0;
    mkTestbench__DOT__temp1___05Fh2569 = 0;
    mkTestbench__DOT__temp1___05Fh2702 = 0;
    mkTestbench__DOT__temp1___05Fh2835 = 0;
    mkTestbench__DOT__temp1___05Fh2968 = 0;
    mkTestbench__DOT__temp1___05Fh3101 = 0;
    mkTestbench__DOT__temp1___05Fh3234 = 0;
    mkTestbench__DOT__temp1___05Fh3367 = 0;
    mkTestbench__DOT__temp1___05Fh3500 = 0;
    mkTestbench__DOT__temp1___05Fh3633 = 0;
    mkTestbench__DOT__temp1___05Fh3766 = 0;
    mkTestbench__DOT__temp1___05Fh3899 = 0;
    mkTestbench__DOT__temp1___05Fh4032 = 0;
    mkTestbench__DOT__temp1___05Fh4165 = 0;
    mkTestbench__DOT__temp1___05Fh4298 = 0;
    mkTestbench__DOT__temp1___05Fh4431 = 0;
    mkTestbench__DOT__temp1___05Fh4564 = 0;
    mkTestbench__DOT__temp1___05Fh4697 = 0;
    mkTestbench__DOT__temp1___05Fh4830 = 0;
    mkTestbench__DOT__temp1___05Fh4963 = 0;
    mkTestbench__DOT__temp1___05Fh5096 = 0;
    mkTestbench__DOT__temp1___05Fh5229 = 0;
    mkTestbench__DOT__temp1___05Fh5362 = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = 0;
    }}
}
