// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTestbench__Syms.h"


//======================

void VmkTestbench::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VmkTestbench::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VmkTestbench::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VmkTestbench::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VmkTestbench::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+23,"CLK", false,-1);
        tracep->declBit(c+24,"RST_N", false,-1);
        tracep->declBit(c+23,"mkTestbench CLK", false,-1);
        tracep->declBit(c+24,"mkTestbench RST_N", false,-1);
        tracep->declBus(c+1,"mkTestbench state", false,-1, 1,0);
        tracep->declBus(c+2,"mkTestbench state_D_IN", false,-1, 1,0);
        tracep->declBit(c+3,"mkTestbench state_EN", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1_EN_start", false,-1);
        tracep->declBit(c+5,"mkTestbench adder1_RDY_return_cout", false,-1);
        tracep->declBit(c+5,"mkTestbench adder1_RDY_return_sum", false,-1);
        tracep->declBit(c+6,"mkTestbench adder1_return_cout", false,-1);
        tracep->declBit(c+7,"mkTestbench adder1_return_sum", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1_start_cin", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1_start_in1", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1_start_in2", false,-1);
        tracep->declBit(c+8,"mkTestbench CAN_FIRE_RL_get_cout", false,-1);
        tracep->declBit(c+9,"mkTestbench CAN_FIRE_RL_get_sum", false,-1);
        tracep->declBit(c+4,"mkTestbench CAN_FIRE_RL_initialize", false,-1);
        tracep->declBit(c+8,"mkTestbench WILL_FIRE_RL_get_cout", false,-1);
        tracep->declBit(c+9,"mkTestbench WILL_FIRE_RL_get_sum", false,-1);
        tracep->declBit(c+4,"mkTestbench WILL_FIRE_RL_initialize", false,-1);
        tracep->declBit(c+23,"mkTestbench adder1 CLK", false,-1);
        tracep->declBit(c+24,"mkTestbench adder1 RST_N", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 start_in1", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 start_in2", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 start_cin", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1 EN_start", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 RDY_start", false,-1);
        tracep->declBit(c+7,"mkTestbench adder1 return_sum", false,-1);
        tracep->declBit(c+5,"mkTestbench adder1 RDY_return_sum", false,-1);
        tracep->declBit(c+6,"mkTestbench adder1 return_cout", false,-1);
        tracep->declBit(c+5,"mkTestbench adder1 RDY_return_cout", false,-1);
        tracep->declBit(c+5,"mkTestbench adder1 available", false,-1);
        tracep->declBit(c+10,"mkTestbench adder1 available_D_IN", false,-1);
        tracep->declBit(c+11,"mkTestbench adder1 available_EN", false,-1);
        tracep->declBit(c+12,"mkTestbench adder1 cin", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 cin_D_IN", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1 cin_EN", false,-1);
        tracep->declBit(c+13,"mkTestbench adder1 in1", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 in1_D_IN", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1 in1_EN", false,-1);
        tracep->declBit(c+14,"mkTestbench adder1 in2", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 in2_D_IN", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1 in2_EN", false,-1);
        tracep->declBus(c+15,"mkTestbench adder1 result", false,-1, 1,0);
        tracep->declBus(c+16,"mkTestbench adder1 result_D_IN", false,-1, 1,0);
        tracep->declBit(c+17,"mkTestbench adder1 result_EN", false,-1);
        tracep->declBit(c+17,"mkTestbench adder1 CAN_FIRE_RL_compute", false,-1);
        tracep->declBit(c+25,"mkTestbench adder1 CAN_FIRE_start", false,-1);
        tracep->declBit(c+17,"mkTestbench adder1 WILL_FIRE_RL_compute", false,-1);
        tracep->declBit(c+4,"mkTestbench adder1 WILL_FIRE_start", false,-1);
        tracep->declBit(c+18,"mkTestbench adder1 cout__h242", false,-1);
        tracep->declBit(c+19,"mkTestbench adder1 sum__h241", false,-1);
        tracep->declBit(c+20,"mkTestbench adder1 temp1__h240", false,-1);
        tracep->declBit(c+21,"mkTestbench adder1 x__h254", false,-1);
        tracep->declBit(c+22,"mkTestbench adder1 y__h255", false,-1);
    }
}

void VmkTestbench::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VmkTestbench::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VmkTestbench::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VmkTestbench__Syms* __restrict vlSymsp = static_cast<VmkTestbench__Syms*>(userp);
    VmkTestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->mkTestbench__DOT__state),2);
        tracep->fullCData(oldp+2,(((0U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                    ? 1U : 2U)),2);
        tracep->fullBit(oldp+3,(((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                 | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                    & (1U == (IData)(vlTOPp->mkTestbench__DOT__state))))));
        tracep->fullBit(oldp+4,((0U == (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullBit(oldp+5,(vlTOPp->mkTestbench__DOT__adder1__DOT__available));
        tracep->fullBit(oldp+6,((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result) 
                                       >> 1U))));
        tracep->fullBit(oldp+7,((1U & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__result))));
        tracep->fullBit(oldp+8,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                 & (2U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
        tracep->fullBit(oldp+9,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available) 
                                 & (1U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
        tracep->fullBit(oldp+10,((0U != (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullBit(oldp+11,((1U & ((0U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                        | (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available))))));
        tracep->fullBit(oldp+12,(vlTOPp->mkTestbench__DOT__adder1__DOT__cin));
        tracep->fullBit(oldp+13,(vlTOPp->mkTestbench__DOT__adder1__DOT__in1));
        tracep->fullBit(oldp+14,(vlTOPp->mkTestbench__DOT__adder1__DOT__in2));
        tracep->fullCData(oldp+15,(vlTOPp->mkTestbench__DOT__adder1__DOT__result),2);
        tracep->fullCData(oldp+16,((((((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                       & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2)) 
                                      | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                         & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240))) 
                                     << 1U) | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240) 
                                               ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin)))),2);
        tracep->fullBit(oldp+17,((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__available)))));
        tracep->fullBit(oldp+18,((((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                   & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2)) 
                                  | ((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                     & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240)))));
        tracep->fullBit(oldp+19,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240) 
                                  ^ (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin))));
        tracep->fullBit(oldp+20,(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240));
        tracep->fullBit(oldp+21,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in1) 
                                  & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__in2))));
        tracep->fullBit(oldp+22,(((IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__cin) 
                                  & (IData)(vlTOPp->mkTestbench__DOT__adder1__DOT__temp1___05Fh240))));
        tracep->fullBit(oldp+23,(vlTOPp->CLK));
        tracep->fullBit(oldp+24,(vlTOPp->RST_N));
        tracep->fullBit(oldp+25,(1U));
    }
}
