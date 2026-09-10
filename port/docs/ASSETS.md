# Asset pipeline (SoH-style: source the ORIGINAL game)

The PS1 port reused the SNES art (no new sprites - user-confirmed, and
the FF4 PS1 menu text is the same translation). So the port sources
graphics from the SNES decomp's *decoded art* instead of re-ripping the
PS1 disc - exactly how SoH/SM64 pull graphics from the original ROM.

## Source

- `FF4_FROM_SOURCE/ff4/ff4-en-data.json` - the SNES FF4 ROM fully
  decoded by its decomp tooling (graphics as base64, palettes RGBA,
  tilemaps). PS1 = same art.

## Tool

`tools/rip/snes.py`:
- battle backgrounds: 3bpp SNES tiles -> 8x8 tile sheets (17)
- composed battle scenes: upper+lower layouts -> 256x192 PNGs (7)
  -> `port/assets/gfx/snes/`
- monsters: 4bpp sheets + palettes (in progress)

## The port's resource model

- Text/UI font: TTF default (`font_ff4.ttf`) + swap chain (79-slot
  banks are format-identical - swaps can't break message layout).
- Battle/menu art: the SNES-derived PNGs above (future: wired into the
  SDL renderer for real backgrounds).
- PS1 disc banks (ff4.bin etc.) stay the *code* reference (RESOURCES.md).


## Characters (battle sprites) — status

`characterGraphics` (0x1A8000, 4bpp) decodes to 64x64 pixel arrays per
character (the decomp obj); rendered with per-char palettes ->
`port/assets/gfx/snes/characters/char_*_pix.png` (verified: each reads
as the character; the exact frame layout inside the 64x64 needs the
OAM/animation tables - attackAnimationScript + battle display metadata
- next step, not blocking).
## Extend

- monsters (4bpp), map tilesets, portraits: add decoders to snes.py
  with the item ranges in the JSON assembly; verify PNGs strict-parse.
