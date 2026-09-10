/* FF4 source-port — interpreted module for event_b9a8_gate_s4_latch_a75c_rows.
 * Ground truth: src/event_b9a8_gate_s4_latch_a75c_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_b9a8_gate_s4_latch_a75c_rows(void)
{
    /* event: 8018B9A8 gate; s4 latch; 8018A75C(2/1/3) + 80197678
       rows; returns at L18C5D8. */
    if (io_just() == 0)
        goto L18C4C0;
    if (region_walk_shifted_like_b928_with() == 0)
        goto L18C4C8;
L18C4C0:
    goto L18C5D8;
L18C4C8:
    event_drive(2);
    event_drive();
    event_drive(1);
    event_drive(3);
    register_only_stub_xc_see_asm_for_1976();
    return;
L18C5D8:
    return;
}
