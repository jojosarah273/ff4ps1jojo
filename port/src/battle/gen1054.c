/* FF4 source-port — interpreted module for fn_1x401cc.
 * Ground truth: src/fn_1x401cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x401cc(void)
{
    row_open();
    row_prep(32);
    cell_push9(62472);
    sep_a();
    cell_peek0(cell_state(42));
    cell_put_hi9(2);
    battle_rows_x4_dc_cell_sets_x7612();
}
