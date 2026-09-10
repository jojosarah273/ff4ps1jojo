/* FF4 source-port — interpreted module for event_c3c_b04_x2000_x2_gates_one_x.
 * Ground truth: src/event_c3c_b04_x2000_x2_gates_one_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_c3c_b04_x2000_x2_gates_one_x(void)
{
    /* event: 3C3C/3B04(0x2000)x2 gates (one 0x80); s0/a1+s0/a2
       regcmp loops; 8013F2C4 spin rows; v1/s5+s0/s3 latches. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    /* s0/a1 + a0/v1 latch loops L13EE68/L13EED0 */
    event_c3c_b04_x2000_x2_linear();
    do {
        event_c3c_b04_x2000_x2_linear();
    } while (io_just() == 0);
    return;
}
