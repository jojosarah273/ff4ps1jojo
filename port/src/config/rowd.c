/* FF4 source-port — interpreted module for func_80157948.
 * Ground truth: src/func_80157948.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80157948(void)
{
    /* options value screen: 0xCD window, 0x3540/0xDF/0xE1/0xE3/0x2003
       gates, 8015240C/8015A374/80153374 rows; loop L157978 on
       5574(5)/53D4. */
    sep();
    tail(0xCD);
L157978:
    for (;;) {
        page(0xCD);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto L157A98;
        page(0xCD);
        tail(0xDF);
        wnd_open(0x80);
        tail(0xE1);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        row_read(1);
        if (sel(2) != 0)
            goto L157A98;
        latch(6);
        cell_put(0xD6);
        row_page(0xCD);
        func_8015A374();
        latch(9);
        func_80153374();
        latch(0x40);
        cell_draw(0x2A06);
        row_page(0xCD);
        row_sel_cell_cur();
        txt_cell(0x29EB);
        cell_draw_cur();
        row_page(0xD4);
        cell_draw(0x2B2A);
        row_page(0xD5);
        cell_draw(0x2B2B);
    L157A98:
        key_page(0xCD);
        row_page(0xCD);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
