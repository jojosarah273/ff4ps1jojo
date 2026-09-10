#!/usr/bin/env python3
"""port_catalog — render port/docs/functions.md, the readable function
catalog of every 0x800F/0x801x function and where it lives in the port.

Sources:
  * src/func_*.c        role comment (first /* */ after the decl)
  * port/src/...        interpreted module + its function name
  * tools/port_names.py semantic name for named 0x800F primitives
  * expected/matched/   byte-verified marker
"""
import re
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / "src"
PORT = ROOT / "port"
MATCHED = ROOT / "expected" / "matched"
sys.path.insert(0, str(ROOT / "tools"))
from port_names import NM  # noqa: E402

# reverse: semantic name -> id (unique names; keeps the catalog's id
# links intact even when the rename touched the ground-truth comments)
_REV = {}
for _k, _v in NM.items():
    _REV.setdefault(_v, []).append(_k)
REV_UNIQ = {_v: _k[0] for _v, _k in _REV.items() if len(_k) == 1}


def role_of(fid: str) -> str:
    p = SRC / (fid + ".c")
    if not p.exists():
        return ""
    t = p.read_text()
    # role comment directly after the function decl, else any leading comment
    m = re.search(r"\)\s*\n\s*\{?\s*\n\s*/\*\s*([^*]+?)\s*\*/", t)
    if not m:
        m = re.search(r"/\*\s*([^*]+?)\s*\*/", t)
    if not m:
        return ""
    return " ".join(m.group(1).split())[:140]


def find_module(fid: str):
    """Return (module_path, function_name) if some port module interprets it."""
    marker = "src/%s.c" % fid
    for p in PORT.joinpath("src").rglob("*.c"):
        if "device" in p.parts:
            continue
        t = p.read_text()
        if marker in t:
            # the module's exported function: first "void name(" or "RET name(" at top level
            m = re.search(r"^(?:void|u8|u16|u32|s8|s16|s32|int|uint32_t|int32_t)\s+(?:gen)?(\w+)\([^)]*\)\s*(?:[\{;])", t, re.M)
            if m:
                return str(p.relative_to(PORT)), m.group(1)
            return str(p.relative_to(PORT)), ""
    return None, None


def main():
    rows = []
    ids = sorted(p.stem for p in SRC.glob("func_*.c"))
    for fid in ids:
        mod, fname = find_module(fid)
        if not mod:
            # recover via reverse manifest: build name -> module once
            if "_FMOD" not in globals():
                _fm = {}
                for _p in PORT.joinpath("src").rglob("*.c"):
                    if "device" in _p.parts:
                        continue
                    _t = _p.read_text()
                    for _m in re.finditer(
                            r"^(?:void|u8|u16|u32|s8|s16|s32|int|int32_t|uint32_t)"
                            r"\s+(\w+)\s*\(", _t, re.M):
                        _fm.setdefault(_m.group(1), str(_p.relative_to(PORT)))
                globals()["_FMOD"] = _fm
            _wanted = NM.get(fid[5:])
            if _wanted and _wanted in globals()["_FMOD"]:
                mod = globals()["_FMOD"][_wanted]
                fname = _wanted
                globals().setdefault("_RSOL", []).append(fid)
        bv = (MATCHED / (fid + ".o")).exists()
        role = role_of(fid)
        rows.append({
            "id": fid[5:],
            "name": NM.get(fid[5:], ""),
            "fname": fname or "",
            "module": mod or "",
            "bv": bv,
            "role": role,
        })

    # statuses
    interp = sum(1 for r in rows if r["module"])
    stubs = sum(1 for r in rows if not r["module"])
    named = sum(1 for r in rows if r["name"])
    bv = sum(1 for r in rows if r["bv"])

    lines = [
        "# FF4 port — function catalog",
        "",
        "Every Phase A function and where it lives in the port. The `name`",
        "column is the semantic 0x800F primitive name (tool:",
        "`tools/port_names.py`, header: `port/include/ff4_window.h`);",
        "`module` is the interpreted module that owns the function;",
        "`bv` marks byte-verified. Unassigned rows are stubbed until the",
        "register machines are interpreted (Avenue 2).",
        "",
        f"- functions: {len(rows)}   interpreted: {interp}   stub-only: {stubs}",
        f"- byte-verified: {bv}   named primitives: {named}",
        "",
        "| id | name | module fn | module | bv | role |",
        "|----|------|-----------|--------|----|------|",
    ]
    for r in rows:
        lines.append("| %s | %s | %s | %s | %s | %s |" % (
            r["id"], r["name"] or "-", r["fname"] or "-",
            r["module"] or "-", "Y" if r["bv"] else "",
            r["role"] or ""))
    out = ROOT / "port" / "docs" / "functions.md"
    out.write_text("\n".join(lines) + "\n")
    print("resolved via manifest:", len(globals().get("_RSOL", [])))
    print(f"wrote {out} ({len(rows)} rows)")


if __name__ == "__main__":
    main()