/* FF4 source-port — interpreted module for func_8015F028.
 * Ground truth: src/func_8015F028.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015F028(void)
{
    /* options row: 0x354D/0x3550/0x2703/0x354F texts, 0xA9/0xAB
       windows, 801531CC/80160A4C/8015330C/8015240C rows; loops
       L15F090/L15F110. */
    latch(1);
    txt_draw(0x354D);
    func_801531CC();
    io_poll(0x32);
    if (io_go() == 0)
        goto L15F0D0;
    sep();
    txt_draw(0x3550);
    tail(0xA9);
L15f090:
    for (;;) {
        func_80160A4C();
        func_8015330C();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L15F0D0:
    txt_set(0x2703);
    txt_draw_cur();
    open_row(0xAB);
    txt_set(0x354F);
    cell_put(0xA9);
L15f110:
    for (;;) {
        cell_state(0xA9);
        row_arm2_cur();
        if (cell_flags_zero50(0x101) != 0)
            goto L15F198;
        sep_a();
        row_page(0xAB);
        row_open_w(5);
        cell_put(0xDF);
        latch(0x80);
        cell_put(0xE1);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        cell_draw_cur();
    L15F198:
        key_page(0xAB);
        row_page(0xAB);
        io_poll(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
