# Lane sweep #1 (modern lane, full pool) — 2025-XX-XX result

Swept all 1776 match-pending candidates with the modern lane (gcc-13 +
maspsx) and re-checked the 8 near-misses on the psx/CC1PSX lane.

| bucket | count |
|---|---|
| byte-match (CURRENT 0) | 0 |
| < 100 bytes off | 0 |
| 100–400 bytes off | 8 |
| > 400 bytes off | 1768 |

Near-misses (200–320 bytes): 800F3A68, 8015902C, 80196018, 801976E8,
801976F8, 80193194, 801932B8, 80193560. The psx lane did not improve them
(200–1160 bytes).

## Reading
The modern lane reproduces none of the remaining pool; era lanes are not
closing the gap either. 740 byte-verified (29.4%) is where the current
pipeline cooperates. The Phase A exit criterion (≥50% byte-verified) needs
either the deep-pass restructure of candidate C toward the observed lanes,
or a lane/toolchain tuning effort — meanwhile Phase B interpretation uses
the C as-is (its readability is the deliverable).

## Update: ladder micro-sweep (tiny candidates, <=0x80)
Swept the tiny pool over gcc-2.6.0/2.6.3/2.7.2/2.7.2cdk/2.8.1/2.95.2 +
psx lanes. First matches (all gcc-2.95.2):
- func_800F4998, func_800F4B78, func_800F4BB0 (window flag helpers)
- more pending as the sweep continues; 746 matched so far.

## Update: ladder lane sweep (tiny band) — 25 more matches
gcc-2.8.1 × 15, gcc-2.6.0 × 5, gcc-2.95.2 × 3, gcc-2.7.2 × 2.
**Byte-verified 746 → 780 (31.0%).** The era lanes are the productive
track for the remaining pool; mid-size band sweep next.

## Update: mid-size band (0x81..0x200) — 34 more
gcc-2.8.1 × 22, gcc-2.95.2 × 12. **Byte-verified 780 → 814 (32.4%).**
Includes battle-menu screens 80119DE4/80119740 and shop 8011DA88.

## Update: full ladder sweep complete (0x81..0x500)
Big-band yield is minimal (1 match — 8011DBF0 [2.95.2]); the era lanes
match small/simple shapes, not the mid register machines.
**Byte-verified 814 → 815 (32.4%).** Next lever = targeted restructure
of near-misses (countdown-loop style), not more lane sweeps.

## Final: top band (>0x500) — 8015902C [gcc-2.6.0]
**Total sweep yield this pass: +73 (743 → 816, 32.4%).** Lanes: 2.8.1/2.95.2
dominate small shapes; 2.6.0 caught a big screen (8015902C). The era lanes
are exhausted for the current C; remaining byte-match work is targeted
near-miss restructure.
