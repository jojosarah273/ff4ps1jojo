/* FF4 source-port — interpreted module for fn_1x175c4.
 * Ground truth: src/fn_1x175c4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x175c4(void)
{
    page_open(0x9D3);
    cell_step();
    for (;;) {
        cell_push_c8(0x128200);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        cell_step();
    }
    label(0x9D3);
}
