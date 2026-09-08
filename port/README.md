# FF4 decompiled source port — Phase B (in preparation)

This is the **deliverable** of the project: a native Final Fantasy IV (PS1,
SLUS-013.60) **source port** rebuilt from the verified C under `src/`, in the
Ship-of-Harkinian / SM64-PC class — readable, moddable, widescreen/hi-res,
portable C, no BIOS, no disc image requirement.

Contrast with `reference/`: that is the psxrecomp machine-translation of the
original binary, kept only as a playable correctness oracle for Phase A
spot-checks. This directory is the *human* port. Nothing here yet — Phase A
must close (2516/2516 C-written, harness-verified) before interpretation work
starts in anger, but the shape of the port is decided now so Phase A decisions
(naming, data classes, device semantics) land correctly.

## Port shape (decided)

| piece | source |
|---|---|
| game logic | `src/func_*.c` (Phase A output), interpretation pass renames `func_8012XXXX` → semantics |
| device layer | `reference/` oracle's `gpu.c` / `spu.c` / `cdrom.c` become *semantics*, reimplemented against SDL/stdio (no BIOS, no PSX DMA) |
| renderer | SDL2 → soft/GL/MTL backends via device-layer seam |
| audio | SPU semantics → SDL audio / libretro-style callback |
| assets | disc image decoupled: asset-manifest + extracted files (FMVs stay dropped by design) |
| naming | `everything8215/ff4` (SNES disasm) + `symbols/` for the interpretation pass |
| modding | explicit event/status hooks + widescreen, hi-res, randomizer seed hooks (Phase C) |

## Why this is the right end state

- Original PS1 build is C-compiled R3000 (PSY-Q / gcc-2.95 era lanes verified
  per-function) — a true C decomp is exact, not an approximation.
- Full byte-verified asm spec (Phase 0) means every port function is anchored
  to ground truth; the oracle's machine-C is a cross-check, never the source.

See `port/PLAN.md` for the Phase B work breakdown.
