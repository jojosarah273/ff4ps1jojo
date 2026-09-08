# FF4 (PS1, SLUS_013.60) — Full C Decompilation → Native Port

The end goal is a **Ship of Harkinian / SM64-PC / Zeld64Recomp-class native
port of Final Fantasy IV (PlayStation, USA)**: the game rebuilt from
verified C source — readable, moddable, widescreen/hi-res, portable — not an
emulator, not a machine-translated recomp.

The PS1 FF4 is a **C-compiled R3000 game** (Tose's original PS1 rebuild —
compiler-confirmed per-function by lane classification: PSY-Q CC1PSX /
gcc-2.95.2). That makes a true C decompilation the correct and achievable
path — the same recipe used by every modern decomp-port.

**Byte-verified coverage of the entire main EXE text: 2516 / 2516.**
**C-written: 72.5% (1825 funcs) — the Phase A mission is the rest.**

## Phases

| Phase | Goal | State |
|---|---|---|
| 0 — Verified disassembly | Full text coverage byte-verified (maspsx lanes, splat, asm-differ) | ✅ done (2516/2516) |
| A — Complete C decomp | Every function as harness-verified C (byte-match where the compiler reproduces it; runtime-verified where it doesn't) | ▶ in progress (1825/2516 C-written, 740 byte-verified) |
| B — Interpretation | Rename/restructure into modern readable C; native host: SDL, stdio assets, no BIOS; native renderer/audio swap | — |
| C — Expansion | Widescreen, hi-res, new modes, randomizer/mod framework, cross-platform (DC-class portability = plain C) | — |

**Phase A milestones** (regenerated every session by `tools/decomp_status.py`):
<!-- MILESTONES:BEGIN -->
- [x] 25% C-written (~629 funcs) — DONE (1825 funcs, 72.5%)
- [x] 50% C-written (~1258 funcs) — DONE (1825 funcs, 72.5%)
- [ ] 75% C-written (~1887 funcs) (1825 so far)
- [ ] 100% C-written, with ≥50% byte-verified (matched)
- [ ] All stubborn functions runtime-verified against the recomp oracle
<!-- MILESTONES:END -->

The reference `psxrecomp` build (see `recomp/`) keeps the game **playable
today** and acts as the correctness oracle; its `gpu.c`/`spu.c`/`cdrom.c`
become the native device-layer semantics for Phase B.

## FMV policy

The bundled FMVs (intro-only, unrelated to *Chrono Trigger*-style in-story
cutscenes) are **removed by design**: copyrighted, zero gameplay value. The
recomp's `psx.skip-fmv` mod (default-on) skips them now; the native port will
not ship FMV playback at all.

## Phase A tooling

- `tools/decomp_work.py NAME…` — emit a work-packet (`decomp/work/<n>.md`):
  byte-verified specs + psxrecomp oracle + toolchain lane + verify recipe.
- `tools/decomp_status.py` — progress report → `decomp/STATUS.md`.
- `tools/re_shell.py NAME…` — restore the verified-asm shell for a candidate
  that failed byte-match (keep the tree truthful).
- Vertex: `make build/<n>.o` (modern lane) → `asm-differ` `-j .text` vs
  `build/expected/<n>.o`; era lanes via `make psx FUNC=<n>` (wine CC1PSX).
  Register a match: `cp build/expected/<n>.o expected/matched/` + delete the
  `.s`. Names for Phase B come from `everything8215/ff4` (SNES disasm, the
  same game's data lineage) + `symbols/`.

## Layout (condensed)

```
asm/nonmatchings/main/   byte-verified split disassembly (the spec)
src/*.c                  per-function C (matched / candidate / verified-asm shell)
expected/lanes.txt       per-function toolchain lane (psx/psxs/modern/ladder/asm)
expected/matched/        byte-verified C registrations
include/  tools/         maspsx, psyq(CC1PSX), sweep, bulk, sas2c, decomp_*
Makefile                 build lanes + diff targets
decomp/                  STATUS.md, work packets, manifest
recomp/                  reference psxrecomp build (playable today)
refs/  symbols/          Ghidra/SNES naming references
PROGRESS.md              session ledger
```

More detail: `PROGRESS.md`. Verification harness: `tools/check_integrity.sh`.

**Phase A progress** — full table in `decomp/STATUS.md`.

<!-- STATUS:BEGIN -->

**Phase A progress** — full table in `decomp/STATUS.md`.

<!-- STATUS:BEGIN -->
| state | count | % |
|---|---|---|
| byte-verified (matched) | 740 | 29.4% |
| real-C (match pending) | 1085 | 43.1% |
| asm shell (to do) | 691 | 27.5% |
| **total** | 2516 | 100% |
| **C-written** | **1825** | **72.5%** |
<!-- STATUS:END -->






















































































































































































































































































































































