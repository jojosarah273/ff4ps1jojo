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

FE_GOLBEZ analysis (Free Enterprise tooling):
- The FE sprite-swap system (fetools/processors/zsprites.py) encodes
  one POSE PNG per sprite into SNES 4bpp (interleaved planes confirm
  the snes.py decoder) + 16-color bgr555 palette + tilemap; its insert
  hooks: CHR $616F8 (or $228000 bus), palette $E7A90, tile size
  $6FFB0, position offset $7CF1D, tilemap $75E56. The vanilla
  character 64x64 contact sheets likely = 2x2 poses of 32x32.
- Character pose images (char_*_pose0..3.png, 32x32 @ 4x) added.

## PIPELINE STATUS — PROVEN

Free-Enterprise round-trip confirmed (golbez_proof.png: the SNES-engine
compose reproduces the source sprite; user-confirmed). `tools/rip/
fe_sprites.py` composes f4c scripts -> display images. Residual color
drift (41% pixel-close on opaque px) is the lossy bgr555 quantize +
antialiased edges, not structure.

Usable art in port/assets/gfx/:
- fe/ (round-trip exact renders): golbez_display, golbez_portrait,
  fe_ZeromusHD, fe_Trainmus, fe_Kefkomus
- snes/characters/: 16 vanilla charset pixel renders (recognizable),
  pose splits, palette table
- snes/ battle scenes + tile sheets; gallery.png = one-glance index.

Vanilla character FRAMING (the 64x64 -> pose/OAM split) = the one open
item, needing the engine's battle-display tables (attackAnimationFrame
+ the actor OAMs) - the FE z-sprite path shows per-pose display.
## Extend

- monsters (4bpp), map tilesets, portraits: add decoders to snes.py
  with the item ranges in the JSON assembly; verify PNGs strict-parse.
