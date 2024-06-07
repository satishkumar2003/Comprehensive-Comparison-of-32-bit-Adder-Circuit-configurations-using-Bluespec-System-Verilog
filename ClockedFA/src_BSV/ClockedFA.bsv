package ClockedFA;

typedef enum {IDLE, READY, FINISHED} Adder_State deriving(Bits, Eq);

interface ClockedFA_Ifc;
    method Action start(Bit#(1) in1, Bit#(1) in2, Bit#(1) cin_reg);
    method Bit#(1) return_sum();
    method Bit#(1) return_cout();
    method Bool acknowledge();
endinterface

(* synthesize *)
module mkClockedFA(ClockedFA_Ifc);

    // Regs for input data
    Reg #(Bit#(1)) in1_reg <- mkReg(0);
    Reg #(Bit#(1)) in2_reg <- mkReg(0);
    Reg #(Bit#(1)) cin_reg <- mkReg(0);

    // Flag to indicate ongoing addition
    Reg #(Adder_State) state <- mkReg(IDLE);

    // Reg for output
    Reg #(Bit#(1)) sum_reg <- mkReg(0);
    Reg #(Bit#(1)) cout_reg <- mkReg(0);



    rule perform_addition if (state==READY);
        sum_reg <= in1_reg^in2_reg^cin_reg;
        cout_reg <= (in1_reg & in2_reg)|(in1_reg & cin_reg)|(cin_reg & in2_reg);
        state <= FINISHED;
    endrule




    method Action start(Bit#(1) in1_val, Bit#(1) in2_val, Bit#(1) cin_val) if (state==IDLE || state==FINISHED);
        in1_reg <= (in1_val);
        in2_reg <= (in2_val);
        cin_reg <= cin_val;
        state <= READY;
    endmethod

    method Bool acknowledge();
        return (state==READY);
    endmethod

    method Bit#(1) return_sum() if (state==FINISHED);
        return sum_reg;  
    endmethod

    method Bit#(1) return_cout() if (state==FINISHED);
        return cout_reg; 
    endmethod

endmodule

endpackage : ClockedFA
