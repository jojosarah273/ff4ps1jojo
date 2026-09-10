# FF4 source-port — SESSION RESUME + EXECUTION PLAN
_Read this first if the previous context was compacted. Everything here is
also in git (this file)._

## STATE SNAPSHOT (latest verified numbers)
- Phase A: **2516/2516 C-written (100.0%)**; whole src/ gcc-clean.
- Byte-verified: **827 (32.9%)** - oracle guard only (BYTE_MATCH_POLICY).
- Port: **1836 modules**; functions.md catalog: **1848/2516 interpreted
  (73.4%)**; **153 link stubs** (was 885); NM manifest **1815 entries**;
  raw func_ refs in the gen deck **~205** (was ~6,600).
- Native: `make -C port native` -> build/ff4-native; config + battle
  exit 0, 5/5, from any CWD (runtime-collision fix: stubs exclude
  libc/libm/SDL/pthread; `step` keep-listed).
- Fonts: TTF default (final-fantasy-iv.ttf) with swap chain
  (FF4_FONT -> ttf -> ps1 rip -> embedded); 79-slot format-identical.
- Assets/disc: banks extracted in port/assets (ff4.bin, battle.bin,
  memo.bin, exe, TIMs); rip tooling in tools/rip (ps1font, tim, ips,
  atlas, fontpg, ttf2bank); RESOURCES.md maps it all.
- Open lanes: text strings (loader trace), sprites, XA audio, and the
  battle segv suspect from the hint-wave (rolled back; EXECUTE notes).
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