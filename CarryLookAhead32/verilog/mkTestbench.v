//
// Generated by Bluespec Compiler, version 2024.01-13-ga8fe68a6 (build a8fe68a6)
//
// On Tue Jun 11 10:59:29 IST 2024
//
//
// Ports:
// Name                         I/O  size props
// CLK                            I     1 clock
// RST_N                          I     1 reset
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkTestbench(CLK,
		   RST_N);
  input  CLK;
  input  RST_N;

  // register a
  reg [31 : 0] a;
  wire [31 : 0] a_D_IN;
  wire a_EN;

  // register adder_1_available
  reg adder_1_available;
  wire adder_1_available_D_IN, adder_1_available_EN;

  // register adder_1_cin
  reg adder_1_cin;
  wire adder_1_cin_D_IN, adder_1_cin_EN;

  // register adder_1_in1
  reg [31 : 0] adder_1_in1;
  wire [31 : 0] adder_1_in1_D_IN;
  wire adder_1_in1_EN;

  // register adder_1_in2
  reg [31 : 0] adder_1_in2;
  wire [31 : 0] adder_1_in2_D_IN;
  wire adder_1_in2_EN;

  // register adder_1_result
  reg [32 : 0] adder_1_result;
  wire [32 : 0] adder_1_result_D_IN;
  wire adder_1_result_EN;

  // register b
  reg [31 : 0] b;
  wire [31 : 0] b_D_IN;
  wire b_EN;

  // register cin
  reg cin;
  wire cin_D_IN, cin_EN;

  // register count
  reg [7 : 0] count;
  wire [7 : 0] count_D_IN;
  wire count_EN;

  // register cout
  reg cout;
  wire cout_D_IN, cout_EN;

  // register overflow_flag
  reg overflow_flag;
  wire overflow_flag_D_IN, overflow_flag_EN;

  // register rng_a_r
  reg [31 : 0] rng_a_r;
  wire [31 : 0] rng_a_r_D_IN;
  wire rng_a_r_EN;

  // register rng_b_r
  reg [31 : 0] rng_b_r;
  wire [31 : 0] rng_b_r_D_IN;
  wire rng_b_r_EN;

  // register rng_cin_r
  reg [7 : 0] rng_cin_r;
  wire [7 : 0] rng_cin_r_D_IN;
  wire rng_cin_r_EN;

  // register state
  reg [1 : 0] state;
  reg [1 : 0] state_D_IN;
  wire state_EN;

  // register sum
  reg [31 : 0] sum;
  wire [31 : 0] sum_D_IN;
  wire sum_EN;

  // rule scheduling signals
  wire CAN_FIRE_RL_adder_1_call_compute,
       CAN_FIRE_RL_display_results,
       CAN_FIRE_RL_generate_random_inputs,
       CAN_FIRE_RL_get_results,
       CAN_FIRE_RL_initialize,
       WILL_FIRE_RL_adder_1_call_compute,
       WILL_FIRE_RL_display_results,
       WILL_FIRE_RL_generate_random_inputs,
       WILL_FIRE_RL_get_results,
       WILL_FIRE_RL_initialize;

  // inputs to muxes for submodule ports
  wire [31 : 0] MUX_rng_a_r_write_1__VAL_1, MUX_rng_b_r_write_1__VAL_1;
  wire [7 : 0] MUX_rng_cin_r_write_1__VAL_1;
  wire MUX_state_write_1__SEL_1;

  // remaining internal signals
  wire [32 : 0] calculated_sum__h5805,
		expected_sum__h5804,
		x__h5982,
		x__h5984,
		y__h5823,
		y__h5985;
  wire [31 : 0] adder_1_in1_AND_adder_1_in2___d9, p__h425, sum_val__h429;
  wire _0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230,
       count_03_ULT_30___d218,
       x__h1093,
       x__h1202,
       x__h1204,
       x__h1310,
       x__h1312,
       x__h1418,
       x__h1420,
       x__h1526,
       x__h1528,
       x__h1634,
       x__h1636,
       x__h1742,
       x__h1744,
       x__h1850,
       x__h1852,
       x__h1958,
       x__h1960,
       x__h2066,
       x__h2068,
       x__h2174,
       x__h2176,
       x__h2282,
       x__h2284,
       x__h2390,
       x__h2392,
       x__h2498,
       x__h2500,
       x__h2606,
       x__h2608,
       x__h2714,
       x__h2716,
       x__h2822,
       x__h2824,
       x__h2930,
       x__h2932,
       x__h3038,
       x__h3040,
       x__h3146,
       x__h3148,
       x__h3254,
       x__h3256,
       x__h3362,
       x__h3364,
       x__h3470,
       x__h3472,
       x__h3578,
       x__h3580,
       x__h3686,
       x__h3688,
       x__h3794,
       x__h3796,
       x__h3902,
       x__h3904,
       x__h4010,
       x__h4012,
       x__h4118,
       x__h4120,
       x__h4226,
       x__h4228,
       x__h4334,
       x__h4336,
       x__h4442,
       x__h4444,
       x__h5637,
       x__h5639,
       y__h5638;

  // rule RL_initialize
  assign CAN_FIRE_RL_initialize = state == 2'd0 ;
  assign WILL_FIRE_RL_initialize = CAN_FIRE_RL_initialize ;

  // rule RL_get_results
  assign CAN_FIRE_RL_get_results = adder_1_available && state == 2'd2 ;
  assign WILL_FIRE_RL_get_results = CAN_FIRE_RL_get_results ;

  // rule RL_display_results
  assign CAN_FIRE_RL_display_results = state == 2'd3 ;
  assign WILL_FIRE_RL_display_results = CAN_FIRE_RL_display_results ;

  // rule RL_adder_1_call_compute
  assign CAN_FIRE_RL_adder_1_call_compute = !adder_1_available ;
  assign WILL_FIRE_RL_adder_1_call_compute =
	     CAN_FIRE_RL_adder_1_call_compute ;

  // rule RL_generate_random_inputs
  assign CAN_FIRE_RL_generate_random_inputs = state == 2'd1 ;
  assign WILL_FIRE_RL_generate_random_inputs =
	     CAN_FIRE_RL_generate_random_inputs ;

  // inputs to muxes for submodule ports
  assign MUX_state_write_1__SEL_1 =
	     WILL_FIRE_RL_display_results && count_03_ULT_30___d218 ;
  assign MUX_rng_a_r_write_1__VAL_1 =
	     rng_a_r[0] ?
	       { 1'd1,
		 rng_a_r[31:8],
		 ~rng_a_r[7],
		 rng_a_r[6],
		 ~rng_a_r[5],
		 rng_a_r[4],
		 ~rng_a_r[3:1] } :
	       { 1'd0, rng_a_r[31:1] } ;
  assign MUX_rng_b_r_write_1__VAL_1 =
	     rng_b_r[0] ?
	       { 1'd1,
		 rng_b_r[31:8],
		 ~rng_b_r[7],
		 rng_b_r[6],
		 ~rng_b_r[5],
		 rng_b_r[4],
		 ~rng_b_r[3:1] } :
	       { 1'd0, rng_b_r[31:1] } ;
  assign MUX_rng_cin_r_write_1__VAL_1 =
	     rng_cin_r[0] ?
	       { 1'd1, rng_cin_r[7:5], ~rng_cin_r[4:2], rng_cin_r[1] } :
	       { 1'd0, rng_cin_r[7:1] } ;

  // register a
  assign a_D_IN = rng_a_r ;
  assign a_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register adder_1_available
  assign adder_1_available_D_IN = !WILL_FIRE_RL_generate_random_inputs ;
  assign adder_1_available_EN =
	     WILL_FIRE_RL_generate_random_inputs ||
	     WILL_FIRE_RL_adder_1_call_compute ;

  // register adder_1_cin
  assign adder_1_cin_D_IN = rng_cin_r[3] ;
  assign adder_1_cin_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register adder_1_in1
  assign adder_1_in1_D_IN = rng_a_r ;
  assign adder_1_in1_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register adder_1_in2
  assign adder_1_in2_D_IN = rng_b_r ;
  assign adder_1_in2_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register adder_1_result
  assign adder_1_result_D_IN =
	     { x__h4442 | adder_1_in1_AND_adder_1_in2___d9[31],
	       sum_val__h429 } ;
  assign adder_1_result_EN = CAN_FIRE_RL_adder_1_call_compute ;

  // register b
  assign b_D_IN = rng_b_r ;
  assign b_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register cin
  assign cin_D_IN = rng_cin_r[3] ;
  assign cin_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register count
  assign count_D_IN = count + 8'd1 ;
  assign count_EN = CAN_FIRE_RL_generate_random_inputs ;

  // register cout
  assign cout_D_IN = adder_1_result[32] ;
  assign cout_EN = CAN_FIRE_RL_get_results ;

  // register overflow_flag
  assign overflow_flag_D_IN = x__h5637 & y__h5638 ;
  assign overflow_flag_EN = CAN_FIRE_RL_get_results ;

  // register rng_a_r
  assign rng_a_r_D_IN =
	     WILL_FIRE_RL_generate_random_inputs ?
	       MUX_rng_a_r_write_1__VAL_1 :
	       32'hAFD7CD41 ;
  assign rng_a_r_EN =
	     WILL_FIRE_RL_generate_random_inputs || WILL_FIRE_RL_initialize ;

  // register rng_b_r
  assign rng_b_r_D_IN =
	     WILL_FIRE_RL_generate_random_inputs ?
	       MUX_rng_b_r_write_1__VAL_1 :
	       32'hC9B12E0A ;
  assign rng_b_r_EN =
	     WILL_FIRE_RL_generate_random_inputs || WILL_FIRE_RL_initialize ;

  // register rng_cin_r
  assign rng_cin_r_D_IN =
	     WILL_FIRE_RL_generate_random_inputs ?
	       MUX_rng_cin_r_write_1__VAL_1 :
	       8'hA5 ;
  assign rng_cin_r_EN =
	     WILL_FIRE_RL_generate_random_inputs || WILL_FIRE_RL_initialize ;

  // register state
  always@(MUX_state_write_1__SEL_1 or
	  WILL_FIRE_RL_initialize or
	  WILL_FIRE_RL_generate_random_inputs or WILL_FIRE_RL_get_results)
  begin
    case (1'b1) // synopsys parallel_case
      MUX_state_write_1__SEL_1 || WILL_FIRE_RL_initialize: state_D_IN = 2'd1;
      WILL_FIRE_RL_generate_random_inputs: state_D_IN = 2'd2;
      WILL_FIRE_RL_get_results: state_D_IN = 2'd3;
      default: state_D_IN = 2'bxx /* unspecified value */ ;
    endcase
  end
  assign state_EN =
	     WILL_FIRE_RL_display_results && count_03_ULT_30___d218 ||
	     WILL_FIRE_RL_initialize ||
	     WILL_FIRE_RL_generate_random_inputs ||
	     WILL_FIRE_RL_get_results ;

  // register sum
  assign sum_D_IN = adder_1_result[31:0] ;
  assign sum_EN = CAN_FIRE_RL_get_results ;

  // remaining internal signals
  assign _0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230 =
	     expected_sum__h5804 == calculated_sum__h5805 ;
  assign adder_1_in1_AND_adder_1_in2___d9 = adder_1_in1 & adder_1_in2 ;
  assign calculated_sum__h5805 = { cout, sum } ;
  assign count_03_ULT_30___d218 = count < 8'd30 ;
  assign expected_sum__h5804 = x__h5982 + y__h5823 ;
  assign p__h425 = adder_1_in1 ^ adder_1_in2 ;
  assign sum_val__h429 =
	     p__h425 ^
	     { x__h4444,
	       x__h4336,
	       x__h4228,
	       x__h4120,
	       x__h4012,
	       x__h3904,
	       x__h3796,
	       x__h3688,
	       x__h3580,
	       x__h3472,
	       x__h3364,
	       x__h3256,
	       x__h3148,
	       x__h3040,
	       x__h2932,
	       x__h2824,
	       x__h2716,
	       x__h2608,
	       x__h2500,
	       x__h2392,
	       x__h2284,
	       x__h2176,
	       x__h2068,
	       x__h1960,
	       x__h1852,
	       x__h1744,
	       x__h1636,
	       x__h1528,
	       x__h1420,
	       x__h1312,
	       x__h1204,
	       adder_1_cin } ;
  assign x__h1093 = adder_1_cin & p__h425[0] ;
  assign x__h1202 = x__h1204 & p__h425[1] ;
  assign x__h1204 = x__h1093 | adder_1_in1_AND_adder_1_in2___d9[0] ;
  assign x__h1310 = x__h1312 & p__h425[2] ;
  assign x__h1312 = x__h1202 | adder_1_in1_AND_adder_1_in2___d9[1] ;
  assign x__h1418 = x__h1420 & p__h425[3] ;
  assign x__h1420 = x__h1310 | adder_1_in1_AND_adder_1_in2___d9[2] ;
  assign x__h1526 = x__h1528 & p__h425[4] ;
  assign x__h1528 = x__h1418 | adder_1_in1_AND_adder_1_in2___d9[3] ;
  assign x__h1634 = x__h1636 & p__h425[5] ;
  assign x__h1636 = x__h1526 | adder_1_in1_AND_adder_1_in2___d9[4] ;
  assign x__h1742 = x__h1744 & p__h425[6] ;
  assign x__h1744 = x__h1634 | adder_1_in1_AND_adder_1_in2___d9[5] ;
  assign x__h1850 = x__h1852 & p__h425[7] ;
  assign x__h1852 = x__h1742 | adder_1_in1_AND_adder_1_in2___d9[6] ;
  assign x__h1958 = x__h1960 & p__h425[8] ;
  assign x__h1960 = x__h1850 | adder_1_in1_AND_adder_1_in2___d9[7] ;
  assign x__h2066 = x__h2068 & p__h425[9] ;
  assign x__h2068 = x__h1958 | adder_1_in1_AND_adder_1_in2___d9[8] ;
  assign x__h2174 = x__h2176 & p__h425[10] ;
  assign x__h2176 = x__h2066 | adder_1_in1_AND_adder_1_in2___d9[9] ;
  assign x__h2282 = x__h2284 & p__h425[11] ;
  assign x__h2284 = x__h2174 | adder_1_in1_AND_adder_1_in2___d9[10] ;
  assign x__h2390 = x__h2392 & p__h425[12] ;
  assign x__h2392 = x__h2282 | adder_1_in1_AND_adder_1_in2___d9[11] ;
  assign x__h2498 = x__h2500 & p__h425[13] ;
  assign x__h2500 = x__h2390 | adder_1_in1_AND_adder_1_in2___d9[12] ;
  assign x__h2606 = x__h2608 & p__h425[14] ;
  assign x__h2608 = x__h2498 | adder_1_in1_AND_adder_1_in2___d9[13] ;
  assign x__h2714 = x__h2716 & p__h425[15] ;
  assign x__h2716 = x__h2606 | adder_1_in1_AND_adder_1_in2___d9[14] ;
  assign x__h2822 = x__h2824 & p__h425[16] ;
  assign x__h2824 = x__h2714 | adder_1_in1_AND_adder_1_in2___d9[15] ;
  assign x__h2930 = x__h2932 & p__h425[17] ;
  assign x__h2932 = x__h2822 | adder_1_in1_AND_adder_1_in2___d9[16] ;
  assign x__h3038 = x__h3040 & p__h425[18] ;
  assign x__h3040 = x__h2930 | adder_1_in1_AND_adder_1_in2___d9[17] ;
  assign x__h3146 = x__h3148 & p__h425[19] ;
  assign x__h3148 = x__h3038 | adder_1_in1_AND_adder_1_in2___d9[18] ;
  assign x__h3254 = x__h3256 & p__h425[20] ;
  assign x__h3256 = x__h3146 | adder_1_in1_AND_adder_1_in2___d9[19] ;
  assign x__h3362 = x__h3364 & p__h425[21] ;
  assign x__h3364 = x__h3254 | adder_1_in1_AND_adder_1_in2___d9[20] ;
  assign x__h3470 = x__h3472 & p__h425[22] ;
  assign x__h3472 = x__h3362 | adder_1_in1_AND_adder_1_in2___d9[21] ;
  assign x__h3578 = x__h3580 & p__h425[23] ;
  assign x__h3580 = x__h3470 | adder_1_in1_AND_adder_1_in2___d9[22] ;
  assign x__h3686 = x__h3688 & p__h425[24] ;
  assign x__h3688 = x__h3578 | adder_1_in1_AND_adder_1_in2___d9[23] ;
  assign x__h3794 = x__h3796 & p__h425[25] ;
  assign x__h3796 = x__h3686 | adder_1_in1_AND_adder_1_in2___d9[24] ;
  assign x__h3902 = x__h3904 & p__h425[26] ;
  assign x__h3904 = x__h3794 | adder_1_in1_AND_adder_1_in2___d9[25] ;
  assign x__h4010 = x__h4012 & p__h425[27] ;
  assign x__h4012 = x__h3902 | adder_1_in1_AND_adder_1_in2___d9[26] ;
  assign x__h4118 = x__h4120 & p__h425[28] ;
  assign x__h4120 = x__h4010 | adder_1_in1_AND_adder_1_in2___d9[27] ;
  assign x__h4226 = x__h4228 & p__h425[29] ;
  assign x__h4228 = x__h4118 | adder_1_in1_AND_adder_1_in2___d9[28] ;
  assign x__h4334 = x__h4336 & p__h425[30] ;
  assign x__h4336 = x__h4226 | adder_1_in1_AND_adder_1_in2___d9[29] ;
  assign x__h4442 = x__h4444 & p__h425[31] ;
  assign x__h4444 = x__h4334 | adder_1_in1_AND_adder_1_in2___d9[30] ;
  assign x__h5637 = x__h5639 ^ adder_1_in2[31] ;
  assign x__h5639 = ~adder_1_in1[31] ;
  assign x__h5982 = x__h5984 + y__h5985 ;
  assign x__h5984 = { 1'd0, a } ;
  assign y__h5638 = adder_1_in2[31] ^ adder_1_result[31] ;
  assign y__h5823 = { 32'b0, cin } ;
  assign y__h5985 = { 1'd0, b } ;

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        a <= `BSV_ASSIGNMENT_DELAY 32'h70000000;
	adder_1_available <= `BSV_ASSIGNMENT_DELAY 1'd1;
	adder_1_cin <= `BSV_ASSIGNMENT_DELAY 1'd0;
	adder_1_in1 <= `BSV_ASSIGNMENT_DELAY 32'd0;
	adder_1_in2 <= `BSV_ASSIGNMENT_DELAY 32'd0;
	adder_1_result <= `BSV_ASSIGNMENT_DELAY 33'd0;
	b <= `BSV_ASSIGNMENT_DELAY 32'h10000000;
	cin <= `BSV_ASSIGNMENT_DELAY 1'd1;
	count <= `BSV_ASSIGNMENT_DELAY 8'd0;
	cout <= `BSV_ASSIGNMENT_DELAY 1'd0;
	overflow_flag <= `BSV_ASSIGNMENT_DELAY 1'd0;
	rng_a_r <= `BSV_ASSIGNMENT_DELAY 32'd1;
	rng_b_r <= `BSV_ASSIGNMENT_DELAY 32'd1;
	rng_cin_r <= `BSV_ASSIGNMENT_DELAY 8'd1;
	state <= `BSV_ASSIGNMENT_DELAY 2'd0;
	sum <= `BSV_ASSIGNMENT_DELAY 32'd0;
      end
    else
      begin
        if (a_EN) a <= `BSV_ASSIGNMENT_DELAY a_D_IN;
	if (adder_1_available_EN)
	  adder_1_available <= `BSV_ASSIGNMENT_DELAY adder_1_available_D_IN;
	if (adder_1_cin_EN)
	  adder_1_cin <= `BSV_ASSIGNMENT_DELAY adder_1_cin_D_IN;
	if (adder_1_in1_EN)
	  adder_1_in1 <= `BSV_ASSIGNMENT_DELAY adder_1_in1_D_IN;
	if (adder_1_in2_EN)
	  adder_1_in2 <= `BSV_ASSIGNMENT_DELAY adder_1_in2_D_IN;
	if (adder_1_result_EN)
	  adder_1_result <= `BSV_ASSIGNMENT_DELAY adder_1_result_D_IN;
	if (b_EN) b <= `BSV_ASSIGNMENT_DELAY b_D_IN;
	if (cin_EN) cin <= `BSV_ASSIGNMENT_DELAY cin_D_IN;
	if (count_EN) count <= `BSV_ASSIGNMENT_DELAY count_D_IN;
	if (cout_EN) cout <= `BSV_ASSIGNMENT_DELAY cout_D_IN;
	if (overflow_flag_EN)
	  overflow_flag <= `BSV_ASSIGNMENT_DELAY overflow_flag_D_IN;
	if (rng_a_r_EN) rng_a_r <= `BSV_ASSIGNMENT_DELAY rng_a_r_D_IN;
	if (rng_b_r_EN) rng_b_r <= `BSV_ASSIGNMENT_DELAY rng_b_r_D_IN;
	if (rng_cin_r_EN) rng_cin_r <= `BSV_ASSIGNMENT_DELAY rng_cin_r_D_IN;
	if (state_EN) state <= `BSV_ASSIGNMENT_DELAY state_D_IN;
	if (sum_EN) sum <= `BSV_ASSIGNMENT_DELAY sum_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    a = 32'hAAAAAAAA;
    adder_1_available = 1'h0;
    adder_1_cin = 1'h0;
    adder_1_in1 = 32'hAAAAAAAA;
    adder_1_in2 = 32'hAAAAAAAA;
    adder_1_result = 33'h0AAAAAAAA;
    b = 32'hAAAAAAAA;
    cin = 1'h0;
    count = 8'hAA;
    cout = 1'h0;
    overflow_flag = 1'h0;
    rng_a_r = 32'hAAAAAAAA;
    rng_b_r = 32'hAAAAAAAA;
    rng_cin_r = 8'hAA;
    state = 2'h2;
    sum = 32'hAAAAAAAA;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on

  // handling of system tasks

  // synopsys translate_off
  always@(negedge CLK)
  begin
    #0;
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  _0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display("Test Passed");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  !_0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display("Test Failed: ");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  !_0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display("  %32b\n+ %32b\n+\t\t\t\t %0b\n= \n  %32b", a, b, cin, sum);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  !_0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display(" %33b", expected_sum__h5804);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  !_0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display("Cout = %0b", cout);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  !_0_CONCAT_a_19_20_PLUS_0_CONCAT_b_21_22_23_PLUS_ETC___d230)
	$display("Overflow Flag = %0h\n", overflow_flag);
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && count_03_ULT_30___d218 &&
	  overflow_flag)
	$display("Overflow occured");
    if (RST_N != `BSV_RESET_VALUE)
      if (WILL_FIRE_RL_display_results && !count_03_ULT_30___d218)
	$finish(32'd0);
  end
  // synopsys translate_on
endmodule  // mkTestbench

