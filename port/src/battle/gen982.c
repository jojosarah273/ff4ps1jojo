/* FF4 source-port — interpreted module for fn_1x14680.
 * Ground truth: src/fn_1x14680.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x14680(void)
{
    row_page(0x7A);
    row_read(7);
    if (sel(0x202) == 0) {
        row_page(0x80);
        io_poll(0xF);
        if (io_just() == 0)
            key_page(0x80);
    }
    row_page(0x80);
    txt_draw(0x2100);
}
