/* FF4 source-port — interpreted module for battle_rows_loop_l141b5c_on_x15.
 * Ground truth: src/battle_rows_loop_l141b5c_on_x15.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_loop_l141b5c_on_x15(void)
{
    /* battle rows: 80140558/80140310 loop L141B5C on 5958(0x15). */
    sep();
L141b5c:
    for (;;) {
        gpu_driver_run();
        config_row_8468();
        row_prep(0x20);
        cell_push9();
        sep_a();
        cell_pos_fwd(8);
        cell_pull9_hi();
        sep();
        row_prep_close();
        cell_step();
        poll_t(0x15);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
