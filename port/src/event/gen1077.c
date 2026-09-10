/* FF4 source-port — interpreted module for event_ac90_intro_branches_with_f0c.
 * Ground truth: src/event_ac90_intro_branches_with_f0c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_ac90_intro_branches_with_f0c(void)
{
    /* event: 8018AC90 intro/branches with 8018F0C8 spins; loops
       L18A49C/L18A500/L18A594 on regcmp latches. */
    self_test_loop();
    if (io_just() == 0)
        goto L18A48C;
L18A48C:
L18A49C:
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L18A4B8:
    self_test_loop();
    if (io_just() == 0)
        goto L18A548;
L18A500:
    for (;;) {
        if (io_just() != 0)
            goto L18A528;
        anim_reg_stub();
        goto L18A548;
    L18A528:
        if (io_just() != 0)
            continue;
        break;
    }
L18A548:
    self_test_loop();
    self_test_loop();
L18A560:
    /* v0/a1 latch -> L18A5DC */
    for (;;) {
        if (io_just() != 0)
            goto L18A5BC;
        anim_reg_stub();
        goto L18A5DC;
    L18A5BC:
        /* v0/a1 latch -> L18A594 */
        continue;
    }
L18A5DC:
    return;
}
