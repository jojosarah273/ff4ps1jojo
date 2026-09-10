/* FF4 source-port — interpreted module for battle_a0_v1_latch_v0_gate_c58_row.
 * Ground truth: src/battle_a0_v1_latch_v0_gate_c58_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_a0_v1_latch_v0_gate_c58_row(void)
{
    /* battle: a0/v1 latch + v0 gate; 80191C58 rows. */
    /* a0/v1 latch -> L1888A4 */
    if (io_just() == 0)
        goto L188850;
    fn_1x91c58();
    goto L188884;
L188850:
    fn_1x91c58();
L188884:
    if (io_just() != 0)
        goto L188898;
    goto L1888AC;
L188898:
    return;
L1888AC:
    return;
}
