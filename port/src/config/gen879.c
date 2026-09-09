/* FF4 source-port — interpreted module for func_80152DE4.
 * Ground truth: src/func_80152DE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80152DE4(void)
{
    row_prep(32);
    sep_a();
    func_800F658C(14678);
    cell_peek0(cell_state(14680));
    func_800F81B0(14682);
    row_sync2(0);
    func_800F4064(0);
    func_800F81B0(14684);
    sep();
    row_prep_close();
}
