/* FF4 source-port — interpreted module for func_80142450.
 * Ground truth: src/func_80142450.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80142450(void)
{
    /* battle magic-status: 0x340-0x343 cells, 0x6CC0 gate with
       8058(0x10) alt row; loop L142498 on 5958(8). */
    sep();
L142498:
    for (;;) {
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        func_800F8960(0x340);
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        func_800F8960(0x341);
        func_800F6C68();
        func_800F8960(0x342);
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L142574;
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        sep_b();
        func_800F8058(0x10);
        func_800F8960(0x340);
        latch(0x7F);
        goto L1425A4;
    L142574:
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        func_800F8960(0x340);
        latch(0x3F);
    L1425A4:
        func_800F8960(0x343);
        step2();
        step2();
        step2();
        step2();
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
