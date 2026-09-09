/* FF4 source-port — interpreted module for func_8014588C.
 * Ground truth: src/func_8014588C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014588C(void)
{
    /* battle name rows: 80143D64/80143D14/80143E44/80143DB4 rows;
       loop L1458D4 on 5958(0x10) with 6434(2) gate. */
    sep();
L1458d4:
    for (;;) {
        row_open();
        func_80143D64();
        row_close();
        sep_a();
        cell_poke0(cell_peek_cur());
        cell_draw_cur();
        row_open();
        func_80143D14();
        row_close();
        sep_a();
        cell_poke0(cell_peek_cur());
        cell_draw_cur();
        row_open();
        latch(0xC);
        battle_rows_twin();
        txt_set_cur();
        if (gate(2) != 0)
            goto L145A58;
        latch(0xFF);
        func_80143DB4();
    L145A58:
        row_close();
        step2();
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
