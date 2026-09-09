/* FF4 source-port — interpreted module for func_80141DC0.
 * Ground truth: src/func_80141DC0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141DC0(void)
{
    /* battle rows: 0x4E window, 80140558 row; loop L141DD0 on
       5574(0x10); closes via 0x38/0x34 codes. */
    open_row(0x4E);
L141dd0:
    for (;;) {
        func_80140558();
        row_page(0x4E);
        row_read(4);
        if (func_800F7728(0x202) != 0)
            goto L141E28;
        latch(0x34);
        goto L141E30;
    L141E28:
        latch(0x38);
    L141E30:
        txt_draw_cur();
        key_page(0x4E);
        row_page(0x4E);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0x38);
    txt_draw_cur();
    return;
}
