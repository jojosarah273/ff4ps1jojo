#!/usr/bin/env python3
"""Emit stub prototypes/defs for port symbols that have no interpreted
body yet: every func_801xxxxx / func_800Fxxxxx called but not defined in
the deck. Generated from the src function list (all have Phase A C).
"""
import re, subprocess, sys
from pathlib import Path
defined = set()
for p in Path("port/src").rglob("*.c"):
    for m in re.finditer(r"\b(func_\w{8})\s*\(", p.read_text()):
        # a definition is a func_ name followed by ( and then a { later; simplified
        pass
    txt = p.read_text()
    for m in re.finditer(r"^void\s+(func_\w{8})\s*\([^)]*\)\s*$", txt, re.M):
        defined.add(m.group(1))
    for m in re.finditer(r"^(?:u32|s32|u16|s16|u8|int|uint32_t|int32_t|uint16_t|int16_t)\s+(func_\w{8})\s*\([^)]*\)\s*$", txt, re.M):
        defined.add(m.group(1))
called = set()
for p in Path("port/src").rglob("*.c"):
    txt = p.read_text()
    for m in re.finditer(r"(func_\w{8})\s*\(", txt):
        called.add(m.group(1))
missing = sorted(called - defined)
print("/* generated stubs for", len(missing), "uninterpreted port callees */")
for fn in missing:
    # return type is unknown; use void for stubs that compile
    print("void %s(void) { }" % fn)
