/* FF4 source-port — interpreted module for battle_rows_a0_v0_latch_picks_the.
 * Ground truth: src/battle_rows_a0_v0_latch_picks_the.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_a0_v0_latch_picks_the(void)
{
    /* battle rows: a0/v0 latch picks the 0x40/0x50 vs 0x80/0x50
       window sets. */
    if (gate_cur() != 0)
        goto L145B48;
    latch(0x40);
    cell_put(0x45);
    latch(0x50);
    cell_put(0x46);
    return;
L145B48:
    latch(0x80);
    cell_put(0x45);
    latch(0x50);
    cell_put(0x46);
    return;
}
