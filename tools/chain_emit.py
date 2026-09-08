#!/usr/bin/env python3
"""chain_emit.py — bulk C emission + byte-match for the const-arg caller-chain
family (era lane: CC1PSX via wine reproduces these at ~100%).

For each chain candidate: parse the verified spec into a call sequence, emit
candidate C in src/<n>.c, verify with `make psx` + asm-differ -j .text, and
register byte-matched functions (expected/matched/ + spec removal + lanes).

Unparseable patterns are left untouched (shell stays) and reported for manual
review. Usage: python3 tools/chain_emit.py [NAME...]   (default: all chains)
"""
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
os.chdir(ROOT)
ASM = ROOT / "asm" / "nonmatchings" / "main"
SRC = ROOT / "src"
MATCHED = ROOT / "expected" / "matched"
DIFF = os.path.expanduser("~/.venvs/ff4_decomp/bin/asm-differ")

ROWS = re.compile(
    r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s*(.+?)\s*$")

OK_SLOT = ("addiu", "ori", "addu", "nop")
BAD_PAT = re.compile(
    r"gp_rel|\blbu\b|\blb \b|\bsb \b|\blw |\bsw |\bbeq|\bbne|\bble|\bbgt|"
    r"\bslt|\blui|\bmul|\bdiv|\bmult|\.word|jalr|mtc|lwc|swc|mfc|\bjal .*, ")


def rows_of(name):
    out = []
    for raw in (ASM / f"{name}.s").read_text(errors="replace").splitlines():
        m = ROWS.match(raw)
        if m:
            out.append((m.group(2).strip()))
    return out


def parse_chain(rows):
    """Returns list of ("call", callee, const_or_None, thread_bool)."""
    calls = []
    i = 0
    while i < len(rows):
        insn = rows[i]
        m = insn.split(None, 1)
        mnem = m[0]
        args = m[1] if len(m) > 1 else ""
        if mnem == "jal":
            callee = args.split()[0]
            if i + 1 >= len(rows):
                return None
            slot = rows[i + 1].split(None, 1)
            sm = slot[0]
            sargs = slot[1] if len(slot) > 1 else ""
            if sm == "nop":
                calls.append((callee, None))
            elif sm in ("addiu", "ori") and re.match(r"\$a0, \$zero", sargs):
                c = int(re.search(r"0x[0-9A-F]+", sargs).group(0), 16)
                calls.append((callee, c))
            elif sm == "addu" and sargs.replace(" ", "") == "$a0,$v0,$zero":
                calls.append((callee, None, True))
            elif sm == "addu" and sargs.replace(" ", "") == "$a0,$zero,$zero":
                calls.append((callee, 0))
            else:
                return None
            i += 2
        elif mnem in ("addiu", "ori", "nop", "jr", "lw", "sw", "sb"):
            if "$sp" in args or mnem in ("nop", "jr", "lw", "sw", "sb"):
                i += 1
                continue
            return None
        else:
            return None
    return calls


def emit_c(rows):
    seq = parse_chain(rows)
    if seq is None:
        return None, "unparseable"
    # thread resolution
    exprs = []
    stack = []
    for t in seq:
        callee, c = t[0], t[1]
        if len(t) > 2 and t[2]:
            prev = stack.pop()
            exprs.append(f"    {callee}({prev});")
        else:
            arg = f"0x{c:X}" if (c is not None and c > 0xFFFF) else (
                str(c) if c is not None else "")
            e = f"{callee}({arg})"
            exprs.append(f"    {e});" if False else None)
            exprs[-1] = f"    {e};" if arg == "" else f"    {callee}({arg});"
            stack.append(e)
    body = "\n".join(exprs)
    return f'#include "common.h"\nvoid {sys.argv[0]}_unused(void);\n', None


def candidate_c(name, rows):
    seq = parse_chain(rows)
    if seq is None:
        return None
    stmts, pstack = [], []
    for t in seq:
        callee, c = t[0], t[1]
        if len(t) > 2 and t[2]:            # thread previous call result
            expr, idx = pstack.pop()
            nest = f"{callee}({expr})"
            stmts[idx] = f"    {nest};"
            pstack.append((nest, idx))
        else:
            arg = str(c) if c is not None else ""
            expr = f"{callee}({arg})"
            stmts.append(f"    {expr};")
            pstack.append((expr, len(stmts) - 1))
    return f'#include "common.h"\nvoid {name}(void)\n{{\n' + \
        "\n".join(stmts) + "\n}\n"


def score(obj):
    r = subprocess.run(
        f'timeout 25 "{DIFF}" __dummy__ -j .text -o -f {obj} -F '
        f'build/expected/__dummy__.o', shell=True, capture_output=True, text=True)
    return None


def main():
    names = sys.argv[1:] or sorted(
        p.stem for p in ASM.glob("func_*.s")
        if "__asm__" in (SRC / f"{p.stem}.c").read_text(errors="replace")
        if not (MATCHED / f"{p.stem}.o").exists())
    ok = fail = skip = 0
    for n in names:
        rows = rows_of(n)
        c = candidate_c(n, rows)
        if c is None:
            skip += 1
            continue
        (SRC / f"{n}.c").write_text(c)
        subprocess.run(f"make build/{n}.o build/expected/{n}.o",
                       shell=True, capture_output=True)
        # era lane: CC1PSX via wine
        subprocess.run(f"make psx FUNC={n}", shell=True,
                       capture_output=True)
        r = subprocess.run(
            f'timeout 25 "{DIFF}" {n} -j .text -o -f build/psx/{n}.o -F '
            f'build/expected/{n}.o 2>/dev/null', shell=True,
            capture_output=True, text=True)
        if "CURRENT (0)" in r.stdout:
            subprocess.run(f"cp build/expected/{n}.o expected/matched/",
                           shell=True)
            (ASM / f"{n}.s").unlink()
            os.system(f"sed -i '/{n}/d' expected/lanes.txt")
            ok += 1
            print(f"  MATCH {n}")
        else:
            subprocess.run(f"python3 tools/decomp_work.py --restore {n}",
                           shell=True, capture_output=True)
            fail += 1
            print(f"  fail  {n} (re-shelled)")
    print(f"chain_emit done: matched={ok} failed={fail} skipped={skip}")


if __name__ == "__main__":
    main()