# Emulator screenshots = the ground truth for the intro renders

Drop real-game screenshots here as PNGs, then:

    python3 tools/rip/shot_compare.py refs/<shot>.png  ../<render>.png --target 256x224

The tool prints the discrepancy as numbers (MAE, worst blocks, color
histograms, diff heatmap) so we can iterate the render formats until
they match — no eyeballing required.

## Needed captures (from the emulator, SNES FF2us or Final Fantasy IV)

| file          | what                         | native res |
|---------------|------------------------------|------------|
| title.png     | the TITLE screen             | 256x224    |
| prologue1.png | the flight scene (Red Wings) | 256x192    |
| prologue2.png | the Baron/landing scene      | 256x224    |
| moon.png      | the intro moon               | 256x224    |

Any emulator zoom/size is fine (e.g. 512x448, 1024x896) — the tool
normalizes. Also grab one in-game BARON map shot later for the field
engine (name it baron_town.png).
