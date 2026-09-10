/* FF4 source-port — interpreted module for battle_ae8_gate_v1_t0_a3_t0_a1.
 * Ground truth: src/battle_ae8_gate_v1_t0_a3_t0_a1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_ae8_gate_v1_t0_a3_t0_a1(void)
{
    /* battle: 80188AE8(3) gate; v1/t0 + a3/t0 + a1/t0 latch rows. */
    if (fn_1x88ae8(3) != 0)
        goto L188D18;
    /* v1/t0 -> L188CC0; a3/t0 -> L188CE8; a1/t0 -> L188D10 */
    return;
L188D18:
    return;
}
