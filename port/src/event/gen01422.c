/* FF4 source-port — interpreted module for battle_v1_v0_v0_gates_b8c_b4_rows.
 * Ground truth: src/battle_v1_v0_v0_gates_b8c_b4_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_v1_v0_v0_gates_b8c_b4_rows(void)
{
    /* battle: v1/v0 + v0 gates; 80189B8C(1)/801919B4(6) rows. */
    /* v1/v0 gate -> L187A90 */
    if (io_just() == 0)
        goto L187A58;
    if (io_just() != 0)
        goto L187A58;
    fn_1x89b8c(1);
    event_twin_b44_rows_on_s2_fp_s0(6);
    return;
L187A58:
    fn_1x89b8c(1);
    event_twin_b44_rows_on_s2_fp_s0(6);
    return;
L187A90:
    return;
}
