/* FF4 source-port — interpreted module for func_8016E870.
 * Ground truth: src/func_8016E870.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016E870(void)
{
    /* options: 0x2000/0x2003/0x2004 gates, 0x357C text, 0xA6 window;
       gates 53D4/4120 pick the 0x2000 cell writes. */
    draw_pad(5);
    sep();
L16e8a4:
    for (;;) {
        txt_cell(0x2000);
        row_read_cur();
        io_poll(0xFF);
        if (io_just() == 0)
            goto L16E924;
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto L16E90C;
        txt_cell(0x2004);
        row_read(0x3C);
        if (sel(2) != 0)
            break;
    }
    latch(0xFF);
    txt_draw(0x357C);
    return;
L16E90C:
    latch(0xFF);
    txt_draw(0x357C);
    return;
L16E924:
    row_prep(0x20);
    sep_a();
    func_800F4064(0x80);
    sep();
    row_prep_close();
    latch(0xFF);
    txt_draw(0x357C);
    return;
}
