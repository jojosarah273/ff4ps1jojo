/* FF4 source-port — interpreted module for event_c3c_b04_x2000_x2_linear.
 * Ground truth: src/event_c3c_b04_x2000_x2_linear.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_c3c_b04_x2000_x2_linear(void)
{
    /* event: 3C3C/3B04(0x2000)x2 + 5410; linear. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    sep_a();
    return;
}
