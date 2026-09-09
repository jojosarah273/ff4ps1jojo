/* FF4 source-port — interpreted module for func_800FE028.
 * Ground truth: src/func_800FE028.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FE028(void)
{
    /* shop fills: two 885C/5958(0x100) loops. */
    latch(0x80);
    txt_draw(0x2115);
    wnd_open_cur();
L8fe050:
    for (;;) {
        func_800F885C();
        cell_step();
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
L8fe0b0:
    for (;;) {
        func_800F885C();
        cell_step();
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
