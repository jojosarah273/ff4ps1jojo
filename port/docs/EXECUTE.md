# FF4 source-port — SESSION RESUME + EXECUTION PLAN
_Read this first if the previous context was compacted. Everything here is
also in git (this file)._

## STATE SNAPSHOT (latest verified numbers)
- Phase A: **2516/2516 C-written (100.0%)**; whole src/ gcc-clean.
- Byte-verified: **827 (32.9%)** — see port/docs/BYTE_MATCH_POLICY.md
  (policy: oracle guard only, not a completion target).
- Port: **1395+ modules (0 syntax failures)**; coverage 1473 funcs
  (`port/docs/coverage.md`, `port/docs/functions.md` catalog).
- Readability pass done: raw func_800F refs in gen modules cut
  **3947 -> ~277 (93%)** via the `tools/port_names.py` manifest (151
  semantic names, declared in ff4_window.h); db/ layer live in the
  binary; typed state layer (ff4_state.h).
- Native: `make -C port native` -> `port/build/ff4-native` runs BOTH
  the config-menu state (`./build/ff4-native`) and the battle-menu
  driver (`./build/ff4-native battle`), exit 0 under
  SDL_VIDEODRIVER=dummy, consistent across repeated runs. Catalog +
  register-machine mirrors now return host pointers into the g_vram_
  sim (catalog_addr wrapper), so interpreted code derefs safely; the
  fn-address-as-bank quirks map to the sim base.
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

## AVENUE 2 — REGISTER-MACHINE INTERPRETATION
WAVE FLOW (corrected, from waves 6-7): the gen wave defines nearly all
mid/row machines under RAW id names. The primary action is therefore:
  1. NM-register id->semantic name,
  2. run tools/port_names.py rename (the raw gen defs rename with it),
  3. ONLY map a new file when no `func_<id>(` definition exists
     (check: grep -rn "^..func_<id>(" port/src).
No new files needed for the vast majority of the 386 remaining stubs -
the work is naming + binding, verified by build + the nm dup-drop. (the remaining ~500 funcs)
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

## AVENUE 5 — RESOURCE RIPPING (non-code assets; user-added track)
The deck addresses 1821 distinct text/window/gfx ids; the disc data that
maps into 0x800D0000 is not in the repo (no ISO present). Inventory +
tooling live in:
- port/docs/RESOURCES.md  (id-page table, memory map, rip list, unknowns)
- tools/rip/iso.py  (PS1 disc reader: ISO9660 tree + raw 2352 sectors)
- tools/rip/atlas.py (glyph-page decoder -> PNG font sheet, verified)
- tools/rip/ids.py   (TODO: regenerate the page table from the deck)
When an ISO is dropped in (any .bin/.img path):
  1. `python3 tools/rip/iso.py <disc> --list` -> file tree
  2. find the file that loads into 0x800D0000 (boot kernel read;
     verify by sector hash against the RAM base pattern)
  3. `atlas.py` the text region -> font; then wire cell_char to the
     real atlas and decode the 0x38xx/0x14xx message strings.
  4. portraits/icons/windows (0xEBxx/0x21xx/0x17xx) -> TIM/CLUT decode
     into the port's renderer (device layer swap).

## CADENCE CONVENTIONS (keep)
- Commit + push at every boundary (module batch, milestone, docs refresh).
- Refresh `port/docs/coverage.md`, `expected/callgraph.json`, CHATLOG
  ledger lines at leg boundaries.
- Keep src/ untouched after Phase A (port is a derived work).