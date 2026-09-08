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
