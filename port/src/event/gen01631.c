/* FF4 source-port — interpreted module for event_ac90_gate_spins_l18a240_l18a.
 * Ground truth: src/event_ac90_gate_spins_l18a240_l18a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_ac90_gate_spins_l18a240_l18a(void)
{
    /* event: 8018AC90 gate; spins L18A240/L18A2F0 with 8018F0C8;
       8018A438 row; 8x 8018AC90 tail. */
    if (self_test_loop() == 0)
        goto L18A288;
    /* spin loops with 8018F0C8 */
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
L18A288:
    event_ac90_intro_branches_with_f0c();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    self_test_loop();
    return;
}
