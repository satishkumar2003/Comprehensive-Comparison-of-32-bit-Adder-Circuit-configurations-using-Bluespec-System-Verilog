package functions;

typedef Bit#(32) Word;

// PARAMETERIZE LATER

function Bit#(33) compute(Word in1, Word in2, Bit#(1) cin);

	Bit#(9) result_7_0 = compute_CLA_8bit(in1[7:0],in2[7:0],cin);
	Bit#(9) result_15_8 = compute_CLA_8bit(in1[15:8],in2[15:8],0); // carries are initially given 0 and then carry_incremented
	Bit#(9) result_23_16 = compute_CLA_8bit(in1[23:16],in2[23:16],0);
	Bit#(9) result_31_24 = compute_CLA_8bit(in1[31:24],in2[31:24],0);

	Bit#(33) result = 0;
	
	Bit#(9) ciu_sum_1 = carry_increment_update(result_15_8[7:0],result_15_8[8],result_7_0[8]);
	Bit#(9) ciu_sum_2 = carry_increment_update(result_23_16[7:0],result_23_16[8],ciu_sum_1[8]);
	Bit#(9) ciu_sum_3 = carry_increment_update(result_31_24[7:0],result_31_24[8],ciu_sum_2[8]);
	
	return {ciu_sum_3[8],ciu_sum_3[7:0],ciu_sum_2[7:0],ciu_sum_1[7:0],result_7_0[7:0]};
	
endfunction 


function Bit#(9) carry_increment_update(Bit#(8) sub_result,Bit#(1) sub_result_cout, Bit#(1) carry_in);

	Bit#(8) updated_sub_result = 0;
	Bit#(9) int_carry = zeroExtend(carry_in);
	
	for (int i=0;i<8;i=i+1) begin
			updated_sub_result[i] = sub_result[i]^int_carry[i];
			int_carry[i+1] = sub_result[i]&int_carry[i];
	end	
	
	return {(int_carry[8]|sub_result_cout),updated_sub_result};
	
endfunction


function Bit#(9) compute_CLA_8bit(Bit#(8) in1, Bit#(8) in2, Bit#(1) cin); 

    Bit#(8) p = in1^in2; // carry propagate nec
    Bit#(8) g = in1&in2; // carry generate nec
    
    Bit#(9) carry = zeroExtend(cin);
    
    // is this static elaboration correct?
    for (int i = 1; i <= 8; i = i + 1) 
    	carry[i] = (carry[i-1] & p[i-1]) | g[i-1];

    Bit#(8) sum = p^carry[8-1:0];
    return {carry[8],sum};
endfunction 

endpackage
