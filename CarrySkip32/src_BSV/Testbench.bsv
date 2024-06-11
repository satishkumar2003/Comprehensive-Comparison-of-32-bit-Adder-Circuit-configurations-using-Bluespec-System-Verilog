package Testbench;

import CarrySkip::*;
import functions::*;
import LFSR::*;

module mkTestbench(Empty);
    
    LFSR#(Bit#(32)) rng_a <- mkLFSR_32;
    LFSR#(Bit#(32)) rng_b <- mkLFSR_32;
    LFSR#(Bit#(8)) rng_cin <- mkLFSR_8;
    
    Reg#(Bit#(8)) count <- mkReg(0);
    
    CSK_IFC#(32) adder_1 <- mkCSK32;
    Reg#(Bit#(2)) state <- mkReg(0); // for testbench working
 
    
    Reg#(Bit#(32)) a <- mkReg('h70000000);
    Reg#(Bit#(32)) b <- mkReg('h10000000);
    Reg#(Bit#(1)) cin <- mkReg(1);
    
    
    
    // outputs
    Reg#(Bit#(32)) sum <- mkReg(0);
    Reg#(Bit#(1)) cout <- mkReg(0);
    
    // flags
    Reg#(Bool) overflow_flag <- mkReg(False);

	rule initialize if (state==0);
		rng_a.seed('hAFD7CD41);
		rng_b.seed('hC9B12E0A);
		rng_cin.seed('hA5);
		state <= 1;
	endrule

	rule generate_random_inputs if (state==1);
		a <= unpack(rng_a.value()); rng_a.next();
		b <= unpack(rng_b.value()); rng_b.next();
		cin <= rng_cin.value()[3]; rng_cin.next();
		count <= count + 1;
		adder_1.start(rng_a.value(),rng_b.value(),rng_cin.value()[3]);
		state <= 2;
	endrule
  
  	rule get_results if (state==2);
    	sum <= unpack(adder_1.return_sum());
    	cout <= adder_1.return_carry();
    	overflow_flag <= adder_1.overflow();
   		state <= 3;
    endrule
      
    rule display_results if (state==3);
        if (count < 30) begin
        	state <= 1;
        	if (check_answer(a,b,cin,sum,cout))
        		$display("Test Passed");
        	else begin 
        		$display("Test Failed: ");
        		$display("  %32b\n+ %32b\n+\t\t\t\t %0b\n= \n  %32b",a,b,cin,sum);
        		$display(" %33b",zeroExtend(a) + zeroExtend(b) + {32'b0,cin});
        		$display("Cout = %0b",cout);
        		$display("Overflow Flag = %0h\n", overflow_flag);
        	end
        	if (overflow_flag) $display("Overflow occured");
        end else $finish(0);
    endrule
    
endmodule

function Bool check_answer(Bit#(m) a, Bit#(m) b, Bit#(1) cin, Bit#(m) sum, Bit#(1) cout) provisos(Add#(m,1,n));
	Bit#(n) expected_sum = zeroExtend(a) + zeroExtend(b) + {'b0,cin};
	Bit#(n) calculated_sum = {cout,sum};
	
	return expected_sum==calculated_sum;
endfunction

function Bit#(m) abs(Bit#(m) in);
  Bit#(m) abs_val = 1;
  if (in[valueof(m)-1] == 1) abs_val = ~in + 'b1;
  else abs_val = in;
  return abs_val;
endfunction

endpackage : Testbench
