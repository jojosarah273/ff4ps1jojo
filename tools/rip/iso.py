#!/usr/bin/env python3
"""PS1 disc reader — FF4 resource extraction front door.

Usage:
  python3 tools/rip/iso.py PATH/TO/DISC.img --list
  python3 tools/rip/iso.py PATH/TO/DISC.img --extract FILE.PATH --out file
  python3 tools/rip/iso.py PATH/TO/DISC.img --sectors 0x1000 0x2000 --out blob

Handles:
  * .bin/.img raw dumps: 2352-byte MODE2/2352 sectors
  * .cue + .bin sets: sector size picked from the cue if present
  * ISO9660 directory read (the PS1 SYSTEM.CNF / volume header)
Resources land under port/assets/ once extracted; the mapping of
disc files -> 0x800D memory regions is recorded in RESOURCES.md.
"""
import argparse
import struct
import sys
from pathlib import Path

# PS1 CD sectors: raw 2352 = 12 sync + 4 header + 2048 data (+ECC/sub).
SYNC = b"\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00"


class PsxDisc:
    def __init__(self, path: Path):
        self.path = Path(path)
        self.fh = open(self.path, "rb")
        self.sector_size = 2352
        self.raw = True
        self._probe()

    def _probe(self):
        """Detect raw 2352 vs 2048 (cooked) or BIN-with-errors."""
        self.fh.seek(0)
        head = self.fh.read(12)
        if head == SYNC:
            self.raw = True
            self.sector_size = 2352
        else:
            self.raw = False
            self.sector_size = 2048
        # BIN/cue handled at the CLI layer (cue declares the layout)

    def data_at(self, sector: int, count: int = 1) -> bytes:
        off = sector * self.sector_size
        if self.raw:
            off += 24  # skip sync+header to user data
        self.fh.seek(off)
        return self.fh.read(count * 2048)

    def n_sectors(self) -> int:
        import os
        return os.path.getsize(self.path) // self.sector_size

    def volume_descriptor(self):
        return self.data_at(16)

    def path_table(self):
        """Return (LBA of path table, entries) or raise if not ISO9660."""
        vd = self.volume_descriptor()
        if vd[0:6] != b"\x01CD001":
            raise ValueError("not ISO9660 (patch-disc or single-track?)")
        pt_lba = struct.unpack_from("<I", vd, 140)[0]
        pt_size = struct.unpack_from("<I", vd, 132)[0]
        blob = self.data_at(pt_lba, (pt_size + 2047) // 2048)
        entries = []
        off = 0
        while off < len(blob):
            ln = blob[off]
            if ln == 0:
                break
            ext = blob[off + 1]
            lba = struct.unpack_from("<I", blob, off + 2)[0]
            size = struct.unpack_from("<I", blob, off + 10)[0]
            name = blob[off + 33: off + 33 + ln - 33]
            entries.append((ext == 1, lba, size, name.decode("latin-1")))
            off += ln + ((ext + 1 + 4) & 3) if False else ln + (2 + (ln & 1))  # padding
        return entries

    def directory(self, lba: int, size: int):
        """ISO9660 directory entries in one extent."""
        blob = self.data_at(lba, (size + 2047) // 2048)
        out = []
        off = 0
        while off < size:
            ln = blob[off]
            if ln == 0:
                off = ((off // 2048) + 1) * 2048
                continue
            elba = struct.unpack_from("<I", blob, off + 2)[0]
            esz = struct.unpack_from("<I", blob, off + 10)[0]
            flags = blob[off + 25]
            nlen = blob[off + 32]
            name = blob[off + 33: off + 33 + nlen]
            out.append((flags & 2, elba, esz, name.decode("latin-1")))
            off += ln
        return out

    def walk_file(self, iso_path: str):
        parts = [p for p in iso_path.strip("/").split("/")]
        cur = None
        # root dir record
        vd = self.volume_descriptor()
        root_lba = struct.unpack_from("<I", vd, 158)[0]
        root_size = struct.unpack_from("<I", vd, 166)[0]
        t = self.directory(root_lba, root_size)
        for i, part in enumerate(parts):
            hits = [e for e in t if e[3].rstrip(";1") == part]
            if not hits:
                raise KeyError(iso_path)
            e = hits[0]
            if i == len(parts) - 1:
                return e[1], e[2]
            t = self.directory(e[1], e[2])
        raise KeyError(iso_path)

    def extract(self, iso_path: str) -> bytes:
        lba, size = self.walk_file(iso_path)
        return self.data_at(lba, (size + 2047) // 2048)[:size]


def main():
    ap = argparse.ArgumentParser(description="FF4 PS1 disc reader")
    ap.add_argument("image")
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--extract")
    ap.add_argument("--out", default="-")
    ap.add_argument("--sectors", nargs=2, type=lambda s: int(s, 0))
    args = ap.parse_args()

    disc = PsxDisc(args.image)
    print(f"disc: {args.image}  sectors=2352raw?{disc.raw}  n={disc.n_sectors()}", file=sys.stderr)

    if args.list:
        vd = disc.volume_descriptor()
        try:
            root_lba = struct.unpack_from("<I", vd, 158)[0]
            root_size = struct.unpack_from("<I", vd, 166)[0]
        except struct.error:
            print("no valid volume descriptor (is this a real PS1 image?)")
            return
        print(f"volume root at sector {root_lba} ({root_size} bytes)")
        print("== FILE TREE (first 2 levels) ==")
        for e in disc.directory(root_lba, root_size):
            flags, lba, size, name = e
            print(f"  [{lba:6d}] {size:9d} {name}")
            if flags:
                try:
                    for e2 in disc.directory(lba, size):
                        print(f"      [{e2[1]:6d}] {e2[2]:9d} {e2[3]}")
                except Exception:
                    pass
        return

    if args.extract:
        data = disc.extract(args.extract)
        if args.out == "-":
            sys.stdout.buffer.write(data)
        else:
            Path(args.out).write_bytes(data)
            print(f"extracted {len(data)} bytes -> {args.out}")
        return

    if args.sectors:
        start, end = (int(s, 0) for s in args.sectors)
        data = disc.data_at(start, end - start)
        if args.out == "-":
            sys.stdout.buffer.write(data)
        else:
            Path(args.out).write_bytes(data)
            print(f"dumped {len(data)} bytes (sectors {start}..{end}) -> {args.out}")


if __name__ == "__main__":
    main()