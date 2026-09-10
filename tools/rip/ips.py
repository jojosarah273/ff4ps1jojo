#!/usr/bin/env python3
"""ips.py — parse and apply IPS (International Patching System) patches.

IPS layout:
  'PATCH'                    5-byte magic
  records: 3-byte BE offset + 2-byte BE size (+ size bytes, or if size==0:
           2-byte BE run length + 1 repeat byte)
  'EOF'                      3-byte terminator

Usage:
  python3 tools/rip/ips.py PATCH.ips --dump              # list changed runs
  python3 tools/rip/ips.py PATCH.ips --apply OUT.bin     # onto zero buffer
  python3 tools/rip/ips.py PATCH.ips --apply OUT.bin --size 0x400000
"""
import argparse
import struct
from pathlib import Path

MAGIC = b"PATCH"

def parse_ips(data):
    if data[:5] != MAGIC:
        raise ValueError("not an IPS patch")
    records = []
    off = 5
    while data[off:off+3] != b"EOF":
        rowoff = int.from_bytes(data[off:off+3], "big")
        size = int.from_bytes(data[off+3:off+5], "big")
        off += 5
        if size == 0:
            rle_len = int.from_bytes(data[off:off+2], "big")
            val = data[off+2]
            records.append((rowoff, rle_len, bytes([val]) * 0, rle_len, val))
            off += 3
        else:
            payload = data[off:off+size]
            records.append((rowoff, size, payload, size, None))
            off += size
    return records

def apply_ips(data, records, size):
    buf = bytearray(bytes(size))
    for rowoff, size, payload, efflen, val in records:
        if rowoff + efflen > len(buf):
            continue
        if val is not None:
            buf[rowoff:rowoff+efflen] = bytes([val]) * efflen
        else:
            buf[rowoff:rowoff+size] = payload
    return bytes(buf)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("patch")
    ap.add_argument("--dump", action="store_true")
    ap.add_argument("--apply")
    ap.add_argument("--size", type=lambda s: int(s, 0), default=0x400000)
    args = ap.parse_args()
    data = Path(args.patch).read_bytes()
    records = parse_ips(data)
    if args.dump:
        print(f"{Path(args.patch).name}: {len(records)} records:")
        runs = []
        for rowoff, size, payload, efflen, val in records:
            runs.append((rowoff, rowoff + efflen))
        merged = []
        for a, b in sorted(runs):
            if merged and a <= merged[-1][1]:
                merged[-1] = (merged[-1][0], max(merged[-1][1], b))
            else:
                merged.append((a, b))
        total = 0
        for a, b in merged:
            l = b - a
            total += l
            print(f"  run 0x{a:06x}..0x{b:06x} ({l} bytes)")
        print("total changed:", total)
        # show the biggest run's header bytes (font runs look uniform)
        if merged:
            a, b = max(merged, key=lambda m: m[1]-m[0])
            print(f"largest run @ 0x{a:06x} len {b-a}:")
            buf = bytearray(bytes(b - a))
            for rowoff, size, payload, efflen, val in records:
                if rowoff >= a and rowoff + efflen <= b:
                    if val is not None:
                        buf[rowoff-a:rowoff-a+efflen] = bytes([val])*efflen
                    else:
                        buf[rowoff-a:rowoff-a+size] = payload
            print("  first 64 bytes:", buf[:64].hex())
    if args.apply:
        out = apply_ips(b"", records, args.size)
        Path(args.apply).write_bytes(out)
        print(f"applied to zero buffer ({args.size:#x}) -> {args.apply}")

if __name__ == "__main__":
    main()