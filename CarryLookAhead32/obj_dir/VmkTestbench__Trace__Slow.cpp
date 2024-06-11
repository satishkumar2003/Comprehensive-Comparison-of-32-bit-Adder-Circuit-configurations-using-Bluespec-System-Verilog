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
        tracep->declBit(c+124,"CLK", false,-1);
        tracep->declBit(c+125,"RST_N", false,-1);
        tracep->declBit(c+124,"mkTestbench CLK", false,-1);
        tracep->declBit(c+125,"mkTestbench RST_N", false,-1);
        tracep->declBus(c+1,"mkTestbench a", false,-1, 31,0);
        tracep->declBus(c+2,"mkTestbench a_D_IN", false,-1, 31,0);
        tracep->declBit(c+3,"mkTestbench a_EN", false,-1);
        tracep->declBit(c+4,"mkTestbench adder_1_available", false,-1);
        tracep->declBit(c+5,"mkTestbench adder_1_available_D_IN", false,-1);
        tracep->declBit(c+6,"mkTestbench adder_1_available_EN", false,-1);
        tracep->declBit(c+7,"mkTestbench adder_1_cin", false,-1);
        tracep->declBit(c+8,"mkTestbench adder_1_cin_D_IN", false,-1);
        tracep->declBit(c+3,"mkTestbench adder_1_cin_EN", false,-1);
        tracep->declBus(c+9,"mkTestbench adder_1_in1", false,-1, 31,0);
        tracep->declBus(c+2,"mkTestbench adder_1_in1_D_IN", false,-1, 31,0);
        tracep->declBit(c+3,"mkTestbench adder_1_in1_EN", false,-1);
        tracep->declBus(c+10,"mkTestbench adder_1_in2", false,-1, 31,0);
        tracep->declBus(c+11,"mkTestbench adder_1_in2_D_IN", false,-1, 31,0);
        tracep->declBit(c+3,"mkTestbench adder_1_in2_EN", false,-1);
        tracep->declQuad(c+12,"mkTestbench adder_1_result", false,-1, 32,0);
        tracep->declQuad(c+14,"mkTestbench adder_1_result_D_IN", false,-1, 32,0);
        tracep->declBit(c+16,"mkTestbench adder_1_result_EN", false,-1);
        tracep->declBus(c+17,"mkTestbench b", false,-1, 31,0);
        tracep->declBus(c+11,"mkTestbench b_D_IN", false,-1, 31,0);
        tracep->declBit(c+3,"mkTestbench b_EN", false,-1);
        tracep->declBit(c+18,"mkTestbench cin", false,-1);
        tracep->declBit(c+8,"mkTestbench cin_D_IN", false,-1);
        tracep->declBit(c+3,"mkTestbench cin_EN", false,-1);
        tracep->declBus(c+19,"mkTestbench count", false,-1, 7,0);
        tracep->declBus(c+20,"mkTestbench count_D_IN", false,-1, 7,0);
        tracep->declBit(c+3,"mkTestbench count_EN", false,-1);
        tracep->declBit(c+21,"mkTestbench cout", false,-1);
        tracep->declBit(c+22,"mkTestbench cout_D_IN", false,-1);
        tracep->declBit(c+23,"mkTestbench cout_EN", false,-1);
        tracep->declBit(c+24,"mkTestbench overflow_flag", false,-1);
        tracep->declBit(c+25,"mkTestbench overflow_flag_D_IN", false,-1);
        tracep->declBit(c+23,"mkTestbench overflow_flag_EN", false,-1);
        tracep->declBus(c+2,"mkTestbench rng_a_r", false,-1, 31,0);
        tracep->declBus(c+26,"mkTestbench rng_a_r_D_IN", false,-1, 31,0);
        tracep->declBit(c+27,"mkTestbench rng_a_r_EN", false,-1);
        tracep->declBus(c+11,"mkTestbench rng_b_r", false,-1, 31,0);
        tracep->declBus(c+28,"mkTestbench rng_b_r_D_IN", false,-1, 31,0);
        tracep->declBit(c+27,"mkTestbench rng_b_r_EN", false,-1);
        tracep->declBus(c+29,"mkTestbench rng_cin_r", false,-1, 7,0);
        tracep->declBus(c+30,"mkTestbench rng_cin_r_D_IN", false,-1, 7,0);
        tracep->declBit(c+27,"mkTestbench rng_cin_r_EN", false,-1);
        tracep->declBus(c+31,"mkTestbench state", false,-1, 1,0);
        tracep->declBus(c+32,"mkTestbench state_D_IN", false,-1, 1,0);
        tracep->declBit(c+33,"mkTestbench state_EN", false,-1);
        tracep->declBus(c+34,"mkTestbench sum", false,-1, 31,0);
        tracep->declBus(c+35,"mkTestbench sum_D_IN", false,-1, 31,0);
        tracep->declBit(c+23,"mkTestbench sum_EN", false,-1);
        tracep->declBit(c+16,"mkTestbench CAN_FIRE_RL_adder_1_call_compute", false,-1);
        tracep->declBit(c+36,"mkTestbench CAN_FIRE_RL_display_results", false,-1);
        tracep->declBit(c+3,"mkTestbench CAN_FIRE_RL_generate_random_inputs", false,-1);
        tracep->declBit(c+23,"mkTestbench CAN_FIRE_RL_get_results", false,-1);
        tracep->declBit(c+37,"mkTestbench CAN_FIRE_RL_initialize", false,-1);
        tracep->declBit(c+16,"mkTestbench WILL_FIRE_RL_adder_1_call_compute", false,-1);
        tracep->declBit(c+36,"mkTestbench WILL_FIRE_RL_display_results", false,-1);
        tracep->declBit(c+3,"mkTestbench WILL_FIRE_RL_generate_random_inputs", false,-1);
        tracep->declBit(c+23,"mkTestbench WILL_FIRE_RL_get_results", false,-1);
        tracep->declBit(c+37,"mkTestbench WILL_FIRE_RL_initialize", false,-1);
        tracep->declBus(c+38,"mkTestbench MUX_rng_a_r_write_1__VAL_1", false,-1, 31,0);
        tracep->declBus(c+39,"mkTestbench MUX_rng_b_r_write_1__VAL_1", false,-1, 31,0);
        tracep->declBus(c+40,"mkTestbench MUX_rng_cin_r_write_1__VAL_1", false,-1, 7,0);
        tracep->declBit(c+41,"mkTestbench MUX_state_write_1__SEL_1", false,-1);
        tracep->declQuad(c+42,"mkTestbench calculated_sum__h5805", false,-1, 32,0);
        tracep->declQuad(c+44,"mkTestbench expected_sum__h5804", false,-1, 32,0);
        tracep->declQuad(c+46,"mkTestbench x__h5982", false,-1, 32,0);
        tracep->declQuad(c+48,"mkTestbench x__h5984", false,-1, 32,0);
        tracep->declQuad(c+50,"mkTestbench y__h5823", false,-1, 32,0);
        tracep->declQuad(c+52,"mkTestbench y__h5985", false,-1, 32,0);
        tracep->declBus(c+54,"mkTestbench adder_1_in1_AND_adder_1_in2___d9", false,-1, 31,0);
        tracep->declBus(c+55,"mkTestbench p__h425", false,-1, 31,0);
        tracep->declBus(c+56,"mkTestbench sum_val__h429", false,-1, 31,0);
        tracep->declBit(c+57,"mkTestbench count_03_ULT_30___d218", false,-1);
        tracep->declBit(c+58,"mkTestbench x__h1093", false,-1);
        tracep->declBit(c+59,"mkTestbench x__h1202", false,-1);
        tracep->declBit(c+60,"mkTestbench x__h1204", false,-1);
        tracep->declBit(c+61,"mkTestbench x__h1310", false,-1);
        tracep->declBit(c+62,"mkTestbench x__h1312", false,-1);
        tracep->declBit(c+63,"mkTestbench x__h1418", false,-1);
        tracep->declBit(c+64,"mkTestbench x__h1420", false,-1);
        tracep->declBit(c+65,"mkTestbench x__h1526", false,-1);
        tracep->declBit(c+66,"mkTestbench x__h1528", false,-1);
        tracep->declBit(c+67,"mkTestbench x__h1634", false,-1);
        tracep->declBit(c+68,"mkTestbench x__h1636", false,-1);
        tracep->declBit(c+69,"mkTestbench x__h1742", false,-1);
        tracep->declBit(c+70,"mkTestbench x__h1744", false,-1);
        tracep->declBit(c+71,"mkTestbench x__h1850", false,-1);
        tracep->declBit(c+72,"mkTestbench x__h1852", false,-1);
        tracep->declBit(c+73,"mkTestbench x__h1958", false,-1);
        tracep->declBit(c+74,"mkTestbench x__h1960", false,-1);
        tracep->declBit(c+75,"mkTestbench x__h2066", false,-1);
        tracep->declBit(c+76,"mkTestbench x__h2068", false,-1);
        tracep->declBit(c+77,"mkTestbench x__h2174", false,-1);
        tracep->declBit(c+78,"mkTestbench x__h2176", false,-1);
        tracep->declBit(c+79,"mkTestbench x__h2282", false,-1);
        tracep->declBit(c+80,"mkTestbench x__h2284", false,-1);
        tracep->declBit(c+81,"mkTestbench x__h2390", false,-1);
        tracep->declBit(c+82,"mkTestbench x__h2392", false,-1);
        tracep->declBit(c+83,"mkTestbench x__h2498", false,-1);
        tracep->declBit(c+84,"mkTestbench x__h2500", false,-1);
        tracep->declBit(c+85,"mkTestbench x__h2606", false,-1);
        tracep->declBit(c+86,"mkTestbench x__h2608", false,-1);
        tracep->declBit(c+87,"mkTestbench x__h2714", false,-1);
        tracep->declBit(c+88,"mkTestbench x__h2716", false,-1);
        tracep->declBit(c+89,"mkTestbench x__h2822", false,-1);
        tracep->declBit(c+90,"mkTestbench x__h2824", false,-1);
        tracep->declBit(c+91,"mkTestbench x__h2930", false,-1);
        tracep->declBit(c+92,"mkTestbench x__h2932", false,-1);
        tracep->declBit(c+93,"mkTestbench x__h3038", false,-1);
        tracep->declBit(c+94,"mkTestbench x__h3040", false,-1);
        tracep->declBit(c+95,"mkTestbench x__h3146", false,-1);
        tracep->declBit(c+96,"mkTestbench x__h3148", false,-1);
        tracep->declBit(c+97,"mkTestbench x__h3254", false,-1);
        tracep->declBit(c+98,"mkTestbench x__h3256", false,-1);
        tracep->declBit(c+99,"mkTestbench x__h3362", false,-1);
        tracep->declBit(c+100,"mkTestbench x__h3364", false,-1);
        tracep->declBit(c+101,"mkTestbench x__h3470", false,-1);
        tracep->declBit(c+102,"mkTestbench x__h3472", false,-1);
        tracep->declBit(c+103,"mkTestbench x__h3578", false,-1);
        tracep->declBit(c+104,"mkTestbench x__h3580", false,-1);
        tracep->declBit(c+105,"mkTestbench x__h3686", false,-1);
        tracep->declBit(c+106,"mkTestbench x__h3688", false,-1);
        tracep->declBit(c+107,"mkTestbench x__h3794", false,-1);
        tracep->declBit(c+108,"mkTestbench x__h3796", false,-1);
        tracep->declBit(c+109,"mkTestbench x__h3902", false,-1);
        tracep->declBit(c+110,"mkTestbench x__h3904", false,-1);
        tracep->declBit(c+111,"mkTestbench x__h4010", false,-1);
        tracep->declBit(c+112,"mkTestbench x__h4012", false,-1);
        tracep->declBit(c+113,"mkTestbench x__h4118", false,-1);
        tracep->declBit(c+114,"mkTestbench x__h4120", false,-1);
        tracep->declBit(c+115,"mkTestbench x__h4226", false,-1);
        tracep->declBit(c+116,"mkTestbench x__h4228", false,-1);
        tracep->declBit(c+117,"mkTestbench x__h4334", false,-1);
        tracep->declBit(c+118,"mkTestbench x__h4336", false,-1);
        tracep->declBit(c+119,"mkTestbench x__h4442", false,-1);
        tracep->declBit(c+120,"mkTestbench x__h4444", false,-1);
        tracep->declBit(c+121,"mkTestbench x__h5637", false,-1);
        tracep->declBit(c+122,"mkTestbench x__h5639", false,-1);
        tracep->declBit(c+123,"mkTestbench y__h5638", false,-1);
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
        tracep->fullIData(oldp+1,(vlTOPp->mkTestbench__DOT__a),32);
        tracep->fullIData(oldp+2,(vlTOPp->mkTestbench__DOT__rng_a_r),32);
        tracep->fullBit(oldp+3,((1U == (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullBit(oldp+4,(vlTOPp->mkTestbench__DOT__adder_1_available));
        tracep->fullBit(oldp+5,((1U != (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullBit(oldp+6,((1U & ((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                       | (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available))))));
        tracep->fullBit(oldp+7,(vlTOPp->mkTestbench__DOT__adder_1_cin));
        tracep->fullBit(oldp+8,((1U & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                       >> 3U))));
        tracep->fullIData(oldp+9,(vlTOPp->mkTestbench__DOT__adder_1_in1),32);
        tracep->fullIData(oldp+10,(vlTOPp->mkTestbench__DOT__adder_1_in2),32);
        tracep->fullIData(oldp+11,(vlTOPp->mkTestbench__DOT__rng_b_r),32);
        tracep->fullQData(oldp+12,(vlTOPp->mkTestbench__DOT__adder_1_result),33);
        tracep->fullQData(oldp+14,((((QData)((IData)(
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
        tracep->fullBit(oldp+16,((1U & (~ (IData)(vlTOPp->mkTestbench__DOT__adder_1_available)))));
        tracep->fullIData(oldp+17,(vlTOPp->mkTestbench__DOT__b),32);
        tracep->fullBit(oldp+18,(vlTOPp->mkTestbench__DOT__cin));
        tracep->fullCData(oldp+19,(vlTOPp->mkTestbench__DOT__count),8);
        tracep->fullCData(oldp+20,((0xffU & ((IData)(1U) 
                                             + (IData)(vlTOPp->mkTestbench__DOT__count)))),8);
        tracep->fullBit(oldp+21,(vlTOPp->mkTestbench__DOT__cout));
        tracep->fullBit(oldp+22,((1U & (IData)((vlTOPp->mkTestbench__DOT__adder_1_result 
                                                >> 0x20U)))));
        tracep->fullBit(oldp+23,(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results));
        tracep->fullBit(oldp+24,(vlTOPp->mkTestbench__DOT__overflow_flag));
        tracep->fullBit(oldp+25,((1U & (((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             >> 0x1fU)) 
                                         ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                            >> 0x1fU)) 
                                        & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                            >> 0x1fU) 
                                           ^ (IData)(
                                                     (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                      >> 0x1fU)))))));
        tracep->fullIData(oldp+26,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
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
        tracep->fullBit(oldp+27,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                  | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))));
        tracep->fullIData(oldp+28,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
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
        tracep->fullCData(oldp+29,(vlTOPp->mkTestbench__DOT__rng_cin_r),8);
        tracep->fullCData(oldp+30,(((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                     ? ((1U & (IData)(vlTOPp->mkTestbench__DOT__rng_cin_r))
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
                                             >> 1U)))
                                     : 0xa5U)),8);
        tracep->fullCData(oldp+31,(vlTOPp->mkTestbench__DOT__state),2);
        tracep->fullCData(oldp+32,(((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                      & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                     | (0U == (IData)(vlTOPp->mkTestbench__DOT__state)))
                                     ? 1U : ((1U == (IData)(vlTOPp->mkTestbench__DOT__state))
                                              ? 2U : 
                                             ((IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results)
                                               ? 3U
                                               : 0U)))),2);
        tracep->fullBit(oldp+33,((((((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                     & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))) 
                                    | (0U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                   | (1U == (IData)(vlTOPp->mkTestbench__DOT__state))) 
                                  | (IData)(vlTOPp->mkTestbench__DOT__CAN_FIRE_RL_get_results))));
        tracep->fullIData(oldp+34,(vlTOPp->mkTestbench__DOT__sum),32);
        tracep->fullIData(oldp+35,((IData)(vlTOPp->mkTestbench__DOT__adder_1_result)),32);
        tracep->fullBit(oldp+36,((3U == (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullBit(oldp+37,((0U == (IData)(vlTOPp->mkTestbench__DOT__state))));
        tracep->fullIData(oldp+38,(((1U & vlTOPp->mkTestbench__DOT__rng_a_r)
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
        tracep->fullIData(oldp+39,(((1U & vlTOPp->mkTestbench__DOT__rng_b_r)
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
        tracep->fullCData(oldp+40,(((1U & (IData)(vlTOPp->mkTestbench__DOT__rng_cin_r))
                                     ? (0x80U | ((0x70U 
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
                                     : (0x7fU & ((IData)(vlTOPp->mkTestbench__DOT__rng_cin_r) 
                                                 >> 1U)))),8);
        tracep->fullBit(oldp+41,(((3U == (IData)(vlTOPp->mkTestbench__DOT__state)) 
                                  & (0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count)))));
        tracep->fullQData(oldp+42,((((QData)((IData)(vlTOPp->mkTestbench__DOT__cout)) 
                                     << 0x20U) | (QData)((IData)(vlTOPp->mkTestbench__DOT__sum)))),33);
        tracep->fullQData(oldp+44,((0x1ffffffffULL 
                                    & (((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                        + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))) 
                                       + (QData)((IData)(vlTOPp->mkTestbench__DOT__cin))))),33);
        tracep->fullQData(oldp+46,((0x1ffffffffULL 
                                    & ((QData)((IData)(vlTOPp->mkTestbench__DOT__a)) 
                                       + (QData)((IData)(vlTOPp->mkTestbench__DOT__b))))),33);
        tracep->fullQData(oldp+48,((QData)((IData)(vlTOPp->mkTestbench__DOT__a))),33);
        tracep->fullQData(oldp+50,((QData)((IData)(vlTOPp->mkTestbench__DOT__cin))),33);
        tracep->fullQData(oldp+52,((QData)((IData)(vlTOPp->mkTestbench__DOT__b))),33);
        tracep->fullIData(oldp+54,(vlTOPp->mkTestbench__DOT__adder_1_in1_AND_adder_1_in2___05F_d9),32);
        tracep->fullIData(oldp+55,(vlTOPp->mkTestbench__DOT__p___05Fh425),32);
        tracep->fullIData(oldp+56,((vlTOPp->mkTestbench__DOT__p___05Fh425 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                        << 0x1fU) | 
                                       (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4336) 
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
        tracep->fullBit(oldp+57,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
        tracep->fullBit(oldp+58,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                  & vlTOPp->mkTestbench__DOT__p___05Fh425)));
        tracep->fullBit(oldp+59,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1204) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 1U))));
        tracep->fullBit(oldp+60,(vlTOPp->mkTestbench__DOT__x___05Fh1204));
        tracep->fullBit(oldp+61,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1312) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 2U))));
        tracep->fullBit(oldp+62,(vlTOPp->mkTestbench__DOT__x___05Fh1312));
        tracep->fullBit(oldp+63,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1420) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 3U))));
        tracep->fullBit(oldp+64,(vlTOPp->mkTestbench__DOT__x___05Fh1420));
        tracep->fullBit(oldp+65,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1528) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 4U))));
        tracep->fullBit(oldp+66,(vlTOPp->mkTestbench__DOT__x___05Fh1528));
        tracep->fullBit(oldp+67,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1636) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 5U))));
        tracep->fullBit(oldp+68,(vlTOPp->mkTestbench__DOT__x___05Fh1636));
        tracep->fullBit(oldp+69,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1744) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 6U))));
        tracep->fullBit(oldp+70,(vlTOPp->mkTestbench__DOT__x___05Fh1744));
        tracep->fullBit(oldp+71,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1852) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 7U))));
        tracep->fullBit(oldp+72,(vlTOPp->mkTestbench__DOT__x___05Fh1852));
        tracep->fullBit(oldp+73,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1960) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 8U))));
        tracep->fullBit(oldp+74,(vlTOPp->mkTestbench__DOT__x___05Fh1960));
        tracep->fullBit(oldp+75,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2068) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 9U))));
        tracep->fullBit(oldp+76,(vlTOPp->mkTestbench__DOT__x___05Fh2068));
        tracep->fullBit(oldp+77,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2176) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xaU))));
        tracep->fullBit(oldp+78,(vlTOPp->mkTestbench__DOT__x___05Fh2176));
        tracep->fullBit(oldp+79,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2284) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xbU))));
        tracep->fullBit(oldp+80,(vlTOPp->mkTestbench__DOT__x___05Fh2284));
        tracep->fullBit(oldp+81,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2392) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xcU))));
        tracep->fullBit(oldp+82,(vlTOPp->mkTestbench__DOT__x___05Fh2392));
        tracep->fullBit(oldp+83,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2500) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xdU))));
        tracep->fullBit(oldp+84,(vlTOPp->mkTestbench__DOT__x___05Fh2500));
        tracep->fullBit(oldp+85,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2608) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xeU))));
        tracep->fullBit(oldp+86,(vlTOPp->mkTestbench__DOT__x___05Fh2608));
        tracep->fullBit(oldp+87,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2716) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0xfU))));
        tracep->fullBit(oldp+88,(vlTOPp->mkTestbench__DOT__x___05Fh2716));
        tracep->fullBit(oldp+89,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2824) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x10U))));
        tracep->fullBit(oldp+90,(vlTOPp->mkTestbench__DOT__x___05Fh2824));
        tracep->fullBit(oldp+91,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2932) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x11U))));
        tracep->fullBit(oldp+92,(vlTOPp->mkTestbench__DOT__x___05Fh2932));
        tracep->fullBit(oldp+93,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3040) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x12U))));
        tracep->fullBit(oldp+94,(vlTOPp->mkTestbench__DOT__x___05Fh3040));
        tracep->fullBit(oldp+95,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3148) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x13U))));
        tracep->fullBit(oldp+96,(vlTOPp->mkTestbench__DOT__x___05Fh3148));
        tracep->fullBit(oldp+97,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3256) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x14U))));
        tracep->fullBit(oldp+98,(vlTOPp->mkTestbench__DOT__x___05Fh3256));
        tracep->fullBit(oldp+99,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3364) 
                                  & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                     >> 0x15U))));
        tracep->fullBit(oldp+100,(vlTOPp->mkTestbench__DOT__x___05Fh3364));
        tracep->fullBit(oldp+101,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3472) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x16U))));
        tracep->fullBit(oldp+102,(vlTOPp->mkTestbench__DOT__x___05Fh3472));
        tracep->fullBit(oldp+103,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3580) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x17U))));
        tracep->fullBit(oldp+104,(vlTOPp->mkTestbench__DOT__x___05Fh3580));
        tracep->fullBit(oldp+105,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3688) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x18U))));
        tracep->fullBit(oldp+106,(vlTOPp->mkTestbench__DOT__x___05Fh3688));
        tracep->fullBit(oldp+107,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3796) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x19U))));
        tracep->fullBit(oldp+108,(vlTOPp->mkTestbench__DOT__x___05Fh3796));
        tracep->fullBit(oldp+109,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3904) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1aU))));
        tracep->fullBit(oldp+110,(vlTOPp->mkTestbench__DOT__x___05Fh3904));
        tracep->fullBit(oldp+111,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4012) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1bU))));
        tracep->fullBit(oldp+112,(vlTOPp->mkTestbench__DOT__x___05Fh4012));
        tracep->fullBit(oldp+113,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4120) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1cU))));
        tracep->fullBit(oldp+114,(vlTOPp->mkTestbench__DOT__x___05Fh4120));
        tracep->fullBit(oldp+115,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4228) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1dU))));
        tracep->fullBit(oldp+116,(vlTOPp->mkTestbench__DOT__x___05Fh4228));
        tracep->fullBit(oldp+117,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4336) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1eU))));
        tracep->fullBit(oldp+118,(vlTOPp->mkTestbench__DOT__x___05Fh4336));
        tracep->fullBit(oldp+119,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4444) 
                                   & (vlTOPp->mkTestbench__DOT__p___05Fh425 
                                      >> 0x1fU))));
        tracep->fullBit(oldp+120,(vlTOPp->mkTestbench__DOT__x___05Fh4444));
        tracep->fullBit(oldp+121,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             >> 0x1fU)) 
                                         ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                            >> 0x1fU)))));
        tracep->fullBit(oldp+122,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                            >> 0x1fU)))));
        tracep->fullBit(oldp+123,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                          >> 0x1fU) 
                                         ^ (IData)(
                                                   (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+124,(vlTOPp->CLK));
        tracep->fullBit(oldp+125,(vlTOPp->RST_N));
    }
}
