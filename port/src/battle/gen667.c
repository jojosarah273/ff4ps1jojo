/* FF4 source-port — interpreted module for battle_rows_x2a_window_f94_c3c_rea.
 * Ground truth: src/battle_rows_x2a_window_f94_c3c_rea.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x2a_window_f94_c3c_rea(void)
{
    /* battle rows: 0x2A window, 3F94(3C3C) reads; linear cell fill. */
    row_sync();
    row_info();
    row_prep(0x20);
    cell_put_hi9(0x2A);
    sep_a();
    cell_peek0(cell_state_of());
    row_read2(0x2A);
    sep_a();
    cell_peek0(cell_state_of());
    sep();
    row_prep_close();
    cell_push_c8();
    cell_pull_c8();
    cell_pull_c8();
    row_done();
    return;
}
