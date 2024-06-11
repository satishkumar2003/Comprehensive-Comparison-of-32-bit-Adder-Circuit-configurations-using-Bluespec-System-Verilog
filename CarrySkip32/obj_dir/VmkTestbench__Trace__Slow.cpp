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
        tracep->declBit(c+134,"CLK", false,-1);
        tracep->declBit(c+135,"RST_N", false,-1);
        tracep->declBit(c+134,"mkTestbench CLK", false,-1);
        tracep->declBit(c+135,"mkTestbench RST_N", false,-1);
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
        tracep->declQuad(c+42,"mkTestbench calculated_sum__h14822", false,-1, 32,0);
        tracep->declQuad(c+44,"mkTestbench expected_sum__h14821", false,-1, 32,0);
        tracep->declQuad(c+46,"mkTestbench x__h14999", false,-1, 32,0);
        tracep->declQuad(c+48,"mkTestbench x__h15001", false,-1, 32,0);
        tracep->declQuad(c+50,"mkTestbench y__h14840", false,-1, 32,0);
        tracep->declQuad(c+52,"mkTestbench y__h15002", false,-1, 32,0);
        tracep->declBus(c+54,"mkTestbench spliced_bits__h474", false,-1, 8,0);
        tracep->declBus(c+55,"mkTestbench adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___d47", false,-1, 7,0);
        tracep->declBus(c+56,"mkTestbench adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___d44", false,-1, 7,0);
        tracep->declBus(c+57,"mkTestbench adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___d83", false,-1, 7,0);
        tracep->declBus(c+58,"mkTestbench adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___d80", false,-1, 7,0);
        tracep->declBus(c+59,"mkTestbench adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___d119", false,-1, 7,0);
        tracep->declBus(c+60,"mkTestbench adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___d11", false,-1, 7,0);
        tracep->declBus(c+61,"mkTestbench adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___d8", false,-1, 7,0);
        tracep->declBus(c+62,"mkTestbench p__h8574", false,-1, 7,0);
        tracep->declBus(c+63,"mkTestbench sum_val__h2134", false,-1, 7,0);
        tracep->declBus(c+64,"mkTestbench sum_val__h4712", false,-1, 7,0);
        tracep->declBus(c+65,"mkTestbench sum_val__h842", false,-1, 7,0);
        tracep->declBus(c+66,"mkTestbench sum_val__h8578", false,-1, 7,0);
        tracep->declBit(c+67,"mkTestbench adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___d113", false,-1);
        tracep->declBit(c+68,"mkTestbench adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___d77", false,-1);
        tracep->declBit(c+69,"mkTestbench cin__h2129", false,-1);
        tracep->declBit(c+70,"mkTestbench count_22_ULT_30___d237", false,-1);
        tracep->declBit(c+71,"mkTestbench x__h12658", false,-1);
        tracep->declBit(c+72,"mkTestbench x__h12809", false,-1);
        tracep->declBit(c+73,"mkTestbench x__h12811", false,-1);
        tracep->declBit(c+74,"mkTestbench x__h12917", false,-1);
        tracep->declBit(c+75,"mkTestbench x__h12919", false,-1);
        tracep->declBit(c+76,"mkTestbench x__h13025", false,-1);
        tracep->declBit(c+77,"mkTestbench x__h13027", false,-1);
        tracep->declBit(c+78,"mkTestbench x__h13133", false,-1);
        tracep->declBit(c+79,"mkTestbench x__h13135", false,-1);
        tracep->declBit(c+80,"mkTestbench x__h13241", false,-1);
        tracep->declBit(c+81,"mkTestbench x__h13243", false,-1);
        tracep->declBit(c+82,"mkTestbench x__h13349", false,-1);
        tracep->declBit(c+83,"mkTestbench x__h13351", false,-1);
        tracep->declBit(c+84,"mkTestbench x__h13457", false,-1);
        tracep->declBit(c+85,"mkTestbench x__h13459", false,-1);
        tracep->declBit(c+86,"mkTestbench x__h14654", false,-1);
        tracep->declBit(c+87,"mkTestbench x__h14656", false,-1);
        tracep->declBit(c+88,"mkTestbench x__h3636", false,-1);
        tracep->declBit(c+89,"mkTestbench x__h3787", false,-1);
        tracep->declBit(c+90,"mkTestbench x__h3789", false,-1);
        tracep->declBit(c+91,"mkTestbench x__h3895", false,-1);
        tracep->declBit(c+92,"mkTestbench x__h3897", false,-1);
        tracep->declBit(c+93,"mkTestbench x__h4003", false,-1);
        tracep->declBit(c+94,"mkTestbench x__h4005", false,-1);
        tracep->declBit(c+95,"mkTestbench x__h4111", false,-1);
        tracep->declBit(c+96,"mkTestbench x__h4113", false,-1);
        tracep->declBit(c+97,"mkTestbench x__h4219", false,-1);
        tracep->declBit(c+98,"mkTestbench x__h4221", false,-1);
        tracep->declBit(c+99,"mkTestbench x__h4327", false,-1);
        tracep->declBit(c+100,"mkTestbench x__h4329", false,-1);
        tracep->declBit(c+101,"mkTestbench x__h4435", false,-1);
        tracep->declBit(c+102,"mkTestbench x__h4437", false,-1);
        tracep->declBit(c+103,"mkTestbench x__h7503", false,-1);
        tracep->declBit(c+104,"mkTestbench x__h7654", false,-1);
        tracep->declBit(c+105,"mkTestbench x__h7656", false,-1);
        tracep->declBit(c+106,"mkTestbench x__h7762", false,-1);
        tracep->declBit(c+107,"mkTestbench x__h7764", false,-1);
        tracep->declBit(c+108,"mkTestbench x__h7870", false,-1);
        tracep->declBit(c+109,"mkTestbench x__h7872", false,-1);
        tracep->declBit(c+110,"mkTestbench x__h7978", false,-1);
        tracep->declBit(c+111,"mkTestbench x__h7980", false,-1);
        tracep->declBit(c+112,"mkTestbench x__h8086", false,-1);
        tracep->declBit(c+113,"mkTestbench x__h8088", false,-1);
        tracep->declBit(c+114,"mkTestbench x__h8194", false,-1);
        tracep->declBit(c+115,"mkTestbench x__h8196", false,-1);
        tracep->declBit(c+116,"mkTestbench x__h8302", false,-1);
        tracep->declBit(c+117,"mkTestbench x__h8304", false,-1);
        tracep->declBit(c+118,"mkTestbench x__h9078", false,-1);
        tracep->declBit(c+119,"mkTestbench x__h9229", false,-1);
        tracep->declBit(c+120,"mkTestbench x__h9231", false,-1);
        tracep->declBit(c+121,"mkTestbench x__h9337", false,-1);
        tracep->declBit(c+122,"mkTestbench x__h9339", false,-1);
        tracep->declBit(c+123,"mkTestbench x__h9445", false,-1);
        tracep->declBit(c+124,"mkTestbench x__h9447", false,-1);
        tracep->declBit(c+125,"mkTestbench x__h9553", false,-1);
        tracep->declBit(c+126,"mkTestbench x__h9555", false,-1);
        tracep->declBit(c+127,"mkTestbench x__h9661", false,-1);
        tracep->declBit(c+128,"mkTestbench x__h9663", false,-1);
        tracep->declBit(c+129,"mkTestbench x__h9769", false,-1);
        tracep->declBit(c+130,"mkTestbench x__h9771", false,-1);
        tracep->declBit(c+131,"mkTestbench x__h9877", false,-1);
        tracep->declBit(c+132,"mkTestbench x__h9879", false,-1);
        tracep->declBit(c+133,"mkTestbench y__h14655", false,-1);
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
        tracep->fullSData(oldp+54,(((0x100U & ((((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                                 << 8U) 
                                                & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                                   << 1U)) 
                                               | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119) 
                                                  << 1U))) 
                                    | ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
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
                                                          | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113))))))))))),9);
        tracep->fullCData(oldp+55,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_AND_adder_1_in2_BIT_ETC___05F_d47),8);
        tracep->fullCData(oldp+56,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44),8);
        tracep->fullCData(oldp+57,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_AND_adder_1_in2_BI_ETC___05F_d83),8);
        tracep->fullCData(oldp+58,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80),8);
        tracep->fullCData(oldp+59,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_14_AND_adder_1_in2_B_ETC___05F_d119),8);
        tracep->fullCData(oldp+60,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d11),8);
        tracep->fullCData(oldp+61,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8),8);
        tracep->fullCData(oldp+62,(vlTOPp->mkTestbench__DOT__p___05Fh8574),8);
        tracep->fullCData(oldp+63,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
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
        tracep->fullCData(oldp+64,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
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
        tracep->fullCData(oldp+65,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
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
        tracep->fullCData(oldp+66,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
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
        tracep->fullBit(oldp+67,(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113));
        tracep->fullBit(oldp+68,(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77));
        tracep->fullBit(oldp+69,(vlTOPp->mkTestbench__DOT__cin___05Fh2129));
        tracep->fullBit(oldp+70,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
        tracep->fullBit(oldp+71,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d113) 
                                  & (IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574))));
        tracep->fullBit(oldp+72,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12811) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 1U))));
        tracep->fullBit(oldp+73,(vlTOPp->mkTestbench__DOT__x___05Fh12811));
        tracep->fullBit(oldp+74,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh12919) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 2U))));
        tracep->fullBit(oldp+75,(vlTOPp->mkTestbench__DOT__x___05Fh12919));
        tracep->fullBit(oldp+76,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13027) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 3U))));
        tracep->fullBit(oldp+77,(vlTOPp->mkTestbench__DOT__x___05Fh13027));
        tracep->fullBit(oldp+78,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13135) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 4U))));
        tracep->fullBit(oldp+79,(vlTOPp->mkTestbench__DOT__x___05Fh13135));
        tracep->fullBit(oldp+80,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13243) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 5U))));
        tracep->fullBit(oldp+81,(vlTOPp->mkTestbench__DOT__x___05Fh13243));
        tracep->fullBit(oldp+82,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13351) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 6U))));
        tracep->fullBit(oldp+83,(vlTOPp->mkTestbench__DOT__x___05Fh13351));
        tracep->fullBit(oldp+84,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh13459) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh8574) 
                                     >> 7U))));
        tracep->fullBit(oldp+85,(vlTOPp->mkTestbench__DOT__x___05Fh13459));
        tracep->fullBit(oldp+86,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                            >> 0x1fU)) 
                                        ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                           >> 0x1fU)))));
        tracep->fullBit(oldp+87,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                           >> 0x1fU)))));
        tracep->fullBit(oldp+88,(((IData)(vlTOPp->mkTestbench__DOT__cin___05Fh2129) 
                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44))));
        tracep->fullBit(oldp+89,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3789) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 1U))));
        tracep->fullBit(oldp+90,(vlTOPp->mkTestbench__DOT__x___05Fh3789));
        tracep->fullBit(oldp+91,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3897) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 2U))));
        tracep->fullBit(oldp+92,(vlTOPp->mkTestbench__DOT__x___05Fh3897));
        tracep->fullBit(oldp+93,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4005) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 3U))));
        tracep->fullBit(oldp+94,(vlTOPp->mkTestbench__DOT__x___05Fh4005));
        tracep->fullBit(oldp+95,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4113) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 4U))));
        tracep->fullBit(oldp+96,(vlTOPp->mkTestbench__DOT__x___05Fh4113));
        tracep->fullBit(oldp+97,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4221) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 5U))));
        tracep->fullBit(oldp+98,(vlTOPp->mkTestbench__DOT__x___05Fh4221));
        tracep->fullBit(oldp+99,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4329) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                     >> 6U))));
        tracep->fullBit(oldp+100,(vlTOPp->mkTestbench__DOT__x___05Fh4329));
        tracep->fullBit(oldp+101,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4437) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_2_XOR_adder_1_in2_BIT_ETC___05F_d44) 
                                      >> 7U))));
        tracep->fullBit(oldp+102,(vlTOPp->mkTestbench__DOT__x___05Fh4437));
        tracep->fullBit(oldp+103,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin_AND_adder_1_in1_BITS_7_TO_0_XOR_ad_ETC___05F_d77) 
                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80))));
        tracep->fullBit(oldp+104,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7656) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 1U))));
        tracep->fullBit(oldp+105,(vlTOPp->mkTestbench__DOT__x___05Fh7656));
        tracep->fullBit(oldp+106,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7764) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 2U))));
        tracep->fullBit(oldp+107,(vlTOPp->mkTestbench__DOT__x___05Fh7764));
        tracep->fullBit(oldp+108,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7872) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 3U))));
        tracep->fullBit(oldp+109,(vlTOPp->mkTestbench__DOT__x___05Fh7872));
        tracep->fullBit(oldp+110,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7980) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 4U))));
        tracep->fullBit(oldp+111,(vlTOPp->mkTestbench__DOT__x___05Fh7980));
        tracep->fullBit(oldp+112,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8088) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 5U))));
        tracep->fullBit(oldp+113,(vlTOPp->mkTestbench__DOT__x___05Fh8088));
        tracep->fullBit(oldp+114,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8196) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 6U))));
        tracep->fullBit(oldp+115,(vlTOPp->mkTestbench__DOT__x___05Fh8196));
        tracep->fullBit(oldp+116,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8304) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_8_XOR_adder_1_in2_BI_ETC___05F_d80) 
                                      >> 7U))));
        tracep->fullBit(oldp+117,(vlTOPp->mkTestbench__DOT__x___05Fh8304));
        tracep->fullBit(oldp+118,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                   & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8))));
        tracep->fullBit(oldp+119,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9231) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 1U))));
        tracep->fullBit(oldp+120,(vlTOPp->mkTestbench__DOT__x___05Fh9231));
        tracep->fullBit(oldp+121,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9339) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 2U))));
        tracep->fullBit(oldp+122,(vlTOPp->mkTestbench__DOT__x___05Fh9339));
        tracep->fullBit(oldp+123,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9447) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 3U))));
        tracep->fullBit(oldp+124,(vlTOPp->mkTestbench__DOT__x___05Fh9447));
        tracep->fullBit(oldp+125,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9555) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 4U))));
        tracep->fullBit(oldp+126,(vlTOPp->mkTestbench__DOT__x___05Fh9555));
        tracep->fullBit(oldp+127,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9663) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 5U))));
        tracep->fullBit(oldp+128,(vlTOPp->mkTestbench__DOT__x___05Fh9663));
        tracep->fullBit(oldp+129,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9771) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 6U))));
        tracep->fullBit(oldp+130,(vlTOPp->mkTestbench__DOT__x___05Fh9771));
        tracep->fullBit(oldp+131,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9879) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BITS_7_ETC___05F_d8) 
                                      >> 7U))));
        tracep->fullBit(oldp+132,(vlTOPp->mkTestbench__DOT__x___05Fh9879));
        tracep->fullBit(oldp+133,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                          >> 0x1fU) 
                                         ^ (IData)(
                                                   (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+134,(vlTOPp->CLK));
        tracep->fullBit(oldp+135,(vlTOPp->RST_N));
    }
}
