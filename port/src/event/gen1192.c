/* FF4 source-port — interpreted module for event_ac90_v0_spins_tail_row.
 * Ground truth: src/event_ac90_v0_spins_tail_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_ac90_v0_spins_tail_row(void)
{
    /* event: 8018AC90 + v0 spins; 80197648 tail row. */
    if (io_just() != 0)
        goto L18A614;
    self_test_loop();
L18A614:
    for (;;) {
        if (io_just() == 0)
            goto L18A668;
        if (io_just() != 0)
            continue;
        break;
    }
L18A668:
    if (io_just() == 0)
        goto L18A6A4;
    func_80197648();
    return;
L18A6A4:
    return;
}
