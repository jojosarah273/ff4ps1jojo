/* FF4 source-port — interpreted module for event_b9a8_gate_at_l18bab8_wide_a1.
 * Ground truth: src/event_b9a8_gate_at_l18bab8_wide_a1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_b9a8_gate_at_l18bab8_wide_a1(void)
{
    /* event: 8018B9A8 gate at L18BAB8; wide a1/a3 + a0/a2 regcmp
       gate trees; returns at L18BE5C. */
    if (io_just() != 0)
        goto L18BBA0;
    func_8018B9A8();
    /* a1/a3 latch loop L18BB34; v1/v0 gates */
    return;
L18BBA0:
    /* gate trees L18BBB0/L18BCD0 with 0x43 rows */
    return;
}
