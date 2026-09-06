#!/usr/bin/env bash
# Boot the native FF4 recomp (recomp-ui frontend) on the desktop.
# Requires: X session (Chrome Remote Desktop) + BIOS + disc already configured
# in /tmp/ff4_recomp/game.toml.
set -e
ROOT="${FF4_RECOMP_DIR:-/tmp/ff4_recomp}"
BIOS="${FF4_BIOS:-/home/jojosarah273/DEV/FF4_PS1_DECOMP/SCPH1001.BIN}"

if [ ! -x "$ROOT/build/FF4_Recompiled" ]; then
  echo "error: $ROOT/build/FF4_Recompiled missing — rebuild with tools/build_recomp.sh" >&2
  exit 1
fi
exec "$ROOT/build/FF4_Recompiled" --bios "$BIOS" "$@"