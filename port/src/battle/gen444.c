/* FF4 source-port — interpreted module for battle_rows_d64_d14_d4c8_rows_loop.
 * Ground truth: src/battle_rows_d64_d14_d4c8_rows_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_d64_d14_d4c8_rows_loop(void)
{
    /* battle rows: 80143D64/80143D14/8013D4C8 rows; loop L143F1C on
       6434(2/0x202) gates and 5958(0x40). */
    sep();
L143f1c:
    for (;;) {
        txt_cell_cur();
        if (gate(2) != 0)
            goto L143FD8;
        txt_cell_cur();
        if (gate(0x202) != 0)
            goto L143FD8;
        fn_1x43d64();
        sep_a();
        cell_poke0(cell_state_of());
        cell_put_cur();
        fn_1x43d14();
        sep_a();
        row_open_w(0x48);
        cell_put(2);
        row_page_cur();
        io_poll(0xE0);
        if (io_go() == 0)
            goto L143FF0;
        latch(1);
        cell_draw_cur();
    L143FD8:
        latch(0xF0);
        cell_put_cur();
        cell_put(2);
    L143FF0:
        txt_set(0x1813);
        row_read(2);
        sep_a();
        row_open_w(0x8C);
        cell_clear_bank();
        battle_rows_twin_of_d040_x342_x341();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
