# FF4 source-port — resource inventory (non-code assets to rip)

Everything the interpreted deck addresses that is **not code**: text
pages, glyph atlases, icons, windows, portraits, tables. This is the
SoH/zeld4recomp-style asset pipeline mapping: the disc data -> named
resources the port loads at runtime.

## How the deck addresses resources

The window primitives take a literal id (txt_set/txt_draw/cell_put/
page/wnd_open...). Across the deck there are **1821 distinct ids**;
the pages with real weight (from a full-deck scan):

| page | ids/refs | class (what the code does with it)                    |
|------|----------|-------------------------------------------------------|
| 0x00xx | 282 / 6886 | small pad/window handles, cursor cells             |
| 0x17xx | 46 / 466  | window/status frames (0x1700-0x1727 gates)          |
| 0x20xx | 70 / 312  | **charset page** (glyphs; cell_char maps 0x20xx->ascii) |
| 0x21xx | 40 / 265  | icon page (0x2100..0x2116; region zeroed at 800D2100) |
| 0x1Bxx | 103 / 472 | monster/status text ids                              |
| 0x38xx | 42 / 137  | message strings (0x388B/0x38E5/0x38FE...)            |
| 0x14xx | 2 / 67    | attribute window block                               |
| 0x39xx | 35 / 153  | message strings (0x3949-0x397B)                      |
| 0x35xx | 60 / 197  | options/value page                                   |
| 0x43xx/0x42xx | 33 / 230  | string page + frame ids (0x4200/0x4300 region)   |
| 0xEBxx | 5 / 25    | **portraits** (0xEBE6-0xEBE9 = character facing)     |
| 0xEDxx | 5 / 10    | portrait/icon pair                                   |
| 0xEFxx..0xF6xx | ~140 | battle anim data tables (F1/F2/F4 heavy)        |
| 0x1Exx | 6 / 54    | window-frame ids (0x1E01..0x1E05, 0x1E00)            |

Big literals (>0x10000) in the scan are non-text window offsets - they
are address-class args (0x8000-class banks), not text.

## Memory map (from the cell layer)

- `0x800D0000`   - catalog base (text/gfx page, copied from disc at boot)
  - `+0x2100..0x2200` icon/text region (cleared by 800F9C98)
  - `+0x2200` / `+0x2400` catalog sub-pages (bank tag 0x70/0x7E)
- `0x800C8000`   - pos-hi side bank (cell_cursor_ret2 writes here)
- `0x800E2400`   - second big page (bank tag 0x7F)
- `0x7FFC8000`   - overflow bank (saved-bank pointer + offset)

The disc file that maps into 0x800D0000 is loaded by the boot/kernel
layer (not in the 2516-function main-EXE corpus) - the source file
name/sector is the first unknown to resolve with a disc in hand.

## The rip list (what the ISO must provide)

| # | asset | deck access | format to decode | status |
|---|-------|-------------|------------------|--------|
| 1 | text atlas (0x20xx glyph page) | cell_char() | per-glyph bitmaps + widths | decoder written, data needed |
| 2 | message strings (0x38xx/0x39xx/0x14xx/0x43xx ids -> text) | txt_draw labels | FF4 message table + LZ? | unknown layout |
| 3 | window frames (0x17xx/0x1Exx) | wnd_open/page | TIM/CLUT blobs | unknown |
| 4 | icons (0x21xx page) | cell_put icons | 16x16 tiles + CLUT | unknown |
| 5 | portraits (0xEBxx/0xEDxx) | cell_draw | 48x64-ish + CLUT | unknown |
| 6 | battle anim data (0xF1xx..) | battle rows | packed sprite/anim records | unknown |
| 7 | cursor/pad icons (0x43/0x41 ids) | cell_put | small tiles | unknown |
| 8 | audio (music/sfx) | spu.c layer (reference/) | XA + VAG banks | out of main exe scope |
| 9 | FMV | (skipped by design) | STR streams | excluded |
| 10 | save/format structures | memory mirror | n/a (RAM) | in-code |

## Tooling

- `tools/rip/iso.py` - PS1 disc reader: ISO9660 directory + raw MODE2/2352
  sector access. `python3 tools/rip/iso.py <disc.img> --list` lists every
  file; `--extract NAME` pulls a file (sector index recorded).
- `tools/rip/atlas.py` - glyph-atlas decoder for the 0x800D page: takes a
  dump of the region and renders a font sheet (structure: cell rows of
  8x8/16x16 tiles; palette from the CLUT if inline).
- `tools/rip/ids.py` - regenerates the page/refcount table above from the
  deck (keeps this doc honest as new pages appear).

## Next unknowns to resolve with a disc in hand

1. Which disc file loads into 0x800D0000 (boot code + sector verification).
2. Whether text is compressed (LZ variants are cheap to detect: run-length
   header heuristics + entropy).
3. The message-id -> string table base (likely the 0x29xx list the cursor
   reads - cell_cursor_read walks a u16 table at the bank).