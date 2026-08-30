# FF4 PS1 (SLUS_013.60) — Decompilation

Byte-matching decompilation of **Final Fantasy IV** (PlayStation, USA) main
executable `ISODUMP/slus_013.60`, with the explicit goal of 100% match.

**Status: 36 / 2516 functions matched (1.4%)** — see `PROGRESS.md`.

## Layout

```
ISODUMP/slus_013.60   original EXE (baserom, gitignored)
slus_013.60.yaml      splat split config
asm/nonmatchings/main split disassembly (splat-generated)
src/*.c               per-function C candidates (matched or in progress)
include/              common.h + splat macro includes
tools/maspsx/         vendored maspsx (patched, see below)
tools/psyq/           PsyQ 4.4 CC1PSX.EXE for the era lane (gitignored)
tools/sweep.py        small-function pattern classifier
tools/try_match.py    build+diff one candidate
diff_settings.py      asm-differ configuration
Makefile              build lanes
PROGRESS.md           match ledger + blockers
```

## Toolchain

| Stage | Tool |
|---|---|
| split | `splat 0.50.0` (venv `~/.venvs/ff4_decomp`) |
| modern lane | `mipsel-linux-gnu-gcc-13 -G8 …` → maspsx → GNU as |
| era lane | `wine tools/psyq/bin/CC1PSX.EXE (-G8)` → maspsx → GNU as |
| verify | `asm-differ -o -f … -F …` (`CURRENT (0)` = match) |

Load map: EXE code at file `0x800` → vram `0x800F2400`; `gp = 0x8019ECFC`.

### Why two lanes
The original binary was built with the PsyQ gcc 2.8.1-era compiler. Modern
gcc-13 matches simple functions but diverges on load ordering, register
allocation, and sdata classification. When a candidate compiles but
asm-differ shows register/order deltas, rebuild it through the **era lane**:

```sh
make psx FUNC=func_XXXX        # wine CC1PSX → maspsx → diff
```

### maspsx patches (vendored in tools/maspsx)
- `%gp_rel` / `%lo` / `%got(…)(base)` load/store operands are passed through
  to GNU as instead of being mangled into `lui $at,%hi(%gp_rel)`.
- `.extern sym, size` with `size <= -G threshold` marks the symbol as a
  gp-relative sbss member (ASPSX behavior), so CC1PSX's bare symbol refs
  become `%gp_rel(sym)($gp)`.

## Make targets

```sh
make build/func_XXXX.o             # modern lane object
make build/expected/func_XXXX.o    # reference object from the split .s
make psx FUNC=func_XXXX            # era lane + diff (single-shot)
make diff FUNC=func_XXXX           # modern lane + diff
splat split slus_013.60.yaml       # re-split / refresh asm
```

## Matching protocol
1. `python3 tools/sweep.py` — classify trivials (extended regularly).
2. Write the deduced C in `src/<func>.c`, `python3 tools/try_match.py <func> '<body>'`.
3. `CURRENT (0)` → remove its `INCLUDE_ASM` line from `src/main.c`, delete
   `asm/nonmatchings/main/<func>.s`, commit.
4. Non-zero → try the era lane once; still stuck → note in `PROGRESS.md`.

## Filesystem / git notes
Working tree lives on **exFAT**: no symlinks/exec-bits (invoke scripts via
`python3`/`bash`), case-insensitive filenames (keep names lowercase),
128 KB clusters (small-file slack is fine, 61 GB free). exFAT has no
journaling — push to GitHub regularly:
`git push origin main` (credential helper configured).

## References
- [maspsx](https://github.com/mkst/maspsx) — ASPSX emulation for GNU as
- [splat](https://github.com/ethteck/splat) — binary splitter
- [asm-differ](https://github.com/simonlindholm/asm-differ) — diff UI
- PSX-SpX hardware docs — MMIO at `0x1F80xxxx`
- Style: silent-hill-decomp / xenogears-decomp (psyq, splat-based)