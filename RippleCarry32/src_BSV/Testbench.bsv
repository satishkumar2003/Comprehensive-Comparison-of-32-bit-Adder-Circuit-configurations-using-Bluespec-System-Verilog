package Testbench;

import RippleCarry::*;
import functions::*;

module mkTestbench(Empty);
    RCA_IFC adder_1 <- mkRCA32;
    Reg#(Bit#(2)) state <- mkReg(0); // for testbench working

    // inputs
    //Reg#(Word) a <- mkReg('hF0000000);
    //Reg#(Word) b <- mkReg('hF0000000);
    //Reg#(Bit#(1)) cin <- mkReg(0);
    
        
    
    //Reg#(Word) a <- mkReg('h0300F001);
    //Reg#(Word) b <- mkReg('h000023F6);
    //Reg#(Bit#(1)) cin <- mkReg(1);
    
        
    
    //Reg#(Word) a <- mkReg('hFFF00000);
    //Reg#(Word) b <- mkReg('hF0100000);
    //Reg#(Bit#(1)) cin <- mkReg(0);
    
 
 
    Reg#(Word) a <- mkReg('h4E6);
    Reg#(Word) b <- mkReg('hFFFFFB1A);
    Reg#(Bit#(1)) cin <- mkReg(0);
 
 
    
    //Reg#(Word) a <- mkReg('h70000000);
    //Reg#(Word) b <- mkReg('h10000000);
    //Reg#(Bit#(1)) cin <- mkReg(1);
    
    
    
    // outputs
    //Reg#(Bit#(32)) sum <- mkReg(0);
    //Reg#(Bit#(1)) cout <- mkReg(0);
    Reg#(AdderResult) result = mkReg(AdderResult{sum: 0, cout: 0});
    
    // flags
    Reg#(Bool) overflow_flag <- mkReg(False);

    rule initialize if (state==0);
        $display("\n%32b (%d) + %32b (%d) + %32b =",a,abs(a),b,abs(b),cin);
        adder_1.start(a,b,cin); 
        state <= 1;
    endrule

    rule get_results if (state==1);
    	//sum <= adder_1.return_sum();
    	//cout <= adder_1.return_carry();
        result <= adder_1.return_result();
        overflow_flag <= adder_1.overflow();
        state <= 2;    
    endrule
    
    rule display_results if (state==2);
        $display("Sum = %32b (%d)",result.sum,abs(result.sum));
        $display("Cout = %32b",result.cout);
        $display("Overflow Flag = %0h\n", adder_1.overflow());
        $finish(0);
    endrule
    
endmodule

function Bit#(32) abs(Bit#(32) in);
  Bit#(32) abs_val = 1;
  if (in[32-1] == 1) abs_val = ~in + 'b1;
  else abs_val = in;
  return abs_val;
endfunction

endpackage : Testbench
