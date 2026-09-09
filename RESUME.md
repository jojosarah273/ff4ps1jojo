# FF4 source-port — SESSION RESUME + EXECUTION PLAN
_Read this first if the previous context was compacted. Everything here is
also in git (this file)._

## STATE SNAPSHOT (latest verified numbers)
- Phase A: **2516/2516 C-written (100.0%)**; whole src/ gcc-clean.
- Byte-verified: **827 (32.9%)** (`expected/matched/*.o` count; `decomp/STATUS.md`).
- Callgraph: `expected/callgraph.json` = 2517 call
- **READABILITY PASS (this stretch)**: `tools/port_names.py` names the
  hot 0x800F primitive family (151 entries -> ff4_window.h): raw
  func_800F refs in gen modules cut 3947 -> ~277 (93%), 1466 externs
  dropped; `tools/port_catalog.py` -> `port/docs/functions.md` (the
  2516-function readable catalog); db/ cell layer now bound live in the
  binary; typed state layer (`include/ff4_state.h` + device input
  struct). Byte-match policy recorded (oracle guard, not target):
  `port/docs/BYTE_MATCH_POLICY.md`; reading guide: `port/docs/READING.md`.
- **AVENUE 1 MILESTONE (SDL device layer)**: `make -C port native` from clean
  compiles the 1395-module deck, builds the SDL device layer
  (`port/src/device/sdl_device.c`), auto-stubs deck-only unresolved symbols
  (nm-driven, D_*/g_*/fn rules in `port/tools/native_link.sh`), and links
  `port/build/ff4-native` which RUNS the interpreted config-menu state and
  exits 0 under SDL_VIDEODRIVER=dummy. Boot drives `config_menu_run()` frames
  0..60; the io_just self-inject keeps menus advancing headless.json` = 2517 callers / 22,544 edges.
- Port: **port/src has 1137 .c modules (0 syntax failures)**; `make deck` in
  `port/` compiles all 1139 objects. Coverage: `port/docs/coverage.md` (~1726 funcs).
- All work pushed to `main`. Latest commit at time of writing: `dfc177ab`.

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

## AVENUE 1 — CONSOLIDATION + NATIVE LINK (NEXT PRIORITY; my pick)
Goal: first linkable native executable (stubs-backed) + then the device layer.
1. Find duplicate definitions: `cd port && gcc -O0 build/*.o build/*/*/*.o
   build/*/*.o -o /tmp/t 2>&1 | grep "multiple definition"`.
   Known dupes: `panel_cursor_next` (panel.c vs panel_more.c),
   `miscrows.c` vs earlier rows modules (row_* names duplicated).
   Fix = rename the hand-written module functions to unique port names
   (e.g. `panel_cursor_next_v(state*)` in panel_more; suffixed row_* names).
2. Regenerate stubs (`python3 ../tools/port_stubs.py > platform/stubs.c`
   is WRONG for link — the right one is link-error-driven: run gcc, capture
   `undefined reference to \`X'`, emit `void X(void){}` per symbol. Was done
   once into `port/platform/stubs.c` — regenerate after renames).
3. `gcc -O0 build/stubs.o build/boot.o build/main.o build/*.o ... -o /tmp/ff4_deck_test`
   until it links. Then it runs (boots a window eventually).
4. **Device layer (B.2)** — map the window API to SDL2:
   - txt/cell writes (`txt_set/8168/81E8/8xxx codes 0x20xx`) -> glyph atlas
     once the text-encoding table is decoded from the disc data.
   - `page/page_paint` -> SDL render commands.
   - key polls `io_poll(0xNN)` -> SDL input translation (the 0xNN codes are
     PS1 pad bits: 0x200..? USE the art: left=0x20,right=0x10,up=0x08,down=0x04,
     cross=0x40,circle=0x80 — verify against asm).
   - config root driver: `port/src/config/root.c` + `screen_f.c` (800FB430).
5. Success signal: SDL window opens and the config menu state runs.

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