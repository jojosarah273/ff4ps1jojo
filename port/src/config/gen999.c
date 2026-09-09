/* FF4 source-port — interpreted module for func_80152E54.
 * Ground truth: src/func_80152E54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152E54(void)
{
    row_prep(32);
    sep_b();
    cell_push9(14686);
    cell_pos_sub16(cell_state(14688));
    cell_pull9_hi(14690);
    sep();
    row_prep_close();
}
