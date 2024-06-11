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
        if ((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available)))) {
            vlTOPp->mkTestbench__DOT__adder_1_result 
                = (((QData)((IData)((1U & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1fU) 
                                           | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5361) 
                                              & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5362)))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5362) 
                                                   ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5361)) 
                                                  << 0x1fU) 
                                                 | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5229) 
                                                      ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5228)) 
                                                     << 0x1eU) 
                                                    | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5096) 
                                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5095)) 
                                                        << 0x1dU) 
                                                       | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4963) 
                                                            ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4962)) 
                                                           << 0x1cU) 
                                                          | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4830) 
                                                               ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4829)) 
                                                              << 0x1bU) 
                                                             | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4697) 
                                                                  ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4696)) 
                                                                 << 0x1aU) 
                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4564) 
                                                                     ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4563)) 
                                                                    << 0x19U) 
                                                                   | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4431) 
                                                                        ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4430)) 
                                                                       << 0x18U) 
                                                                      | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4298) 
                                                                           ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4297)) 
                                                                          << 0x17U) 
                                                                         | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4165) 
                                                                              ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4164)) 
                                                                             << 0x16U) 
                                                                            | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4032) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4031)) 
                                                                                << 0x15U) 
                                                                               | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3899) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3898)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3766) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3765)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3633) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3632)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3500) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3499)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3367) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3366)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3234) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3233)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3101) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3100)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2968) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2967)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2835) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2834)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2702) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2701)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2569) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2568)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2436) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2435)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2303) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2302)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2170) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2169)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2037) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2036)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1904) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1903)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1771) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1770)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1638) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1637)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1505) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1504)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))
                                                                                 ? 1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder_1_result = 0ULL;
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
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_cin_r = vlTOPp->mkTestbench__DOT__rng_cin_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_cin_r = 1U;
    }
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_a_r = vlTOPp->mkTestbench__DOT__rng_a_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_a_r = 1U;
    }
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
    if (vlTOPp->RST_N) {
        if (((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
             | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))) {
            vlTOPp->mkTestbench__DOT__rng_b_r = vlTOPp->mkTestbench__DOT__rng_b_r_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__rng_b_r = 1U;
    }
    vlTOPp->mkTestbench__DOT__cin___05Fh1371 = (1U 
                                                & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                    & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238))));
    vlTOPp->mkTestbench__DOT__cin___05Fh1504 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 1U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372))));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
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
    vlTOPp->mkTestbench__DOT__cin___05Fh1903 = (1U 
                                                & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                     & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                    >> 4U) 
                                                   | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1770) 
                                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1771))));
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
            VL_WRITEF("  %32b\n",32,((vlTOPp->mkTestbench__DOT__a 
                                      + vlTOPp->mkTestbench__DOT__b) 
                                     + (IData)(vlTOPp->mkTestbench__DOT__cin)));
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
                                    & (((((QData)((IData)(
                                                          (1U 
                                                           & (vlTOPp->mkTestbench__DOT__a 
                                                              >> 0x1fU)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlTOPp->mkTestbench__DOT__a))) 
                                        + (((QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->mkTestbench__DOT__b 
                                                                >> 0x1fU)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->mkTestbench__DOT__b)))) 
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
            VL_FINISH_MT("verilog/mkTestbench.v", 757, "");
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
