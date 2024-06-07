package functions;

typedef Bit#(32) Word;
//typedef struct { Word sum; Bit#(1) cout; } AdderResult deriving(Bits,Eq);

//function AdderResult compute(Word in1, Word in2, Bit#(1) cin);
function Bit#(33) compute(Word in1, Word in2, Bit#(1) cin);

	// Carry Skip Logic
	// In 4 parts of 8 bits each
	
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
