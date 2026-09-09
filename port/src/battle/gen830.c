/* FF4 source-port — interpreted module for func_8014C8CC.
 * Ground truth: src/func_8014C8CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void func_8014C8CC(void)
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
