
TOPFILE?=Testbench.bsv
TOPMODULE?=mkTestbench
TOPDIR?=./src_BSV

BSC_DIR := $(shell which bsc)
BSC_VDIR:=$(subst /bsc,/,${BSC_DIR})../lib/Verilog/

.PHONY: default
default: generate_verilog link_verilator simulate

# ----------------------------------------------------------------
# Verilog compile/link/sim
FILES:= ./src_BSV:./testbench/
VERILOGDIR := ./verilog
BSVOUTDIR := ./bin
BUILDDIR := ./build_v
V_DIRS = -u -verilog -elab -vdir $(VERILOGDIR) -bdir $(BUILDDIR) -info-dir $(BUILDDIR)

BSC_COMP_FLAGS = -keep-fires -aggressive-conditions +RTS -K20000M -RTS -aggressive-conditions \
				 -no-warn-action-shadowing -check-assert  -keep-fires  -opt-undetermined-vals \
				 -remove-false-rules -remove-empty-rules -remove-starved-rules -remove-dollar \
				 -unspecified-to X -show-schedule -show-module-use
BSC_LINK_FLAGS =
BSC_PATHS = -p .:%/Prelude:%/Libraries:$(FILES)

VERILATESIM := -CFLAGS -O3
THREADS=1
SIM_MAIN=./testbench/sim_main.cpp
SIM_MAIN_H=./testbench/sim_main.h
VERILATOR_FLAGS += --stats -O3 $(VERILATESIM) -LDFLAGS "-static" --x-assign fast \
					--x-initial fast --noassert $(SIM_MAIN) --bbox-sys -Wno-STMTDLY \
					-Wno-UNOPTFLAT -Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY --trace\
					--autoflush --threads $(THREADS) -DBSV_RESET_FIFO_HEAD -DBSV_RESET_FIFO_ARRAY

check-env:
ifeq (, $(shell which bsc))
	$(error "BSC not found in $(PATH). Exiting ")
endif

.PHONY: generate_verilog
generate_verilog: check-env
	@mkdir -p $(VERILOGDIR) $(BUILDDIR)
	@echo Compiling for Verilog ...
	bsc $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g $(TOPMODULE)  $(TOPDIR)/$(TOPFILE) || (echo "BSC COMPILE ERROR"; exit 1)
	@echo Compiling for Verilog finished

.PHONY: link_verilator
link_verilator:
	@echo Linking for Verilog sim ...
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOPMODULE)" > $(SIM_MAIN_H)
	@echo '#include "V$(TOPMODULE).h"' >> $(SIM_MAIN_H)
	verilator $(VERILATOR_FLAGS) -trace --cc $(VERILOGDIR)/$(TOPMODULE).v -y $(VERILOGDIR) \
		-y $(BSC_VDIR) --exe
	@ln -f -s $(SIM_MAIN) obj_dir/sim_main.cpp
	@ln -f -s $(SIM_MAIN_H) obj_dir/sim_main.h
	@make -j8 -C obj_dir -f V$(TOPMODULE).mk
	@cp obj_dir/V$(TOPMODULE) $(BSVOUTDIR)/out
	@echo Linking for Verilog sim finished

.PHONY: simulate
simulate:
	@echo Verilog simulation...
	$(BSVOUTDIR)/out +fullverbose
	@echo Verilog simulation finished

# ----------------------------------------------------------------

.PHONY: clean
clean:
	rm -f  ./*~  src_BSC/*~
	rm -f  out  out.so  out_v  verilog/*
	rm -rf  $(BSVOUTDIR) obj_dir logs $(BUILDDIR) $(VERILOGDIR) bin *~
	rm -f  *$(TOPMODULE)*  *.vcd

