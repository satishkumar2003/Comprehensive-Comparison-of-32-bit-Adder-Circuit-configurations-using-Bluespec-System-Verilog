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
                = (((QData)((IData)((1U & ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                             >> 7U) 
                                            & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206)) 
                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8903) 
                                               & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                  >> 7U)) 
                                              | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                 >> 7U)))))) 
                    << 0x20U) | (QData)((IData)((((0x80000000U 
                                                   & ((0x80000000U 
                                                       & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                          << 0x18U)) 
                                                      ^ 
                                                      ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206) 
                                                       << 0x1fU))) 
                                                  | ((0x40000000U 
                                                      & ((0xc0000000U 
                                                          & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                             << 0x18U)) 
                                                         ^ 
                                                         ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205) 
                                                          << 0x1eU))) 
                                                     | ((0x20000000U 
                                                         & ((0xe0000000U 
                                                             & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                << 0x18U)) 
                                                            ^ 
                                                            ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204) 
                                                             << 0x1dU))) 
                                                        | ((0x10000000U 
                                                            & ((0xf0000000U 
                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                   << 0x18U)) 
                                                               ^ 
                                                               ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203) 
                                                                << 0x1cU))) 
                                                           | ((0x8000000U 
                                                               & ((0xf8000000U 
                                                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                      << 0x18U)) 
                                                                  ^ 
                                                                  ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202) 
                                                                   << 0x1bU))) 
                                                              | ((0x4000000U 
                                                                  & ((0xfc000000U 
                                                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                         << 0x18U)) 
                                                                     ^ 
                                                                     ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201) 
                                                                      << 0x1aU))) 
                                                                 | ((0x2000000U 
                                                                     & ((0xfe000000U 
                                                                         & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                            << 0x18U)) 
                                                                        ^ 
                                                                        ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200) 
                                                                         << 0x19U))) 
                                                                    | (((1U 
                                                                         & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                            ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                                                         ? 1U
                                                                         : 0U) 
                                                                       << 0x18U)))))))) 
                                                 | (((0x800000U 
                                                      & ((0xff800000U 
                                                          & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                             << 0x10U)) 
                                                         ^ 
                                                         ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193) 
                                                          << 0x17U))) 
                                                     | ((0x400000U 
                                                         & ((0xffc00000U 
                                                             & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                << 0x10U)) 
                                                            ^ 
                                                            ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192) 
                                                             << 0x16U))) 
                                                        | ((0x200000U 
                                                            & ((0xffe00000U 
                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                   << 0x10U)) 
                                                               ^ 
                                                               ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191) 
                                                                << 0x15U))) 
                                                           | ((0x100000U 
                                                               & ((0xfff00000U 
                                                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                      << 0x10U)) 
                                                                  ^ 
                                                                  ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190) 
                                                                   << 0x14U))) 
                                                              | ((0x80000U 
                                                                  & ((0xfff80000U 
                                                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                         << 0x10U)) 
                                                                     ^ 
                                                                     ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189) 
                                                                      << 0x13U))) 
                                                                 | ((0x40000U 
                                                                     & ((0xfffc0000U 
                                                                         & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                            << 0x10U)) 
                                                                        ^ 
                                                                        ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188) 
                                                                         << 0x12U))) 
                                                                    | ((0x20000U 
                                                                        & ((0xfffe0000U 
                                                                            & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                               << 0x10U)) 
                                                                           ^ 
                                                                           ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187) 
                                                                            << 0x11U))) 
                                                                       | (((1U 
                                                                            & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                               ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                                                            ? 1U
                                                                            : 0U) 
                                                                          << 0x10U)))))))) 
                                                    | ((0x8000U 
                                                        & ((0xffff8000U 
                                                            & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                               << 8U)) 
                                                           ^ 
                                                           ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180) 
                                                            << 0xfU))) 
                                                       | ((0x4000U 
                                                           & ((0xffffc000U 
                                                               & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                  << 8U)) 
                                                              ^ 
                                                              ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179) 
                                                               << 0xeU))) 
                                                          | ((0x2000U 
                                                              & ((0xffffe000U 
                                                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                     << 8U)) 
                                                                 ^ 
                                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178) 
                                                                  << 0xdU))) 
                                                             | ((0x1000U 
                                                                 & ((0xfffff000U 
                                                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                        << 8U)) 
                                                                    ^ 
                                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177) 
                                                                     << 0xcU))) 
                                                                | ((0x800U 
                                                                    & ((0xfffff800U 
                                                                        & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                           << 8U)) 
                                                                       ^ 
                                                                       ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176) 
                                                                        << 0xbU))) 
                                                                   | ((0x400U 
                                                                       & ((0xfffffc00U 
                                                                           & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                              << 8U)) 
                                                                          ^ 
                                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175) 
                                                                           << 0xaU))) 
                                                                      | ((0x200U 
                                                                          & ((0xfffffe00U 
                                                                              & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                             ^ 
                                                                             ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174) 
                                                                              << 9U))) 
                                                                         | ((((1U 
                                                                               & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                                                               ? 1U
                                                                               : 0U) 
                                                                             << 8U) 
                                                                            | ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                                               ^ 
                                                                               (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1856) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1748) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1640) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1532) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1424) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1316) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1208) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))))))))))));
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
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x18U));
    vlTOPp->mkTestbench__DOT__p___05Fh7907 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 0x18U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 0x10U));
    vlTOPp->mkTestbench__DOT__p___05Fh5177 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 0x10U));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143 
        = (0xffU & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                    & vlTOPp->mkTestbench__DOT__adder_1_in2));
    vlTOPp->mkTestbench__DOT__p___05Fh859 = (0xffU 
                                             & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                ^ vlTOPp->mkTestbench__DOT__adder_1_in2));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96 
        = (0xffU & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                    >> 8U));
    vlTOPp->mkTestbench__DOT__p___05Fh2447 = (0xffU 
                                              & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                  ^ vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                 >> 8U));
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
    vlTOPp->mkTestbench__DOT__x___05Fh8363 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5633 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh2903 = (1U & 
                                              (((((1U 
                                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96))
                                                   ? 2U
                                                   : 0U) 
                                                 >> 1U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8471 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8363) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5741 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5633) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3011 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2903) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 2U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1208 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                & (IData)(vlTOPp->mkTestbench__DOT__p___05Fh859)) 
                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143)));
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_cin_r = vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_cin_r = 1U;
    }
    vlTOPp->mkTestbench__DOT__x___05Fh8579 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8471) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5849 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5741) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3119 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3011) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1316 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1208) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
                                                  >> 1U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8687 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8579) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh5957 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5849) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3227 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3119) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 4U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1424 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1316) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 2U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
                                                  >> 2U)));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
    vlTOPp->mkTestbench__DOT__x___05Fh8795 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8687) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6065 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5957) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3335 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3227) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 5U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1532 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1424) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 3U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
                                                  >> 3U)));
    vlTOPp->mkTestbench__DOT__x___05Fh8903 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8795) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh6173 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6065) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh3443 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3335) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__x___05Fh1640 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1532) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 4U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
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
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40 
        = ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8903) 
               << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8795) 
                          << 6U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8687) 
                                     << 5U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8579) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8471) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8363) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8))
                                                         ? 2U
                                                         : 0U))))))));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84 
        = ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6173) 
               << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6065) 
                          << 6U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5957) 
                                     << 5U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5849) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5741) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5633) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52))
                                                         ? 2U
                                                         : 0U))))))));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128 
        = ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3443) 
               << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3335) 
                          << 6U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3227) 
                                     << 5U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3119) 
                                                << 4U) 
                                               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3011) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2903) 
                                                      << 2U) 
                                                     | ((1U 
                                                         & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96))
                                                         ? 2U
                                                         : 0U))))))));
    vlTOPp->mkTestbench__DOT__x___05Fh1748 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1640) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 5U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
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
    vlTOPp->mkTestbench__DOT__x___05Fh1856 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1748) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                   >> 6U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
                                                  >> 6U)));
    vlTOPp->mkTestbench__DOT__carry_in___05Fh2023 = 
        (1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1856) 
                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                   >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143) 
                              >> 7U)));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
           & (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 1U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 2U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 3U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 4U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 5U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
            >> 6U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179));
    vlTOPp->mkTestbench__DOT__carry_in___05Fh4860 = 
        (1U & ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                 >> 7U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180)) 
               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3443) 
                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                      >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                 >> 7U))));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
           & (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 1U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 2U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 3U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 4U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 5U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
            >> 6U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192));
    vlTOPp->mkTestbench__DOT__carry_in___05Fh7590 = 
        (1U & ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                 >> 7U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193)) 
               | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6173) 
                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                      >> 7U)) | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                 >> 7U))));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
           & (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 1U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 2U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 3U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 4U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 5U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204));
    vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206 
        = (((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
            >> 6U) & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205));
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
            VL_FINISH_MT("verilog/mkTestbench.v", 850, "");
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
