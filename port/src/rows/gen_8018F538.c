/* FF4 source-port — interpreted module for event_f5c8_v0_v1_s0_v0_latch_loop.
 * Ground truth: src/event_f5c8_v0_v1_s0_v0_latch_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_f5c8_v0_v1_s0_v0_latch_loop(void)
{
    /* event: 8018F5C8 + v0/v1 + s0/v0 latch loop; 8018F0C8 tail. */
    func_8018F5C8();
    /* v0/v1 latch -> L18F598 / L18F5B8; s0/v0 loop -> L18F548 */
    anim_reg_stub();
    return;
L18F598:
    return;
}
