#!/usr/bin/env python3
"""tail_namer.py — bind + name the stub-deck tail (the raw gen defs).

For every stub-referenced id that HAS a raw func_<id>( definition, this
generates a semantic name (from the src role comment, else a
domain/hex fallback) and registers it in tools/port_names.py's NM.
Then `tools/port_names.py rename` makes the raw defs+calls semantic and
the gen callers bind to real code instead of link stubs.

Collisions with existing names/hand defs are reported for hand-fixing.

Usage:  python3 tools/tail_namer.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import port_names  # noqa: E402

SRC = ROOT / "src"
PORT = ROOT / "port"


def role_comment(fid):
    p = SRC / ("func_" + fid + ".c")
    if not p.exists():
        return ""
    t = p.read_text()
    m = re.search(r"/\*\s*([^*]+?)\s*\*/", t)
    if not m:
        return ""
    return " ".join(m.group(1).split())


def make_name(fid):
    role = role_comment(fid)
    if role and len(role) > 3:
        # first meaningful keywords -> snake_case
        words = re.findall(r"[A-Za-z_][A-Za-z0-9_]*", role.lower())[:8]
        if words:
            name = "_".join(words)[:34].strip("_")
            if re.match(r"^[a-z][a-z0-9_]*$", name):
                return name
    # fallback: domain hint + short hex
    hi = fid[:3]
    lo = fid[3:]
    domain = {"800": "cell", "801": "fn"}.get(hi, "fn")
    return "%s_%sx%s" % (domain, fid[2], lo.lower())


def main():
    apply_ = "--apply" in sys.argv
    tail = json.load(open("/tmp/tail.json"))
    cnt, have_def = tail["cnt"], tail["have_def"]
    used = set(port_names.NM.values())
    new = {}
    coll = {}
    for fid in sorted(have_def, key=lambda f: -cnt[f]):
        if fid in port_names.NM:
            continue
        name = make_name(fid)
        if name in used:
            coll[fid] = (name, cnt[fid])
            continue
        used.add(name)
        new[fid] = name
    print(f"new nameable: {len(new)}, collisions: {len(coll)}")
    for fid, (nm, n) in sorted(coll.items(), key=lambda kv: -kv[1][1])[:12]:
        print(f"  COLLIDE {fid} ({nm}) refs={n}")
    if apply_ and new:
        p = ROOT / "tools" / "port_names.py"
        s = p.read_text()
        lines = ["    # ---- tail-namer batch ----"]
        lines += ['    "%s": "%s",' % kv for kv in sorted(new.items())]
        lines.append("}")
        m = re.search(r"\n\}(?=\n# ids whose extern)", s)
        assert m
        s = s[:m.start() + 2] + "\n" + "\n".join(lines) + s[m.start() + 2:]
        p.write_text(s)
        print("registered", len(new))
        json.dump(list(new), open("/tmp/tail_names.json", "w"))


if __name__ == "__main__":
    main()