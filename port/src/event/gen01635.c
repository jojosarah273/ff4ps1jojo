/* FF4 source-port — interpreted module for battle_v1_v0_v0_gates_dc58_row_at.
 * Ground truth: src/battle_v1_v0_v0_gates_dc58_row_at.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_v1_v0_v0_gates_dc58_row_at(void)
{
    /* battle: v1/v0 + v0 gates; 8018DC58(4) row at L188328. */
    if (io_just() != 0)
        goto L188350;
    /* v0 gates -> L1882B0 / L188308 */
    event_v0_v1_gate_v1_v0_gate_picks(4);
    return;
L188350:
    return;
}
