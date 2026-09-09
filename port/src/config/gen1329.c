/* FF4 source-port — interpreted module for func_801382C8.
 * Ground truth: src/func_801382C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801382C8(void)
{
    /* rows: 0x1A3C text + 5CCC spin loop L13831C. */
    txt_set(0x1A3C);
    do {
        poll_spin();
    } while (io_just() != 0);
    return;
}
