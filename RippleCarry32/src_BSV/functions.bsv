package functions;

typedef Bit#(32) Word;
typedef struct { Word sum; Bit#(1) cout; } AdderResult deriving(Bits,Eq);

function AdderResult compute(Word in1, Word in2, Bit#(1) cin);
//function Bit#(33) compute(Word in1, Word in2, Bit#(1) cin);
    Bit#(33) carry = {0,cin};
    Word sum_val = 0;

    for(int i = 0; i<32; i = i+1) begin
        Bit#(2) temp_result = fa(in1[i],in2[i],carry[i]);
        carry[i+1] = temp_result[1];
        sum_val[i] = temp_result[0];
    end
	
    let result = AdderResult{ sum: sum_val, cout: carry[32]}; 
    return result;
    
    //return {carry[32],sum};
endfunction 

function Bit#(2) fa(Bit#(1) in1, Bit#(1) in2, Bit#(1) cin);
    Bit#(1) temp1 = in1^in2;
    Bit#(1) sum = temp1^cin;
    Bit#(1) cout = (in1&in2)|(cin&temp1); 

    return {cout,sum};
endfunction

endpackage
