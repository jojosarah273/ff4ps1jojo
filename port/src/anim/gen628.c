/* FF4 source-port — interpreted module for func_80175494.
 * Ground truth: src/func_80175494.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80175494(void)
{
    /* shop rows: 0x1700 text, 0x7A window, 0xCFE cell; 5574(1) gate;
       loop L175534 on 5A90(0x10). */
    txt_set(0x1700);
    io_poll(1);
    if (io_just() == 0)
        return;
    row_page(0x7A);
    row_read(0x70);
    cell_push_c8();
    draw_pad_cur();
    row_prep(0x20);
L175534:
    for (;;) {
        cell_push9_bank();
        cell_stamp8_9_b(0xCFE);
        cell_step();
        cell_step();
        step2();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    row_sync2_cur();
    row_prep_close();
    return;
}
