/* FF4 source-port — interpreted module for func_800F3D64.
 * Ground truth: src/func_800F3D64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800F3D64(void)
{
    /* battle: 3B9C x2 gates; spin loop L800F3DF0. */
    cell_peek_cur();
    cell_peek_cur();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    return;
}
