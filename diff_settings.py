"""asm-differ settings for the FF4 (SLUS_013.60) PSX decomp.

Workflow: diff a compiled candidate against the splat-split target:
    asm-differ <func> -o -f build/<func>.o -F build/expected/<func>.o

"current" = the object built from C via gcc+maspsx,
"expected" = the original binary's disassembly assembled from splat's
asm/nonmatchings split (build/expected/ rule in the Makefile).
"""


def apply(config, args=None):
    config["arch"] = "mips"
    config["objdump_executable"] = "mipsel-linux-gnu-objdump"
    config["objdump_flags"] = ["-d", "--no-show-raw-insn", "-M", "reg-names=GPR"]
    config["expected_dir"] = "build/expected/"
    config["build_dir"] = "build/"
    config["mapfile"] = "build/slus_013.60.elf"

    # Original binary mapping: PSX EXE, code load vram 0x800F2400 at file 0x800.
    config["baseimg"] = "ISODUMP/slus_013.60"