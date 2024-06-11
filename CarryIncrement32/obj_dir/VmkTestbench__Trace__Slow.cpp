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
        tracep->declBit(c+166,"CLK", false,-1);
        tracep->declBit(c+167,"RST_N", false,-1);
        tracep->declBit(c+166,"mkTestbench CLK", false,-1);
        tracep->declBit(c+167,"mkTestbench RST_N", false,-1);
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
        tracep->declQuad(c+42,"mkTestbench calculated_sum__h11573", false,-1, 32,0);
        tracep->declQuad(c+44,"mkTestbench expected_sum__h11572", false,-1, 32,0);
        tracep->declQuad(c+46,"mkTestbench x__h11750", false,-1, 32,0);
        tracep->declQuad(c+48,"mkTestbench x__h11752", false,-1, 32,0);
        tracep->declQuad(c+50,"mkTestbench y__h11591", false,-1, 32,0);
        tracep->declQuad(c+52,"mkTestbench y__h11753", false,-1, 32,0);
        tracep->declBus(c+54,"mkTestbench IF_adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2__ETC___d98", false,-1, 8,0);
        tracep->declBus(c+55,"mkTestbench IF_adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_ETC___d54", false,-1, 8,0);
        tracep->declBus(c+56,"mkTestbench IF_adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_B_ETC___d10", false,-1, 8,0);
        tracep->declBus(c+57,"mkTestbench IF_adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2__ETC__q3", false,-1, 7,0);
        tracep->declBus(c+58,"mkTestbench IF_adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_ETC__q2", false,-1, 7,0);
        tracep->declBus(c+59,"mkTestbench IF_adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_B_ETC__q1", false,-1, 7,0);
        tracep->declBus(c+60,"mkTestbench adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___d96", false,-1, 7,0);
        tracep->declBus(c+61,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d128", false,-1, 7,0);
        tracep->declBus(c+62,"mkTestbench adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___d52", false,-1, 7,0);
        tracep->declBus(c+63,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d84", false,-1, 7,0);
        tracep->declBus(c+64,"mkTestbench adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___d8", false,-1, 7,0);
        tracep->declBus(c+65,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d40", false,-1, 7,0);
        tracep->declBus(c+66,"mkTestbench adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___d143", false,-1, 7,0);
        tracep->declBus(c+67,"mkTestbench p__h2447", false,-1, 7,0);
        tracep->declBus(c+68,"mkTestbench p__h5177", false,-1, 7,0);
        tracep->declBus(c+69,"mkTestbench p__h7907", false,-1, 7,0);
        tracep->declBus(c+70,"mkTestbench p__h859", false,-1, 7,0);
        tracep->declBus(c+71,"mkTestbench spliced_bits__h490", false,-1, 7,0);
        tracep->declBus(c+72,"mkTestbench spliced_bits__h519", false,-1, 7,0);
        tracep->declBus(c+73,"mkTestbench spliced_bits__h548", false,-1, 7,0);
        tracep->declBus(c+74,"mkTestbench spliced_bits__h577", false,-1, 7,0);
        tracep->declBus(c+75,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d253", false,-1, 5,0);
        tracep->declBus(c+76,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d239", false,-1, 5,0);
        tracep->declBus(c+77,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d225", false,-1, 5,0);
        tracep->declBus(c+78,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d251", false,-1, 1,0);
        tracep->declBus(c+79,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d237", false,-1, 1,0);
        tracep->declBus(c+80,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d223", false,-1, 1,0);
        tracep->declBit(c+81,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d174", false,-1);
        tracep->declBit(c+82,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d175", false,-1);
        tracep->declBit(c+83,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d176", false,-1);
        tracep->declBit(c+84,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d177", false,-1);
        tracep->declBit(c+85,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d178", false,-1);
        tracep->declBit(c+86,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d179", false,-1);
        tracep->declBit(c+87,"mkTestbench adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___d180", false,-1);
        tracep->declBit(c+88,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d187", false,-1);
        tracep->declBit(c+89,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d188", false,-1);
        tracep->declBit(c+90,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d189", false,-1);
        tracep->declBit(c+91,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d190", false,-1);
        tracep->declBit(c+92,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d191", false,-1);
        tracep->declBit(c+93,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d192", false,-1);
        tracep->declBit(c+94,"mkTestbench adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___d193", false,-1);
        tracep->declBit(c+95,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d200", false,-1);
        tracep->declBit(c+96,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d201", false,-1);
        tracep->declBit(c+97,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d202", false,-1);
        tracep->declBit(c+98,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d203", false,-1);
        tracep->declBit(c+99,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d204", false,-1);
        tracep->declBit(c+100,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d205", false,-1);
        tracep->declBit(c+101,"mkTestbench adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___d206", false,-1);
        tracep->declBit(c+102,"mkTestbench carry_in__h2023", false,-1);
        tracep->declBit(c+103,"mkTestbench carry_in__h4860", false,-1);
        tracep->declBit(c+104,"mkTestbench carry_in__h7590", false,-1);
        tracep->declBit(c+105,"mkTestbench count_11_ULT_30___d326", false,-1);
        tracep->declBit(c+106,"mkTestbench sub_result_cout__h2022", false,-1);
        tracep->declBit(c+107,"mkTestbench sub_result_cout__h4859", false,-1);
        tracep->declBit(c+108,"mkTestbench sub_result_cout__h7589", false,-1);
        tracep->declBit(c+109,"mkTestbench x__h1057", false,-1);
        tracep->declBit(c+110,"mkTestbench x__h11405", false,-1);
        tracep->declBit(c+111,"mkTestbench x__h11407", false,-1);
        tracep->declBit(c+112,"mkTestbench x__h1206", false,-1);
        tracep->declBit(c+113,"mkTestbench x__h1208", false,-1);
        tracep->declBit(c+114,"mkTestbench x__h1314", false,-1);
        tracep->declBit(c+115,"mkTestbench x__h1316", false,-1);
        tracep->declBit(c+116,"mkTestbench x__h1422", false,-1);
        tracep->declBit(c+117,"mkTestbench x__h1424", false,-1);
        tracep->declBit(c+118,"mkTestbench x__h1530", false,-1);
        tracep->declBit(c+119,"mkTestbench x__h1532", false,-1);
        tracep->declBit(c+120,"mkTestbench x__h1638", false,-1);
        tracep->declBit(c+121,"mkTestbench x__h1640", false,-1);
        tracep->declBit(c+122,"mkTestbench x__h1746", false,-1);
        tracep->declBit(c+123,"mkTestbench x__h1748", false,-1);
        tracep->declBit(c+124,"mkTestbench x__h1854", false,-1);
        tracep->declBit(c+125,"mkTestbench x__h1856", false,-1);
        tracep->declBit(c+126,"mkTestbench x__h2792", false,-1);
        tracep->declBit(c+127,"mkTestbench x__h2901", false,-1);
        tracep->declBit(c+128,"mkTestbench x__h2903", false,-1);
        tracep->declBit(c+129,"mkTestbench x__h3009", false,-1);
        tracep->declBit(c+130,"mkTestbench x__h3011", false,-1);
        tracep->declBit(c+131,"mkTestbench x__h3117", false,-1);
        tracep->declBit(c+132,"mkTestbench x__h3119", false,-1);
        tracep->declBit(c+133,"mkTestbench x__h3225", false,-1);
        tracep->declBit(c+134,"mkTestbench x__h3227", false,-1);
        tracep->declBit(c+135,"mkTestbench x__h3333", false,-1);
        tracep->declBit(c+136,"mkTestbench x__h3335", false,-1);
        tracep->declBit(c+137,"mkTestbench x__h3441", false,-1);
        tracep->declBit(c+138,"mkTestbench x__h3443", false,-1);
        tracep->declBit(c+139,"mkTestbench x__h5522", false,-1);
        tracep->declBit(c+140,"mkTestbench x__h5631", false,-1);
        tracep->declBit(c+141,"mkTestbench x__h5633", false,-1);
        tracep->declBit(c+142,"mkTestbench x__h5739", false,-1);
        tracep->declBit(c+143,"mkTestbench x__h5741", false,-1);
        tracep->declBit(c+144,"mkTestbench x__h5847", false,-1);
        tracep->declBit(c+145,"mkTestbench x__h5849", false,-1);
        tracep->declBit(c+146,"mkTestbench x__h5955", false,-1);
        tracep->declBit(c+147,"mkTestbench x__h5957", false,-1);
        tracep->declBit(c+148,"mkTestbench x__h6063", false,-1);
        tracep->declBit(c+149,"mkTestbench x__h6065", false,-1);
        tracep->declBit(c+150,"mkTestbench x__h6171", false,-1);
        tracep->declBit(c+151,"mkTestbench x__h6173", false,-1);
        tracep->declBit(c+152,"mkTestbench x__h8252", false,-1);
        tracep->declBit(c+153,"mkTestbench x__h8361", false,-1);
        tracep->declBit(c+154,"mkTestbench x__h8363", false,-1);
        tracep->declBit(c+155,"mkTestbench x__h8469", false,-1);
        tracep->declBit(c+156,"mkTestbench x__h8471", false,-1);
        tracep->declBit(c+157,"mkTestbench x__h8577", false,-1);
        tracep->declBit(c+158,"mkTestbench x__h8579", false,-1);
        tracep->declBit(c+159,"mkTestbench x__h8685", false,-1);
        tracep->declBit(c+160,"mkTestbench x__h8687", false,-1);
        tracep->declBit(c+161,"mkTestbench x__h8793", false,-1);
        tracep->declBit(c+162,"mkTestbench x__h8795", false,-1);
        tracep->declBit(c+163,"mkTestbench x__h8901", false,-1);
        tracep->declBit(c+164,"mkTestbench x__h8903", false,-1);
        tracep->declBit(c+165,"mkTestbench y__h11406", false,-1);
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
                                                      & ((((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                           >> 7U) 
                                                          & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206)) 
                                                         | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8903) 
                                                             & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                                                >> 7U)) 
                                                            | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                                               >> 7U)))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (((0x80000000U 
                                                                    & ((0x80000000U 
                                                                        & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                           << 0x18U)) 
                                                                       ^ 
                                                                       ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206) 
                                                                        << 0x1fU))) 
                                                                   | ((0x40000000U 
                                                                       & ((0xc0000000U 
                                                                           & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                              << 0x18U)) 
                                                                          ^ 
                                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205) 
                                                                           << 0x1eU))) 
                                                                      | ((0x20000000U 
                                                                          & ((0xe0000000U 
                                                                              & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                << 0x18U)) 
                                                                             ^ 
                                                                             ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204) 
                                                                              << 0x1dU))) 
                                                                         | ((0x10000000U 
                                                                             & ((0xf0000000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203) 
                                                                                << 0x1cU))) 
                                                                            | ((0x8000000U 
                                                                                & ((0xf8000000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202) 
                                                                                << 0x1bU))) 
                                                                               | ((0x4000000U 
                                                                                & ((0xfc000000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201) 
                                                                                << 0x1aU))) 
                                                                                | ((0x2000000U 
                                                                                & ((0xfe000000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                << 0x18U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200) 
                                                                                << 0x19U))) 
                                                                                | (((1U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                                                                 ? 1U
                                                                                 : 0U) 
                                                                                << 0x18U)))))))) 
                                                                  | (((0x800000U 
                                                                       & ((0xff800000U 
                                                                           & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                              << 0x10U)) 
                                                                          ^ 
                                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193) 
                                                                           << 0x17U))) 
                                                                      | ((0x400000U 
                                                                          & ((0xffc00000U 
                                                                              & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                             ^ 
                                                                             ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192) 
                                                                              << 0x16U))) 
                                                                         | ((0x200000U 
                                                                             & ((0xffe00000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191) 
                                                                                << 0x15U))) 
                                                                            | ((0x100000U 
                                                                                & ((0xfff00000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190) 
                                                                                << 0x14U))) 
                                                                               | ((0x80000U 
                                                                                & ((0xfff80000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189) 
                                                                                << 0x13U))) 
                                                                                | ((0x40000U 
                                                                                & ((0xfffc0000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188) 
                                                                                << 0x12U))) 
                                                                                | ((0x20000U 
                                                                                & ((0xfffe0000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                << 0x10U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187) 
                                                                                << 0x11U))) 
                                                                                | (((1U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                                                                 ? 1U
                                                                                 : 0U) 
                                                                                << 0x10U)))))))) 
                                                                     | ((0x8000U 
                                                                         & ((0xffff8000U 
                                                                             & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                            ^ 
                                                                            ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180) 
                                                                             << 0xfU))) 
                                                                        | ((0x4000U 
                                                                            & ((0xffffc000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                               ^ 
                                                                               ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179) 
                                                                                << 0xeU))) 
                                                                           | ((0x2000U 
                                                                               & ((0xffffe000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178) 
                                                                                << 0xdU))) 
                                                                              | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                << 8U)) 
                                                                                ^ 
                                                                                ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174) 
                                                                                << 9U))) 
                                                                                | ((((1U 
                                                                                & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                                                ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                                                                 ? 1U
                                                                                 : 0U) 
                                                                                << 8U) 
                                                                                | ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                                                                ^ 
                                                                                (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1856) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1748) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1640) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1532) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1424) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1316) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1208) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin))))))))))))))))))))))),33);
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
        tracep->fullSData(oldp+54,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+55,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52))
                                     ? 2U : 0U)),9);
        tracep->fullSData(oldp+56,(((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8))
                                     ? 2U : 0U)),9);
        tracep->fullCData(oldp+57,(((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                           ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                     ? 1U : 0U)),8);
        tracep->fullCData(oldp+58,(((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                           ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                     ? 1U : 0U)),8);
        tracep->fullCData(oldp+59,(((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                           ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                     ? 1U : 0U)),8);
        tracep->fullCData(oldp+60,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96),8);
        tracep->fullCData(oldp+61,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128),8);
        tracep->fullCData(oldp+62,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52),8);
        tracep->fullCData(oldp+63,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84),8);
        tracep->fullCData(oldp+64,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8),8);
        tracep->fullCData(oldp+65,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40),8);
        tracep->fullCData(oldp+66,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_7_TO_0_38_AND_adder_1_in2_BIT_ETC___05F_d143),8);
        tracep->fullCData(oldp+67,(vlTOPp->mkTestbench__DOT__p___05Fh2447),8);
        tracep->fullCData(oldp+68,(vlTOPp->mkTestbench__DOT__p___05Fh5177),8);
        tracep->fullCData(oldp+69,(vlTOPp->mkTestbench__DOT__p___05Fh7907),8);
        tracep->fullCData(oldp+70,(vlTOPp->mkTestbench__DOT__p___05Fh859),8);
        tracep->fullCData(oldp+71,(((0x80U & ((0xffffff80U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206) 
                                                 << 7U))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205) 
                                                  << 6U))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                            ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204) 
                                               << 5U))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203) 
                                                  << 4U))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202) 
                                                     << 3U))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201) 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200) 
                                                           << 1U))) 
                                                      | ((1U 
                                                          & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                             ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                                          ? 1U
                                                          : 0U))))))))),8);
        tracep->fullCData(oldp+72,(((0x80U & ((0xffffff80U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193) 
                                                 << 7U))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192) 
                                                  << 6U))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                            ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191) 
                                               << 5U))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190) 
                                                  << 4U))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189) 
                                                     << 3U))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188) 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187) 
                                                           << 1U))) 
                                                      | ((1U 
                                                          & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                             ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                                          ? 1U
                                                          : 0U))))))))),8);
        tracep->fullCData(oldp+73,(((0x80U & ((0xffffff80U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180) 
                                                 << 7U))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179) 
                                                  << 6U))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                            ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178) 
                                               << 5U))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177) 
                                                  << 4U))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176) 
                                                     << 3U))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                       ^ 
                                                       ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175) 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                          ^ 
                                                          ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174) 
                                                           << 1U))) 
                                                      | ((1U 
                                                          & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                             ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                                          ? 1U
                                                          : 0U))))))))),8);
        tracep->fullCData(oldp+74,(((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                    ^ (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1856) 
                                        << 7U) | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1748) 
                                                   << 6U) 
                                                  | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1640) 
                                                      << 5U) 
                                                     | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1532) 
                                                         << 4U) 
                                                        | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1424) 
                                                            << 3U) 
                                                           | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1316) 
                                                               << 2U) 
                                                              | (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1208) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->mkTestbench__DOT__adder_1_cin)))))))))),8);
        tracep->fullCData(oldp+75,(((0x20U & ((0xffffffe0U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176) 
                                                  << 3U))) 
                                          | ((4U & 
                                              ((0xfffffffcU 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                               ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175) 
                                                  << 2U))) 
                                             | ((2U 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174) 
                                                     << 1U))) 
                                                | ((1U 
                                                    & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                                       ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                                    ? 1U
                                                    : 0U))))))),6);
        tracep->fullCData(oldp+76,(((0x20U & ((0xffffffe0U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189) 
                                                  << 3U))) 
                                          | ((4U & 
                                              ((0xfffffffcU 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                               ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188) 
                                                  << 2U))) 
                                             | ((2U 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187) 
                                                     << 1U))) 
                                                | ((1U 
                                                    & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                                       ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                                    ? 1U
                                                    : 0U))))))),6);
        tracep->fullCData(oldp+77,(((0x20U & ((0xffffffe0U 
                                               & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                              ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                 ^ 
                                                 ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202) 
                                                  << 3U))) 
                                          | ((4U & 
                                              ((0xfffffffcU 
                                                & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                               ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201) 
                                                  << 2U))) 
                                             | ((2U 
                                                 & ((0xfffffffeU 
                                                     & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                                    ^ 
                                                    ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200) 
                                                     << 1U))) 
                                                | ((1U 
                                                    & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                                       ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                                    ? 1U
                                                    : 0U))))))),6);
        tracep->fullCData(oldp+78,(((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128)) 
                                           ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174) 
                                              << 1U))) 
                                    | ((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d128) 
                                              ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023)))
                                        ? 1U : 0U))),2);
        tracep->fullCData(oldp+79,(((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84)) 
                                           ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187) 
                                              << 1U))) 
                                    | ((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d84) 
                                              ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860)))
                                        ? 1U : 0U))),2);
        tracep->fullCData(oldp+80,(((2U & ((0xfffffffeU 
                                            & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40)) 
                                           ^ ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200) 
                                              << 1U))) 
                                    | ((1U & ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d40) 
                                              ^ (IData)(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590)))
                                        ? 1U : 0U))),2);
        tracep->fullBit(oldp+81,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d174));
        tracep->fullBit(oldp+82,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d175));
        tracep->fullBit(oldp+83,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d176));
        tracep->fullBit(oldp+84,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d177));
        tracep->fullBit(oldp+85,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d178));
        tracep->fullBit(oldp+86,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d179));
        tracep->fullBit(oldp+87,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_XOR_adder_1_in2_BIT_ETC___05F_d180));
        tracep->fullBit(oldp+88,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d187));
        tracep->fullBit(oldp+89,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d188));
        tracep->fullBit(oldp+90,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d189));
        tracep->fullBit(oldp+91,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d190));
        tracep->fullBit(oldp+92,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d191));
        tracep->fullBit(oldp+93,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d192));
        tracep->fullBit(oldp+94,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_XOR_adder_1_in2_BI_ETC___05F_d193));
        tracep->fullBit(oldp+95,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d200));
        tracep->fullBit(oldp+96,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d201));
        tracep->fullBit(oldp+97,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d202));
        tracep->fullBit(oldp+98,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d203));
        tracep->fullBit(oldp+99,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d204));
        tracep->fullBit(oldp+100,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d205));
        tracep->fullBit(oldp+101,(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_XOR_adder_1_in2_BITS_ETC___05F_d206));
        tracep->fullBit(oldp+102,(vlTOPp->mkTestbench__DOT__carry_in___05Fh2023));
        tracep->fullBit(oldp+103,(vlTOPp->mkTestbench__DOT__carry_in___05Fh4860));
        tracep->fullBit(oldp+104,(vlTOPp->mkTestbench__DOT__carry_in___05Fh7590));
        tracep->fullBit(oldp+105,((0x1eU > (IData)(vlTOPp->mkTestbench__DOT__count))));
        tracep->fullBit(oldp+106,((1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3443) 
                                          & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                             >> 7U)) 
                                         | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96) 
                                            >> 7U)))));
        tracep->fullBit(oldp+107,((1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6173) 
                                          & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                             >> 7U)) 
                                         | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52) 
                                            >> 7U)))));
        tracep->fullBit(oldp+108,((1U & (((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8903) 
                                          & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                             >> 7U)) 
                                         | ((IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8) 
                                            >> 7U)))));
        tracep->fullBit(oldp+109,(((IData)(vlTOPp->mkTestbench__DOT__adder_1_cin) 
                                   & (IData)(vlTOPp->mkTestbench__DOT__p___05Fh859))));
        tracep->fullBit(oldp+110,((1U & ((~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                             >> 0x1fU)) 
                                         ^ (vlTOPp->mkTestbench__DOT__adder_1_in2 
                                            >> 0x1fU)))));
        tracep->fullBit(oldp+111,((1U & (~ (vlTOPp->mkTestbench__DOT__adder_1_in1 
                                            >> 0x1fU)))));
        tracep->fullBit(oldp+112,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1208) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 1U))));
        tracep->fullBit(oldp+113,(vlTOPp->mkTestbench__DOT__x___05Fh1208));
        tracep->fullBit(oldp+114,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1316) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 2U))));
        tracep->fullBit(oldp+115,(vlTOPp->mkTestbench__DOT__x___05Fh1316));
        tracep->fullBit(oldp+116,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1424) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 3U))));
        tracep->fullBit(oldp+117,(vlTOPp->mkTestbench__DOT__x___05Fh1424));
        tracep->fullBit(oldp+118,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1532) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 4U))));
        tracep->fullBit(oldp+119,(vlTOPp->mkTestbench__DOT__x___05Fh1532));
        tracep->fullBit(oldp+120,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1640) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 5U))));
        tracep->fullBit(oldp+121,(vlTOPp->mkTestbench__DOT__x___05Fh1640));
        tracep->fullBit(oldp+122,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1748) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 6U))));
        tracep->fullBit(oldp+123,(vlTOPp->mkTestbench__DOT__x___05Fh1748));
        tracep->fullBit(oldp+124,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh1856) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh859) 
                                      >> 7U))));
        tracep->fullBit(oldp+125,(vlTOPp->mkTestbench__DOT__x___05Fh1856));
        tracep->fullBit(oldp+126,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_15_TO_8_3_AND_adder_1_in2_BIT_ETC___05F_d96))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                          >> 1U)))));
        tracep->fullBit(oldp+127,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh2903) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 2U))));
        tracep->fullBit(oldp+128,(vlTOPp->mkTestbench__DOT__x___05Fh2903));
        tracep->fullBit(oldp+129,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3011) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 3U))));
        tracep->fullBit(oldp+130,(vlTOPp->mkTestbench__DOT__x___05Fh3011));
        tracep->fullBit(oldp+131,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3119) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 4U))));
        tracep->fullBit(oldp+132,(vlTOPp->mkTestbench__DOT__x___05Fh3119));
        tracep->fullBit(oldp+133,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3227) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 5U))));
        tracep->fullBit(oldp+134,(vlTOPp->mkTestbench__DOT__x___05Fh3227));
        tracep->fullBit(oldp+135,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3335) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 6U))));
        tracep->fullBit(oldp+136,(vlTOPp->mkTestbench__DOT__x___05Fh3335));
        tracep->fullBit(oldp+137,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh3443) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh2447) 
                                      >> 7U))));
        tracep->fullBit(oldp+138,(vlTOPp->mkTestbench__DOT__x___05Fh3443));
        tracep->fullBit(oldp+139,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_23_TO_16_9_AND_adder_1_in2_BI_ETC___05F_d52))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                          >> 1U)))));
        tracep->fullBit(oldp+140,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5633) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 2U))));
        tracep->fullBit(oldp+141,(vlTOPp->mkTestbench__DOT__x___05Fh5633));
        tracep->fullBit(oldp+142,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5741) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 3U))));
        tracep->fullBit(oldp+143,(vlTOPp->mkTestbench__DOT__x___05Fh5741));
        tracep->fullBit(oldp+144,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5849) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 4U))));
        tracep->fullBit(oldp+145,(vlTOPp->mkTestbench__DOT__x___05Fh5849));
        tracep->fullBit(oldp+146,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh5957) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 5U))));
        tracep->fullBit(oldp+147,(vlTOPp->mkTestbench__DOT__x___05Fh5957));
        tracep->fullBit(oldp+148,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6065) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 6U))));
        tracep->fullBit(oldp+149,(vlTOPp->mkTestbench__DOT__x___05Fh6065));
        tracep->fullBit(oldp+150,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh6173) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh5177) 
                                      >> 7U))));
        tracep->fullBit(oldp+151,(vlTOPp->mkTestbench__DOT__x___05Fh6173));
        tracep->fullBit(oldp+152,((1U & ((((1U & (IData)(vlTOPp->mkTestbench__DOT__adder_1_in1_BITS_31_TO_24_AND_adder_1_in2_BITS_ETC___05F_d8))
                                            ? 2U : 0U) 
                                          >> 1U) & 
                                         ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                          >> 1U)))));
        tracep->fullBit(oldp+153,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8363) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 2U))));
        tracep->fullBit(oldp+154,(vlTOPp->mkTestbench__DOT__x___05Fh8363));
        tracep->fullBit(oldp+155,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8471) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 3U))));
        tracep->fullBit(oldp+156,(vlTOPp->mkTestbench__DOT__x___05Fh8471));
        tracep->fullBit(oldp+157,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8579) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 4U))));
        tracep->fullBit(oldp+158,(vlTOPp->mkTestbench__DOT__x___05Fh8579));
        tracep->fullBit(oldp+159,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8687) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 5U))));
        tracep->fullBit(oldp+160,(vlTOPp->mkTestbench__DOT__x___05Fh8687));
        tracep->fullBit(oldp+161,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8795) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 6U))));
        tracep->fullBit(oldp+162,(vlTOPp->mkTestbench__DOT__x___05Fh8795));
        tracep->fullBit(oldp+163,(((IData)(vlTOPp->mkTestbench__DOT__x___05Fh8903) 
                                   & ((IData)(vlTOPp->mkTestbench__DOT__p___05Fh7907) 
                                      >> 7U))));
        tracep->fullBit(oldp+164,(vlTOPp->mkTestbench__DOT__x___05Fh8903));
        tracep->fullBit(oldp+165,((1U & ((vlTOPp->mkTestbench__DOT__adder_1_in2 
                                          >> 0x1fU) 
                                         ^ (IData)(
                                                   (vlTOPp->mkTestbench__DOT__adder_1_result 
                                                    >> 0x1fU))))));
        tracep->fullBit(oldp+166,(vlTOPp->CLK));
        tracep->fullBit(oldp+167,(vlTOPp->RST_N));
    }
}
