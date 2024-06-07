package Testbench;

import FullAdder::*;

module mkTestbench(Empty);
    FullAdder_IFC adder1 <- mkFA;
    Reg#(Bit#(2)) state <- mkReg(0); // for testbench working

    Bit#(1) a = 1;
    Bit#(1) b = 1;
    Bit#(1) cin = 1;
    
    rule initialize if (state==0);
        adder1.start(a,b,cin);
        state <= 1;
    endrule

    rule get_sum if (state==1);
        Bit#(1) sum = adder1.return_sum();
        $display("Sum = %0h",sum);
        state <= 2;    
    endrule
    
    rule get_cout if (state==2);
        Bit#(1) cout = adder1.return_cout();
        $display("Cout = %0h",cout);    
        $finish(0);
    endrule
endmodule

endpackage : Testbench