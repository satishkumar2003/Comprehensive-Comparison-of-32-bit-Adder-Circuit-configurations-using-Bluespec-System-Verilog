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
                                                        ((0x100U 
                                                          & ((((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                                               << 8U) 
                                                              & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                                 << 1U)) 
                                                             | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                                << 1U))) 
                                                         | ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                            ^ 
                                                            (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
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
                                        << 0x18U) | (QData)((IData)(
                                                                    ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
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
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))))),33);
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
            tracep->chgSData(oldp+53,(((0x100U & ((
                                                   ((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
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
                                                               | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113))))))))))),9);
            tracep->chgCData(oldp+54,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47),8);
            tracep->chgCData(oldp+55,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44),8);
            tracep->chgCData(oldp+56,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83),8);
            tracep->chgCData(oldp+57,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80),8);
            tracep->chgCData(oldp+58,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119),8);
            tracep->chgCData(oldp+59,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11),8);
            tracep->chgCData(oldp+60,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8),8);
            tracep->chgCData(oldp+61,(vlTOPp->mkTestbench__DOT__p___05Fh8574),8);
            tracep->chgCData(oldp+62,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
                                            << 6U) 
                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4221) 
                                               << 5U) 
                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4113) 
                                                  << 4U) 
                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4005) 
                                                     << 3U) 
                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3897) 
                                                        << 2U) 
                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3789) 
                                                           << 1U) 
                                                          | (IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2129)))))))))),8);
            tracep->chgCData(oldp+63,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
                                            << 6U) 
                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8088) 
                                               << 5U) 
                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7980) 
                                                  << 4U) 
                                                 | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7872) 
                                                     << 3U) 
                                                    | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7764) 
                                                        << 2U) 
                                                       | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7656) 
                                                           << 1U) 
                                                          | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77)))))))))),8);
            tracep->chgCData(oldp+64,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
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
                                                          | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)))))))))),8);
            tracep->chgCData(oldp+65,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
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
                                                          | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113)))))))))),8);
            tracep->chgBit(oldp+66,(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113));
            tracep->chgBit(oldp+67,(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77));
            tracep->chgBit(oldp+68,(vlTOPp->mkTestbench__DOT__cin___05Fh2129));
            tracep->chgBit(oldp+69,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
            tracep->chgBit(oldp+70,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113) 
                                     & (IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574))));
            tracep->chgBit(oldp+71,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12811) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 1U))));
            tracep->chgBit(oldp+72,(vlTOPp->mkTestbench__DOT__x___05Fh12811));
            tracep->chgBit(oldp+73,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12919) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 2U))));
            tracep->chgBit(oldp+74,(vlTOPp->mkTestbench__DOT__x___05Fh12919));
            tracep->chgBit(oldp+75,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13027) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 3U))));
            tracep->chgBit(oldp+76,(vlTOPp->mkTestbench__DOT__x___05Fh13027));
            tracep->chgBit(oldp+77,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13135) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 4U))));
            tracep->chgBit(oldp+78,(vlTOPp->mkTestbench__DOT__x___05Fh13135));
            tracep->chgBit(oldp+79,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13243) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 5U))));
            tracep->chgBit(oldp+80,(vlTOPp->mkTestbench__DOT__x___05Fh13243));
            tracep->chgBit(oldp+81,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 6U))));
            tracep->chgBit(oldp+82,(vlTOPp->mkTestbench__DOT__x___05Fh13351));
            tracep->chgBit(oldp+83,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                        >> 7U))));
            tracep->chgBit(oldp+84,(vlTOPp->mkTestbench__DOT__x___05Fh13459));
            tracep->chgBit(oldp+85,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                               >> 0x1fU)) 
                                           ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                              >> 0x1fU)))));
            tracep->chgBit(oldp+86,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                              >> 0x1fU)))));
            tracep->chgBit(oldp+87,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2129) 
                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44))));
            tracep->chgBit(oldp+88,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3789) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 1U))));
            tracep->chgBit(oldp+89,(vlTOPp->mkTestbench__DOT__x___05Fh3789));
            tracep->chgBit(oldp+90,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3897) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 2U))));
            tracep->chgBit(oldp+91,(vlTOPp->mkTestbench__DOT__x___05Fh3897));
            tracep->chgBit(oldp+92,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4005) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 3U))));
            tracep->chgBit(oldp+93,(vlTOPp->mkTestbench__DOT__x___05Fh4005));
            tracep->chgBit(oldp+94,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4113) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 4U))));
            tracep->chgBit(oldp+95,(vlTOPp->mkTestbench__DOT__x___05Fh4113));
            tracep->chgBit(oldp+96,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4221) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 5U))));
            tracep->chgBit(oldp+97,(vlTOPp->mkTestbench__DOT__x___05Fh4221));
            tracep->chgBit(oldp+98,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                        >> 6U))));
            tracep->chgBit(oldp+99,(vlTOPp->mkTestbench__DOT__x___05Fh4329));
            tracep->chgBit(oldp+100,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                         >> 7U))));
            tracep->chgBit(oldp+101,(vlTOPp->mkTestbench__DOT__x___05Fh4437));
            tracep->chgBit(oldp+102,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80))));
            tracep->chgBit(oldp+103,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7656) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 1U))));
            tracep->chgBit(oldp+104,(vlTOPp->mkTestbench__DOT__x___05Fh7656));
            tracep->chgBit(oldp+105,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7764) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 2U))));
            tracep->chgBit(oldp+106,(vlTOPp->mkTestbench__DOT__x___05Fh7764));
            tracep->chgBit(oldp+107,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7872) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 3U))));
            tracep->chgBit(oldp+108,(vlTOPp->mkTestbench__DOT__x___05Fh7872));
            tracep->chgBit(oldp+109,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7980) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 4U))));
            tracep->chgBit(oldp+110,(vlTOPp->mkTestbench__DOT__x___05Fh7980));
            tracep->chgBit(oldp+111,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8088) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 5U))));
            tracep->chgBit(oldp+112,(vlTOPp->mkTestbench__DOT__x___05Fh8088));
            tracep->chgBit(oldp+113,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 6U))));
            tracep->chgBit(oldp+114,(vlTOPp->mkTestbench__DOT__x___05Fh8196));
            tracep->chgBit(oldp+115,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                         >> 7U))));
            tracep->chgBit(oldp+116,(vlTOPp->mkTestbench__DOT__x___05Fh8304));
            tracep->chgBit(oldp+117,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                      & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8))));
            tracep->chgBit(oldp+118,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9231) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 1U))));
            tracep->chgBit(oldp+119,(vlTOPp->mkTestbench__DOT__x___05Fh9231));
            tracep->chgBit(oldp+120,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9339) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 2U))));
            tracep->chgBit(oldp+121,(vlTOPp->mkTestbench__DOT__x___05Fh9339));
            tracep->chgBit(oldp+122,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9447) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 3U))));
            tracep->chgBit(oldp+123,(vlTOPp->mkTestbench__DOT__x___05Fh9447));
            tracep->chgBit(oldp+124,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9555) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 4U))));
            tracep->chgBit(oldp+125,(vlTOPp->mkTestbench__DOT__x___05Fh9555));
            tracep->chgBit(oldp+126,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9663) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 5U))));
            tracep->chgBit(oldp+127,(vlTOPp->mkTestbench__DOT__x___05Fh9663));
            tracep->chgBit(oldp+128,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 6U))));
            tracep->chgBit(oldp+129,(vlTOPp->mkTestbench__DOT__x___05Fh9771));
            tracep->chgBit(oldp+130,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                         >> 7U))));
            tracep->chgBit(oldp+131,(vlTOPp->mkTestbench__DOT__x___05Fh9879));
            tracep->chgBit(oldp+132,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                             >> 0x1fU) 
                                            ^ (IData)(
                                                      (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                       >> 0x1fU))))));
        }
        tracep->chgBit(oldp+133,(vlTOPp->CLK));
        tracep->chgBit(oldp+134,(vlTOPp->RST_N));
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
