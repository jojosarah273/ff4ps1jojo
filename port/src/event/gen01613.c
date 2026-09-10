/* FF4 source-port — interpreted module for event_v0_gates_e8_v0_s4_latch_rows.
 * Ground truth: src/event_v0_gates_e8_v0_s4_latch_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_gates_e8_v0_s4_latch_rows(void)
{
    /* event: v0 gates; 801982E8 + v0/s4 latch rows. */
    if (io_just() == 0)
        goto L19827C;
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L19827C:
    func_801982E8();
    /* v0/s4 latch -> L1982A0 / L1982C0 */
    return;
L1982A0:
    return;
L1982C0:
    return;
}
