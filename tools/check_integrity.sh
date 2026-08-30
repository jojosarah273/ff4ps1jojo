#!/usr/bin/env bash
# Integrity guard for the decomp repo. Run before ANY destructive cleanup:
#   bash tools/check_integrity.sh
# Exits 1 (and prints what's wrong) if:
#   - any matched function (expected/matched/*.o) has no src/<name>.c
#   - any src file contains a known-broken marker ("extern void jal")
#   - git reports staged deletions under src/ (never commit a src deletion
#     without a matching .s deletion for the SAME function)
set -u
cd "$(dirname "$0")/.."
bad=0

# 1. Every matched function must keep its C source.
for o in expected/matched/*.o; do
    f=$(basename "$o" .o)
    if [ ! -f "src/$f.c" ]; then
        echo "MISSING-SRC matched: $f (expected/matched/$f.o exists, src/$f.c does not)"
        bad=1
    fi
done

# 2. No known-broken markers inside src/.
if grep -l "extern void jal" src/*.c 2>/dev/null; then
    echo "BROKEN-C: files with 'extern void jal' leak found above"
    bad=1
fi

# 3. Never-broken rule (this is the one that got violated):
#    NEVER delete from src/ with a broad grep. If a staged src/ deletion
#    exists, refuse.
staged=$(git diff --cached --name-status -- src/ | grep '^D' || true)
if [ -n "$staged" ]; then
    echo "STAGED-SRC-DELETIONS:"
    echo "$staged"
    bad=1
fi

# 4. No uncommitted deletions in the working tree either.
wt=$(git status --porcelain src/ | grep -E '^.D' || true)
if [ -n "$wt" ]; then
    echo "UNCOMMITTED-SRC-DELETIONS:"
    echo "$wt"
    bad=1
fi

if [ "$bad" -eq 0 ]; then
    echo "OK: matched sources complete, no broken markers, no deletions."
fi
exit $bad