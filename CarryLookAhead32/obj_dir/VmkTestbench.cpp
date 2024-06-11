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
                = (((QData)((IData)((1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                            & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                               >> 0x1fU)) 
                                           | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                              >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                 ^ 
                                                 (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4336) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4228) 
                                                         << 0x1dU) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4120) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4012) 
                                                               << 0x1bU) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3904) 
                                                                  << 0x1aU) 
                                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3796) 
                                                                     << 0x19U) 
                                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3688) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3580) 
                                                                           << 0x17U) 
                                                                          | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3472) 
                                                                              << 0x16U) 
                                                                             | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3364) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3256) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3148) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3040) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2932) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2824) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2716) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2608) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2500) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2392) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2284) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2176) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2068) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1960) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1852) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1744) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1636) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1528) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1420) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1312) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1204) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))))))))))))))))))))))))));
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
    vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
        = (vlTOPp->mkTestbench__DOT__adder_1_in1 & vlTOPp->mkTestbench__DOT__adder_1_in2);
    vlTOPp->mkTestbench__DOT__p___05Fh425 = (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             ^ vlTOPp->mkTestbench__DOT__adder_1_in2);
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
    vlTOPp->mkTestbench__DOT__x___05Fh1204 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                & vlTOPp->mkTestbench__DOT__p___05Fh425) 
                                               | vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9));
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_cin_r = vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_cin_r = 1U;
    }
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
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
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
    vlTOPp->mkTestbench__DOT__x___05Fh1744 = (1U & 
                                              (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1636) 
                                                & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                   >> 5U)) 
                                               | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
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
            VL_FINISH_MT("verilog/mkTestbench.v", 571, "");
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
