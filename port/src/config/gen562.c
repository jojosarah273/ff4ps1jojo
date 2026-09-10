/* FF4 source-port — interpreted module for battle_rows_d64_d14_d040_rows_loop.
 * Ground truth: src/battle_rows_d64_d14_d040_rows_loop.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_d64_d14_d040_rows_loop(void)
{
    /* battle rows: 80143D64/80143D14/8013D040 rows; loop L13CF50
       on 5958(8). */
    sep();
L13cf50:
    for (;;) {
        fn_1x43d64();
        sep_a();
        cell_poke0(cell_state_of());
        cell_put_cur();
        fn_1x43d14();
        sep_a();
        cell_poke0(cell_state_of());
        cell_put(2);
        row_open();
        txt_set_cur();
        sep_a();
        cell_poke0(cell_state_of());
        cell_push_c8();
        cell_put(4);
        cell_push_c8();
        row_close();
        battle_rows_x342_x341_x343_cells_x();
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
