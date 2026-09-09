# FF4 source-port architecture (SoH / Zelda64 / SM64 / LttP-inspired)

The port is built in layers so the interpreted game logic can be lifted
onto a native host exactly like the SM64-PC / SoH decomp-ports:

```
┌────────────────────────────────────────────────────────────┐
│ port/src/game/   interpreted FF4 logic (domains; the port  │
│                  of the decompiled C, like SM64's game/)   │
├────────────────────────────────────────────────────────────┤
│ device/          PS1 device semantics → native             │
│                  (GPU→SDL renderer seam, SPU→audio,        │
│                  CD-ROM→asset table, memcard→files)        │
├────────────────────────────────────────────────────────────┤
│ platform/        SDL2/GL/MTL backends, input, files        │
├────────────────────────────────────────────────────────────┤
│ assets/          extracted disc assets + manifest          │
│                  (FMV excluded by policy)                  │
└────────────────────────────────────────────────────────────┘
```

## Naming / structure (port of the decomp-ports' conventions)
- One **header per domain** (like SM64's headers / SoH's `z_` headers):
  `port/include/ff4_<domain>.h` with the public API of each module.
- State consolidation: the raw PS1 cells become **named global structs**
  (e.g. `struct PanelState g_panel` — already in `port/src/panel.h`);
  domains graduate from scalar globals to structs as they are
  interpreted, zero-behavior-change at each step.
- **Hook seam for modding** (SoH mod-loader style): each interpreted
  module documents the call sites that a randomizer/mode patch would
  target (menu row order, target scan loop, item tables) — Phase C.

## Exactness ladder (how a function joins the port)
1. `src/func_X.c` — byte-verified Phase A C (ground truth).
2. `port/src/<domain>/X.c` — interpreted copy: same behavior, semantic
   names, primitive table, reference comment (current state).
3. `port/src/<domain>/X.c` merged into a domain API with the global
   structs; device-layer seams introduced.
4. True subsystem (renderer/listen/input) replaces the emulated path.

## First milestones
- [ ] boot to title on SDL2 with the config-menu driver
- [ ] battle menu + targeting on the native input path
- [ ] save/load via file-based memcard
- [ ] widescreen + hi-res through the renderer seam (Phase C)
```
gcc -fsyntax-only -I include port/src/panel.h 2>/dev/null; git add -A && git commit -q -m "port: ARCHITECTURE.md — layered source-port plan (SoH/SM64-inspired)" && git push origin main 2>&1 | tail -1; grep -c MATCH /tmp/micro_sweep.log; ls expected/matched | wc -l; tail -1 /tmp/micro_sweep.log
