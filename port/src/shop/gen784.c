/* FF4 source-port — interpreted module for fn_1x60b8c.
 * Ground truth: src/fn_1x60b8c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x60b8c(void)
{
    txt_set(0x38FE);
    io_poll(2);
    if (io_just() == 0)
        return;
    txt_set(0x2721);
    cell_tick_and2(0x28A2);
    if (sel(2) == 0) {
        latch(8);
        txt_draw(0x38FE);
        return;
    }
    txt_set(0x2720);
    cell_tick_and2(0x28A2);
    if (sel(2) == 0) {
        latch(4);
        txt_draw(0x38FE);
    }
}
