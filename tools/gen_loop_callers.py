#!/usr/bin/env python3
"""Generate C for loop-hub callers: split prelude vs loop body at the backward branch."""
import re, subprocess, sys
from pathlib import Path

ASM = Path("asm/nonmatchings/main")
SRC = Path("src")

def parse(name):
    out = []
    for m in re.finditer(r"/\* ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]{2,8}) \*/\s*(.+?)\s*$",
                         (ASM / f"{name}.s").read_text(), re.M):
        out.append([int(m.group(2), 16), " ".join(m.group(4).split())])
    return out

def decl(call):
    """From a call+delay slot, return (extern_declaration, call_text, returns_bool)."""
    return call  # placeholder; built below

def gen(name):
    insns = parse(name)
    # find label vaddrs
    labels = {}
    text = (ASM / f"{name}.s").read_text()
    for m in re.finditer(r"^\s*\.L([0-9A-F]+):", text, re.M):
        # next comment line's vaddr
        for l in text.splitlines():
            pass
    # simpler: build label->vaddr by scanning
    labels = {}
    prev_label = None
    for line in text.splitlines():
        m = re.match(r"\s*\.L([0-9A-F]+):", line)
        if m:
            prev_label = m.group(1)
            continue
        m2 = re.match(r"\s*/\* [0-9A-F]+ ([0-9A-F]+) [0-9A-F]+\s*\*/", line)
        if m2 and prev_label:
            labels[prev_label] = int(m2.group(1), 16)
            prev_label = None
        elif m2:
            prev_label = None

    # find backward branch
    br_idx = None
    for i, (v, t) in enumerate(insns):
        m = re.match(r"^(bnez|beqz)\s+\$v0,?\s*\.L([0-9A-F]+)", t)
        if m and labels.get(m.group(2)) is not None and labels[m.group(2)] < v:
            br_idx = i
            br_op = m.group(1)
            break
    if br_idx is None:
        return None

    # loop body = insns from the label up to br_idx (exclusive of branch, but the last jal is the condition)
    loop_start = None
    for i, (v, t) in enumerate(insns):
        if t == f".L{next((k for k, vv in labels.items() if vv == insns[br_idx][0]-0 and k), '')}":
            pass
    # find index of label with the branch target vaddr
    tgtm = re.match(r"^(bnez|beqz)\s+\$v0,?\s*\.L([0-9A-F]+)", insns[br_idx][1])
    br_op = tgtm.group(1)
    tgt = labels[tgtm.group(2)]
    loop_start = next(i for i, (v, t) in enumerate(insns) if v == tgt)

    def callinfo(i):
        """(func, [args]) from jal at index i + delay slot at i+1."""
        jm = re.match(r"jal\s+(\S+)", insns[i][1])
        if not jm:
            return None
        f = jm.group(1)
        d = insns[i + 1][1] if i + 1 < len(insns) else "nop"
        am = re.match(r"addiu\s+\$a0,\s*\$zero,\s*(0x[0-9A-Fa-f]+|\d+)", d)
        if am:
            val = am.group(1)
            if not val.startswith("0x"):
                val = f"0x{int(val):X}"
            return (f, f"{f}({val})", "")
        nm = re.match(r"nop", d)
        if nm:
            return (f, f"{f}()", "")
        return None  # non-const arg, bail

    prelude, body, cond_call = [], [], None
    for i in range(len(insns)):
        if i >= br_idx:
            break
        if i + 1 >= len(insns):
            break
        ci = callinfo(i)
        if ci is None:
            continue
        if i < loop_start:
            prelude.append(ci)
        else:
            body.append(ci)
    cond_call = body.pop()  # last jal before branch is the condition

    # build externs: arity from the calls themselves
    externs = []
    seen = {}
    for (f, call, _) in prelude + body + [cond_call]:
        if f not in seen:
            seen[f] = call
    for f, call in seen.items():
        inner = call[call.find("(") + 1: call.rfind(")")]
        nargs = 0 if inner.strip() == "" else inner.count(",") + 1
        params = ", ".join(["u32 v%d" % i for i in range(nargs)]) if nargs else "void"
        is_cond = f == cond_call[0]
        ret = "int" if is_cond else "void"
        externs.append(f"extern {ret} {f}({params});")
    bodycalls = ";\n        ".join(c for _, c, _ in body)
    call_body = bodycalls + ";" if bodycalls else ""
    cond = cond_call[1]
    loop = f"while ({cond} {'== 0' if br_op == 'beqz' else '!= 0'});"
    precalls = ";\n    ".join(c for _, c, _ in prelude)
    c = "\n".join(externs) + f"\nvoid {name}(void) {{\n    {precalls};\n    do {{\n        {call_body}\n    }} {loop}\n}}\n"
    return c

if __name__ == "__main__":
    targets = sys.argv[1:]
    for t in targets:
        c = gen(t)
        if c is None:
            print(f"{t}: FAILED (no loop/pattern)")
            continue
        (SRC / f"{t}.c").write_text(f'#include "common.h"\n{c}')
        print(f"{t}: wrote")