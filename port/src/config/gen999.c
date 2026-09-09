/* FF4 source-port — interpreted module for func_80152E54.
 * Ground truth: src/func_80152E54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152E54(void)
{
    row_prep(32);
    sep_b();
    func_800F658C(14686);
    func_800F7FCC(cell_state(14688));
    func_800F81B0(14690);
    sep();
    row_prep_close();
}
