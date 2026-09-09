/* FF4 source-port — interpreted module for func_8013E5D0.
 * Ground truth: src/func_8013E5D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013E5D0(void)
{
    /* battle rows: 0x4/0x1 windows, 8013E588 rows; 76BC(3C3C(4))/
       7728(0x101) gate with the 3F38(3B9C) cell writes; loop
       L13E604 on 5958(8). */
    row_open();
    sep();
L13e604:
    for (;;) {
        func_800F76BC(cell_state(4));
        if (func_800F7728(0x101) != 0)
            goto L13E6FC;
        func_8013E588();
        row_read(7);
        sep_a();
        cell_poke0(cell_peek_cur());
        cell_put_cur();
        func_8013E588();
        row_read(0x1F);
        cell_poke0(cell_peek_cur());
        cell_put(1);
        row_page_cur();
        sep_b();
        func_800F8058(8);
        cell_draw_cur();
        row_page(1);
        sep_b();
        func_800F8058(8);
        cell_draw_cur();
    L13E6FC:
        cell_step();
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
