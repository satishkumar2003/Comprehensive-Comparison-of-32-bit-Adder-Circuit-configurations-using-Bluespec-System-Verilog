// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTestbench__Syms.h"


void VmkTestbench::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VmkTestbench::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->mkTestbench__DOT__state),2);
            tracep->chgCData(oldp+1,(((0U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                       ? 1U : 2U)),2);
            tracep->chgBit(oldp+2,(((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                    | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                       & (1U == (IData)(vlTOPp->mkTestbench__DOT__state))))));
            tracep->chgBit(oldp+3,((0U == (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgBit(oldp+4,(vlTOPp->mkTestbench__DOT__adder1__DOT__available));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result) 
                                          >> 1U))));
            tracep->chgBit(oldp+6,((1U & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result))));
            tracep->chgBit(oldp+7,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                    & (2U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
            tracep->chgBit(oldp+8,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                    & (1U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
            tracep->chgBit(oldp+9,((0U != (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgBit(oldp+10,((1U & ((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                           | (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available))))));
            tracep->chgBit(oldp+11,(vlTOPp->mkTestbench__DOT__adder1__DOT__cin));
            tracep->chgBit(oldp+12,(vlTOPp->mkTestbench__DOT__adder1__DOT__in1));
            tracep->chgBit(oldp+13,(vlTOPp->mkTestbench__DOT__adder1__DOT__in2));
            tracep->chgCData(oldp+14,(vlTOPp->mkTestbench__DOT__adder1__DOT__result),2);
            tracep->chgCData(oldp+15,((((((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                          & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2)) 
                                         | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                            & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240))) 
                                        << 1U) | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240) 
                                                  ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin)))),2);
            tracep->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available)))));
            tracep->chgBit(oldp+17,((((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2)) 
                                     | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                        & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240)))));
            tracep->chgBit(oldp+18,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240) 
                                     ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin))));
            tracep->chgBit(oldp+19,(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240));
            tracep->chgBit(oldp+20,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                     & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2))));
            tracep->chgBit(oldp+21,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                     & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240))));
        }
        tracep->chgBit(oldp+22,(vlTOPp->CLK));
        tracep->chgBit(oldp+23,(vlTOPp->RST_N));
    }
}

void VmkTestbench::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
