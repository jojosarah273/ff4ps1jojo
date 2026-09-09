/* FF4 source-port — interpreted module for func_80110BC8.
 * Ground truth: src/func_80110BC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80110BC8(void)
{
    /* battle rows: 0x7A/0x21 windows, 0xEBB cell via 87DC/6214;
       loop L110C10 on 5958(0x10). */
    row_page(0x7A);
    row_read(0x1E);
    row_prep(0x20);
    wnd_open_cur();
L110c10:
    for (;;) {
        func_800F87DC(0xEBB);
        row_done2();
        row_done2();
        func_800F4264(0x1F);
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    row_sync2_cur();
    row_prep_close();
    return;
}
