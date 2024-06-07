package FullAdder;

interface FullAdder_IFC;
    method Action start(Bit#(1) in1, Bit#(1) in2, Bit#(1) cin);
    method Bit#(1) return_sum();
    method Bit#(1) return_cout();
endinterface

(* synthesize *)
module mkFA(FullAdder_IFC);
    Reg#(Bool) available <- mkReg(True);
    Reg#(Bit#(1)) in1 <- mkReg(0);
    Reg#(Bit#(1)) in2 <- mkReg(0);
    Reg#(Bit#(1)) cin <- mkReg(0);
    Reg#(Bit#(2)) result <- mkReg(0);
    
    rule compute(available==False);
        result <= fa(in1,in2,cin);
        available <= True;
    endrule

    method Action start(Bit#(1) in1_inp, Bit#(1) in2_inp, Bit#(1) cin_inp);
        in1 <= in1_inp;
        in2 <= in2_inp;
        cin <= cin_inp;
        available <= False;
    endmethod
    

    method Bit#(1) return_sum() if (available==True);
        return result[0];
    endmethod

    method Bit#(1) return_cout() if (available==True);
        return result[1];
    endmethod

endmodule

function Bit#(2) fa(Bit#(1) in1, Bit#(1) in2, Bit#(1) cin);
    Bit#(1) temp1 = in1^in2;
    Bit#(1) sum = temp1^cin;
    Bit#(1) cout = (in1&in2)|(cin&temp1); 

    return {cout,sum};
endfunction

endpackage : FullAdder
