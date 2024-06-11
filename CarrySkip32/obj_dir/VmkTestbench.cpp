// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTestbench.h for the primary calling header

#include "VmkTestbench.h"
#include "VmkTestbench__Syms.h"

//==========

void VmkTestbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VmkTestbench::eval\n"); );
    VmkTestbench__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog/mkTestbench.v", 29, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VmkTestbench::_eval_initial_loop(VmkTestbench__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilog/mkTestbench.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VmkTestbench::_sequent__TOP__1(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_sequent__TOP__1\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__count = vlTOPp->mkTestbench__DOT__count_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__count = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__a = vlTOPp->mkTestbench__DOT__rng_a_r;
        }
    } else {
        vlTOPp->mkTestbench__DOT__a = 0x70000000U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__b = vlTOPp->mkTestbench__DOT__rng_b_r;
        }
    } else {
        vlTOPp->mkTestbench__DOT__b = 0x10000000U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__cin = (1U & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                   >> 3U));
        }
    } else {
        vlTOPp->mkTestbench__DOT__cin = 1U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results) {
            vlTOPp->mkTestbench__DOT__sum = (IData)(vlTOPp->mkTestbench__DOT__adder_1_result);
        }
    } else {
        vlTOPp->mkTestbench__DOT__sum = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results) {
            vlTOPp->mkTestbench__DOT__cout = (1U & (IData)(
                                                           (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                            >> 0x20U)));
        }
    } else {
        vlTOPp->mkTestbench__DOT__cout = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results) {
            vlTOPp->mkTestbench__DOT__overflow_flag 
                = (1U & (((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                              >> 0x1fU)) ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                            >> 0x1fU)) 
                         & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                             >> 0x1fU) ^ (IData)((vlTOPp->mkTestbench__DOT__adder_1_result 
                                                  >> 0x1fU)))));
        }
    } else {
        vlTOPp->mkTestbench__DOT__overflow_flag = 0U;
    }
    vlTOPp->mkTestbench__DOT__count_D_IN = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->mkTestbench__DOT__count)));
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder_1_in1 = vlTOPp->mkTestbench__DOT__rng_a_r;
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_in1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder_1_in2 = vlTOPp->mkTestbench__DOT__rng_b_r;
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_in2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available)))) {
            vlTOPp->mkTestbench__DOT__adder_1_result 
                = (((QData)((IData)(((0x100U & ((((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                                  << 8U) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                   << 1U))) 
                                     | ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                            << 7U) 
                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
                                               << 6U) 
                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13243) 
                                                  << 5U) 
                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13135) 
                                                     << 4U) 
                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13027) 
                                                        << 3U) 
                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12919) 
                                                           << 2U) 
                                                          | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12811) 
                                                              << 1U) 
                                                             | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113)))))))))))) 
                    << 0x18U) | (QData)((IData)(((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                                                    << 0x17U) 
                                                   | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
                                                       << 0x16U) 
                                                      | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8088) 
                                                          << 0x15U) 
                                                         | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7980) 
                                                             << 0x14U) 
                                                            | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7872) 
                                                                << 0x13U) 
                                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7764) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7656) 
                                                                      << 0x11U) 
                                                                     | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77) 
                                                                        << 0x10U))))))))) 
                                                 | ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                                      << 8U) 
                                                     ^ 
                                                     (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                                                       << 0xfU) 
                                                      | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
                                                          << 0xeU) 
                                                         | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4221) 
                                                             << 0xdU) 
                                                            | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4113) 
                                                                << 0xcU) 
                                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4005) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3897) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3789) 
                                                                         << 9U) 
                                                                        | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2129) 
                                                                           << 8U))))))))) 
                                                    | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                       ^ 
                                                       (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9663) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9555) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9447) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9339) 
                                                                        << 2U) 
                                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9231) 
                                                                           << 1U) 
                                                                          | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_result = 0ULL;
    }
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_a_r = vlTOPp->mkTestbench__DOT__rng_a_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_a_r = 1U;
    }
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
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_b_r = vlTOPp->mkTestbench__DOT__rng_b_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_b_r = 1U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__adder_1_available_EN) {
            vlTOPp->mkTestbench__DOT__adder_1_available 
                = (1U != (IData)(vlTOPp->mkTestbench__DOT__state));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_available = 1U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder_1_cin = 
                (1U & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                       >> 3U));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_cin = 0U;
    }
    vlTOPp->mkTestbench__DOT__x___05Fh9231 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8)) 
                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11)));
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_cin_r = vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_cin_r = 1U;
    }
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
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
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
    vlTOPp->mkTestbench__DOT__x___05Fh9771 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9663) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11) 
                                                  >> 5U)));
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

VL_INLINE_OPT void VmkTestbench::_sequent__TOP__2(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_sequent__TOP__2\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            == (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF("Test Passed\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            != (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF("Test Failed: \n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            != (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF("  %32b\n+ %32b\n+\t\t\t\t %0b\n= \n  %32b\n",
                      32,vlTOPp->mkTestbench__DOT__a,
                      32,vlTOPp->mkTestbench__DOT__b,
                      1,(IData)(vlTOPp->mkTestbench__DOT__cin),
                      32,vlTOPp->mkTestbench__DOT__sum);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            != (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF(" %33b\n",33,(0x1ffffffffULL 
                                    & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                        + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                       + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            != (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF("Cout = %0b\n",1,vlTOPp->mkTestbench__DOT__cout);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & ((0x1ffffffffULL & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                                + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                               + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin)))) 
                            != (((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                 << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum))))))) {
            VL_WRITEF("Overflow Flag = %0x\n\n",1,vlTOPp->mkTestbench__DOT__overflow_flag);
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                          & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                         & (IData)(vlTOPp->mkTestbench__DOT__overflow_flag)))) {
            VL_WRITEF("Overflow occured\n");
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                         & (0x1eU <= (IData)(vlTOPp->mkTestbench__DOT__count))))) {
            VL_FINISH_MT("verilog/mkTestbench.v", 720, "");
        }
    }
}

void VmkTestbench::_eval(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_eval\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData VmkTestbench::_change_request(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_change_request\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VmkTestbench::_change_request_1(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_change_request_1\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VmkTestbench::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
}
#endif  // VL_DEBUG
