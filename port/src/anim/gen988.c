/* FF4 source-port — interpreted module for func_80174710.
 * Ground truth: src/func_80174710.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80174710(void)
{
    wnd_open(0);
    do {
        cell_push_c8(0xD87D0);
        cell_draw(0xCDB);
        cell_step();
        poll_t(0x20);
    } while (io_just() == 0);
    page_open(0x16AA);
    label(0xCDD);
}
