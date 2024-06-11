package functions;

function Bit#(n) compute(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n));

    Bit#(m) p = in1^in2;
    Bit#(m) g = in1&in2;
    
    Bit#(n) carry = zeroExtend(cin);
    
    for (Integer i = 1; i <= valueof(m); i = i + 1) 
    	carry[i] = (carry[i-1] & p[i-1]) | g[i-1];

	
    Bit#(m) sum_val = p^carry[valueof(m)-1:0];

    
    return {carry[valueof(m)],sum_val};
endfunction 


endpackage
