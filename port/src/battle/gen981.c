/* FF4 source-port — interpreted module for fn_1x1b4a4.
 * Ground truth: src/fn_1x1b4a4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1b4a4(void)
{
    fn_1x1b744();
    latch(0xFE);
    do {
        poll_t(0);
        if (io_just() != 0)
            break;
        sep_b();
        cell_tick_dbl();
        poll_pair_cur();
    } while (1);
    page(0x3D);
    cell_0xf4960(0x1280);
    cell_draw(0x1280);
}
