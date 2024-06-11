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
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x18U));
    vlTOPp->mkTestbench__DOT__p___05Fh8574 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 0x18U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x10U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x10U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 8U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 8U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11 
        = (0xffU & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                    & vlTOPp->mkTestbench__DOT__adder_1_in2));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8 
        = (0xffU & (vlTOPp->mkTestbench__DOT__adder_1_in1 
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
    vlTOPp->mkTestbench__DOT__x___05Fh9231 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8)) 
                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11)));
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
    vlTOPp->mkTestbench__DOT__x___05Fh9339 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9231) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9447 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9339) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9555 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9447) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9663 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9555) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9771 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9663) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9879 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__cin___05Fh2129 = (1U 
                                                & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                                    & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                       >> 7U)) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                      >> 7U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3789 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2129) 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44)) 
                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47)));
    vlTOPp->mkTestbench__DOT__x___05Fh3897 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3789) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4005 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3897) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4113 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4005) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4221 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4113) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4329 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4221) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4437 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77 
        = (1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                     >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47) 
                                >> 7U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7656 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77) 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80)) 
                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83)));
    vlTOPp->mkTestbench__DOT__x___05Fh7764 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7656) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7872 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7764) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7980 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7872) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8088 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7980) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8196 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8088) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8304 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113 
        = (1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                     >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83) 
                                >> 7U)));
    vlTOPp->mkTestbench__DOT__x___05Fh12811 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113) 
                                                 & (IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574)) 
                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119)));
    vlTOPp->mkTestbench__DOT__x___05Fh12919 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12811) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 1U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh13027 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12919) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 2U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh13135 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13027) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 3U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh13243 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13135) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 4U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh13351 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13243) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 5U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh13459 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    >> 6U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   >> 6U)));
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
    mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11 = 0;
    mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8 = 0;
    mkTestbench__DOT__p___05Fh8574 = 0;
    mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113 = 0;
    mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77 = 0;
    mkTestbench__DOT__cin___05Fh2129 = 0;
    mkTestbench__DOT__x___05Fh12811 = 0;
    mkTestbench__DOT__x___05Fh12919 = 0;
    mkTestbench__DOT__x___05Fh13027 = 0;
    mkTestbench__DOT__x___05Fh13135 = 0;
    mkTestbench__DOT__x___05Fh13243 = 0;
    mkTestbench__DOT__x___05Fh13351 = 0;
    mkTestbench__DOT__x___05Fh13459 = 0;
    mkTestbench__DOT__x___05Fh3789 = 0;
    mkTestbench__DOT__x___05Fh3897 = 0;
    mkTestbench__DOT__x___05Fh4005 = 0;
    mkTestbench__DOT__x___05Fh4113 = 0;
    mkTestbench__DOT__x___05Fh4221 = 0;
    mkTestbench__DOT__x___05Fh4329 = 0;
    mkTestbench__DOT__x___05Fh4437 = 0;
    mkTestbench__DOT__x___05Fh7656 = 0;
    mkTestbench__DOT__x___05Fh7764 = 0;
    mkTestbench__DOT__x___05Fh7872 = 0;
    mkTestbench__DOT__x___05Fh7980 = 0;
    mkTestbench__DOT__x___05Fh8088 = 0;
    mkTestbench__DOT__x___05Fh8196 = 0;
    mkTestbench__DOT__x___05Fh8304 = 0;
    mkTestbench__DOT__x___05Fh9231 = 0;
    mkTestbench__DOT__x___05Fh9339 = 0;
    mkTestbench__DOT__x___05Fh9447 = 0;
    mkTestbench__DOT__x___05Fh9555 = 0;
    mkTestbench__DOT__x___05Fh9663 = 0;
    mkTestbench__DOT__x___05Fh9771 = 0;
    mkTestbench__DOT__x___05Fh9879 = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = 0;
    }}
}
