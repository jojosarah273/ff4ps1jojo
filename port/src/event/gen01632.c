/* FF4 source-port — interpreted module for event_e8_prep_b4_loop_l189fac.
 * Ground truth: src/event_e8_prep_b4_loop_l189fac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_prep_b4_loop_l189fac(void)
{
    /* event: 801975E8 prep + 801774B4 loop L189FAC. */
    do {
        func_801975E8();
        func_801774B4();
    } while (io_just() != 0);
    return;
}
