# Assets & Resource Pipeline

Everything here is **ripped from a vanilla, distributable-friendly source**:
the SNES FF4 (FF2us) ROM — user-copyright-safe once only the *font* is
bundled (the TTF is a reproduced font, not copyrighted game art). The
port's font system stays on the TTF.

## Layout

```
port/assets/
  font_*                     final font bank products (TTF -> 8x8 bank parser)
  font_ff4.ttf               default font (FF4-font recreation, swappable)
  gfx/
    fe/                      verified SNES-engine renders (FE pipeline)
      golbez_display.png     golbez composed from a compiled FE ROM
      golbez_portrait.png fe_ZeromusHD fe_Trainmus fe_Kefkomus
    gallery.png              one-glance sheet
    snes/
      battle_bg_00..16.png   17 battle backgrounds (decoded, verified)
      battle_scene_00..06    composed 256x192 scenes
      scene_v2_00..02        alternate scene compositions
      characters/
        <Char>_poses.png     17 chars x 14 battle poses FINAL (signed off)
  scratch/                   ALL rejected/diagnostic attempts, preserved
                             for reference only (not for the build)
```

## The character battle pose pipeline (FINAL, user-verified)

Source ROM: FF2us 1MB `ff2.smc` (crc32 0x23084FCD). File offsets:

| Data | File offset | Notes |
|---|---|---|
| Character gfx pages | 0xD0000 (+0x800 each) | 15 chars; Golbez 0xD7600, Anna 0xD7960 |
| Character palettes | 0xE7D00 (+0x20) | 16 x 16 colors BGR555 |
| Pose tilemap pointers | 0x6FD6D | 14 x 2B -> 0D:FD89+ |
| Pose tilemaps | 0x6FD89 (+9B each) | verified byte-identical vs btlgfx_data.asm |

Pose tilemap = 3 rows of 3 columns, $ff = blank, **columns written
right-to-left**. Standard poses use 2 of 3 columns (16x24). Pose 12
(DARKNESS, Cecil-DK exclusive) and pose 13 use 3 columns (24x24).

Decode: 4bpp (planes bit-interleaved: bp0/bp1 at +j*2, bp2/bp3 at
+16+j*2), palette = battle char palette, pixel 0 = transparent.

docs/FF4KSTER.md = the FF4KSTER source-verified address map (maps,
tilesets, monsters) used as the ROM oracle.

## The FE (Free Enterprise) tools

fetools/processors/zsprites.py = one pose PNG -> SNES 4bpp + bgr555
palette + packed tilemap; used as the authoritative encoder oracle.
Our compose = full placement canvas (crop misaligns; verified).
tools/rip/fe_sprites.py stays available for FE-authored art.

## Fonts

- Default: TTF (`font_ff4.ttf`) -> tools/rip/ttf2bank.c -> 79-slot 8x8
  1bpp bank + widths, swap chain FF4_FONT -> font_ff4ttf_8x8.bin ->
  font_ps1_letters_8x8.bin -> embedded. Format-identical swaps.
- SNES dialogue charset: vanilla ROM 0x05741D ([row][0xff], A-Z a-z +3);
  font.dat (FF4KSTER) documents the char->code map (A->0x42 etc).
