/* FF4 source-port — interpreted module for func_80140310.
 * Ground truth: src/func_80140310.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140310(void)
{
    row_open();
    row_prep(32);
    cell_push9(62472);
    cell_put_hi9(2);
    func_80140224();
}
