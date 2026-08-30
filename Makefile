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
MASPSX := python3 $(CURDIR)/tools/maspsx/maspsx.py
SPLAT  := $(shell command -v splat 2>/dev/null || echo $$HOME/.venvs/ff4_decomp/bin/splat)
DIFF   := $(shell command -v asm-differ 2>/dev/null || echo $$HOME/.venvs/ff4_decomp/bin/asm-differ)

# PSX-standard flags; '-mfp32' is required on GCC>=10 when using -mips1.
CFLAGS := -mips1 -mfp32 -G8 -O2 -fno-common -fno-builtin -ffreestanding \
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
	$(GCC) $(CFLAGS) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@
	@echo "built $@"

# --- Era-accurate lane: PsyQ CC1PSX.EXE under wine ("only when needed") ---
# src/x.c -> gcc -E -> .i -> wine CC1PSX.EXE (-G8) -> .s -> maspsx -> .o
PSYX     := $(CURDIR)/tools/psyq/bin
CC1PSX   := wine $(PSYX)/CC1PSX.EXE
PSXFLAGS := -quiet -O2 -G8 -mgpOPT -fgnu-linker

build/psx:
	mkdir -p build/psx

build/psx/%.i: src/%.c | build/psx
	$(GCC) -E -P -Iinclude $< -o $@

build/psx/%.s: build/psx/%.i | build/psx
	$(CC1PSX) $(PSXFLAGS) $< -o $@ 2>/dev/null

build/psx/%.o: build/psx/%.s | build/psx
	$(MASPSX) --run-assembler --dont-expand-li -G8 -Iinclude -o $@ < $<

# Convenience: era-lane build + diff (make psx FUNC=func_XXXX)
psx: FUNC ?= func_800F63E8
psx: build/psx/$(FUNC).o build/expected/$(FUNC).o
	$(DIFF) $(FUNC) -o -f build/psx/$(FUNC).o -F build/expected/$(FUNC).o -1

build/expected:
	mkdir -p build/expected

# Assemble a splat-split nonmatching .s (with macro context) as the reference.
# Files are written in aspsx/PsyQ layout: literal order incl. delay slots,
# so assemble in .set noreorder mode (aspsx-style, no auto scheduling).
build/expected/%.o: asm/nonmatchings/main/%.s | build/expected
	(printf '.set noreorder\n.include "macro.inc"\n'; cat $<) | $(AS) -G0 -Iinclude -o $@ -

# Absolute-addressed global accessors: original used lui/%lo (not sdata),
# so compile these per-file with -G0 (no gp-relative small-data classification).
build/func_80188240.o: src/func_80188240.c | build
	$(GCC) $(subst -G8,-G0,$(CFLAGS)) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@
build/func_8018DF90.o: src/func_8018DF90.c | build
	$(GCC) $(subst -G8,-G0,$(CFLAGS)) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@
build/func_80192718.o: src/func_80192718.c | build
	$(GCC) $(subst -G8,-G0,$(CFLAGS)) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@
build/func_80192728.o: src/func_80192728.c | build
	$(GCC) $(subst -G8,-G0,$(CFLAGS)) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@
build/func_80191530.o: src/func_80191530.c | build
	$(GCC) $(subst -G8,-G0,$(CFLAGS)) -S $< -o - | $(MASPSX) --run-assembler --dont-expand-li -o $@

# Convenience: build + diff one function's candidate against its split asm.
FUNC ?=
diff: FUNC ?= func_80169148
diff: build/$(FUNC).o build/expected/$(FUNC).o
	$(DIFF) $(FUNC) -o -f build/$(FUNC).o -F build/expected/$(FUNC).o -1

clean:
	rm -rf build