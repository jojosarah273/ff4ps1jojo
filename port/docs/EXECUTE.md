# FF4 source-port — SESSION RESUME + EXECUTION PLAN
_Read this first if the previous context was compacted. Everything here is
also in git (this file)._

## STATE SNAPSHOT (latest verified numbers)
- Phase A: **2516/2516 C-written (100.0%)**; whole src/ gcc-clean.
- Byte-verified: **827 (32.9%)** (`expected/matched/*.o` count; `decomp/STATUS.md`).
- Callgraph: `expected/callgraph.json` = 2517 callers / 22,544 edges.
- Port: **port/src has 1395 .c modules (0 syntax failures)**; `make deck` in
  `port/` compiles the whole fleet. Coverage: `port/docs/coverage.md` (~2035 funcs).
- All work pushed to `main`. **AVENUE 1 DEVICE LAYER DONE**: from clean,
`make -C port native` (or `bash port/tools/native_link.sh`) compiles the deck,
builds the SDL device layer (`port/src/device/sdl_device.c` — window, cell-bank
sim, hex-glyph renderer, PS1 pad-bit keyboard input), auto-stubs deck-only
unresolved symbols (nm-driven: D_* → vram-sim slot pointers, g_* → data
arrays, else 0-return fns; runtime exports excluded unless the deck needs
names like `step` vs glibc), and links -> **`port/build/ff4-native` (runs,
exit 0 under SDL_VIDEODRIVER=dummy with the config-menu state executing
through the window API)**. Boot drives `config_menu_run()` frames 0..60;
the io_just self-inject keeps menus advancing without input.
Remaining Avenue 1 = richer paint (glyph atlas decode instead of hex ids)
and confirming the PS1 pad-bit poll codes against asm.

## KEY TOOLS (stable, don't rewrite from scratch)
- `tools/port_rowmap.py` — maps a Phase A window-driven screen into an
  interpreted module (semantic names, ground truth, primitive table).
- `port/include/ff4_window.h` — the window/input primitive API (800F family
  named once). It has `*_cur()` no-arg variants for 0-arg call sites.
- `tools/port_stubs.py` — emits stubs for uninterpreted callees.
- `tools/gentrace.py` — per-function call traces (in /tmp, regenerable).
- Bash heredocs with `<< 'EOF'` sometimes silently break with box-drawing
  characters — prefer the `write` tool or python file writes for docs.
- The row-map ARGLESS/CURFIX lists live in `tools/port_rowmap.py` (top);
  the auto-fix loop converges arity errors automatically.

## AVENUE 1 — DEVICE LAYER DONE; NATIVE BUILD STANDARDIZED
Milestone reached: the native binary runs the interpreted config-menu state
through the SDL device layer (see state snapshot). Build recipe now live:
- `make -C port native` = deck + `boot` (device.o/boot2.o/main.o) + stubs + SDL
  -> `port/build/ff4-native`. Smoke: `SDL_VIDEODRIVER=dummy ./build/ff4-native`
  (exit 0; keeps the menu moving via the io_just self-inject, then closes after
  60 frames). With a display it opens a real window and paints hex-glyph cells.
- Stub rules are codified in `port/tools/native_link.sh` (deck-only candidates;
  D_* -> vram-sim slot pointers; g_* -> data arrays; else 0-return fns; `step`
  keeps overriding weak glibc export). Don't revert to blanket void stubs -
  they crashed on value usage and collided with libc (fwrite/signal).
NEXT under Avenue 1:
1. Decode the text atlas from disc data (0x20xx codes -> real glyphs) and
   paint via textured quads instead of hex ids.
2. Verify PS1 pad-bit polls against asm (0x10/0x20/0x40/0x80/0x2000/0x4000...)
   and hook SDL key repeats into g_pressed/g_pad properly.
3. Drive deeper deck states (battle menus) once more window rows are
   interpreted (Avenue 2 pours into the same harness).

## AVENUE 2 — REGISTER-MACHINE INTERPRETATION (the remaining ~500 funcs)
Mapped pool is exhausted (funcs with >=6 window calls). The rest are the
register machines (gate ladders, convolution loops, dispatch trees):
- Next families to hand-interpret (have partial decodes in src comments):
  event anim latches (8018F0xx/801976xx), win gates 800F50xx, battle
  gated rows 80146xxx, the catalog dispatchers 800F9868/80109D68.
- Follow the MODULE QUALITY BAR: exact mirror, ground-truth ref, semantic
  names, no fabricated flow (see port/FORMAT.md + hand-written modules
  like port/src/gpu/bitgather.c as templates).

## AVENUE 3 — BYTE-MATCH RESTRUCTURE (per-function, opportunistic)
- Plateau at 827. Only lever: near-miss C re-shapes toward era-lane idioms.
- Proven idioms: countdown `do{}while(--v != -1)` (got 3), pointer-return
  (80196018 semantics fixed), -G0/-O1 rungs (2.6.0/2.8.1/2.95.2).
- Try: 8019429C (best 580), 80197F24/97FB8 (720-780), then probe the
  score map again; each win is `cp build/expected/<f>.o expected/matched/`
  + `rm asm/nonmatchings/main/<f>.s` + lanes.txt entry.

## AVENUE 4 — PLATFORM/EXPANSION HOOKS (later; keep architecture-ready)
SoH-style mod-hook seam: each interpreted module documents the forward
call sites (menu row order, targeting scan loop, item tables) for
randomizer/mode patches. Widescreen/expansion = Phase C ONLY (per user).

## CADENCE CONVENTIONS (keep)
- Commit + push at every boundary (module batch, milestone, docs refresh).
- Refresh `port/docs/coverage.md`, `expected/callgraph.json`, CHATLOG
  ledger lines at leg boundaries.
- Keep src/ untouched after Phase A (port is a derived work).