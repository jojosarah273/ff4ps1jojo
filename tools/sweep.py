#!/usr/bin/env python3
"""Classify tiny nonmatching functions into matchable C templates.

Scans asm/nonmatchings/main/*.s, recognizes simple leaf patterns, and emits
an enum of candidate C bodies. Used by the batch matching loop.
"""
import re
import sys
from pathlib import Path

ASM = Path("asm/nonmatchings/main")


def load(name):
    text = (ASM / f"{name}.s").read_text()
    lines = [
        (int(m.group(1), 16), m.group(2).strip())
        for m in re.finditer(r"/\* ([0-9A-F]+) .*? \*/\s+(.+)$", text, re.M)
    ]
    return lines  # list of (vaddr, insn text)


def classify(name):
    insns = [i for _, i in load(name)]
    if not insns:
        return None

    # strip comment artifacts / labels already removed by regex
    insns = [i for i in insns if i and not i.startswith(("glabel", "endlabel", "nonmatching"))]
    insns = [" ".join(i.split()) for i in insns]

    if len(insns) == 2 and insns == ["jr $ra", "nop"]:
        return ("void_empty", None, "void f(void) {}")
    if len(insns) == 2 and insns[0] == "jr $ra":
        # jr + something in delay slot
        if (m := re.match(r"move \$v0,\$a0", insns[1])):
            return ("identity", None, "int f(int a) { return a; }")
        if (m := re.match(r"addiu \$v0,\$a0,(-?\d+)", insns[1])):
            return ("arg_plus_const", int(m.group(1)), f"int f(int a) {{ return a + {m.group(1)}; }}")
        if (m := re.match(r"j?r?\s*\$ra", insns[1])):
            return None
    if len(insns) == 3 and insns[1:3] == ["jr $ra", "nop"]:
        first = insns[0]
        if (m := re.match(r"move \$v0,\$a0", first)):
            return ("identity", None, "int f(int a) { return a; }")
        if (m := re.match(r"addiu \$v0,\$a0,(-?\d+)", first)):
            return ("arg_plus_const", int(m.group(1)), f"int f(int a) {{ return a + {m.group(1)}; }}")
        if (m := re.match(r"ori \$v0,\$zero,(-?\d+)", first)):
            return ("const", int(m.group(1)), f"int f(void) {{ return {m.group(1)}; }}")
        if (m := re.match(r"lui \$v0,(0x[0-9A-F]+)", first)):
            return ("const_hi", m.group(1), None)
        if (m := re.match(r"lbu \$v0,0x0\(\$a0\)", first)):
            return ("load_u8", None, "int f(u8 *p) { return *p; }")
        if (m := re.match(r"lhu \$v0,0x0\(\$a0\)", first)):
            return ("load_u16", None, "int f(u16 *p) { return *p; }")
        if (m := re.match(r"lw \$v0,0x0\(\$a0\)", first)):
            return ("load_u32", None, "int f(u32 *p) { return *p; }")
        if (m := re.match(r"lw \$v0, %gp_rel\(([^)]+)\)\(\$gp\)", first)):
            return ("return_gp_global", m.group(1), f"int f(void) {{ return {m.group(1)}; }}")
        if (m := re.match(r"lui \$(v0|v1), %hi\(([^)]+)\)", first)):
            return ("return_abs_global", m.group(2), f"int f(void) {{ return {m.group(2)}; }}")
    # zero-store leaves (often with a store in the jr delay slot)
    if insns[0].startswith("sb $zero, 0x0($a0)") and len(insns) >= 2 and insns[-1].endswith("sb $zero, 0x1($a0)"):
        return ("zero2", None, "void f(u8 *p) { p[0] = 0; p[1] = 0; }")
    if len(insns) == 2 and insns[0] == "jr $ra" and insns[1] == "sb $zero, 0x0($a0)":
        return ("zero1", None, "void f(u8 *p) { *p = 0; }")

    def sym_of(s):
        m = re.search(r"%gp_rel\(([^)]+)\)\(\$gp\)", s)
        return m.group(1) if m else None

    def imm_of(s, op):
        m = re.match(rf"{op} \$v0, \$v0, (0x[0-9A-Fa-f]+)", s)
        return int(m.group(1), 16) if m else None

    # getter+store-back with hazard nops:  lw v1,S | nop | lbu v0,0(v1) | nop | andi v0,v0,I | jr | sb v0,0(v1)
    if (
        len(insns) == 7
        and (s := sym_of(insns[0])) and insns[1] == "nop"
        and insns[2] == "lbu $v0, 0x0($v1)" and insns[3] == "nop"
        and (i := imm_of(insns[4], "andi"))
        and insns[5] == "jr $ra" and insns[6] == "sb $v0, 0x0($v1)"
    ):
        return ("getter_and", f"{s};0x{i:X}", f"*{s} &= 0x{i:X}")
    # return *S & IMM with hazard nop
    if (
        len(insns) == 5
        and (s := sym_of(insns[0])) and insns[1] == "nop"
        and insns[2] == "lbu $v0, 0x0($v1)" and insns[3] == "jr $ra"
        and (i := imm_of(insns[4], "andi"))
    ):
        return ("getter_and_ret", f"{s};0x{i:X}", f"return *{s} & 0x{i:X}")
    # two-pointer copy between globals: *B = *A
    if (
        len(insns) == 5
        and (a := sym_of(insns[0])) and (b := sym_of(insns[1]))
        and insns[2] == "lbu $v1, 0x0($v0)" and insns[3] == "jr $ra"
        and insns[4] == "sb $v1, 0x0($a0)"
    ):
        return ("copy_dup", f"{a};{b}", f"*{b} = *{a}")
    # branch-const writes: D24 = a0 ? 0x85 : 0x86; D28 = 0
    if (
        len(insns) == 7
        and insns[0] == "bnez $a0, .L80187CA8" and insns[1] == "addiu $v0, $zero, 0x85"
        and insns[2] == "addiu $v0, $zero, 0x86"
        and insns[3] == "sw $v0, %gp_rel(D_8019EF24)($gp)"
        and insns[4] == "sw $zero, %gp_rel(D_8019EF28)($gp)"
    ):
        return ("branch_85_86", None, "D24 = a0 ? 0x85 : 0x86; D28 = 0")
    return None


def emit_c(name, cls, detail, body):
    """Write src/<name>.c with the (possibly templated) body."""
    if class_body_hints(cls):
        return None
    return None


def class_body_hints(cls):
    return None


def gen_c(name, cls, detail, body):
    """Generate a src/<name>.c file for a classified pattern."""
    if cls == "getter_and":
        sym = detail  # "SYM;IMM"
        sym, imm = sym.split(";")
        c = f'extern u8 *{sym};\nvoid {name}(void) {{ *{sym} &= {imm}; }}\n'
    elif cls == "getter_and_ret":
        sym, imm = detail.split(";")
        c = f'extern u8 *{sym};\nint {name}(void) {{ return *{sym} & {imm}; }}\n'
    elif cls == "copy_dup":
        a, b = detail.split(";")
        c = (f'extern u8 *{a};\nextern u8 *{b};\n'
             f'void {name}(void) {{ *{b} = *{a}; }}\n')
    elif cls == "branch_85_86":
        c = (f'extern u32 D_8019EF24;\nextern u32 D_8019EF28;\n'
             f'void {name}(int a0) {{ D_8019EF24 = a0 ? 0x85 : 0x86; D_8019EF28 = 0; }}\n')
    elif cls == "void_empty":
        c = f'void {name}(void) {{ }}\n'
    else:
        return False
    with open(f"src/{name}.c", "w") as fh:
        fh.write(f'#include "common.h"\n{c}')
    print(f"wrote src/{name}.c")
    return True


def main():
    argv = list(sys.argv[1:])
    emit = "--emit" in argv
    if emit:
        argv.remove("--emit")
    chosen = argv or None
    counts = {}
    for s in sorted(ASM.glob("*.s")):
        name = s.stem
        if chosen and name not in chosen:
            continue
        cls = classify(name)
        if cls:
            counts[cls[0]] = counts.get(cls[0], 0) + 1
            if emit:
                gen_c(name, cls[0], cls[1], cls[2])
            print(f"{name}\t{cls[0]}\t{cls[2] if cls[2] else '?'}")


if __name__ == "__main__":
    main()