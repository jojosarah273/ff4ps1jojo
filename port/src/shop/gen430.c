/* FF4 source-port — interpreted module for func_801627F8.
 * Ground truth: src/func_801627F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801627F8(void)
{
    /* options stat row: 0xA6/0x2006/0x3534/0xA9 windows, 0x3303/
       0x3302 texts, 80150C38 row; loop L162830 on 5574(5). */
    page(0xA6);
    txt_cell(0x2006);
    row_read(0x7F);
    cell_draw(0x2006);
    page_open(0x3534);
    open_row(0xA9);
L162830:
    for (;;) {
        txt_cell(0x3303);
        io_poll(0x1C);
        if (io_just() == 0)
            goto L162868;
        latch(9);
        cell_draw(0x3303);
        goto L162880;
    L162868:
        txt_cell(0x3302);
        row_read(0x7F);
        cell_draw(0x3302);
    L162880:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0xCD);
    cell_put_cur();
    latch(9);
    func_80150C38();
    latch(0x1C);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
}
