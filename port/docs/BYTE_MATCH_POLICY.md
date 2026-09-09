# Byte-match policy (decision record)

Status: **827 / 2516 functions byte-verified (32.9%)**, plateaued after
the era-lane sweep (recorded in `port/docs/results/lane-sweep-1.md`).

## Answer: do we need more byte matching?

**Only as a per-function oracle guard, not as a completion target.**

Rationale:

1. **The deliverable is the port, not a matching score.** Like SoH/SM64,
   the point is human-readable C that runs natively. Byte-match proves a
   line in the port faithfully reproduces its byte-verified Phase A
   source — it validates our *method*, it is not the product.
2. **Plateau reality.** The lane sweep (gcc 2.6.0..2.95.2 × -G0/-G8 ×
   -O1..-O3 × psx) was exhausted; the remaining non-matches are
   pole-order structures, syscall/gate stubs and banked ladders that do
   not match any practical compiler rung (documented in the lane notes).
3. **The guard still applies where it matters.** Every newly interpreted
   module is verified against its asm (register order, branches, tail
   calls) with the FORMAT quality bar; targeted restructure probes stay
   opportunistic (Avenue 3) because they occasionally convert a
   near-miss into a match — but they are not scheduled work.

So: we keep matching opportunistically when a probe looks cheap and
correct; we never block the read/run/mod cycle on raising the score.

## How to raise it later (if ever)

- Per-function near-miss C re-shapes toward era-lane idioms (the
  documented wins: countdown loops, pointer-return restructure, -G0/-O1
  rungs). Tools: `tools/near_try.py`, ladder under `tools/gcc-ladder/`.
- New lanes (gcc 2.7.2.3, clang-tpi) are untested.
- The byte-match harness (`expected/matched/*.o`, `make psx FUNC=...`)
  stays intact regardless.