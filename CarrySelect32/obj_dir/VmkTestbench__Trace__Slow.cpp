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
        tracep->declBit(c+194,"CLK", false,-1);
        tracep->declBit(c+195,"RST_N", false,-1);
        tracep->declBit(c+194,"mkTestbench CLK", false,-1);
        tracep->declBit(c+195,"mkTestbench RST_N", false,-1);
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
        tracep->declQuad(c+42,"mkTestbench calculated_sum__h11846", false,-1, 32,0);
        tracep->declQuad(c+44,"mkTestbench expected_sum__h11845", false,-1, 32,0);
        tracep->declQuad(c+46,"mkTestbench x__h12054", false,-1, 32,0);
        tracep->declQuad(c+48,"mkTestbench x__h12056", false,-1, 32,0);
        tracep->declQuad(c+50,"mkTestbench y__h11864", false,-1, 32,0);
        tracep->declQuad(c+52,"mkTestbench y__h12057", false,-1, 32,0);
        tracep->declBus(c+54,"mkTestbench IF_adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2__ETC___d97", false,-1, 8,0);
        tracep->declBus(c+55,"mkTestbench IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2__ETC___d67", false,-1, 8,0);
        tracep->declBus(c+56,"mkTestbench IF_adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in_ETC___d151", false,-1, 8,0);
        tracep->declBus(c+57,"mkTestbench IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___d121", false,-1, 8,0);
        tracep->declBus(c+58,"mkTestbench IF_adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in_ETC___d205", false,-1, 8,0);
        tracep->declBus(c+59,"mkTestbench IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___d175", false,-1, 8,0);
        tracep->declBus(c+60,"mkTestbench IF_adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BIT_ETC___d43", false,-1, 8,0);
        tracep->declBus(c+61,"mkTestbench IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___d13", false,-1, 8,0);
        tracep->declBus(c+62,"mkTestbench adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___d64", false,-1, 7,0);
        tracep->declBus(c+63,"mkTestbench adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___d118", false,-1, 7,0);
        tracep->declBus(c+64,"mkTestbench adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___d172", false,-1, 7,0);
        tracep->declBus(c+65,"mkTestbench adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___d10", false,-1, 7,0);
        tracep->declBus(c+66,"mkTestbench p__h2106", false,-1, 7,0);
        tracep->declBus(c+67,"mkTestbench p__h4513", false,-1, 7,0);
        tracep->declBus(c+68,"mkTestbench p__h6924", false,-1, 7,0);
        tracep->declBus(c+69,"mkTestbench p__h9335", false,-1, 7,0);
        tracep->declBus(c+70,"mkTestbench spliced_bits__h556", false,-1, 7,0);
        tracep->declBus(c+71,"mkTestbench spliced_bits__h590", false,-1, 7,0);
        tracep->declBus(c+72,"mkTestbench spliced_bits__h624", false,-1, 7,0);
        tracep->declBus(c+73,"mkTestbench spliced_bits__h658", false,-1, 7,0);
        tracep->declBus(c+74,"mkTestbench sum_val__h2110", false,-1, 7,0);
        tracep->declBus(c+75,"mkTestbench sum_val__h3380", false,-1, 7,0);
        tracep->declBus(c+76,"mkTestbench sum_val__h4517", false,-1, 7,0);
        tracep->declBus(c+77,"mkTestbench sum_val__h5791", false,-1, 7,0);
        tracep->declBus(c+78,"mkTestbench sum_val__h6928", false,-1, 7,0);
        tracep->declBus(c+79,"mkTestbench sum_val__h8202", false,-1, 7,0);
        tracep->declBus(c+80,"mkTestbench sum_val__h877", false,-1, 7,0);
        tracep->declBus(c+81,"mkTestbench sum_val__h9339", false,-1, 7,0);
        tracep->declBit(c+82,"mkTestbench IF_IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BI_ETC___d221", false,-1);
        tracep->declBit(c+83,"mkTestbench IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS__ETC___d167", false,-1);
        tracep->declBit(c+84,"mkTestbench IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___d113", false,-1);
        tracep->declBit(c+85,"mkTestbench IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___d59", false,-1);
        tracep->declBit(c+86,"mkTestbench count_17_ULT_30___d332", false,-1);
        tracep->declBit(c+87,"mkTestbench x__h10005", false,-1);
        tracep->declBit(c+88,"mkTestbench x__h10007", false,-1);
        tracep->declBit(c+89,"mkTestbench x__h10113", false,-1);
        tracep->declBit(c+90,"mkTestbench x__h10115", false,-1);
        tracep->declBit(c+91,"mkTestbench x__h10221", false,-1);
        tracep->declBit(c+92,"mkTestbench x__h10223", false,-1);
        tracep->declBit(c+93,"mkTestbench x__h10329", false,-1);
        tracep->declBit(c+94,"mkTestbench x__h10331", false,-1);
        tracep->declBit(c+95,"mkTestbench x__h11678", false,-1);
        tracep->declBit(c+96,"mkTestbench x__h11680", false,-1);
        tracep->declBit(c+97,"mkTestbench x__h1220", false,-1);
        tracep->declBit(c+98,"mkTestbench x__h1329", false,-1);
        tracep->declBit(c+99,"mkTestbench x__h1331", false,-1);
        tracep->declBit(c+100,"mkTestbench x__h1437", false,-1);
        tracep->declBit(c+101,"mkTestbench x__h1439", false,-1);
        tracep->declBit(c+102,"mkTestbench x__h1545", false,-1);
        tracep->declBit(c+103,"mkTestbench x__h1547", false,-1);
        tracep->declBit(c+104,"mkTestbench x__h1653", false,-1);
        tracep->declBit(c+105,"mkTestbench x__h1655", false,-1);
        tracep->declBit(c+106,"mkTestbench x__h1761", false,-1);
        tracep->declBit(c+107,"mkTestbench x__h1763", false,-1);
        tracep->declBit(c+108,"mkTestbench x__h1869", false,-1);
        tracep->declBit(c+109,"mkTestbench x__h1871", false,-1);
        tracep->declBit(c+110,"mkTestbench x__h2451", false,-1);
        tracep->declBit(c+111,"mkTestbench x__h2560", false,-1);
        tracep->declBit(c+112,"mkTestbench x__h2562", false,-1);
        tracep->declBit(c+113,"mkTestbench x__h2668", false,-1);
        tracep->declBit(c+114,"mkTestbench x__h2670", false,-1);
        tracep->declBit(c+115,"mkTestbench x__h2776", false,-1);
        tracep->declBit(c+116,"mkTestbench x__h2778", false,-1);
        tracep->declBit(c+117,"mkTestbench x__h2884", false,-1);
        tracep->declBit(c+118,"mkTestbench x__h2886", false,-1);
        tracep->declBit(c+119,"mkTestbench x__h2992", false,-1);
        tracep->declBit(c+120,"mkTestbench x__h2994", false,-1);
        tracep->declBit(c+121,"mkTestbench x__h3100", false,-1);
        tracep->declBit(c+122,"mkTestbench x__h3102", false,-1);
        tracep->declBit(c+123,"mkTestbench x__h3721", false,-1);
        tracep->declBit(c+124,"mkTestbench x__h3830", false,-1);
        tracep->declBit(c+125,"mkTestbench x__h3832", false,-1);
        tracep->declBit(c+126,"mkTestbench x__h3938", false,-1);
        tracep->declBit(c+127,"mkTestbench x__h3940", false,-1);
        tracep->declBit(c+128,"mkTestbench x__h4046", false,-1);
        tracep->declBit(c+129,"mkTestbench x__h4048", false,-1);
        tracep->declBit(c+130,"mkTestbench x__h4154", false,-1);
        tracep->declBit(c+131,"mkTestbench x__h4156", false,-1);
        tracep->declBit(c+132,"mkTestbench x__h4262", false,-1);
        tracep->declBit(c+133,"mkTestbench x__h4264", false,-1);
        tracep->declBit(c+134,"mkTestbench x__h4370", false,-1);
        tracep->declBit(c+135,"mkTestbench x__h4372", false,-1);
        tracep->declBit(c+136,"mkTestbench x__h4858", false,-1);
        tracep->declBit(c+137,"mkTestbench x__h4967", false,-1);
        tracep->declBit(c+138,"mkTestbench x__h4969", false,-1);
        tracep->declBit(c+139,"mkTestbench x__h5075", false,-1);
        tracep->declBit(c+140,"mkTestbench x__h5077", false,-1);
        tracep->declBit(c+141,"mkTestbench x__h5183", false,-1);
        tracep->declBit(c+142,"mkTestbench x__h5185", false,-1);
        tracep->declBit(c+143,"mkTestbench x__h5291", false,-1);
        tracep->declBit(c+144,"mkTestbench x__h5293", false,-1);
        tracep->declBit(c+145,"mkTestbench x__h5399", false,-1);
        tracep->declBit(c+146,"mkTestbench x__h5401", false,-1);
        tracep->declBit(c+147,"mkTestbench x__h5507", false,-1);
        tracep->declBit(c+148,"mkTestbench x__h5509", false,-1);
        tracep->declBit(c+149,"mkTestbench x__h6132", false,-1);
        tracep->declBit(c+150,"mkTestbench x__h6241", false,-1);
        tracep->declBit(c+151,"mkTestbench x__h6243", false,-1);
        tracep->declBit(c+152,"mkTestbench x__h6349", false,-1);
        tracep->declBit(c+153,"mkTestbench x__h6351", false,-1);
        tracep->declBit(c+154,"mkTestbench x__h6457", false,-1);
        tracep->declBit(c+155,"mkTestbench x__h6459", false,-1);
        tracep->declBit(c+156,"mkTestbench x__h6565", false,-1);
        tracep->declBit(c+157,"mkTestbench x__h6567", false,-1);
        tracep->declBit(c+158,"mkTestbench x__h6673", false,-1);
        tracep->declBit(c+159,"mkTestbench x__h6675", false,-1);
        tracep->declBit(c+160,"mkTestbench x__h6781", false,-1);
        tracep->declBit(c+161,"mkTestbench x__h6783", false,-1);
        tracep->declBit(c+162,"mkTestbench x__h7269", false,-1);
        tracep->declBit(c+163,"mkTestbench x__h7378", false,-1);
        tracep->declBit(c+164,"mkTestbench x__h7380", false,-1);
        tracep->declBit(c+165,"mkTestbench x__h7486", false,-1);
        tracep->declBit(c+166,"mkTestbench x__h7488", false,-1);
        tracep->declBit(c+167,"mkTestbench x__h7594", false,-1);
        tracep->declBit(c+168,"mkTestbench x__h7596", false,-1);
        tracep->declBit(c+169,"mkTestbench x__h7702", false,-1);
        tracep->declBit(c+170,"mkTestbench x__h7704", false,-1);
        tracep->declBit(c+171,"mkTestbench x__h7810", false,-1);
        tracep->declBit(c+172,"mkTestbench x__h7812", false,-1);
        tracep->declBit(c+173,"mkTestbench x__h7918", false,-1);
        tracep->declBit(c+174,"mkTestbench x__h7920", false,-1);
        tracep->declBit(c+175,"mkTestbench x__h8543", false,-1);
        tracep->declBit(c+176,"mkTestbench x__h8652", false,-1);
        tracep->declBit(c+177,"mkTestbench x__h8654", false,-1);
        tracep->declBit(c+178,"mkTestbench x__h8760", false,-1);
        tracep->declBit(c+179,"mkTestbench x__h8762", false,-1);
        tracep->declBit(c+180,"mkTestbench x__h8868", false,-1);
        tracep->declBit(c+181,"mkTestbench x__h8870", false,-1);
        tracep->declBit(c+182,"mkTestbench x__h8976", false,-1);
        tracep->declBit(c+183,"mkTestbench x__h8978", false,-1);
        tracep->declBit(c+184,"mkTestbench x__h9084", false,-1);
        tracep->declBit(c+185,"mkTestbench x__h9086", false,-1);
        tracep->declBit(c+186,"mkTestbench x__h9192", false,-1);
        tracep->declBit(c+187,"mkTestbench x__h9194", false,-1);
        tracep->declBit(c+188,"mkTestbench x__h9680", false,-1);
        tracep->declBit(c+189,"mkTestbench x__h9789", false,-1);
        tracep->declBit(c+190,"mkTestbench x__h9791", false,-1);
        tracep->declBit(c+191,"mkTestbench x__h9897", false,-1);
        tracep->declBit(c+192,"mkTestbench x__h9899", false,-1);
        tracep->declBit(c+193,"mkTestbench y__h11679", false,-1);
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
                                     : 0xafd7U)),32);
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
                                     : 0xc9b1U)),32);
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
        tracep->fullSData(oldp+54,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+55,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67),9);
        tracep->fullSData(oldp+56,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+57,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121),9);
        tracep->fullSData(oldp+58,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+59,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175),9);
        tracep->fullSData(oldp+60,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+61,(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13),9);
        tracep->fullCData(oldp+62,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64),8);
        tracep->fullCData(oldp+63,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118),8);
        tracep->fullCData(oldp+64,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172),8);
        tracep->fullCData(oldp+65,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10),8);
        tracep->fullCData(oldp+66,(vlTOPp->mkTestbench__DOT__p___05Fh2106),8);
        tracep->fullCData(oldp+67,(vlTOPp->mkTestbench__DOT__p___05Fh4513),8);
        tracep->fullCData(oldp+68,(vlTOPp->mkTestbench__DOT__p___05Fh6924),8);
        tracep->fullCData(oldp+69,(vlTOPp->mkTestbench__DOT__p___05Fh9335),8);
        tracep->fullCData(oldp+70,(((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
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
        tracep->fullCData(oldp+71,(((IData)(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113)
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
        tracep->fullCData(oldp+72,(((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59)
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
        tracep->fullCData(oldp+73,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)
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
        tracep->fullCData(oldp+74,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
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
        tracep->fullCData(oldp+75,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
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
        tracep->fullCData(oldp+76,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
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
        tracep->fullCData(oldp+77,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
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
        tracep->fullCData(oldp+78,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
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
        tracep->fullCData(oldp+79,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
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
        tracep->fullCData(oldp+80,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
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
        tracep->fullCData(oldp+81,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
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
        tracep->fullBit(oldp+82,((1U & ((IData)(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167)
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
        tracep->fullBit(oldp+83,(vlTOPp->mkTestbench__DOT__IF_IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS___05FETC___05F_d167));
        tracep->fullBit(oldp+84,(vlTOPp->mkTestbench__DOT__IF_IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_T_ETC___05F_d113));
        tracep->fullBit(oldp+85,(vlTOPp->mkTestbench__DOT__IF_adder_1_cin_THEN_IF_adder_1_in1_BITS_7_TO_0_ETC___05F_d59));
        tracep->fullBit(oldp+86,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
        tracep->fullBit(oldp+87,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10007) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                     >> 4U))));
        tracep->fullBit(oldp+88,(vlTOPp->mkTestbench__DOT__x___05Fh10007));
        tracep->fullBit(oldp+89,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10115) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                     >> 5U))));
        tracep->fullBit(oldp+90,(vlTOPp->mkTestbench__DOT__x___05Fh10115));
        tracep->fullBit(oldp+91,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10223) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                     >> 6U))));
        tracep->fullBit(oldp+92,(vlTOPp->mkTestbench__DOT__x___05Fh10223));
        tracep->fullBit(oldp+93,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh10331) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                     >> 7U))));
        tracep->fullBit(oldp+94,(vlTOPp->mkTestbench__DOT__x___05Fh10331));
        tracep->fullBit(oldp+95,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                            >> 0x1fU)) 
                                        ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                           >> 0x1fU)))));
        tracep->fullBit(oldp+96,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                           >> 0x1fU)))));
        tracep->fullBit(oldp+97,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_7_TO_0_XOR_adder_1_in2_BIT_ETC___05F_d13) 
                                         >> 1U) & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                                   >> 1U)))));
        tracep->fullBit(oldp+98,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1331) 
                                  & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                     >> 2U))));
        tracep->fullBit(oldp+99,(vlTOPp->mkTestbench__DOT__x___05Fh1331));
        tracep->fullBit(oldp+100,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1439) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 3U))));
        tracep->fullBit(oldp+101,(vlTOPp->mkTestbench__DOT__x___05Fh1439));
        tracep->fullBit(oldp+102,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1547) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 4U))));
        tracep->fullBit(oldp+103,(vlTOPp->mkTestbench__DOT__x___05Fh1547));
        tracep->fullBit(oldp+104,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1655) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 5U))));
        tracep->fullBit(oldp+105,(vlTOPp->mkTestbench__DOT__x___05Fh1655));
        tracep->fullBit(oldp+106,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1763) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 6U))));
        tracep->fullBit(oldp+107,(vlTOPp->mkTestbench__DOT__x___05Fh1763));
        tracep->fullBit(oldp+108,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1871) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 7U))));
        tracep->fullBit(oldp+109,(vlTOPp->mkTestbench__DOT__x___05Fh1871));
        tracep->fullBit(oldp+110,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_AND_adder_1_in2_BITS_7_ETC___05F_d10))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                          >> 1U)))));
        tracep->fullBit(oldp+111,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2562) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 2U))));
        tracep->fullBit(oldp+112,(vlTOPp->mkTestbench__DOT__x___05Fh2562));
        tracep->fullBit(oldp+113,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2670) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 3U))));
        tracep->fullBit(oldp+114,(vlTOPp->mkTestbench__DOT__x___05Fh2670));
        tracep->fullBit(oldp+115,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2778) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 4U))));
        tracep->fullBit(oldp+116,(vlTOPp->mkTestbench__DOT__x___05Fh2778));
        tracep->fullBit(oldp+117,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2886) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 5U))));
        tracep->fullBit(oldp+118,(vlTOPp->mkTestbench__DOT__x___05Fh2886));
        tracep->fullBit(oldp+119,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2994) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 6U))));
        tracep->fullBit(oldp+120,(vlTOPp->mkTestbench__DOT__x___05Fh2994));
        tracep->fullBit(oldp+121,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3102) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2106) 
                                      >> 7U))));
        tracep->fullBit(oldp+122,(vlTOPp->mkTestbench__DOT__x___05Fh3102));
        tracep->fullBit(oldp+123,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_15_TO_8_0_XOR_adder_1_in2___05FETC___05F_d67) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                          >> 1U)))));
        tracep->fullBit(oldp+124,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3832) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 2U))));
        tracep->fullBit(oldp+125,(vlTOPp->mkTestbench__DOT__x___05Fh3832));
        tracep->fullBit(oldp+126,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3940) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 3U))));
        tracep->fullBit(oldp+127,(vlTOPp->mkTestbench__DOT__x___05Fh3940));
        tracep->fullBit(oldp+128,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4048) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 4U))));
        tracep->fullBit(oldp+129,(vlTOPp->mkTestbench__DOT__x___05Fh4048));
        tracep->fullBit(oldp+130,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4156) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 5U))));
        tracep->fullBit(oldp+131,(vlTOPp->mkTestbench__DOT__x___05Fh4156));
        tracep->fullBit(oldp+132,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4264) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 6U))));
        tracep->fullBit(oldp+133,(vlTOPp->mkTestbench__DOT__x___05Fh4264));
        tracep->fullBit(oldp+134,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4372) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 7U))));
        tracep->fullBit(oldp+135,(vlTOPp->mkTestbench__DOT__x___05Fh4372));
        tracep->fullBit(oldp+136,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_0_AND_adder_1_in2_BIT_ETC___05F_d64))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                          >> 1U)))));
        tracep->fullBit(oldp+137,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh4969) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 2U))));
        tracep->fullBit(oldp+138,(vlTOPp->mkTestbench__DOT__x___05Fh4969));
        tracep->fullBit(oldp+139,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5077) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 3U))));
        tracep->fullBit(oldp+140,(vlTOPp->mkTestbench__DOT__x___05Fh5077));
        tracep->fullBit(oldp+141,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5185) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 4U))));
        tracep->fullBit(oldp+142,(vlTOPp->mkTestbench__DOT__x___05Fh5185));
        tracep->fullBit(oldp+143,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5293) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 5U))));
        tracep->fullBit(oldp+144,(vlTOPp->mkTestbench__DOT__x___05Fh5293));
        tracep->fullBit(oldp+145,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5401) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 6U))));
        tracep->fullBit(oldp+146,(vlTOPp->mkTestbench__DOT__x___05Fh5401));
        tracep->fullBit(oldp+147,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5509) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh4513) 
                                      >> 7U))));
        tracep->fullBit(oldp+148,(vlTOPp->mkTestbench__DOT__x___05Fh5509));
        tracep->fullBit(oldp+149,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_23_TO_16_14_XOR_adder_1_in_ETC___05F_d121) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                          >> 1U)))));
        tracep->fullBit(oldp+150,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6243) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 2U))));
        tracep->fullBit(oldp+151,(vlTOPp->mkTestbench__DOT__x___05Fh6243));
        tracep->fullBit(oldp+152,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6351) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 3U))));
        tracep->fullBit(oldp+153,(vlTOPp->mkTestbench__DOT__x___05Fh6351));
        tracep->fullBit(oldp+154,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6459) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 4U))));
        tracep->fullBit(oldp+155,(vlTOPp->mkTestbench__DOT__x___05Fh6459));
        tracep->fullBit(oldp+156,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6567) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 5U))));
        tracep->fullBit(oldp+157,(vlTOPp->mkTestbench__DOT__x___05Fh6567));
        tracep->fullBit(oldp+158,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6675) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 6U))));
        tracep->fullBit(oldp+159,(vlTOPp->mkTestbench__DOT__x___05Fh6675));
        tracep->fullBit(oldp+160,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6783) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 7U))));
        tracep->fullBit(oldp+161,(vlTOPp->mkTestbench__DOT__x___05Fh6783));
        tracep->fullBit(oldp+162,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_14_AND_adder_1_in2_B_ETC___05F_d118))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                          >> 1U)))));
        tracep->fullBit(oldp+163,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7380) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 2U))));
        tracep->fullBit(oldp+164,(vlTOPp->mkTestbench__DOT__x___05Fh7380));
        tracep->fullBit(oldp+165,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7488) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 3U))));
        tracep->fullBit(oldp+166,(vlTOPp->mkTestbench__DOT__x___05Fh7488));
        tracep->fullBit(oldp+167,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7596) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 4U))));
        tracep->fullBit(oldp+168,(vlTOPp->mkTestbench__DOT__x___05Fh7596));
        tracep->fullBit(oldp+169,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7704) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 5U))));
        tracep->fullBit(oldp+170,(vlTOPp->mkTestbench__DOT__x___05Fh7704));
        tracep->fullBit(oldp+171,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7812) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 6U))));
        tracep->fullBit(oldp+172,(vlTOPp->mkTestbench__DOT__x___05Fh7812));
        tracep->fullBit(oldp+173,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh7920) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh6924) 
                                      >> 7U))));
        tracep->fullBit(oldp+174,(vlTOPp->mkTestbench__DOT__x___05Fh7920));
        tracep->fullBit(oldp+175,((1U & (((IData)(vlTOPp->mkTestbench__DOT__IF_adder_1_in1_BITS_31_TO_24_68_XOR_adder_1_in_ETC___05F_d175) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                          >> 1U)))));
        tracep->fullBit(oldp+176,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8654) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 2U))));
        tracep->fullBit(oldp+177,(vlTOPp->mkTestbench__DOT__x___05Fh8654));
        tracep->fullBit(oldp+178,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8762) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 3U))));
        tracep->fullBit(oldp+179,(vlTOPp->mkTestbench__DOT__x___05Fh8762));
        tracep->fullBit(oldp+180,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8870) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 4U))));
        tracep->fullBit(oldp+181,(vlTOPp->mkTestbench__DOT__x___05Fh8870));
        tracep->fullBit(oldp+182,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8978) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 5U))));
        tracep->fullBit(oldp+183,(vlTOPp->mkTestbench__DOT__x___05Fh8978));
        tracep->fullBit(oldp+184,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9086) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 6U))));
        tracep->fullBit(oldp+185,(vlTOPp->mkTestbench__DOT__x___05Fh9086));
        tracep->fullBit(oldp+186,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9194) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 7U))));
        tracep->fullBit(oldp+187,(vlTOPp->mkTestbench__DOT__x___05Fh9194));
        tracep->fullBit(oldp+188,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_68_AND_adder_1_in2_B_ETC___05F_d172))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                          >> 1U)))));
        tracep->fullBit(oldp+189,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9791) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 2U))));
        tracep->fullBit(oldp+190,(vlTOPp->mkTestbench__DOT__x___05Fh9791));
        tracep->fullBit(oldp+191,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh9899) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh9335) 
                                      >> 3U))));
        tracep->fullBit(oldp+192,(vlTOPp->mkTestbench__DOT__x___05Fh9899));
        tracep->fullBit(oldp+193,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                          >> 0x1fU) 
                                         ^ (IData)(
                                                   (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+194,(vlTOPp->CLK));
        tracep->fullBit(oldp+195,(vlTOPp->RST_N));
    }
}
