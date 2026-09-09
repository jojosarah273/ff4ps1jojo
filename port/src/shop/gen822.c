/* FF4 source-port — interpreted module for func_801605D0.
 * Ground truth: src/func_801605D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801605D0(void)
{
    /* options: 0x280/0x29B5 cells, 0xB1/0xB2 windows, 54D4(3C3C)
       gates, 8015330C row; loop L160604 on 5A90(8). */
    wnd_open(0x280);
    sep();
L160604:
    for (;;) {
        cell_push_c8_d58(0x29B5);
        if (io_press(cell_state(0xB1)) != 0)
            goto L16064C;
        if (io_press(cell_state(0xB2)) != 0)
            goto L160674;
    L16064C:
        txt_cell(0x2003);
        cell_draw_cur();
    L160674:
        func_8015330C();
        step2();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
