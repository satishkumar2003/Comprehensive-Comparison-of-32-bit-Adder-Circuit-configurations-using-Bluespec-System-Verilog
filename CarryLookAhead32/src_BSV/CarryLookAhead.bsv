package CarryLookAhead;

typedef Bit#(32) Word;
//typedef struct { Word sum; Bit#(1) cout; } AdderResult deriving(Bits,Eq);

interface CLA_IFC;
    method Action start(Word in1, Word in2, Bit#(1) cin);
    //method AdderResult return_result();
    method Bit#(32) return_sum();
    method Bit#(1) return_carry();
    method Bool overflow();
endinterface



(* synthesize *)
module mkCLA32(CLA_IFC);

    // input registers
    Reg#(Word) in1 <- mkReg(0);
    Reg#(Word) in2 <- mkReg(0);
    Reg#(Bit#(1)) cin <- mkReg(0);
    
    // result register
    Reg#(Bit#(33)) result <- mkReg(0);
    //Reg#(AdderResult) result <- mkReg(0);
    
    // Is result available?
    Reg#(Bool) available <- mkReg(True);

    rule call_compute if (available==False);
        result <= compute(in1,in2,cin);
        available <= True;
    endrule

    method Action start(Word in1_inp, Word in2_inp, Bit#(1) cin_inp);
        in1 <= in1_inp;
        in2 <= in2_inp;
        cin <= cin_inp;
        available <= False;
    endmethod

    //method AdderResult return_result() if (available==True);
    	//return result;
    //endmethod
    
    method Word return_sum();
    	return result[31:0];
    endmethod
    
    method Bit#(1) return_carry();
    	return result[32];
    endmethod

    method Bool overflow if (available==True);
    	Bit#(1) overflow_flag = ((~in1[31]^in2[31])&(in2[31]^result[31]));
    	if (overflow_flag==1) return True;
    	else return False;
    endmethod
endmodule


function Bit#(33) compute(Word in1, Word in2, Bit#(1) cin);

    Word p = in1^in2;
    Word g = in1&in2;
    
    Bit#(33) carry = zeroExtend(cin);
    
    for (int i = 1; i <= 32; i = i + 1) 
    	carry[i] = (carry[i-1] & p[i-1]) | g[i-1];

	
    Word sum_val = p^carry[31:0];

    
    return {carry[32],sum_val};
endfunction 

endpackage

/* 
Synthesizer in Vivado results in the same diagrams
	carry[0] = cin;
	carry[1] = (cin&p[0]|g[0]);
	carry[2] = ((cin&p[0]|g[0])&p[1]|g[1]);
	carry[3] = (((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2]);
	carry[4] = ((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3]);
	carry[5] = (((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3])&p[4]|g[4]);
	carry[6] = ((((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3])&p[4]|g[4])&p[5]|g[5]);
	carry[7] = (((((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3])&p[4]|g[4])&p[5]|g[5])&p[6]|g[6]);
	carry[8] = ((((((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3])&p[4]|g[4])&p[5]|g[5])&p[6]|g[6])&p[7]|g[7]);
*/
