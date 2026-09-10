/* FF4 source-port — interpreted module for options_c3c_b04_x2000_b9c_gates_s0.
 * Ground truth: src/options_c3c_b04_x2000_b9c_gates_s0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_c3c_b04_x2000_b9c_gates_s0(void)
{
    /* options: 3C3C/3B04(0x2000)/3B9C gates; s0/v0 latch picks
       8015A5B8 vs 8015236C/8015254C rows; closes 8015ABEC/8015A56C. */
    cell_state_of();
    cell_state(0x2000);
    cell_peek_cur();
    /* s0/v0 latch -> L15ABB8 / L15ABBC */
    fn_1x5a5b8();
L15ab3c:
    /* v0 gate -> L15AB7C */
    fn_1x5236c();
    goto L15ABC4;
L15AB7C:
    options_b04_x2000_gates_v0_run_l15();
L15ABBC:
    goto L15ABC4;
L15ABC4:
    options_rows_b();
    options_cursor_cells();
    return;
}
