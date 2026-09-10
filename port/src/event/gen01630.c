/* FF4 source-port — interpreted module for event_v0_gate_picks_a75c_vs_a438_r.
 * Ground truth: src/event_v0_gate_picks_a75c_vs_a438_r.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gate_picks_a75c_vs_a438_r(void)
{
    /* event: v0 gate picks 8018A75C(2/1/3) vs 8018A438 row. */
    if (io_just() != 0)
        goto L18AA3C;
    event_drive(2);
    event_drive();
    event_drive(1);
    event_drive(3);
    return;
L18AA3C:
    event_ac90_intro_branches_with_f0c();
    return;
L18AA4C:
    return;
}
