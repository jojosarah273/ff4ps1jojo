# FF4KSTER — SNES FF4 (i.e. FF2us) resource map oracle

FF4KSTER_LINUX = a Linux-hosted build of pinkpuff/ff4kster, the Windows
FreeBASIC tool for editing Final Fantasy IV (US "FF2") SNES ROMs. We keep
its *source-verified* address knowledge as an oracle for ripping vanilla
resources — the tool round-trips the same 1MB `ff2.smc` (crc32
0x23084FCD) we use as the art source.

> LoROM mapping: the tool's `ByteAt(offset)` uses **file offsets** directly.
> All offsets below are FILE offsets into the 1MB ROM (0x000000–0xFFFFF).

## ROM address map (from the tool's source)

| What | File offset | Source (ff4kster/) | Notes |
|---|---|---|---|
| Monster gfx records (size, pal, gfx ptr) | `0x7CC00` + i*4 | types/gameobjects/methods/monster.bas | size class (see monstersizes.dat), palette id, gfx_ptr hi/lo |
| Monster names | `0x71A00` + i*8 | monster.bas | 8 bytes each |
| Monster gil | `0x72200` + i*2 | monster.bas | |
| Monster XP | `0x723C0` + i*2 | monster.bas | |
| Monster stat pointers | `0x728A0` + i*2 | monster.bas | converts to a stats record |
| Map properties | `0xA9E84` + i*13 | methods/map.bas | battle bg, grid, tileset, npc placement, palette, npc palettes, music… |
| Encounter rate | `0x74542` + i | map.bas | |
| Tile attributes | `0xA1000` + (tileset-1)*0x100 | methods/tileset.bas | 0x80 tiles × 2B flags |
| Tile → sprite-index aux | `0xA2000` + (tileset-1)*0x400 | tileset.bas | 0x80 tiles × 4 sub-tiles × 2B |
| Map tilemap (grids) | `0xB8200` (surface) / `0xC0200` (under) | map.bas (commented) | RLE: tile<0x80 = literal, ≥0x80 = run |
| 32 map palettes (8×8 colors) | `0xA6000` + p*0x80 | subs/graphics/setpalette.bas | BGR555 << 3 |
| Tileset sprite sheets (4bpp) | see below | subs/read/readdata.bas | 13 sheets |
| Battle char palettes | `0xE7D00` + i*0x20 | (= decomp BattleCharPal, bank 1C:FD00) | 16 × 16 colors BGR555 |

## Tileset sprite sheets (readdata.bas)

```
 1 airship/ship   0xADE00  animated 0xFBBC0
 2 lunar core     0xF61A8  animated 0xFBBC0
 3 sealed cave    0xF0220  animated 0xFBBC0
 4 castle ext     0xEEF40  animated 0xFBEC0
 5 town           0xF1768  animated 0xFC040
 6 house          0xF2EC0  animated 0xFC4C0
 7 castle int     0xF3AC0  animated 0xFC640
 8 crystal room   0xF51E8  animated 0xFCAC0
 9 whale/tower    0xF9700  animated 0xFCAC0
10 feymarch       0xF8200  animated 0xFCAC0
11 lunar sub      0xF61A8  animated 0xFCAC0
12 mountain       0xFD408  animated 0xFCF40
13 cave           0xFEA88  animated 0xFCF40
```

- Each sheet = 4bpp tiles, 32B/tile; the tool decodes rows as
  (bp0,bp1) at +j*2 and (bp2,bp3) at +16+j*2 (same decode as our
  verified pipeline).
- Tile index 0x120–0x12F = "animated" (people/NPC), composed from the
  sheet's animated region; per-map palette = the map's `map_palette`.
- A 16×16 tile = 4 sub-tiles (TL,TR,BL,BR) with per-sub-tile
  palette_index from the A2000 aux table; color0 = transparent.
- tools/rip/ff4kster.py implements this (tilesets + palettes +
  editor-view renders per tileset.bas).

## Battle characters / monsters (the decomp's assembly is the deeper oracle)

The decomp (FF4_FROM_SOURCE) assembly is byte-verified ground truth for
the battle sprite system (file offsets here):

- `BattleCharGfx` pages = bank 1A:8000 → **file 0xD0000**, 0x800B per
  character → 15×0x800 + Golbez 0xD7600 (0x360) + Anna 0xD7960 (0x2E0).
- `BattleCharPal` = bank 1C:FD00 → **file 0xE7D00** (16 × 0x20).
- `EnemyCharTilesPtrs` = bank 0D:FD6D → **file 0x6FD6D**: 14 × 2B
  pointers to pose tilemaps (bank 0D:FD89+).
- Pose tilemap format: 3 rows (3 columns, $ff = blank/terminator),
  columns written RIGHT-to-LEFT; standard poses use 2 tiles/row
  (16×24); pose 12 (DARKNESS) and 13 use all 3 columns (24×24).
- Player battle sprite display = DrawEnemyChar/LoadEnemyCharTiles in
  btlgfx/summon.asm (loads 3 rows of 3 into the tilemap buffer) —
  the layout we feed the ripper.
- Monster gfx pointers in the monster table (0x7CC00) resolve into the
  monster graphics block (MonsterGfx1..5 families); monster sizes from
  monstersizes.dat (2x2..20x18 tiles).

## Rendered deliverables

- 17 character battle pose sheets (14 poses each) in
  `port/assets/gfx/snes/characters/*_poses.png` — signed off.
- tools/rip/ff4kster.py — the tileset/map ripper.
- Same ROM also served the earlier battle-background/scene rips
  (tools/rip/snes.py reads the decomp JSON).