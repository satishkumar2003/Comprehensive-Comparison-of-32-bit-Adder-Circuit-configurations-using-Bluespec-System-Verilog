package CarryIncrement;

import functions::*;

typedef Bit#(32) Word;
//typedef struct { Word sum; Bit#(1) cout; } AdderResult deriving(Bits,Eq);

interface CIC_IFC;
    method Action start(Word in1, Word in2, Bit#(1) cin);
    //method AdderResult return_result();
    method Bit#(32) return_sum();
    method Bit#(1) return_carry();
    method Bool overflow();
endinterface


(* synthesize *)
module mkCIC32(CIC_IFC);

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
    	return result[32-1:0];
    endmethod
    
    method Bit#(1) return_carry();
    	return result[32];
    endmethod

    method Bool overflow if (available==True);
    	Bit#(1) overflow_flag = ((~in1[32-1]^in2[32-1])&(in2[32-1]^result[32-1]));
    	if (overflow_flag==1) return True;
    	else return False;
    endmethod
endmodule

endpackage
