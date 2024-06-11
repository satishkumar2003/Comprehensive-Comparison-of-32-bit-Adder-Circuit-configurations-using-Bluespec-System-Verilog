package functions;

import Vector::*;

function Bit#(n) compute(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n), Mul#(l,8,m),Add#(k,1,l),Add#(a__,8,n));

	// Intuition from Bluespec compiler
	// From the final result updates, it mandates that n is atleast 8 hence the a__ proviso
	
	Bit#(n) result = 0;
	Integer ll = valueof(l);
	Vector#(l,Bit#(9)) sub_results = replicate(0);
	Vector#(l,Bit#(9)) ciu_results = replicate(0);
		
	sub_results[0] = compute_CLA(in1[7:0],in2[7:0],cin); // initial 8-bit that doesnt undergo carry incrementing
	ciu_results[0] = compute_CLA(in1[7:0],in2[7:0],cin); // this is necessary so that the first iteration of the below loop is flawless
	for(Integer i=1; i<ll; i = i+1) begin
		sub_results[i] = compute_CLA(in1[i*8+7:i*8],in2[i*8+7:i*8],0);
		// update current sub_result with current cout and previous cout ( acting as cin for the ripple updater )
		ciu_results[i] = carry_increment_update(sub_results[i][7:0],sub_results[i][8],ciu_results[i-1][8]);
	end

	for(Integer j=0; j<ll; j = j+1) begin
		result[j*8+7:j*8] = ciu_results[j][7:0];
	end
	result[valueof(n)-1] = ciu_results[ll-1][8]; // set last carry out from ciu_results
	
	return result;
endfunction 


function Bit#(n) carry_increment_update(Bit#(m) sub_result,Bit#(1) sub_result_cout, Bit#(1) carry_in) provisos(Add#(m,1,n));
	Bit#(m) updated_sub_result = 0;
	Bit#(n) int_carry = zeroExtend(carry_in);
	for (Integer i=0;i<valueof(m);i=i+1) begin
			updated_sub_result[i] = sub_result[i]^int_carry[i];
			int_carry[i+1] = sub_result[i]&int_carry[i];
	end	
	return {(int_carry[valueof(m)]|sub_result_cout),updated_sub_result};
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
	Bit#(9) result_7_0 = compute_CLA_8bit(in1[7:0],in2[7:0],cin);
	Bit#(9) result_15_8 = compute_CLA_8bit(in1[15:8],in2[15:8],0); // carries are initially given 0 and then carry_incremented
	Bit#(9) result_23_16 = compute_CLA_8bit(in1[23:16],in2[23:16],0);
	Bit#(9) result_31_24 = compute_CLA_8bit(in1[31:24],in2[31:24],0);

	Bit#(33) result = 0;
	
	Bit#(9) ciu_sum_1 = carry_increment_update(result_15_8[7:0],result_15_8[8],result_7_0[8]);
	Bit#(9) ciu_sum_2 = carry_increment_update(result_23_16[7:0],result_23_16[8],ciu_sum_1[8]);
	Bit#(9) ciu_sum_3 = carry_increment_update(result_31_24[7:0],result_31_24[8],ciu_sum_2[8]);
	
	return {ciu_sum_3[8],ciu_sum_3[7:0],ciu_sum_2[7:0],ciu_sum_1[7:0],result_7_0[7:0]};
	*/
