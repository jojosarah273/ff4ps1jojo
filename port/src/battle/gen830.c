/* FF4 source-port — interpreted module for fn_1x4c8cc.
 * Ground truth: src/fn_1x4c8cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void fn_1x4c8cc(void)
{
    wnd_open(0);
    do {
        txt_cell(0xEDB0);
        cell_put(0);
        txt_cell(0xEDB1);
        cell_put(1);
        latch(1);
        func_80094D14();
        row_page(0);
        cell_draw(0xEDB0);
        row_page(1);
        cell_draw(0xEDB1);
        *D_8019ED54 = (u16)(*D_8019ED54 + 2);
        poll_t(0x80);
    } while (io_just() == 0);
}
