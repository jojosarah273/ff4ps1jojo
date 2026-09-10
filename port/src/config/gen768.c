/* FF4 source-port — interpreted module for battle_status_x_b9c_checks_on_x1be.
 * Ground truth: src/battle_status_x_b9c_checks_on_x1be.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_status_x_b9c_checks_on_x1be(void)
{
    /* battle/status: 4x 5520(3B9C()) checks on 0x1BE4 cells; gates ->
       80128C4C/8012821C/80126D48 row block; 53D4 latches. */
    row_prep(0x20);
    row_sync2(0x1BE4);
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    if (cell_flags_cmp_pos(cell_peek_cur()) != 0)
        goto L128C24;
    row_prep_close();
    fn_1x28c4c();
    fn_1x2821c();
    rows_x48_window_row_loop_l126d58_x();
    sep_b();
    return;
L128C24:
    row_prep_close();
    sep_a();
    return;
}
