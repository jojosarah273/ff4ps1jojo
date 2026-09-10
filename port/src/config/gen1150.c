/* FF4 source-port — interpreted module for options_row_v0_gate_picks_e8_vs_cc.
 * Ground truth: src/options_row_v0_gate_picks_e8_vs_cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_v0_gate_picks_e8_vs_cc(void)
{
    /* options row: v0 gate picks 7864/76E8 vs 7894/77CC. */
    if (io_just() != 0)
        goto L152A74;
    cell_tick_half();
    cell_flags_repack();
    return;
L152A74:
    row_sel2_cur();
    cell_0xf77cc();
    return;
}
