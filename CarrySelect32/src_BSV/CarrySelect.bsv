package CarrySelect;

import functions::*;

interface CSE_IFC#(type inp_sz);
    method Action start(Bit#(inp_sz) in1, Bit#(inp_sz) in2, Bit#(1) cin);
    method Bit#(inp_sz) return_sum();
    method Bit#(1) return_carry();
    method Bool overflow();
endinterface



//(* synthesize *)
module mkCSE32(CSE_IFC#(inp_sz)) provisos(Add#(inp_sz,1,out_sz),Mul#(a__,8,inp_sz),Add#(b__,8,out_sz));

    // input registers
    Reg#(Bit#(inp_sz)) in1 <- mkReg(0);
    Reg#(Bit#(inp_sz)) in2 <- mkReg(0);
    Reg#(Bit#(1)) cin <- mkReg(0);
    
    // result register
    Reg#(Bit#(out_sz)) result <- mkReg(0);
    
    // Is result available?
    Reg#(Bool) available <- mkReg(True);

    rule call_compute if (available==False);
        result <= compute(in1,in2,cin);
        available <= True;
    endrule

    method Action start(Bit#(inp_sz) in1_inp, Bit#(inp_sz) in2_inp, Bit#(1) cin_inp);
        in1 <= in1_inp;
        in2 <= in2_inp;
        cin <= cin_inp;
        available <= False;
    endmethod

    method Bit#(inp_sz) return_sum();
    	return result[valueof(inp_sz)-1:0];
    endmethod
    
    method Bit#(1) return_carry();
    	return result[valueof(inp_sz)];
    endmethod

    method Bool overflow if (available==True);
    	Integer index = valueof(inp_sz)-1;
    	Bit#(1) overflow_flag = ((~in1[index]^in2[index])&(in2[index]^result[index]));
    	if (overflow_flag==1) return True;
    	else return False;
    endmethod
endmodule

endpackage
