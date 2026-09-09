/* FF4 source-port — interpreted module for func_80152A20.
 * Ground truth: src/func_80152A20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152A20(void)
{
    /* options row: v0 gate picks 7864/76E8 vs 7894/77CC. */
    if (io_just() != 0)
        goto L152A74;
    cell_tick_half();
    cell_flags_repack();
    return;
L152A74:
    row_sel2_cur();
    func_800F77CC();
    return;
}
