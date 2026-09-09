# FF4 (PS1, SLUS_013.60) — Full C Decompilation → Native Port

The end goal is a **Ship of Harkinian / SM64-PC / Zeld64Recomp-class native
port of Final Fantasy IV (PlayStation, USA)**: the game rebuilt from
verified C source — readable, moddable, portable — not an
emulator, not a machine-translated recomp.

The PS1 FF4 is a **C-compiled R3000 game** (Tose's original PS1 rebuild —
compiler-confirmed per-function by lane classification: PSY-Q CC1PSX /
gcc-2.95.2). That makes a true C decompilation the correct and achievable
path — the same recipe used by every modern decomp-port.

**Byte-verified coverage of the entire main EXE text: 2516 / 2516.**
**C-written: 100.0% (2516 funcs) — the Phase A mission is the rest.**

## Phases

| Phase | Goal | State |
|---|---|---|
| 0 — Verified disassembly | Full text coverage byte-verified (maspsx lanes, splat, asm-differ) | ✅ done (2516/2516) |
| A — Complete C decomp | Every function as harness-verified C (byte-match where the compiler reproduces it; runtime-verified where it doesn't) | ▶ in progress (2516/2516 C-written, 827 byte-verified) |
| B — Interpretation | Rename/restructure into modern readable C; native host: SDL, stdio assets, no BIOS; native renderer/audio swap | ▶ in progress (port/src) |
| C — Expansion | New modes, randomizer/mod framework, cross-platform (portability = plain C) — separate track, after the native port | — |

**Phase A milestones** (regenerated every session by `tools/decomp_status.py`):
<!-- MILESTONES:BEGIN -->
- [x] 25% C-written (~629 funcs) — DONE (2516 funcs, 100.0%)
- [x] 50% C-written (~1258 funcs) — DONE (2516 funcs, 100.0%)
- [x] 75% C-written (~1887 funcs) — DONE (2516 funcs, 100.0%)
- [ ] 100% C-written, with ≥50% byte-verified (matched)
- [ ] All stubborn functions runtime-verified against the reference oracle
<!-- MILESTONES:END -->

The **reference oracle** — a `psxrecomp` build of the original binary (see
`reference/`) — keeps the game playable today and is the correctness oracle
for spot-checks; its `gpu.c`/`spu.c`/`cdrom.c` become the native
device-layer semantics for Phase B. It is a *tool of the decomp*, not the
deliverable: the deliverable is the **decompiled source port** (Phase B).

## FMV policy

The bundled FMVs (intro-only, unrelated to *Chrono Trigger*-style in-story
cutscenes) are **removed by design**: copyrighted, zero gameplay value. The reference build's `psx.skip-fmv` mod (default-on) skips them now; the
native port will not ship FMV playback at all.

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
reference/               psxrecomp reference oracle (playable today; tool of the decomp)
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
| byte-verified (matched) | 827 | 32.9% |
| real-C (match pending) | 1689 | 67.1% |
| asm shell (to do) | 0 | 0.0% |
| **total** | 2516 | 100% |
| **C-written** | **2516** | **100.0%** |
<!-- STATUS:END -->

































































































































































































































































































































































































































































## Phase B — the interpreted source port (in progress)

`port/` is the deliverable: a **native FF4** rebuilt from the Phase A C,
in the Ship-of-Harkinian / Zelda64-Recomp / SM64-PC / Link-to-the-Past
tradition — readable, moddable, portable C.

**Track: `.c/.h` module pairs.** Every module is an *exact interpretation*
of one or more byte-verified Phase A functions: the asm-ordered behavior
kept 1:1, but with semantic names, a declared primitive table, and a
ground-truth reference comment. Format: see `port/FORMAT.md`. Architecture:
see `port/docs/ARCHITECTURE.md`. Reading guide:
see `port/docs/READING.md`.
Function catalog (every function, its port name, its byte-match status):
`port/docs/functions.md`.

```
port/src/       1395 interpreted modules (0 failures, gcc clean)
  battle/       battle screens, targeting, spell/item-cast, menu root
  config/       options/status/store/formation screens + root driver
  shop/         store/confirm/detail screens + buy-sell machine
  anim/         tickers, row drivers, GPU-cmd rows
  event/        event queues, confirm dialog, list init
  status/       panel grid/pane/state + status table init
  gpu, sprite, math, dev   exact-mirror subsystems
  device/       SDL2 device layer (window, cell bank sim, hex-glyph
                renderer, PS1 pad-bit input) - the native paint path
  mapped via tools/port_rowmap.py + port/include/ff4_window.h
```

Running the interpreted deck natively (device layer online, stubs for
the not-yet-interpreted register machines):

```
make -C port native          # deck + device + stubs + SDL -> port/build/ff4-native
SDL_VIDEODRIVER=dummy ./port/build/ff4-native   # headless smoke: exit 0
```


Byte-match track continues in parallel (ladder lane micro-sweeps).
Status: `expected/matched` count in `decomp/STATUS.md`; latest sweep
results in `port/docs/results/`.
