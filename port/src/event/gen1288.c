/* FF4 source-port — interpreted module for event_v0_v0_s3_gates_f078_spin_loo.
 * Ground truth: src/event_v0_v0_s3_gates_f078_spin_loo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_v0_s3_gates_f078_spin_loo(void)
{
    /* event: v0 + v0/s3 gates; 8018F078 spin loop L18FCF8. */
    do {
        if (io_just() == 0)
            goto L18FD44;
        /* v0/s3 latch -> L18FD30 */
        register_only_stub_x1c_see_asm_for();
        if (io_just() != 0)
            goto L18FD34;
        goto L18FD48;
    L18FD30:
        break;
    L18FD34:
        if (io_just() != 0)
            continue;
        break;
    } while (1);
    return;
L18FD44:
    return;
L18FD48:
    return;
}
