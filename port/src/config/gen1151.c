/* FF4 source-port — interpreted module for func_80152994.
 * Ground truth: src/func_80152994.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152994(void)
{
    /* options row: v0 gate picks 5140/4F4C vs 516C/5050. */
    if (io_just() != 0)
        goto L1529E8;
    row_sel_cell_cur();
    row_sel_cell2_cur();
    return;
L1529E8:
    row_arm_s_cur();
    row_arm_s2_cur();
    return;
}
