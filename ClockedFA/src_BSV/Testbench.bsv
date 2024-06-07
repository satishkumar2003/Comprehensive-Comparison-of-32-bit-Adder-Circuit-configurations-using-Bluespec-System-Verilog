package Testbench;

import ClockedFA::*;

module mkTestbench(Empty);
    ClockedFA_Ifc sa_1 <- mkClockedFA;

    // Reg#(Bit#(1)) a <- mkReg(1);    
    // Reg#(Bit#(1)) b <- mkReg(1);
    // Reg#(Bit#(1)) cin <- mkReg(0);

    Reg#(Bit#(3)) inputs <- mkReg(0);

    Reg#(Bit#(1)) sum <- mkReg(0);
    Reg#(Bit#(1)) cout <- mkReg(0);

    Reg#(Bit#(3)) state <- mkReg(0);

    rule provide_val if (state == 0);
        sa_1.start(inputs[0],inputs[1],inputs[2]);
        state <= 1;
    endrule

    rule check_result if (state == 1);
        if (sa_1.acknowledge()) state <= 2;
        else state <= 1;
    endrule

    rule retrieve_result if (state == 2);
        cout <= sa_1.return_cout;
        sum <= sa_1.return_sum;
        state <= 3;
    endrule

    rule display_result if (state == 3);
        $display("%0h + %0h + %0h",inputs[0],inputs[1],inputs[2]);
        $display("Sum = %0h",sum);
        $display("Cout = %0h\n", cout);
        state <= 4;
    endrule

    rule update_values if (state==4);
        inputs <= inputs + 1;
        if (inputs != 7) state <= 0;
        else $finish(0);
    endrule

endmodule

endpackage