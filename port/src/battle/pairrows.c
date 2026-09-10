/* FF4 source-port — interpreted module for battle_rows_two_f38_b04_pair_reads.
 * Ground truth: src/battle_rows_two_f38_b04_pair_reads.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_two_f38_b04_pair_reads(void)
{
    /* battle rows: two 3F38(3B04) pair reads; linear. */
    cell_cursor_dec();
    sep_a();
    cell_poke0(cell_state_of());
    cell_draw_cur();
    row_close2();
    sep_a();
    cell_poke0(cell_state_of());
    cell_draw_cur();
    return;
}
