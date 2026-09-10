/* FF4 source-port — interpreted module for event_a8_rows_v0_spin.
 * Ground truth: src/event_a8_rows_v0_spin.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_a8_rows_v0_spin(void)
{
    /* event: 80191838/801928A8/80191858 rows + v0 spin. */
    fn_1x91838();
    fn_1x928a8();
    fn_1x91858();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
