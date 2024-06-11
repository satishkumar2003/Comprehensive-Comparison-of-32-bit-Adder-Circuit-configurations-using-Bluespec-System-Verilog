package CarryLookAhead;

import functions::*;

interface CLA_IFC#(type inp_sz);
    method Action start(Bit#(inp_sz) in1, Bit#(inp_sz) in2, Bit#(1) cin);
    //method AdderResult return_result();
    method Bit#(inp_sz) return_sum();
    method Bit#(1) return_carry();
    method Bool overflow();
endinterface



//(* synthesize *)
module mkCLA32(CLA_IFC#(inp_sz)) provisos(Add#(inp_sz,1,out_sz));

    // input regisWters
    Reg#(Bit#(inp_sz)) in1 <- mkReg(0);
    Reg#(Bit#(inp_sz)) in2 <- mkReg(0);
    Reg#(Bit#(1)) cin <- mkReg(0);
    
    // result register
    Reg#(Bit#(out_sz)) result <- mkReg(0);
    //Reg#(AdderResult) result <- mkReg(0);
    
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

    //method AdderResult return_result() if (available==True);
    	//return result;
    //endmethod
    
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
	carry[9] = ((((((((((cin&p[0]|g[0])&p[1]|g[1])&p[2]|g[2])&p[3]|g[3])&p[4]|g[4])&p[5]|g[5])&p[6]|g[6])&p[7]|g[7])&p[8]|g[8]);
	
*/
