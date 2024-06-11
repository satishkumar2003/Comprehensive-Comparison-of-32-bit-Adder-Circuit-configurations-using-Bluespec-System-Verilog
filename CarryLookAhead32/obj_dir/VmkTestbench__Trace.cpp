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
            tracep->chgIData(oldp+0,(vlTOPp->mkTestbench__DOT__a),32);
            tracep->chgIData(oldp+1,(vlTOPp->mkTestbench__DOT__rng_a_r),32);
            tracep->chgBit(oldp+2,((1U == (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgBit(oldp+3,(vlTOPp->mkTestbench__DOT__adder_1_available));
            tracep->chgBit(oldp+4,((1U != (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgBit(oldp+5,((1U & ((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                          | (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available))))));
            tracep->chgBit(oldp+6,(vlTOPp->mkTestbench__DOT__adder_1_cin));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                          >> 3U))));
            tracep->chgIData(oldp+8,(vlTOPp->mkTestbench__DOT__adder_1_in1),32);
            tracep->chgIData(oldp+9,(vlTOPp->mkTestbench__DOT__adder_1_in2),32);
            tracep->chgIData(oldp+10,(vlTOPp->mkTestbench__DOT__rng_b_r),32);
            tracep->chgQData(oldp+11,(vlTOPp->mkTestbench__DOT__adder_1_result),33);
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        (1U 
                                                         & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                                             & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                                                >> 0x1fU)) 
                                                            | (vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9 
                                                               >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlTOPp->mkTestbench__DOT__p___05Fh425 
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
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))))))))))))))))))))))))))),33);
            tracep->chgBit(oldp+15,((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available)))));
            tracep->chgIData(oldp+16,(vlTOPp->mkTestbench__DOT__b),32);
            tracep->chgBit(oldp+17,(vlTOPp->mkTestbench__DOT__cin));
            tracep->chgCData(oldp+18,(vlTOPp->mkTestbench__DOT__count),8);
            tracep->chgCData(oldp+19,((0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->mkTestbench__DOT__count)))),8);
            tracep->chgBit(oldp+20,(vlTOPp->mkTestbench__DOT__cout));
            tracep->chgBit(oldp+21,((1U & (IData)((vlTOPp->mkTestbench__DOT__adder_1_result 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+22,(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results));
            tracep->chgBit(oldp+23,(vlTOPp->mkTestbench__DOT__overflow_flag));
            tracep->chgBit(oldp+24,((1U & (((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                >> 0x1fU)) 
                                            ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                               >> 0x1fU)) 
                                           & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                               >> 0x1fU) 
                                              ^ (IData)(
                                                        (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                         >> 0x1fU)))))));
            tracep->chgIData(oldp+25,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                        ? ((1U & vlTOPp->mkTestbench__DOT__rng_a_r)
                                            ? (0x80000000U 
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
                                            : (0x7fffffffU 
                                               & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                                  >> 1U)))
                                        : 0xafd7cd41U)),32);
            tracep->chgBit(oldp+26,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                     | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
            tracep->chgIData(oldp+27,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                        ? ((1U & vlTOPp->mkTestbench__DOT__rng_b_r)
                                            ? (0x80000000U 
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
                                            : (0x7fffffffU 
                                               & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                                  >> 1U)))
                                        : 0xc9b12e0aU)),32);
            tracep->chgCData(oldp+28,(vlTOPp->mkTestbench__DOT__rng_cin_r),8);
            tracep->chgCData(oldp+29,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                        ? ((1U & (IData)(vlTOPp->mkTestbench__DOT__rng_cin_r))
                                            ? (0x80U 
                                               | ((0x70U 
                                                   & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                      >> 1U)) 
                                                  | ((0xeU 
                                                      & ((~ 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                           >> 2U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                           >> 1U)))))
                                            : (0x7fU 
                                               & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                  >> 1U)))
                                        : 0xa5U)),8);
            tracep->chgCData(oldp+30,(vlTOPp->mkTestbench__DOT__state),2);
            tracep->chgCData(oldp+31,(((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                         & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                        | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))
                                        ? 1U : ((1U 
                                                 == (IData)(vlTOPp->mkTestbench__DOT__state))
                                                 ? 2U
                                                 : 
                                                ((IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results)
                                                  ? 3U
                                                  : 0U)))),2);
            tracep->chgBit(oldp+32,((((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                        & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                       | (0U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                      | (1U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                     | (IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results))));
            tracep->chgIData(oldp+33,(vlTOPp->mkTestbench__DOT__sum),32);
            tracep->chgIData(oldp+34,((IData)(vlTOPp->mkTestbench__DOT__adder_1_result)),32);
            tracep->chgBit(oldp+35,((3U == (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgBit(oldp+36,((0U == (IData)(vlTOPp->mkTestbench__DOT__state))));
            tracep->chgIData(oldp+37,(((1U & vlTOPp->mkTestbench__DOT__rng_a_r)
                                        ? (0x80000000U 
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
                                        : (0x7fffffffU 
                                           & (vlTOPp->mkTestbench__DOT__rng_a_r 
                                              >> 1U)))),32);
            tracep->chgIData(oldp+38,(((1U & vlTOPp->mkTestbench__DOT__rng_b_r)
                                        ? (0x80000000U 
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
                                        : (0x7fffffffU 
                                           & (vlTOPp->mkTestbench__DOT__rng_b_r 
                                              >> 1U)))),32);
            tracep->chgCData(oldp+39,(((1U & (IData)(vlTOPp->mkTestbench__DOT__rng_cin_r))
                                        ? (0x80U | 
                                           ((0x70U 
                                             & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                >> 1U)) 
                                            | ((0xeU 
                                                & ((~ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                     >> 1U)))))
                                        : (0x7fU & 
                                           ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                            >> 1U)))),8);
            tracep->chgBit(oldp+40,(((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                     & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count)))));
            tracep->chgQData(oldp+41,((((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum)))),33);
            tracep->chgQData(oldp+43,((0x1ffffffffULL 
                                       & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                           + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                          + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin))))),33);
            tracep->chgQData(oldp+45,((0x1ffffffffULL 
                                       & ((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                          + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))))),33);
            tracep->chgQData(oldp+47,((QData)((IData)(vlTOPp->mkTestbench__DOT__a))),33);
            tracep->chgQData(oldp+49,((QData)((IData)(vlTOPp->mkTestbench__DOT__cin))),33);
            tracep->chgQData(oldp+51,((QData)((IData)(vlTOPp->mkTestbench__DOT__b))),33);
            tracep->chgIData(oldp+53,(vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9),32);
            tracep->chgIData(oldp+54,(vlTOPp->mkTestbench__DOT__p___05Fh425),32);
            tracep->chgIData(oldp+55,((vlTOPp->mkTestbench__DOT__p___05Fh425 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
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
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)))))))))))))))))))))))))))))))))),32);
            tracep->chgBit(oldp+56,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
            tracep->chgBit(oldp+57,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                     & vlTOPp->mkTestbench__DOT__p___05Fh425)));
            tracep->chgBit(oldp+58,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1204) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 1U))));
            tracep->chgBit(oldp+59,(vlTOPp->mkTestbench__DOT__x___05Fh1204));
            tracep->chgBit(oldp+60,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1312) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 2U))));
            tracep->chgBit(oldp+61,(vlTOPp->mkTestbench__DOT__x___05Fh1312));
            tracep->chgBit(oldp+62,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1420) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 3U))));
            tracep->chgBit(oldp+63,(vlTOPp->mkTestbench__DOT__x___05Fh1420));
            tracep->chgBit(oldp+64,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1528) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 4U))));
            tracep->chgBit(oldp+65,(vlTOPp->mkTestbench__DOT__x___05Fh1528));
            tracep->chgBit(oldp+66,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1636) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 5U))));
            tracep->chgBit(oldp+67,(vlTOPp->mkTestbench__DOT__x___05Fh1636));
            tracep->chgBit(oldp+68,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1744) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 6U))));
            tracep->chgBit(oldp+69,(vlTOPp->mkTestbench__DOT__x___05Fh1744));
            tracep->chgBit(oldp+70,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1852) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 7U))));
            tracep->chgBit(oldp+71,(vlTOPp->mkTestbench__DOT__x___05Fh1852));
            tracep->chgBit(oldp+72,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1960) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 8U))));
            tracep->chgBit(oldp+73,(vlTOPp->mkTestbench__DOT__x___05Fh1960));
            tracep->chgBit(oldp+74,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2068) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 9U))));
            tracep->chgBit(oldp+75,(vlTOPp->mkTestbench__DOT__x___05Fh2068));
            tracep->chgBit(oldp+76,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2176) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xaU))));
            tracep->chgBit(oldp+77,(vlTOPp->mkTestbench__DOT__x___05Fh2176));
            tracep->chgBit(oldp+78,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2284) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xbU))));
            tracep->chgBit(oldp+79,(vlTOPp->mkTestbench__DOT__x___05Fh2284));
            tracep->chgBit(oldp+80,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2392) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xcU))));
            tracep->chgBit(oldp+81,(vlTOPp->mkTestbench__DOT__x___05Fh2392));
            tracep->chgBit(oldp+82,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2500) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xdU))));
            tracep->chgBit(oldp+83,(vlTOPp->mkTestbench__DOT__x___05Fh2500));
            tracep->chgBit(oldp+84,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2608) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xeU))));
            tracep->chgBit(oldp+85,(vlTOPp->mkTestbench__DOT__x___05Fh2608));
            tracep->chgBit(oldp+86,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2716) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0xfU))));
            tracep->chgBit(oldp+87,(vlTOPp->mkTestbench__DOT__x___05Fh2716));
            tracep->chgBit(oldp+88,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2824) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x10U))));
            tracep->chgBit(oldp+89,(vlTOPp->mkTestbench__DOT__x___05Fh2824));
            tracep->chgBit(oldp+90,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2932) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x11U))));
            tracep->chgBit(oldp+91,(vlTOPp->mkTestbench__DOT__x___05Fh2932));
            tracep->chgBit(oldp+92,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3040) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x12U))));
            tracep->chgBit(oldp+93,(vlTOPp->mkTestbench__DOT__x___05Fh3040));
            tracep->chgBit(oldp+94,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3148) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x13U))));
            tracep->chgBit(oldp+95,(vlTOPp->mkTestbench__DOT__x___05Fh3148));
            tracep->chgBit(oldp+96,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3256) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x14U))));
            tracep->chgBit(oldp+97,(vlTOPp->mkTestbench__DOT__x___05Fh3256));
            tracep->chgBit(oldp+98,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3364) 
                                     & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                        >> 0x15U))));
            tracep->chgBit(oldp+99,(vlTOPp->mkTestbench__DOT__x___05Fh3364));
            tracep->chgBit(oldp+100,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3472) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x16U))));
            tracep->chgBit(oldp+101,(vlTOPp->mkTestbench__DOT__x___05Fh3472));
            tracep->chgBit(oldp+102,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3580) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x17U))));
            tracep->chgBit(oldp+103,(vlTOPp->mkTestbench__DOT__x___05Fh3580));
            tracep->chgBit(oldp+104,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3688) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x18U))));
            tracep->chgBit(oldp+105,(vlTOPp->mkTestbench__DOT__x___05Fh3688));
            tracep->chgBit(oldp+106,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3796) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x19U))));
            tracep->chgBit(oldp+107,(vlTOPp->mkTestbench__DOT__x___05Fh3796));
            tracep->chgBit(oldp+108,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3904) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1aU))));
            tracep->chgBit(oldp+109,(vlTOPp->mkTestbench__DOT__x___05Fh3904));
            tracep->chgBit(oldp+110,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4012) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1bU))));
            tracep->chgBit(oldp+111,(vlTOPp->mkTestbench__DOT__x___05Fh4012));
            tracep->chgBit(oldp+112,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4120) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1cU))));
            tracep->chgBit(oldp+113,(vlTOPp->mkTestbench__DOT__x___05Fh4120));
            tracep->chgBit(oldp+114,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4228) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1dU))));
            tracep->chgBit(oldp+115,(vlTOPp->mkTestbench__DOT__x___05Fh4228));
            tracep->chgBit(oldp+116,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4336) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1eU))));
            tracep->chgBit(oldp+117,(vlTOPp->mkTestbench__DOT__x___05Fh4336));
            tracep->chgBit(oldp+118,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                      & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                         >> 0x1fU))));
            tracep->chgBit(oldp+119,(vlTOPp->mkTestbench__DOT__x___05Fh4444));
            tracep->chgBit(oldp+120,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                >> 0x1fU)) 
                                            ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+121,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+122,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                             >> 0x1fU) 
                                            ^ (IData)(
                                                      (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                       >> 0x1fU))))));
        }
        tracep->chgBit(oldp+123,(vlTOPp->CLK));
        tracep->chgBit(oldp+124,(vlTOPp->RST_N));
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
