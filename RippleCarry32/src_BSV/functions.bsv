package functions;

function Bit#(n) compute(Bit#(m) in1, Bit#(m) in2, Bit#(1) cin) provisos(Add#(m,1,n));
    Bit#(n) carry = {0,cin};
    Bit#(m) sum_val = 0;

    for(Integer i = 0; i<valueOf(m); i = i+1) begin
        Bit#(2) temp_result = fa(in1[i],in2[i],carry[i]);
        carry[i+1] = temp_result[1];
        sum_val[i] = temp_result[0];
    end
	    	
    return {carry[valueOf(n)-1],sum_val};
endfunction 

function Bit#(2) fa(Bit#(1) in1, Bit#(1) in2, Bit#(1) cin);
    Bit#(1) temp1 = in1^in2;
    Bit#(1) sum = temp1^cin;
    Bit#(1) cout = (in1&in2)|(cin&temp1); 

    return {cout,sum};
endfunction

endpackage
