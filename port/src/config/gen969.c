/* FF4 source-port — interpreted module for fn_1x3d3b0.
 * Ground truth: src/fn_1x3d3b0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x3d3b0(void)
{
    cell_cursor_dec();
    row_sync();
    latch(16);
    battle_rows_twin();
    fn_1x43d14();
    sep_a();
    cell_poke0(cell_state(61721));
    cell_put(2);
    row_done();
    row_close2();
    battle_rows_twin_of_d040_x342_x341();
}
