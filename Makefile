# FF4 (SLUS_013.60) PSX decomp — native Linux build (maspsx pipeline)
#
# Pipeline per C file:
#   mipsel-linux-gnu-gcc-13 -S  --->  maspsx (ASPSX emulation)  --->  GNU as  --->  .o
#
# Usage:
#   make build/func_XXXX.o           # build one candidate
#   make FUNC=func_XXXX              # build + diff against its nonmatching
#   make clean

GCC    := mipsel-linux-gnu-gcc-13
AS     := mipsel-linux-gnu-as
MASPSX := $(shell command -v maspsx 2>/dev/null || echo $$HOME/.venvs/ff4_decomp/bin/maspsx)
SPLAT  := $(shell command -v splat 2>/dev/null || echo $$HOME/.venvs/ff4_decomp/bin/splat)
DIFF   := $(shell command -v asm-differ 2>/dev/null || echo $$HOME/.venvs/ff4_decomp/bin/asm-differ)

# PSX-standard flags; '-mfp32' is required on GCC>=10 when using -mips1.
CFLAGS := -mips1 -mfp32 -G0 -O2 -fno-common -fno-builtin -ffreestanding \
          -mno-abicalls -fno-pic -Iinclude -g -gdwarf-2

.PHONY: all diag diff clean

all:
	@echo "Use: make FUNC=func_XXXX  (build + diff one function)"

diag:
	@echo "GCC:    $$($(GCC) --version | head -1)"
	@echo "MASPSX: $(MASPSX)"
	@echo "SPLAT:  $(SPLAT)"
	@echo "diff:   $(DIFF)"

build:
	mkdir -p build

# Compile a C candidate through the maspsx pipeline into an ELF object.
build/%.o: src/%.c | build
	$(GCC) $(CFLAGS) -S $< -o - | $(MASPSX) --run-assembler -o $@
	@echo "built $@"

build/expected:
	mkdir -p build/expected

# Assemble a splat-split nonmatching .s (with macro context) as the reference.
build/expected/%.o: asm/nonmatchings/main/%.s | build/expected
	(printf '.include "macro.inc"\n'; cat $<) | $(AS) -G0 -Iinclude -o $@ -

# Convenience: build + diff one function's candidate against its split asm.
FUNC ?=
diff: FUNC ?= func_80169148
diff: build/$(FUNC).o build/expected/$(FUNC).o
	$(DIFF) $(FUNC) -o -f build/$(FUNC).o -F build/expected/$(FUNC).o -1

clean:
	rm -rf build