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
        if ((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available)))) {
            vlTOPp->mkTestbench__DOT__adder1__DOT__result 
                = (((((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                      & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2)) 
                     | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                        & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240))) 
                    << 1U) | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240) 
                              ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin)));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder1__DOT__result = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((0U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder1__DOT__cin = 1U;
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder1__DOT__cin = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((0U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder1__DOT__in1 = 1U;
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder1__DOT__in1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if ((0U == (IData)(vlTOPp->mkTestbench__DOT__state))) {
            vlTOPp->mkTestbench__DOT__adder1__DOT__in2 = 1U;
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder1__DOT__in2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__adder1__DOT__available_EN) {
            vlTOPp->mkTestbench__DOT__adder1__DOT__available 
                = (0U != (IData)(vlTOPp->mkTestbench__DOT__state));
        }
    } else {
        vlTOPp->mkTestbench__DOT__adder1__DOT__available = 1U;
    }
    vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240 
        = ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
           ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2));
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkTestbench__DOT__state_EN) {
            vlTOPp->mkTestbench__DOT__state = vlTOPp->mkTestbench__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mkTestbench__DOT__state = 0U;
    }
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

VL_INLINE_OPT void VmkTestbench::_sequent__TOP__2(VmkTestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTestbench::_sequent__TOP__2\n"); );
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                         & (1U == (IData)(vlTOPp->mkTestbench__DOT__state))))) {
            VL_WRITEF("Sum = %0x\n",1,(1U & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                         & (2U == (IData)(vlTOPp->mkTestbench__DOT__state))))) {
            VL_WRITEF("Cout = %0x\n",1,(1U & ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result) 
                                              >> 1U)));
            Verilated::runFlushCallbacks();
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                         & (2U == (IData)(vlTOPp->mkTestbench__DOT__state))))) {
            VL_FINISH_MT("verilog/mkTestbench.v", 126, "");
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
