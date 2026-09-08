# Battle menu domain map (Phase B, second cut)

Battle command/item/ability web. Mapped from the Phase A session's decoded
roots and the callgraph.

## Roots
- `80116720` — battle menu root (master command loop)
- `8010DA88` — battle-command dispatch (73-entry jr table over cmd id)
- `8014A154` / `8014A4DC` — twin battle-item tables (46 entries)
- `80140598` / `8014EAE4` / `8015D1C8` — sub-dispatch jr tables
- `800F9868` / `80109D68` — catalog dispatchers (register-only; Phase B
  interprets from the gate ladders)

## Command rows
- targeting: `80115D2C` (battle status loops), `80113F3C`/`8010F944`
- spell cast: `80149614`/`8014F0BC`/`8013E2F8`/`801462DC`/`80147888`/
  `80143738`/`80142450`/`80143ED4`/`8013E73C`/`8013DC04`
- ability rows: `80130F90`/`801317F0`/`801361A4`/`80135330`/`801376F0`/
  `80137938`/`8013B270`/`8013B95C`/`8013C2FC`/`80139CF4`/`8013BB0C`
- party/formation: `8012E33C`/`8012E5A8`/`8012E844`/`8012EAC0`/`8012F9D0`

## Presentation layer
- status table init: `80178C14`; panel recipes: `80127F2C`/`80138458`
- sprite blits: `8017D7D8`/`8017D898`/`8017D980`/`8017DA64` +
  `8017DD08`/`8017DF20`/`8017E220` (register engines)
- anim latches: `801976xx`/`80197Dxx`/`8018F0xx` pole family
- GPU cmd words: `80195668`/`80195700`/`801957B4`/`801973B8`

## Interpretation targets
First pass: panel state (port/src/panel.c), status grid
(port/src/status/panel_grid.c), then the targeting loop `80115D2C` —
it is the highest-caller hub in the battle menus.
