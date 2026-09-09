/* FF4 source-port — interpreted module for func_80149924.
 * Ground truth: src/func_80149924.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80149924(void)
{
    /* battle rows: 0x38E6 text, 0x4E/0x1/0x4E windows, 8014D568/
       8007259C/80094D14/80168148 rows; loops L1499A4 and L1499D8
       (5958(0x20)). */
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L1499A4;
    latch(0x80);
    txt_draw_cur();
    txt_set(0x38E6);
    func_8014D568();
L1499A4:
    cell_clear_bank();
    func_8007259C();
    sep();
L1499d8:
    for (;;) {
        txt_cell_cur();
        cell_put_cur();
        txt_cell_cur();
        cell_put(1);
        latch(1);
        func_80094D14();
        row_page_cur();
        cell_draw_cur();
        row_page(1);
        cell_draw_cur();
        poll_t(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    func_80168148();
    key_page(0x4E);
    row_page(0x4E);
    io_poll(0x30);
    if (io_just() == 0)
        goto L1499A4;
    return;
}
