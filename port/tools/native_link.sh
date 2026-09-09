#!/usr/bin/env bash
# Link the FF4 interpreted deck into a native executable.
# Auto-stubs every undefined port symbol in one shot via nm.
set -u
cd "$(dirname "$0")/.."
if ! ls build/src/*/*.o >/dev/null 2>&1; then
  echo "deck not built; run: make deck"
  exit 1
fi
OBJS=$(find build -path '*src*' -name '*.o')
UNDEF=$(nm -u $OBJS 2>/dev/null | awk '{print $2}' | sed 's/@.*//' | sort -u)
DEF=$(nm $OBJS build/platform/boot.o build/main.o 2>/dev/null | awk '$2 ~ /^[TtDdBbRr]$/ {print $3}' | sort -u)
python3 - "$UNDEF" "$DEF" << 'PY'
import sys
und = set(sys.argv[1].split())
defl = set(sys.argv[2].split())
stub = sorted(u for u in und if u not in defl)
lines = ["/* auto stubs (nm-driven, one shot) */", "#include <stdint.h>", ""]
for s in stub:
    lines.append("void %s(void) { }" % s)
open("platform/stubs.c", "w").write("\n".join(lines) + "\n")
print("stubs:", len(stub))
PY
gcc -O0 -c platform/stubs.c -Iinclude -I../include -o build/stubs.o
gcc -O0 $OBJS build/platform/boot.o build/main.o build/stubs.o -o build/ff4-native 2>/tmp/lk.txt
if [ $? -eq 0 ]; then
  echo "native link OK"
  exit 0
fi
echo "native link FAILED"
grep "undefined reference" /tmp/lk.txt | head -5
exit 1