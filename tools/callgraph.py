#!/usr/bin/env python3
"""Extract caller->callee relationships from decoded C sources + record them."""
import re, os, json, glob
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
def main():
    cg = {}
    for f in glob.glob(os.path.join(ROOT, "src", "*.c")):
        name = os.path.basename(f)[:-2]
        txt = open(f).read()
        if "__asm__" in txt:  # shell, skip
            continue
        callees = set()
        for m in re.finditer(r"\b(func_[0-9A-Fa-f]+)\s*\(", txt):
            callees.add(m.group(1))
        if callees:
            cg[name] = sorted(callees)
    out = os.path.join(ROOT, "expected", "callgraph.json")
    json.dump(cg, open(out, "w"), indent=1)
    n = sum(len(v) for v in cg.values())
    print(f"wrote {out}: {len(cg)} callers, {n} edges")
if __name__ == "__main__":
    main()
