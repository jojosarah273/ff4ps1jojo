/* FF4 source-port — interpreted module for event_v0_v1_a0_latch_loop_b1c8_tai.
 * Ground truth: src/event_v0_v1_a0_latch_loop_b1c8_tai.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_v0_v1_a0_latch_loop_b1c8_tai(void)
{
    /* event: v0 + v1/a0 latch loop; 8018B1C8 tail. */
    for (;;) {
        if (io_just() != 0)
            goto L18B52C;
        /* v1/a0 latch -> L18B520 */
        if (io_just() != 0)
            continue;
        break;
    }
L18B52C:
    region_walker_x300_v0_t2_v1_a3_reg();
    return;
}
