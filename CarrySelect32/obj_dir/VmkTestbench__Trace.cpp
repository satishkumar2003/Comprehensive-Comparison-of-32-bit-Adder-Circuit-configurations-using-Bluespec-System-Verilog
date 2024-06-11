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
                                                         & ((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
                                                             ? 
                                                            (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                                              & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                                 >> 7U)) 
                                                             | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                                >> 7U))
                                                             : 
                                                            (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                                              & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                                 >> 7U)) 
                                                             | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                                >> 7U)))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
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
                                                                                 : 0U)))))))))))))))),33);
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
                                        : 0xafd7U)),32);
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
                                        : 0xc9b1U)),32);
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
            tracep->chgSData(oldp+53,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                        ? 2U : 0U)),9);
            tracep->chgSData(oldp+54,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67),9);
            tracep->chgSData(oldp+55,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                        ? 2U : 0U)),9);
            tracep->chgSData(oldp+56,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121),9);
            tracep->chgSData(oldp+57,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                        ? 2U : 0U)),9);
            tracep->chgSData(oldp+58,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175),9);
            tracep->chgSData(oldp+59,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                        ? 2U : 0U)),9);
            tracep->chgSData(oldp+60,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13),9);
            tracep->chgCData(oldp+61,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64),8);
            tracep->chgCData(oldp+62,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118),8);
            tracep->chgCData(oldp+63,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172),8);
            tracep->chgCData(oldp+64,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10),8);
            tracep->chgCData(oldp+65,(vlTOPp->mkTestbench__DOT__p___05Fh2106),8);
            tracep->chgCData(oldp+66,(vlTOPp->mkTestbench__DOT__p___05Fh4513),8);
            tracep->chgCData(oldp+67,(vlTOPp->mkTestbench__DOT__p___05Fh6924),8);
            tracep->chgCData(oldp+68,(vlTOPp->mkTestbench__DOT__p___05Fh9335),8);
            tracep->chgCData(oldp+69,(((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
                                        ? ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
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
                                        : ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
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
                                                                 : 0U)))))))))),8);
            tracep->chgCData(oldp+70,(((IData)(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113)
                                        ? ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
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
                                        : ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
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
                                                                 : 0U)))))))))),8);
            tracep->chgCData(oldp+71,(((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59)
                                        ? ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
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
                                        : ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
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
                                                                 : 0U)))))))))),8);
            tracep->chgCData(oldp+72,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)
                                        ? ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
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
                                        : ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                           ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
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
                                                                 : 0U)))))))))),8);
            tracep->chgCData(oldp+73,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
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
                                                           : 0U))))))))),8);
            tracep->chgCData(oldp+74,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
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
                                                          & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67)))))))))),8);
            tracep->chgCData(oldp+75,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
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
                                                           : 0U))))))))),8);
            tracep->chgCData(oldp+76,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
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
                                                          & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121)))))))))),8);
            tracep->chgCData(oldp+77,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
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
                                                           : 0U))))))))),8);
            tracep->chgCData(oldp+78,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
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
                                                          & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175)))))))))),8);
            tracep->chgCData(oldp+79,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
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
                                                          & (IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13)))))))))),8);
            tracep->chgCData(oldp+80,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                       ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
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
                                                           : 0U))))))))),8);
            tracep->chgBit(oldp+81,((1U & ((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
                                            ? (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 7U))
                                            : (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                                   >> 7U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+82,(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167));
            tracep->chgBit(oldp+83,(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113));
            tracep->chgBit(oldp+84,(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59));
            tracep->chgBit(oldp+85,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
            tracep->chgBit(oldp+86,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10007) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                        >> 4U))));
            tracep->chgBit(oldp+87,(vlTOPp->mkTestbench__DOT__x___05Fh10007));
            tracep->chgBit(oldp+88,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10115) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                        >> 5U))));
            tracep->chgBit(oldp+89,(vlTOPp->mkTestbench__DOT__x___05Fh10115));
            tracep->chgBit(oldp+90,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                        >> 6U))));
            tracep->chgBit(oldp+91,(vlTOPp->mkTestbench__DOT__x___05Fh10223));
            tracep->chgBit(oldp+92,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                        >> 7U))));
            tracep->chgBit(oldp+93,(vlTOPp->mkTestbench__DOT__x___05Fh10331));
            tracep->chgBit(oldp+94,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                               >> 0x1fU)) 
                                           ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                              >> 0x1fU)))));
            tracep->chgBit(oldp+95,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                              >> 0x1fU)))));
            tracep->chgBit(oldp+96,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                              >> 1U)))));
            tracep->chgBit(oldp+97,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1331) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                        >> 2U))));
            tracep->chgBit(oldp+98,(vlTOPp->mkTestbench__DOT__x___05Fh1331));
            tracep->chgBit(oldp+99,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1439) 
                                     & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                        >> 3U))));
            tracep->chgBit(oldp+100,(vlTOPp->mkTestbench__DOT__x___05Fh1439));
            tracep->chgBit(oldp+101,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1547) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 4U))));
            tracep->chgBit(oldp+102,(vlTOPp->mkTestbench__DOT__x___05Fh1547));
            tracep->chgBit(oldp+103,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1655) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 5U))));
            tracep->chgBit(oldp+104,(vlTOPp->mkTestbench__DOT__x___05Fh1655));
            tracep->chgBit(oldp+105,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 6U))));
            tracep->chgBit(oldp+106,(vlTOPp->mkTestbench__DOT__x___05Fh1763));
            tracep->chgBit(oldp+107,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 7U))));
            tracep->chgBit(oldp+108,(vlTOPp->mkTestbench__DOT__x___05Fh1871));
            tracep->chgBit(oldp+109,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                               ? 2U
                                               : 0U) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                               >> 1U)))));
            tracep->chgBit(oldp+110,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2562) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 2U))));
            tracep->chgBit(oldp+111,(vlTOPp->mkTestbench__DOT__x___05Fh2562));
            tracep->chgBit(oldp+112,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2670) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 3U))));
            tracep->chgBit(oldp+113,(vlTOPp->mkTestbench__DOT__x___05Fh2670));
            tracep->chgBit(oldp+114,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2778) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 4U))));
            tracep->chgBit(oldp+115,(vlTOPp->mkTestbench__DOT__x___05Fh2778));
            tracep->chgBit(oldp+116,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2886) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 5U))));
            tracep->chgBit(oldp+117,(vlTOPp->mkTestbench__DOT__x___05Fh2886));
            tracep->chgBit(oldp+118,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 6U))));
            tracep->chgBit(oldp+119,(vlTOPp->mkTestbench__DOT__x___05Fh2994));
            tracep->chgBit(oldp+120,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                         >> 7U))));
            tracep->chgBit(oldp+121,(vlTOPp->mkTestbench__DOT__x___05Fh3102));
            tracep->chgBit(oldp+122,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                               >> 1U)))));
            tracep->chgBit(oldp+123,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3832) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 2U))));
            tracep->chgBit(oldp+124,(vlTOPp->mkTestbench__DOT__x___05Fh3832));
            tracep->chgBit(oldp+125,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3940) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 3U))));
            tracep->chgBit(oldp+126,(vlTOPp->mkTestbench__DOT__x___05Fh3940));
            tracep->chgBit(oldp+127,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4048) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 4U))));
            tracep->chgBit(oldp+128,(vlTOPp->mkTestbench__DOT__x___05Fh4048));
            tracep->chgBit(oldp+129,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4156) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 5U))));
            tracep->chgBit(oldp+130,(vlTOPp->mkTestbench__DOT__x___05Fh4156));
            tracep->chgBit(oldp+131,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 6U))));
            tracep->chgBit(oldp+132,(vlTOPp->mkTestbench__DOT__x___05Fh4264));
            tracep->chgBit(oldp+133,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 7U))));
            tracep->chgBit(oldp+134,(vlTOPp->mkTestbench__DOT__x___05Fh4372));
            tracep->chgBit(oldp+135,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                               ? 2U
                                               : 0U) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                               >> 1U)))));
            tracep->chgBit(oldp+136,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4969) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 2U))));
            tracep->chgBit(oldp+137,(vlTOPp->mkTestbench__DOT__x___05Fh4969));
            tracep->chgBit(oldp+138,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5077) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 3U))));
            tracep->chgBit(oldp+139,(vlTOPp->mkTestbench__DOT__x___05Fh5077));
            tracep->chgBit(oldp+140,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5185) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 4U))));
            tracep->chgBit(oldp+141,(vlTOPp->mkTestbench__DOT__x___05Fh5185));
            tracep->chgBit(oldp+142,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5293) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 5U))));
            tracep->chgBit(oldp+143,(vlTOPp->mkTestbench__DOT__x___05Fh5293));
            tracep->chgBit(oldp+144,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 6U))));
            tracep->chgBit(oldp+145,(vlTOPp->mkTestbench__DOT__x___05Fh5401));
            tracep->chgBit(oldp+146,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                         >> 7U))));
            tracep->chgBit(oldp+147,(vlTOPp->mkTestbench__DOT__x___05Fh5509));
            tracep->chgBit(oldp+148,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                               >> 1U)))));
            tracep->chgBit(oldp+149,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6243) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 2U))));
            tracep->chgBit(oldp+150,(vlTOPp->mkTestbench__DOT__x___05Fh6243));
            tracep->chgBit(oldp+151,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6351) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 3U))));
            tracep->chgBit(oldp+152,(vlTOPp->mkTestbench__DOT__x___05Fh6351));
            tracep->chgBit(oldp+153,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6459) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 4U))));
            tracep->chgBit(oldp+154,(vlTOPp->mkTestbench__DOT__x___05Fh6459));
            tracep->chgBit(oldp+155,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6567) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 5U))));
            tracep->chgBit(oldp+156,(vlTOPp->mkTestbench__DOT__x___05Fh6567));
            tracep->chgBit(oldp+157,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 6U))));
            tracep->chgBit(oldp+158,(vlTOPp->mkTestbench__DOT__x___05Fh6675));
            tracep->chgBit(oldp+159,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 7U))));
            tracep->chgBit(oldp+160,(vlTOPp->mkTestbench__DOT__x___05Fh6783));
            tracep->chgBit(oldp+161,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                               ? 2U
                                               : 0U) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                               >> 1U)))));
            tracep->chgBit(oldp+162,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7380) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 2U))));
            tracep->chgBit(oldp+163,(vlTOPp->mkTestbench__DOT__x___05Fh7380));
            tracep->chgBit(oldp+164,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7488) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 3U))));
            tracep->chgBit(oldp+165,(vlTOPp->mkTestbench__DOT__x___05Fh7488));
            tracep->chgBit(oldp+166,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7596) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 4U))));
            tracep->chgBit(oldp+167,(vlTOPp->mkTestbench__DOT__x___05Fh7596));
            tracep->chgBit(oldp+168,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7704) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 5U))));
            tracep->chgBit(oldp+169,(vlTOPp->mkTestbench__DOT__x___05Fh7704));
            tracep->chgBit(oldp+170,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 6U))));
            tracep->chgBit(oldp+171,(vlTOPp->mkTestbench__DOT__x___05Fh7812));
            tracep->chgBit(oldp+172,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                         >> 7U))));
            tracep->chgBit(oldp+173,(vlTOPp->mkTestbench__DOT__x___05Fh7920));
            tracep->chgBit(oldp+174,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                               >> 1U)))));
            tracep->chgBit(oldp+175,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8654) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 2U))));
            tracep->chgBit(oldp+176,(vlTOPp->mkTestbench__DOT__x___05Fh8654));
            tracep->chgBit(oldp+177,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8762) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 3U))));
            tracep->chgBit(oldp+178,(vlTOPp->mkTestbench__DOT__x___05Fh8762));
            tracep->chgBit(oldp+179,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8870) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 4U))));
            tracep->chgBit(oldp+180,(vlTOPp->mkTestbench__DOT__x___05Fh8870));
            tracep->chgBit(oldp+181,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8978) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 5U))));
            tracep->chgBit(oldp+182,(vlTOPp->mkTestbench__DOT__x___05Fh8978));
            tracep->chgBit(oldp+183,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 6U))));
            tracep->chgBit(oldp+184,(vlTOPp->mkTestbench__DOT__x___05Fh9086));
            tracep->chgBit(oldp+185,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 7U))));
            tracep->chgBit(oldp+186,(vlTOPp->mkTestbench__DOT__x___05Fh9194));
            tracep->chgBit(oldp+187,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                               ? 2U
                                               : 0U) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                               >> 1U)))));
            tracep->chgBit(oldp+188,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9791) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 2U))));
            tracep->chgBit(oldp+189,(vlTOPp->mkTestbench__DOT__x___05Fh9791));
            tracep->chgBit(oldp+190,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9899) 
                                      & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                         >> 3U))));
            tracep->chgBit(oldp+191,(vlTOPp->mkTestbench__DOT__x___05Fh9899));
            tracep->chgBit(oldp+192,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                             >> 0x1fU) 
                                            ^ (IData)(
                                                      (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                       >> 0x1fU))))));
        }
        tracep->chgBit(oldp+193,(vlTOPp->CLK));
        tracep->chgBit(oldp+194,(vlTOPp->RST_N));
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
