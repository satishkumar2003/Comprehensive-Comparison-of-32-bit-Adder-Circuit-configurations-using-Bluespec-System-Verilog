package functions;

typedef Bit#(32) Word;

// PARAMETERIZE LATER

//function AdderResult compute(Word in1, Word in2, Bit#(1) cin);
function Bit#(33) compute(Word in1, Word in2, Bit#(1) cin);
	
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
    
endfunction 



// n+1 causes a compile time error
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



function Bit#(n) mux_2_1_nbit(Bit#(n) in1, Bit#(n) in2, Bit#(1) select);
	if (select==1) return in1;
	else return in2;
endfunction


endpackage
