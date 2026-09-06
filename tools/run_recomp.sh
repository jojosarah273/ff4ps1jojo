#!/usr/bin/env bash
# Boot the native FF4 recomp (recomp-ui frontend) on the desktop.
# Requires: X session (Chrome Remote Desktop) + BIOS + disc configured in
# /tmp/ff4_recomp (game.toml + build/settings.toml).
#
# WHY THIS FILE EDITS SETTINGS ON EVERY RUN:
#   recomp-ui writes build/settings.toml and OVERRIDES game.toml. If its in-
#   memory state ever held bios_hle=false (the generated default), the game
#   stalls on the LLE "loading PSX BIOS" screen. We re-assert the good values
#   here so every launch is safe regardless of what the launcher cached.
#   Set FF4_SKIP_LAUNCHER=0 to keep the launcher menu (default: skip it and
#   boot straight into the game).
set -e
ROOT="${FF4_RECOMP_DIR:-/tmp/ff4_recomp}"
BIOS="${FF4_BIOS:-/home/jojosarah273/DEV/FF4_PS1_DECOMP/SCPH1001.BIN}"
SKIP="${FF4_SKIP_LAUNCHER:-1}"

SET="$ROOT/build/settings.toml"
if [ -f "$SET" ]; then
  sed -i 's/bios_hle\s*=\s*false/bios_hle          = true/; s/fast_boot\s*=\s*false/fast_boot         = true/' "$SET"
  if [ "$SKIP" = "1" ]; then
    sed -i 's/skip_launcher\s*=\s*false/skip_launcher = true/' "$SET"
  else
    sed -i 's/skip_launcher\s*=\s*true/skip_launcher = false/' "$SET"
  fi
  echo "recomp: settings.toml -> $(grep -E 'bios_hle|fast_boot|skip_launcher' "$SET" | tr '\n' ' ')"
fi

if [ ! -x "$ROOT/build/FF4_Recompiled" ]; then
  echo "error: $ROOT/build/FF4_Recompiled missing" >&2
  exit 1
fi
exec "$ROOT/build/FF4_Recompiled" --bios "$BIOS" "$@"