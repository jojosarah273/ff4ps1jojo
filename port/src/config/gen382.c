/* FF4 source-port — interpreted module for options_screen_xd1_x38f6_x35eb_tex.
 * Ground truth: src/options_screen_xd1_x38f6_x35eb_tex.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_screen_xd1_x38f6_x35eb_tex(void)
{
    /* options screen: 0xD1/0x38F6/0x35EB texts, 0xA9/0xAB/0xAE
       windows, 801580B0 row; loops L157F58 (5574(0xFF)) and
       L157FE0 (4FAC(0x101) rows). */
    open_row(0xD1);
    open_row_cur();
    txt_set(0x38F6);
    cell_put(0xA9);
L157f58:
    for (;;) {
        txt_set(0x3601);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L157F98;
        if (io_press(cell_state(0xA9)) == 0)
            goto L158048;
    L157F98:
        open_row(0xAD);
        open_row(0xAE);
        row_page(0xA9);
        row_sel_cell_cur();
        txt_cell_cur();
        cell_put(0xAB);
    L157fe0:
        for (;;) {
            row_arm2(cell_state(0xAB));
            if (cell_flags_zero50(0x101) != 0)
                goto L158020;
            options_xa9_xd2_xad_xaf_windows_x2();
            row_page(0xD1);
            if (gate(0x202) != 0)
                goto L1580A0;
        L158020:
            key_page(0xAD);
            row_page(0xAD);
            io_poll(7);
            if (io_just() == 0)
                continue;
            break;
        }
    L158048:
        key_page(0xA9);
        row_page(0xA9);
        io_poll(0xD);
        if (io_just() == 0)
            goto L158078;
        open_row(0xA9);
    L158078:
        key_page_cur();
        row_page_cur();
        io_poll(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L1580A0:
    return;
}
