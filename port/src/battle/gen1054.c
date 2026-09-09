/* FF4 source-port — interpreted module for func_801401CC.
 * Ground truth: src/func_801401CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801401CC(void)
{
    row_open();
    row_prep(32);
    cell_push9(62472);
    sep_a();
    cell_peek0(cell_state(42));
    cell_put_hi9(2);
    func_80140224();
}
