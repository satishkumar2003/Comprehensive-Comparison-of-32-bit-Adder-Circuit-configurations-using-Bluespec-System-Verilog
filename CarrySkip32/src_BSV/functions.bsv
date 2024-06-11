package functions;

import Vector::*;

function Bit#(n) compute(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n),Mul#(l,8,m),Add#(l,1,k),Add#(a__,9,n));

	// Intuition from Bluespec compiler
	// a__ condition states that n must be atleast 9

	// Carry Skip Logic
	// In 4 parts of m/4 bits each
	Bit#(n) result = 0;
	Bit#(k) carry = zeroExtend(cin);
	Integer ll = valueof(l);
	
	Vector#(l,Bit#(9)) block_results = replicate(0); // constrained into blocks of size 8
	for(Integer i=0; i< ll; i = i+1) begin
		block_results[i] = compute_CLA(in1[i*8+7:i*8],in2[i*8+7:i*8],carry[i]);
		Bit#(9) temp = in1[i*8+7:i*8]|in2[i*8+7:i*8];
		carry[i+1] = block_results[i][8]|(&temp)&carry[i];
	end

	for(Integer j=0;j<ll;j = j+1) begin
		result[j*8+8:j*8] = block_results[j];
	end
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


endpackage
	/*
	// compute first 8 bits
	Bit#(9) result_7_0 = compute_CLA_8bit(in1[7:0],in2[7:0],cin);
	Bit#(1) cin_8 = result_7_0[8]|(&(in1[7:0]|in2[7:0]))&cin;
	// cin_upper = cout_lower|(&(in1|in2))&cin_lower
	
	// Bits 8 to 15
	Bit#(9) result_15_8 = compute_CLA_8bit(in1[15:8],in2[15:8],cin_8);
	Bit#(1) cin_16 = result_15_8[8]|(&(in1[15:8]|in2[15:8]))&cin_8;
	
	// Bits 23 to 16
	Bit#(9) result_23_16 = compute_CLA_8bit(in1[23:16],in2[23:16],cin_16);
	Bit#(1) cin_24 = result_23_16[8]|(&(in1[23:16]|in2[23:16]))&cin_16;
	 
	// Bits 31 to 24
	Bit#(9) result_31_24 = compute_CLA_8bit(in1[31:24],in2[31:24],cin_24);
	Bit#(1) cout = result_31_24[8]|(&(in1[31:24]|in2[31:24]))&cin_24;
	
	return {cout, result_31_24[7:0], result_23_16[7:0], result_15_8[7:0], result_7_0[7:0]};
	*/
