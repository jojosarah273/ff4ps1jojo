/* FF4 source-port — interpreted module for battle_b04_x1000_x2000_x3_gates_ro.
 * Ground truth: src/battle_b04_x1000_x2000_x3_gates_ro.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_b04_x1000_x2000_x3_gates_ro(void)
{
    /* battle: 3B04(0x1000/0x2000)x3 gates; 80167074 rows; a0/a1
       regcmp latch loop; 5480 tail. */
    cell_state(0x1000);
    cell_state(0x2000);
    cell_state_of();
    if (shop_b04_gate_loop_on_s0_v1_latch() != 0)
        goto L1671C4;
    if (io_just() != 0)
        goto L1671C4;
L167194:
    /* a0/v1 + a1/v1 regcmp latches */
    sep_a();
    goto L1671CC;
L1671C4:
    sep_b();
L1671CC:
    return;
}
