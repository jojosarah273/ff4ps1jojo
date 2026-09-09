/* FF4 source-port — interpreted module for func_801626B8.
 * Ground truth: src/func_801626B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801626B8(void)
{
    /* options counter: 0xA6/0x2006/0x3534/0xA9/0xCD windows, 0x3303/
       0x3302 texts, 80150C38 row; loop L162700 on 5574(9/5). */
    page(0xA6);
    txt_cell(0x2006);
    cell_draw(0x2006);
    page_open(0x3534);
    open_row(0xA9);
L162700:
    for (;;) {
        txt_cell(0x3303);
        io_poll(9);
        if (io_just() == 0)
            goto L162738;
        latch(0x1C);
        cell_draw(0x3303);
        goto L162760;
    L162738:
        txt_cell(0x3302);
        cell_draw(0x3302);
    L162760:
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
    gpu_driver_run_b();
    latch(9);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
}
