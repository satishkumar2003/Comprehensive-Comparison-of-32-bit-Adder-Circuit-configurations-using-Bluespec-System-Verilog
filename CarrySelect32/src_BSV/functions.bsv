package functions;

import Vector::*;

function Bit#(n) compute(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n),Mul#(l,8,m),Add#(l,1,k),Add#(a__,8,n));
	
    Bit#(n) result = 0;
    Bit#(k) carry = zeroExtend(cin);
    Integer ll = valueof(l);
    
    Vector#(l,Bit#(9)) block_results_0 = replicate(0);
    Vector#(l,Bit#(9)) block_results_1 = replicate(0);
    
    Bit#(9) selected_sub_sum = 0;
    for(Integer i=0;i<ll;i=i+1) begin
    	block_results_0[i] = compute_CLA(in1[i*8+7:i*8],in2[i*8+7:i*8],0);
    	block_results_1[i] = compute_CLA(in1[i*8+7:i*8],in2[i*8+7:i*8],1);
    	selected_sub_sum = mux_2_1_nbit(block_results_1[i],block_results_0[i],carry[i]);
		result[i*8+7:i*8] = selected_sub_sum[7:0];
    	carry[i+1] = selected_sub_sum[8];
    end
    
 	result[valueof(n)-1] = selected_sub_sum[8];
    
    return result;
    
endfunction 

function Bit#(n) compute_CLA(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n));

    Bit#(m) p = in1^in2;
    Bit#(m) g = in1&in2;
    
    Bit#(n) carry = zeroExtend(cin);
    for (Integer i = 1; i <= valueof(m); i = i + 1) 
    	carry[i] = (carry[i-1] & p[i-1]) | g[i-1];

	
    Bit#(m) sum_val = p^carry[valueof(m)-1:0];
    return {carry[valueof(m)],sum_val};
endfunction 


function Bit#(n) mux_2_1_nbit(Bit#(n) in1, Bit#(n) in2, Bit#(1) select);
	if (select==1) return in1;
	else return in2;
endfunction


endpackage


	/*
	// [7:0]
	Bit#(9) result_7_0_c0 = compute_CLA_8bit(in1[7:0],in2[7:0],0);
	Bit#(9) result_7_0_c1 = compute_CLA_8bit(in1[7:0],in2[7:0],1);
	Bit#(9) result_7_0 = mux_2_1_nbit(result_7_0_c1, result_7_0_c0, cin);
	Bit#(1) c_8 = result_7_0[8];
	
	
	// [15:8]
	Bit#(9) result_15_8_c0 = compute_CLA_8bit(in1[15:8],in2[15:8],0);
	Bit#(9) result_15_8_c1 = compute_CLA_8bit(in1[15:8],in2[15:8],1);
	Bit#(9) result_15_8 = mux_2_1_nbit(result_15_8_c1, result_15_8_c0, c_8);
	Bit#(1) c_16 = result_15_8[8];
	
	
	// [23:16]
	Bit#(9) result_23_16_c0 = compute_CLA_8bit(in1[23:16],in2[23:16],0);
	Bit#(9) result_23_16_c1 = compute_CLA_8bit(in1[23:16],in2[23:16],1);
	Bit#(9) result_23_16 = mux_2_1_nbit(result_23_16_c1, result_23_16_c0,c_16);
	Bit#(1) c_24 = result_23_16[8];
	
	
	// [31:24]
	Bit#(9) result_31_24_c0 = compute_CLA_8bit(in1[31:24],in2[31:24],0);
	Bit#(9) result_31_24_c1 = compute_CLA_8bit(in1[31:24],in2[31:24],1);
	Bit#(9) result_31_24 = mux_2_1_nbit(result_31_24_c1, result_31_24_c0, c_24);
	Bit#(1) cout = result_31_24[8];
	
	return {cout, result_31_24[7:0], result_23_16[7:0], result_15_8[7:0], result_7_0[7:0]};
    */
