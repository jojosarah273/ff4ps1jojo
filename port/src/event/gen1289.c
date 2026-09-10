/* FF4 source-port — interpreted module for battle_c40_rows_s0_v1_latches_rout.
 * Ground truth: src/battle_c40_rows_s0_v1_latches_rout.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c40_rows_s0_v1_latches_rout(void)
{
    /* battle: 80188240/80193C40/80193924 rows; s0/v1 latches route
       801881AC or the 80188240 spin loops. */
    func_80188240();
    func_80193C40();
    battle_anim_v1_v0_gate_tree_b8_row();
    /* s0/v1 + s0/v0 latches -> L187BBC/L187BD0/L187BE0 */
    goto L187BF4;
L187BC0:
    for (;;) {
        func_80188240();
        if (io_just() != 0)
            continue;
        break;
    }
L187BD0:
    func_801881AC();
    goto L187BF4;
L187BE4:
    for (;;) {
        func_80188240();
        if (io_just() != 0)
            continue;
        break;
    }
L187BF4:
    /* s1/v0 latch -> L187C0C */
    for (;;) {
        func_80188240();
        if (io_just() != 0)
            continue;
        break;
    }
L187C0C:
    return;
}
