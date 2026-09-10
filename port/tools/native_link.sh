#!/usr/bin/env bash
# Generate link-time stubs for the FF4 interpreted deck (deck-only
# unresolved symbols), then link the native binary with the SDL device
# layer so every window-API name resolves to a real implementation.
#
# Stub rules (learned on the SDL device layer bring-up):
#   * candidates  = unresolved symbols of DECK objects only (not platform)
#   * excluded    = anything the deck or the device layer defines,
#                   plus __* and main
#   * D_* names   -> pointer variables whose slot cells point into a shared
#                    vram sim (constructor-filled) so raw-cast derefs stay
#                    in bounds
#   * g_* names   -> zero data arrays (some hand-written modules use them
#                    as global tables)
#   * everything  -> 0-returning functions with unspecified args, so value
#                    usage and raised-return reads are safe
#   * runtime-lib exports (e.g. fwrite) are stubbed only when the deck
#     references them; the executable definition wins over weak libc
#     exports (needed for deck names like `step`, which collides with
#     glibc's step@GLIBC_2.2.5)
set -u
cd "$(dirname "$0")/.."
PLATDIR=platform
if ! ls build/src/*/*.o >/dev/null 2>&1; then
  echo "deck not built; run: make deck"
  exit 1
fi
OBJS=$(find build -path '*src*' -name '*.o' ! -path '*src/device*' | tr '\n' ' ')
UNDEF=$(nm -u $OBJS 2>/dev/null | awk '{print $2}' | sed 's/@.*//' | sort -u)
DEF=$(nm $OBJS build/device.o build/${PLATDIR}/boot2.o build/main.o 2>/dev/null | awk '$2 ~ /^[TtDdBbRr]$/ {print $3}' | sort -u)
python3 - "$UNDEF" "$DEF" << 'PY'
import sys, subprocess
und = set(sys.argv[1].split())
defl = set(sys.argv[2].split())
prov = set()
for lib in ("/lib/x86_64-linux-gnu/libc.so.6",
            "/lib/x86_64-linux-gnu/libm.so.6",
            "/lib/x86_64-linux-gnu/libSDL2-2.0.so.0",
            "/lib/x86_64-linux-gnu/libpthread.so.0"):
    try:
        out = subprocess.run("nm -D %s" % lib, shell=True,
                             capture_output=True, text=True).stdout
        for tok in out.split():
            prov.add(tok.split("@")[0])
    except Exception:
        pass
keep = {"step"}   # deck primitive 800F6364; shadows glibc's weak step
stub = sorted(u for u in und
              if (u in keep or
                  (u not in defl and u not in prov
                   and not u.startswith("__") and u != "main"
                   and not u.startswith("_GLOBAL"))))
lines = ["/* auto stubs (nm-driven, one shot; deck-only unresolved). */",
         "#include <stdint.h>", "",
         "static uint32_t g_vram_sim[4096];",
         "static uint32_t g_slots[64];", ""]
ptrs = [s for s in stub if s.startswith("D_")]
for s in ptrs:
    lines.append("uint32_t *%s = g_slots;" % s)
lines.append("")
lines.append("__attribute__((constructor)) static void init_slots(void)")
lines.append("{ int i; for (i = 0; i < 64; i++)")
lines.append("    g_slots[i] = (uint32_t)(uintptr_t)g_vram_sim; }")
lines.append("")
for s in stub:
    if s.startswith("D_"):
        continue
    if s.startswith("g_"):
        lines.append("uint32_t %s[4096];" % s)
    else:
        lines.append("uint32_t %s() { return 0; }" % s)
open("platform/stubs.c", "w").write("\n".join(lines) + "\n")
print("stubs:", len(stub))
PY
gcc -O0 -c ${PLATDIR}/stubs.c -Iinclude -I../include -o build/stubs.o
echo "stubs built; link with: make -C port native"