/* FF4 source-port — interpreted module for event_v0_s0_s1_s0_latches_spin_row.
 * Ground truth: src/event_v0_s0_s1_s0_latches_spin_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_s0_s1_s0_latches_spin_row(void)
{
    /* event: v0/s0 + s1/s0 latches; 80197688 spin rows. */
    if (register_only_stub_xc_see_asm_for() != 0)
        goto L18CB18;
    /* v0/s0 latch -> L18CB68 */
    for (;;) {
        register_only_stub_xc_see_asm_for();
        if (io_just() == 0)
            goto L18CB38;
        break;
    }
    return;
L18CB18:
    /* s1/s0 latch -> L18CB58 */
    register_only_stub_xc_see_asm_for();
    return;
L18CB38:
    if (io_just() != 0)
        goto L18CB60;
    register_only_stub_xc_see_asm_for();
    return;
L18CB58:
    register_only_stub_xc_see_asm_for();
    return;
L18CB60:
    return;
L18CB68:
    return;
}
