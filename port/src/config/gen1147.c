/* FF4 source-port — interpreted module for func_80152BC4.
 * Ground truth: src/func_80152BC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152BC4(void)
{
    /* options row: v0 gate picks 7864/76E8 vs 7894/77CC. */
    if (io_just() != 0)
        goto L152C18;
    cell_tick_half();
    cell_flags_repack();
    return;
L152C18:
    row_sel2_cur();
    cell_0xf77cc();
    return;
}
