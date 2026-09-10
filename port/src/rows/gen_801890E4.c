/* FF4 source-port — interpreted module for battle_ae8_gate_d28_a1_a0_latch.
 * Ground truth: src/battle_ae8_gate_d28_a1_a0_latch.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_ae8_gate_d28_a1_a0_latch(void)
{
    /* battle: 80188AE8(4) gate; 80188D28 + a1/a0 latch. */
    if (fn_1x88ae8(4) != 0)
        goto L189178;
    func_80188D28();
    /* a1/a0 latch -> L189170 */
    return;
L189178:
    return;
}
