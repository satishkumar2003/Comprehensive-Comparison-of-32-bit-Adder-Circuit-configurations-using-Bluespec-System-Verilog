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
        vlTOPp->mkTestbench__DOT__a = 0x7000U;
    }
    if (vlTOPp->RST_N) {
        if ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__b = vlTOPp->mkTestbench__DOT__rng_b_r;
        }
    } else {
        vlTOPp->mkTestbench__DOT__b = 0x1000U;
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
                = (((QData)((IData)((1U & ((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
                                            ? (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 7U))
                                            : (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 7U)))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
                                                    ? 
                                                   ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    ^ 
                                                    (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                                      << 7U) 
                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
                                                         << 6U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8978) 
                                                            << 5U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8870) 
                                                               << 4U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8762) 
                                                                  << 3U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8654) 
                                                                     << 2U) 
                                                                    | (3U 
                                                                       & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175)))))))))
                                                    : 
                                                   ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    ^ 
                                                    (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                                      << 7U) 
                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
                                                         << 6U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10115) 
                                                            << 5U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10007) 
                                                               << 4U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9899) 
                                                                  << 3U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9791) 
                                                                     << 2U) 
                                                                    | ((1U 
                                                                        & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                                                        ? 2U
                                                                        : 0U))))))))) 
                                                  << 0x18U) 
                                                 | ((((IData)(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113)
                                                       ? 
                                                      ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                       ^ 
                                                       (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6567) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6459) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6351) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6243) 
                                                                        << 2U) 
                                                                       | (3U 
                                                                          & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121)))))))))
                                                       : 
                                                      ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                       ^ 
                                                       (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                                         << 7U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
                                                            << 6U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7704) 
                                                               << 5U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7596) 
                                                                  << 4U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7488) 
                                                                     << 3U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7380) 
                                                                        << 2U) 
                                                                       | ((1U 
                                                                           & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                                                           ? 2U
                                                                           : 0U))))))))) 
                                                     << 0x10U) 
                                                    | ((((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59)
                                                          ? 
                                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                          ^ 
                                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4156) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4048) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3940) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3832) 
                                                                           << 2U) 
                                                                          | (3U 
                                                                             & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67)))))))))
                                                          : 
                                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                          ^ 
                                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                                            << 7U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
                                                               << 6U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5293) 
                                                                  << 5U) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5185) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5077) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4969) 
                                                                           << 2U) 
                                                                          | ((1U 
                                                                              & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                                                              ? 2U
                                                                              : 0U))))))))) 
                                                        << 8U) 
                                                       | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)
                                                           ? 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                           ^ 
                                                           (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                                                             << 7U) 
                                                            | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
                                                                << 6U) 
                                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1655) 
                                                                   << 5U) 
                                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1547) 
                                                                      << 4U) 
                                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1439) 
                                                                         << 3U) 
                                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1331) 
                                                                            << 2U) 
                                                                           | (3U 
                                                                              & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13)))))))))
                                                           : 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                           ^ 
                                                           (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                                             << 7U) 
                                                            | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
                                                                << 6U) 
                                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2886) 
                                                                   << 5U) 
                                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2778) 
                                                                      << 4U) 
                                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2670) 
                                                                         << 3U) 
                                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2562) 
                                                                            << 2U) 
                                                                           | ((1U 
                                                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                                                               ? 2U
                                                                               : 0U)))))))))))))));
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
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x18U));
    vlTOPp->mkTestbench__DOT__p___05Fh9335 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 0x18U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x10U));
    vlTOPp->mkTestbench__DOT__p___05Fh6924 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 0x10U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 8U));
    vlTOPp->mkTestbench__DOT__p___05Fh4513 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 8U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10 
        = (0xffU & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                    & vlTOPp->mkTestbench__DOT__adder_1_in2));
    vlTOPp->mkTestbench__DOT__p___05Fh2106 = (0xffU 
                                              & (vlTOPp->mkTestbench__DOT__adder_1_in1 
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
    vlTOPp->mkTestbench__DOT__x___05Fh9791 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175 
        = ((1U & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                  | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172)))
            ? 3U : 1U);
    vlTOPp->mkTestbench__DOT__x___05Fh7380 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121 
        = ((1U & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                  | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118)))
            ? 3U : 1U);
    vlTOPp->mkTestbench__DOT__x___05Fh4969 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67 
        = ((1U & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                  | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64)))
            ? 3U : 1U);
    vlTOPp->mkTestbench__DOT__x___05Fh2562 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13 
        = ((1U & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                  | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10)))
            ? 3U : 1U);
    vlTOPp->mkTestbench__DOT__x___05Fh9899 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9791) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8654 = (1U & 
                                              ((((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7488 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7380) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6243 = (1U & 
                                              ((((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5077 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4969) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3832 = (1U & 
                                              ((((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2670 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2562) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1331 = (1U & 
                                              ((((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 1U)));
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_cin_r = vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_cin_r = 1U;
    }
    vlTOPp->mkTestbench__DOT__x___05Fh10007 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9899) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    >> 3U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                   >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8762 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8654) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7596 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7488) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6351 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6243) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5185 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5077) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3940 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3832) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2778 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2670) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1439 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1331) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh10115 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10007) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    >> 4U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                   >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8870 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8762) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7704 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7596) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6459 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6351) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5293 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5185) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4048 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3940) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2886 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2778) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1547 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1439) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 3U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
    vlTOPp->mkTestbench__DOT__x___05Fh10223 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10115) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    >> 5U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                   >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8978 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8870) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7812 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7704) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6567 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6459) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5401 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5293) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4156 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4048) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2994 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2886) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1655 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1547) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh10331 = (1U & 
                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
                                                 & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                    >> 6U)) 
                                                | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                   >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh9086 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8978) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh7920 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6675 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6567) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5509 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4264 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4156) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3102 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1763 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1655) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 5U)));
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
        vlTOPp->mkTestbench__DOT__rng_a_r_D_IN = 0xafd7U;
        vlTOPp->mkTestbench__DOT__rng_b_r_D_IN = 0xc9b1U;
        vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN = 0xa5U;
    }
    vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder_1_available) 
           & (2U == (IData)(vlTOPp->mkTestbench__DOT__state)));
    vlTOPp->mkTestbench__DOT__x___05Fh9194 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6783 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh4372 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1871 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 6U)));
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
    vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59 
        = (1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)
                  ? (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                         >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                    >> 7U)) : (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10) 
                                                  >> 7U))));
    vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113 
        = (1U & ((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59)
                  ? (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                         >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                    >> 7U)) : (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64) 
                                                  >> 7U))));
    vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167 
        = (1U & ((IData)(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113)
                  ? (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                         >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                    >> 7U)) : (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118) 
                                                  >> 7U))));
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
            VL_FINISH_MT("verilog/mkTestbench.v", 920, "");
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
