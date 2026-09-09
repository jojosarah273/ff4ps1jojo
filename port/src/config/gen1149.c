/* FF4 source-port — interpreted module for func_80152AAC.
 * Ground truth: src/func_80152AAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152AAC(void)
{
    /* options row: v0 gate picks 7864/76E8 vs 7894/77CC. */
    if (io_just() != 0)
        goto L152B00;
    func_800F7864();
    func_800F76E8();
    return;
L152B00:
    row_sel2_cur();
    func_800F77CC();
    return;
}
