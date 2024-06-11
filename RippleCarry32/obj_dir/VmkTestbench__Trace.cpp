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
                                                         & (((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                              & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                                             >> 0x1fU) 
                                                            | ((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5361) 
                                                               & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5362)))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5362) 
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
                                                                                 : 0U)))))))))))))))))))))))))))))))))))),33);
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
            tracep->chgQData(oldp+49,((0x1ffffffffULL 
                                       & ((((QData)((IData)(
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
                                             | (QData)((IData)(vlTOPp->mkTestbench__DOT__b)))))),33);
            tracep->chgQData(oldp+51,((((QData)((IData)(
                                                        (1U 
                                                         & (vlTOPp->mkTestbench__DOT__a 
                                                            >> 0x1fU)))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__a)))),33);
            tracep->chgQData(oldp+53,((QData)((IData)(vlTOPp->mkTestbench__DOT__cin))),33);
            tracep->chgQData(oldp+55,((QData)((IData)(vlTOPp->mkTestbench__DOT__b))),33);
            tracep->chgQData(oldp+57,((((QData)((IData)(
                                                        (1U 
                                                         & (vlTOPp->mkTestbench__DOT__b 
                                                            >> 0x1fU)))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__b)))),33);
            tracep->chgIData(oldp+59,((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238) 
                                        ^ (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))
                                        ? 1U : 0U)),32);
            tracep->chgIData(oldp+60,((vlTOPp->mkTestbench__DOT__a 
                                       + vlTOPp->mkTestbench__DOT__b)),32);
            tracep->chgIData(oldp+61,(vlTOPp->mkTestbench__DOT__cin),32);
            tracep->chgIData(oldp+62,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5096) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5095)) 
                                        << 0x1dU) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4963) 
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
                                                                                 : 0U))))))))))))))))))))))))))))))),30);
            tracep->chgIData(oldp+63,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4830) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4829)) 
                                        << 0x1bU) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4697) 
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
                                                                                 : 0U))))))))))))))))))))))))))))),28);
            tracep->chgIData(oldp+64,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4564) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4563)) 
                                        << 0x19U) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4431) 
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
                                                                                 : 0U))))))))))))))))))))))))))),26);
            tracep->chgIData(oldp+65,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4298) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4297)) 
                                        << 0x17U) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4165) 
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
                                                                                 : 0U))))))))))))))))))))))))),24);
            tracep->chgIData(oldp+66,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4032) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4031)) 
                                        << 0x15U) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3899) 
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
                                                                                 : 0U))))))))))))))))))))))),22);
            tracep->chgIData(oldp+67,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3766) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3765)) 
                                        << 0x13U) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3633) 
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
                                                                                 : 0U))))))))))))))))))))),20);
            tracep->chgIData(oldp+68,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3500) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3499)) 
                                        << 0x11U) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3367) 
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
                                                                                 : 0U))))))))))))))))))),18);
            tracep->chgSData(oldp+69,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3234) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3233)) 
                                        << 0xfU) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3101) 
                                          ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3100)) 
                                         << 0xeU) | 
                                        ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2968) 
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
                                                                                 : 0U))))))))))))))))),16);
            tracep->chgSData(oldp+70,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2968) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2967)) 
                                        << 0xdU) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2835) 
                                          ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2834)) 
                                         << 0xcU) | 
                                        ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2702) 
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
                                                                           : 0U))))))))))))))),14);
            tracep->chgSData(oldp+71,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2702) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2701)) 
                                        << 0xbU) | 
                                       ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2569) 
                                          ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2568)) 
                                         << 0xaU) | 
                                        ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2436) 
                                           ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2435)) 
                                          << 9U) | 
                                         ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2303) 
                                            ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2302)) 
                                           << 8U) | 
                                          ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2170) 
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
                                                                 : 0U))))))))))))),12);
            tracep->chgSData(oldp+72,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2436) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2435)) 
                                        << 9U) | ((
                                                   ((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2303) 
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
                                                                           : 0U))))))))))),10);
            tracep->chgCData(oldp+73,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2170) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2169)) 
                                        << 7U) | ((
                                                   ((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2037) 
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
                                                                     : 0U))))))))),8);
            tracep->chgCData(oldp+74,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1904) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1903)) 
                                        << 5U) | ((
                                                   ((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1771) 
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
                                                               : 0U))))))),6);
            tracep->chgCData(oldp+75,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1638) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1637)) 
                                        << 3U) | ((
                                                   ((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1505) 
                                                    ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1504)) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372) 
                                                       ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371)) 
                                                      << 1U) 
                                                     | (((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238) 
                                                         ^ (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))
                                                         ? 1U
                                                         : 0U))))),4);
            tracep->chgCData(oldp+76,(((((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372) 
                                         ^ (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371)) 
                                        << 1U) | (((IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238) 
                                                   ^ (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))
                                                   ? 1U
                                                   : 0U))),2);
            tracep->chgBit(oldp+77,(vlTOPp->mkTestbench__DOT__cin___05Fh1371));
            tracep->chgBit(oldp+78,(vlTOPp->mkTestbench__DOT__cin___05Fh1504));
            tracep->chgBit(oldp+79,(vlTOPp->mkTestbench__DOT__cin___05Fh1637));
            tracep->chgBit(oldp+80,(vlTOPp->mkTestbench__DOT__cin___05Fh1770));
            tracep->chgBit(oldp+81,(vlTOPp->mkTestbench__DOT__cin___05Fh1903));
            tracep->chgBit(oldp+82,(vlTOPp->mkTestbench__DOT__cin___05Fh2036));
            tracep->chgBit(oldp+83,(vlTOPp->mkTestbench__DOT__cin___05Fh2169));
            tracep->chgBit(oldp+84,(vlTOPp->mkTestbench__DOT__cin___05Fh2302));
            tracep->chgBit(oldp+85,(vlTOPp->mkTestbench__DOT__cin___05Fh2435));
            tracep->chgBit(oldp+86,(vlTOPp->mkTestbench__DOT__cin___05Fh2568));
            tracep->chgBit(oldp+87,(vlTOPp->mkTestbench__DOT__cin___05Fh2701));
            tracep->chgBit(oldp+88,(vlTOPp->mkTestbench__DOT__cin___05Fh2834));
            tracep->chgBit(oldp+89,(vlTOPp->mkTestbench__DOT__cin___05Fh2967));
            tracep->chgBit(oldp+90,(vlTOPp->mkTestbench__DOT__cin___05Fh3100));
            tracep->chgBit(oldp+91,(vlTOPp->mkTestbench__DOT__cin___05Fh3233));
            tracep->chgBit(oldp+92,(vlTOPp->mkTestbench__DOT__cin___05Fh3366));
            tracep->chgBit(oldp+93,(vlTOPp->mkTestbench__DOT__cin___05Fh3499));
            tracep->chgBit(oldp+94,(vlTOPp->mkTestbench__DOT__cin___05Fh3632));
            tracep->chgBit(oldp+95,(vlTOPp->mkTestbench__DOT__cin___05Fh3765));
            tracep->chgBit(oldp+96,(vlTOPp->mkTestbench__DOT__cin___05Fh3898));
            tracep->chgBit(oldp+97,(vlTOPp->mkTestbench__DOT__cin___05Fh4031));
            tracep->chgBit(oldp+98,(vlTOPp->mkTestbench__DOT__cin___05Fh4164));
            tracep->chgBit(oldp+99,(vlTOPp->mkTestbench__DOT__cin___05Fh4297));
            tracep->chgBit(oldp+100,(vlTOPp->mkTestbench__DOT__cin___05Fh4430));
            tracep->chgBit(oldp+101,(vlTOPp->mkTestbench__DOT__cin___05Fh4563));
            tracep->chgBit(oldp+102,(vlTOPp->mkTestbench__DOT__cin___05Fh4696));
            tracep->chgBit(oldp+103,(vlTOPp->mkTestbench__DOT__cin___05Fh4829));
            tracep->chgBit(oldp+104,(vlTOPp->mkTestbench__DOT__cin___05Fh4962));
            tracep->chgBit(oldp+105,(vlTOPp->mkTestbench__DOT__cin___05Fh5095));
            tracep->chgBit(oldp+106,(vlTOPp->mkTestbench__DOT__cin___05Fh5228));
            tracep->chgBit(oldp+107,(vlTOPp->mkTestbench__DOT__cin___05Fh5361));
            tracep->chgBit(oldp+108,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
            tracep->chgBit(oldp+109,(vlTOPp->mkTestbench__DOT__temp1___05Fh1238));
            tracep->chgBit(oldp+110,(vlTOPp->mkTestbench__DOT__temp1___05Fh1372));
            tracep->chgBit(oldp+111,(vlTOPp->mkTestbench__DOT__temp1___05Fh1505));
            tracep->chgBit(oldp+112,(vlTOPp->mkTestbench__DOT__temp1___05Fh1638));
            tracep->chgBit(oldp+113,(vlTOPp->mkTestbench__DOT__temp1___05Fh1771));
            tracep->chgBit(oldp+114,(vlTOPp->mkTestbench__DOT__temp1___05Fh1904));
            tracep->chgBit(oldp+115,(vlTOPp->mkTestbench__DOT__temp1___05Fh2037));
            tracep->chgBit(oldp+116,(vlTOPp->mkTestbench__DOT__temp1___05Fh2170));
            tracep->chgBit(oldp+117,(vlTOPp->mkTestbench__DOT__temp1___05Fh2303));
            tracep->chgBit(oldp+118,(vlTOPp->mkTestbench__DOT__temp1___05Fh2436));
            tracep->chgBit(oldp+119,(vlTOPp->mkTestbench__DOT__temp1___05Fh2569));
            tracep->chgBit(oldp+120,(vlTOPp->mkTestbench__DOT__temp1___05Fh2702));
            tracep->chgBit(oldp+121,(vlTOPp->mkTestbench__DOT__temp1___05Fh2835));
            tracep->chgBit(oldp+122,(vlTOPp->mkTestbench__DOT__temp1___05Fh2968));
            tracep->chgBit(oldp+123,(vlTOPp->mkTestbench__DOT__temp1___05Fh3101));
            tracep->chgBit(oldp+124,(vlTOPp->mkTestbench__DOT__temp1___05Fh3234));
            tracep->chgBit(oldp+125,(vlTOPp->mkTestbench__DOT__temp1___05Fh3367));
            tracep->chgBit(oldp+126,(vlTOPp->mkTestbench__DOT__temp1___05Fh3500));
            tracep->chgBit(oldp+127,(vlTOPp->mkTestbench__DOT__temp1___05Fh3633));
            tracep->chgBit(oldp+128,(vlTOPp->mkTestbench__DOT__temp1___05Fh3766));
            tracep->chgBit(oldp+129,(vlTOPp->mkTestbench__DOT__temp1___05Fh3899));
            tracep->chgBit(oldp+130,(vlTOPp->mkTestbench__DOT__temp1___05Fh4032));
            tracep->chgBit(oldp+131,(vlTOPp->mkTestbench__DOT__temp1___05Fh4165));
            tracep->chgBit(oldp+132,(vlTOPp->mkTestbench__DOT__temp1___05Fh4298));
            tracep->chgBit(oldp+133,(vlTOPp->mkTestbench__DOT__temp1___05Fh4431));
            tracep->chgBit(oldp+134,(vlTOPp->mkTestbench__DOT__temp1___05Fh4564));
            tracep->chgBit(oldp+135,(vlTOPp->mkTestbench__DOT__temp1___05Fh4697));
            tracep->chgBit(oldp+136,(vlTOPp->mkTestbench__DOT__temp1___05Fh4830));
            tracep->chgBit(oldp+137,(vlTOPp->mkTestbench__DOT__temp1___05Fh4963));
            tracep->chgBit(oldp+138,(vlTOPp->mkTestbench__DOT__temp1___05Fh5096));
            tracep->chgBit(oldp+139,(vlTOPp->mkTestbench__DOT__temp1___05Fh5229));
            tracep->chgBit(oldp+140,(vlTOPp->mkTestbench__DOT__temp1___05Fh5362));
            tracep->chgBit(oldp+141,((1U & (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                            & vlTOPp->mkTestbench__DOT__adder_1_in2))));
            tracep->chgBit(oldp+142,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 1U))));
            tracep->chgBit(oldp+143,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 2U))));
            tracep->chgBit(oldp+144,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 3U))));
            tracep->chgBit(oldp+145,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 4U))));
            tracep->chgBit(oldp+146,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 5U))));
            tracep->chgBit(oldp+147,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 6U))));
            tracep->chgBit(oldp+148,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 7U))));
            tracep->chgBit(oldp+149,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 8U))));
            tracep->chgBit(oldp+150,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 9U))));
            tracep->chgBit(oldp+151,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+152,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+153,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+154,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+155,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+156,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+157,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x10U))));
            tracep->chgBit(oldp+158,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x11U))));
            tracep->chgBit(oldp+159,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x12U))));
            tracep->chgBit(oldp+160,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x13U))));
            tracep->chgBit(oldp+161,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x14U))));
            tracep->chgBit(oldp+162,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x15U))));
            tracep->chgBit(oldp+163,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x16U))));
            tracep->chgBit(oldp+164,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x17U))));
            tracep->chgBit(oldp+165,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x18U))));
            tracep->chgBit(oldp+166,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x19U))));
            tracep->chgBit(oldp+167,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+168,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+169,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+170,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+171,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+172,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             & vlTOPp->mkTestbench__DOT__adder_1_in2) 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+173,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                                >> 0x1fU)) 
                                            ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+174,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                               >> 0x1fU)))));
            tracep->chgBit(oldp+175,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1238))));
            tracep->chgBit(oldp+176,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1371) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1372))));
            tracep->chgBit(oldp+177,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1504) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1505))));
            tracep->chgBit(oldp+178,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1637) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1638))));
            tracep->chgBit(oldp+179,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1770) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1771))));
            tracep->chgBit(oldp+180,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh1903) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh1904))));
            tracep->chgBit(oldp+181,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2036) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2037))));
            tracep->chgBit(oldp+182,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2169) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2170))));
            tracep->chgBit(oldp+183,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2302) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2303))));
            tracep->chgBit(oldp+184,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2435) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2436))));
            tracep->chgBit(oldp+185,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2568) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2569))));
            tracep->chgBit(oldp+186,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2701) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2702))));
            tracep->chgBit(oldp+187,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2834) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2835))));
            tracep->chgBit(oldp+188,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2967) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh2968))));
            tracep->chgBit(oldp+189,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3100) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3101))));
            tracep->chgBit(oldp+190,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3233) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3234))));
            tracep->chgBit(oldp+191,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3366) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3367))));
            tracep->chgBit(oldp+192,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3499) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3500))));
            tracep->chgBit(oldp+193,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3632) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3633))));
            tracep->chgBit(oldp+194,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3765) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3766))));
            tracep->chgBit(oldp+195,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh3898) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh3899))));
            tracep->chgBit(oldp+196,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4031) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4032))));
            tracep->chgBit(oldp+197,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4164) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4165))));
            tracep->chgBit(oldp+198,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4297) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4298))));
            tracep->chgBit(oldp+199,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4430) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4431))));
            tracep->chgBit(oldp+200,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4563) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4564))));
            tracep->chgBit(oldp+201,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4696) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4697))));
            tracep->chgBit(oldp+202,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4829) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4830))));
            tracep->chgBit(oldp+203,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh4962) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh4963))));
            tracep->chgBit(oldp+204,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5095) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5096))));
            tracep->chgBit(oldp+205,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5228) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5229))));
            tracep->chgBit(oldp+206,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh5361) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__temp1___05Fh5362))));
            tracep->chgBit(oldp+207,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                             >> 0x1fU) 
                                            ^ (IData)(
                                                      (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                       >> 0x1fU))))));
        }
        tracep->chgBit(oldp+208,(vlTOPp->CLK));
        tracep->chgBit(oldp+209,(vlTOPp->RST_N));
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
