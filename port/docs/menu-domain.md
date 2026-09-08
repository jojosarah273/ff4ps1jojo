# Menu domain map (Phase B interpretation, first cut)

Roots and their interpreted roles. Everything below is the battle/config
menu web decoded in Phase A; the named views are the Phase B target.

## Config/status menu
- `801539C4` — config menu root (344 calls; the options screen state machine)
- `80120070` — config-menu dispatcher (5 jr-$a0 tables over D_8019ED40)
- `8012CC74`/`8012CD6C`/`801382C8` — option-row renderers (0x1A0x/0x1B0x texts)
- `80135B54` — ability-bank select (D_8019A068 matrix)
- `801360AC`/`80135DE4`..`80136014` — ability slot latches (80197688 family)
- `80151C0C` — options dispatch (8015BB9C/8015E84C/8015D1C8 rows)
- `8015240C`/`8015254C`/`80152CDC`..`80152C50` — options sub-rows
  (config cell reads + on/off windows)
- `8015A89C`/`8015AACC`/`8015ABEC`/`8015A56C` — options value pages
- `80127F2C`/`80138458` — status-pane text-grid recipes (0x20xx codes)
- `8012E1C0`/`80124024`/`801411BC`/`80141290` — battle cell writers

## Window primitives (interpreted in port/src/panel.c)
- catalog base: `800F3B04` / `800F3B9C` / `800F3CC4`
- latch set: `800F5198` / `800F52BC` / `800F533C` / `800F521C`
- flag repack: `800F50BC` / `800F7BE8` (twins)
- subtract/arm: `800F7F48` / `800F7FCC` / `800F9730` / `800F9784` /
  `800F97D0` / `800F9820`
- cursor: `800F94B8`
- state cells: D_8019ED40(mask)/44(held)/48(cursor out)/4C(cursor)/
  50(cell)/68(flags)

## Next
- Battle menu root `80116720` (commands) + `8010DA88` tables
- Spell/ability trees (`8013EFD8`..`80141C98`)
