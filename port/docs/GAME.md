# THE GAME — reproducing FF4, not "an engine"

Goal restated (user): FF4 is a COMPLETE product. The story is the game:
title screen -> Red Wings over the world -> dialogue on the ship ->
Mysidia flashback -> land in Baron -> the King -> Kain -> cast out ->
the adventure (crystals, damcyan, rydia, leviathan, ordeals, fabul,
troia, the tower, the moon...). An RPG's product = story + world +
systems, and we reproduce it start to finish.

## Why the SNES decomp is the port target

The FF4_FROM_SOURCE decomp is not an engine skeleton - it declares THE
GAME: 121 maps + titles, 512+256 dialogue strings (DTE-decoded
plaintext in the JSON!), event scripts (opcode tables, scriptEncoding),
battle groups/formations/dialogue/messages, monsters, characters,
items, shops, attacks - plus the intro art (splash, prologue,
solar-system, moon) in known pixel formats. All content of the complete
game is in one 1MB ROM + ff4-en-data.json, and we already have the
tools: snes.py (JSON->pixels), FF4KSTER (ROM map/maps oracle),
export pipeline -> .rgba for the native renderer.

## What "port it to native C" means here (honest)

The SNES decomp's game logic = beautifully-commented 65816 ASSEMBLY
(battle/, btlgfx/, field/, menu/, cutscene/, sound/) - NOT C. The C
phase = writing the portable host C for each subsystem guided 1:1 by
that asm + the JSON data (same discipline as Phase A on the PS1, but
the SNES asm is semantic and complete).

The PS1 port keeps its value as the battle/menu knowledge base + the
renderer/device layer; the SNES-native port uses the same window API +
asset pipeline (battle_chars.rgba, enemy canvases, TTF font).

## Build order (story-first)

0. CONTENT PACK: JSON -> host data tables (text, scripts, maps,
   monsters, items, attacks, formations). Tools = linear (data-codec
   formats documented).
1. TITLE + PROLOGUE: title screen (splash 4bpp + tilemap, first pass =
   title_32x28_firstpass.png - palette pending), then the prologue
   cinematics (solar system, moon, Red Wings flight scene) + the intro
   EVENT SCRIPT sequencing it.
2. INTRO SCENE (the story's first minutes): the Red Wings dialogue
   (d1:32-45: the robbing, the landing, Baigan, the King), the Mysidia
   flashback, Baron castle map + walk, kicked-out -> the world opens.
3. FIELD ENGINE: FF4KSTER maps/tilesets/palettes + mapSpriteGraphics
   (walk sprites) -> wandering the real world with encounters.
4. EVENT/DIALOGUE ENGINE: opcode scripts + charTable text -> the story
   machine every scene uses.
5. BATTLE: the SNES battle asm -> full engine (we already analyzed
   monster/char display + pose pipelines); tie encounters in.

## Content pack (DONE, v1)
tools/rip/content_pack.py -> port/data/*.json (~2.1MB):
dialogue, world (383 maps + layouts + triggers + world map),
monsters (224 + stats/AI/items), battles (512 formations + groups),
items/shops (256 w/ real names: FireClaw...), spells+attacks (256 +
animation data), characters + level curves, scripts (event/trigger/
npc/monster = raw opcode bytecode), cinematics (title/prologue/ending/
telescope/world gfx + palettes). Runtime ingestion = reading the pack.

## Proof artifacts
- Intro dialogue decoded: d1:32-45 = the opening script verbatim.
- Palette-correct intro renders: title_32x28.png (real splashPalette),
  prologue_1/2.png (3bpp + real prologuePalette), solar_big_moon.png.
- All gameplay data now in port/data/ (host-usable).
