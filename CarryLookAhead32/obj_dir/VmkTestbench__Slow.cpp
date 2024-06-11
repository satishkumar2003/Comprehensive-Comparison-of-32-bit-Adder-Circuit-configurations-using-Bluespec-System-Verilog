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
    vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
        = (vlTOPp->mkTestbench__DOT__adder_1_in1 & vlTOPp->mkTestbench__DOT__adder_1_in2);
    vlTOPp->mkTestbench__DOT__p___05Fh425 = (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             ^ vlTOPp->mkTestbench__DOT__adder_1_in2);
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
    vlTOPp->mkTestbench__DOT__x___05Fh1204 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                & vlTOPp->mkTestbench__DOT__p___05Fh425) 
                                               | vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9));
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
    vlTOPp->mkTestbench__DOT__x___05Fh1312 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1204) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 1U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1420 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1312) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 2U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1528 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1420) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 3U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1636 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1528) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 4U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1744 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1636) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 5U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1852 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1744) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 6U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1960 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1852) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 7U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 7U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2068 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1960) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 8U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 8U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2176 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2068) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 9U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 9U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2284 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2176) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xaU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xaU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2392 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2284) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xbU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xbU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2500 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2392) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xcU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xcU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2608 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2500) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xdU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xdU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2716 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2608) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xeU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xeU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2824 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2716) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0xfU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0xfU)));
    vlTOPp->mkTestbench__DOT__x___05Fh2932 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2824) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x10U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x10U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3040 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2932) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x11U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x11U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3148 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3040) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x12U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x12U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3256 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3148) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x13U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x13U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3364 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3256) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x14U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x14U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3472 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3364) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x15U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x15U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3580 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3472) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x16U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x16U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3688 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3580) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x17U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x17U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3796 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3688) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x18U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x18U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3904 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3796) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x19U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x19U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4012 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3904) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x1aU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x1aU)));
    vlTOPp->mkTestbench__DOT__x___05Fh4120 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4012) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x1bU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x1bU)));
    vlTOPp->mkTestbench__DOT__x___05Fh4228 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4120) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x1cU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x1cU)));
    vlTOPp->mkTestbench__DOT__x___05Fh4336 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4228) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x1dU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x1dU)));
    vlTOPp->mkTestbench__DOT__x___05Fh4444 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4336) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 0x1eU)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                  >> 0x1eU)));
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
    mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 = 0;
    mkTestbench__DOT__p___05Fh425 = 0;
    mkTestbench__DOT__x___05Fh1204 = 0;
    mkTestbench__DOT__x___05Fh1312 = 0;
    mkTestbench__DOT__x___05Fh1420 = 0;
    mkTestbench__DOT__x___05Fh1528 = 0;
    mkTestbench__DOT__x___05Fh1636 = 0;
    mkTestbench__DOT__x___05Fh1744 = 0;
    mkTestbench__DOT__x___05Fh1852 = 0;
    mkTestbench__DOT__x___05Fh1960 = 0;
    mkTestbench__DOT__x___05Fh2068 = 0;
    mkTestbench__DOT__x___05Fh2176 = 0;
    mkTestbench__DOT__x___05Fh2284 = 0;
    mkTestbench__DOT__x___05Fh2392 = 0;
    mkTestbench__DOT__x___05Fh2500 = 0;
    mkTestbench__DOT__x___05Fh2608 = 0;
    mkTestbench__DOT__x___05Fh2716 = 0;
    mkTestbench__DOT__x___05Fh2824 = 0;
    mkTestbench__DOT__x___05Fh2932 = 0;
    mkTestbench__DOT__x___05Fh3040 = 0;
    mkTestbench__DOT__x___05Fh3148 = 0;
    mkTestbench__DOT__x___05Fh3256 = 0;
    mkTestbench__DOT__x___05Fh3364 = 0;
    mkTestbench__DOT__x___05Fh3472 = 0;
    mkTestbench__DOT__x___05Fh3580 = 0;
    mkTestbench__DOT__x___05Fh3688 = 0;
    mkTestbench__DOT__x___05Fh3796 = 0;
    mkTestbench__DOT__x___05Fh3904 = 0;
    mkTestbench__DOT__x___05Fh4012 = 0;
    mkTestbench__DOT__x___05Fh4120 = 0;
    mkTestbench__DOT__x___05Fh4228 = 0;
    mkTestbench__DOT__x___05Fh4336 = 0;
    mkTestbench__DOT__x___05Fh4444 = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = 0;
    }}
}
