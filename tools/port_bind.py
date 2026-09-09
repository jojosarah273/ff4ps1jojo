#!/usr/bin/env python3
"""port_bind.py — bind interpreted functions to their raw-id callers.

The interpreted deck is complete for many ids (gen modules define a
semantic function with a ground-truth comment), yet other modules call
them through raw func_801xxxxx ids -> link-time stubs. This tool finds
every (id -> semantic name) pair available in the deck (by reading the
module's ground-truth comment + its exported function name) and
registers it in tools/port_names.py's NM, then suggests a rename.

Usage:
  python3 tools/port_bind.py [--min-refs N] [--apply] [--dry]

For polyglot modules (several ids in one file) the pairing is done by
source order of the ids vs the exported function order, which matches
how the wave emitted them.
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import port_names  # noqa: E402

SRC = ROOT / "src"
PORT = ROOT / "port"


def exported_defs(t):
    """top-level semantic function definitions in source order"""
    out = []
    for m in re.finditer(
            r"^(?:void|u8|u16|u32|s8|s16|s32|int|int32_t|uint32_t|uint16_t"
            r"|uint32_t\s*\*)\s+(gen)?(\w+)\s*\([^;]*\)\s*\{?",
            t, re.M):
        n = m.group(2)
        if not n.startswith("func_"):
            out.append(n)
    return out


def collect():
    pairs = {}
    for p in sorted(PORT.rglob("*.c")):
        if "device" in p.parts or p.name.startswith("gen"):
            continue
        t = p.read_text()
        ids = re.findall(r"src/func_(801[0-9A-F]{5})\.c", t)
        if not ids:
            continue
        names = exported_defs(t)
        for idx, fid in enumerate(ids):
            nm = names[idx] if idx < len(names) else (names[-1] if names else None)
            if nm and nm not in ("main",):
                pairs.setdefault(fid, nm)
    return pairs


def main():
    args = sys.argv[1:]
    apply_ = "--apply" in args
    pairs = collect()
    used = set(port_names.NM.values())
    new = {k: v for k, v in sorted(pairs.items())
           if k not in port_names.NM and v not in used}
    print(f"collected {len(pairs)} pairs; {len(new)} new bindings")
    for k, v in new.items():
        print(f"  func_{k} -> {v}")
    if apply_ and new:
        p = ROOT / "tools" / "port_names.py"
        s = p.read_text()
        lines = ["    # ---- auto-bind (tools/port_bind.py) ----"]
        lines += ['    "%s": "%s",' % kv for kv in new.items()]
        lines.append("}")
        add = "\n".join(lines) + "\n"
        anchor = '    "8018A75C": "event_drive",\n}\n'
        if anchor in s:
            s = s.replace(anchor, '    "8018A75C": "event_drive",\n' + add)
        else:
            s = s.rstrip()[:-1] + "\n" + (lines[0] + "\n").replace(
                "# ---- auto-bind (tools/port_bind.py) ----",
                "\n    # ---- auto-bind (tools/port_bind.py) ----") + "\n}\n"
        p.write_text(s)
        print("registered", len(new), "bindings in tools/port_names.py")


if __name__ == "__main__":
    main()