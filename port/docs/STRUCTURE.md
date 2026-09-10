# Port structure — how the source is organized

The classic FF4 decomp/ROM layout (`config.asm / menu / field / battle /
cutscene / gfx / data / load`) maps onto the port deck domain-by-domain.
Every module states its ground truth (`src/func_XXXXXXXX.c`) and its
primitive table.

## Domain map (port/src/)

| port/ | PS1 system | classic FF4 equivalent | notes |
|-------|------------|------------------------|-------|
| config/ | options/status/formation menus | menu/config tiers | root driver: root.c (config_menu_run) |
| battle/ | battle screens, targeting, command tables | battle/ | driver: menu_root.c (battle_menu_run) |
| shop/ | store/confirm/detail, buy flow | menu/shop | shop_machine_run + dispatch |
| event/ | event queues, dialogs | field/event | event_drive + queue state |
| status/ | panel grid/pane, status tables | menu/status + data | statusinit.c |
| anim/ | tickers, row anim | menu/anim + gfx | cmd-header + row drives |
| gpu/ | prim/tex packing | gfx | tex_link_packets + bitgather |
| sprite/ | sprite rows (mirror) | gfx/sprites | |
| math/ | trig tables | data/tables | |
| db/ | the cell/catalog register file | data + menu cells | catalogs/cursor/cellstore/flags/... |
| device/ | SDL window/cells/input | (host) | sdl_device.c - the render/poll host |

## The state layers

- `port/include/ff4_window.h` — the 0x800F primitive API (semantic names).
- `port/include/ff4_state.h` — typed cell/input structs.
- `port/include/ff4_font.h` — the 79-slot glyph bank + widths.
- `port/src/db/cells.c` — the raw register file + host VRAM sim.

## Ground rules (FORMAT.md)

1. One behavior = asm order (no reordering).
2. Semantic names; every primitive declares its func_ origin.
3. Ground-truth reference in every module header.
4. No fabricated control flow (gate ladders stay documented stubs).
5. State exported; consolidation into structs is the ongoing pass.

## Track boundaries

- Byte-match: oracle guard only (827 verified; port/docs/BYTE_MATCH_POLICY.md).
- Interpretation: 1,459+ / 2,516 funcs have port modules; the tail is the
  register machines (Avenue 2) — tools/port_bind.py + port_names.py keep
  the naming manifest in sync.
- Resources: extracted banks in port/assets/ (font, TIMs, text tables);
  rip tooling under tools/rip/. See RESOURCES.md.