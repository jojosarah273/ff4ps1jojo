/* FF4 source-port — interpreted module for func_8013EB2C.
 * Ground truth: src/func_8013EB2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013EB2C(void)
{
    /* battle rows: 0x16/0x2/0x4/0x5 windows, 0x6EFD cells, 67FC row
       reads; loop L13EBD4 on 5958(0x280). */
    row_open();
    row_prep(0x20);
    sep_a();
    func_800F4064();
    func_800F8274();
    sep();
    row_prep_close();
    latch(0x16);
    cell_put(2);
    sep();
L13ebd4:
    for (;;) {
        func_800F67FC();
        cell_put(4);
        row_read(0x80);
        cell_put(5);
        row_page(4);
        row_read(0x3F);
        func_800F61E8();
        sep_a();
        cell_poke0(cell_state(6));
        cell_draw(0x6EFD);
        cell_step();
        row_page(4);
        row_read(0x40);
        sep_a();
        row_open_w(4);
        func_800F78C4(cell_state(5));
        cell_draw(0x6EFD);
        cell_step();
        step2();
        row_read(0x3F);
        poll_t(0x280);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close();
    return;
}
