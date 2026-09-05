#!/usr/bin/env python3
"""Hoist `TYPE name = expr;` declarations to the top of each function body (C89 fix).

Keeps `TYPE name;` at top (without init) and replaces the original line with
`name = expr;`.
"""
import re, sys
from pathlib import Path

def fix(text):
    # find function bodies: after '{' up to matching '}'
    # process per-function
    out = []
    # match each { ... } body
    idx = 0
    funcs = []
    # simple approach: split on '{'...'}' (no nesting), then handle
    depth = 0
    bodies = []
    cur = []
    for ch in text:
        if ch == '{':
            depth += 1
            cur.append(ch)
            continue
        if ch == '}':
            depth -= 1
            cur.append(ch)
            if depth == 0:
                bodies.append("".join(cur))
                cur = []
            continue
        if depth > 0:
            cur.append(ch)
    # process each body
    res = text
    for b in bodies:
        decls = []
        lines = b.split("\n")
        new = []
        for ln in lines:
            m = re.match(r"^(\s*)((?:u8|u16|u32|s8|s16|s32|int|void\s*\*|volatile\s+[A-Za-z0-9_\s\*]+|u8\s*\*|u16\s*\*|u32\s*\*|char\s*\*|const\s+[A-Za-z0-9_\s\*]+))\s+([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+);\s*$", ln)
            if m and not m.group(1).lstrip().startswith("extern"):
                ind, typ, name, expr = m.groups()
                typ = typ.strip()
                decls.append((ind, f"{typ} {name};"))
                new.append(f"{ind}{name} = {expr};")
            else:
                new.append(ln)
        # insert declarations after the opening brace block start
        if decls:
            # find the first '{\n' position; insert after it (skip comments)
            for di, (ind, d) in enumerate(decls):
                # insert after line 1 of body (after '{')
                # find index of first "\n"
                pos = new[0].find("\n")
                if di == 0:
                    new.insert(1, f"{ind}{d}")
                else:
                    new.insert(di + 1, f"{ind}{d}")
            res = res.replace(b, "\n".join(new), 1)
    return res

if __name__ == "__main__":
    for p in sys.argv[1:]:
        path = Path(p)
        s = path.read_text()
        fixed = fix(s)
        if fixed != s:
            path.write_text(fixed)
            print(f"fixed {p}")
        else:
            print(f"unchanged {p}")