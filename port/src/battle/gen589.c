/* FF4 source-port — interpreted module for battle_rows_e34_prep_loops_l142ce8.
 * Ground truth: src/battle_rows_e34_prep_loops_l142ce8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_e34_prep_loops_l142ce8(void)
{
    /* battle rows: 80142E34 prep; loops L142CE8 (43E44 + 7F48
       cells) and L142CBC (54D4 gate). */
L142cbc:
    for (;;) {
        battle_rows_xf42c_xf42d_texts_d54();
        sep();
    L142ce8:
        for (;;) {
            latch(8);
            battle_rows_twin();
            txt_cell_cur();
            if (gate(2) != 0)
                goto L142D30;
            sep_b();
            cell_tick_sub(cell_state_of());
            cell_draw_cur();
        L142D30:
            txt_cell_cur();
            if (gate(2) != 0)
                goto L142D68;
            sep_b();
            cell_tick_sub(cell_state_of());
            cell_draw_cur();
        L142D68:
            cell_step();
            poll_t(8);
            if (io_just() == 0)
                continue;
            break;
        }
        txt_set_cur();
        if (io_press(cell_state_of()) == 0)
            continue;
        break;
    }
    return;
}
