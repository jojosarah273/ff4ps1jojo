/* FF4 source-port — interpreted module for options_row_v0_gate_picks_f4c_vs_c.
 * Ground truth: src/options_row_v0_gate_picks_f4c_vs_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_v0_gate_picks_f4c_vs_c(void)
{
    /* options row: v0 gate picks 5140/4F4C vs 516C/5050. */
    if (io_just() != 0)
        goto L15295C;
    row_sel_cell_cur();
    row_sel_cell2_cur();
    return;
L15295C:
    row_arm_s_cur();
    row_arm_s2_cur();
    return;
}
