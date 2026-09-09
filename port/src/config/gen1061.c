/* FF4 source-port — interpreted module for func_80121EBC.
 * Ground truth: src/func_80121EBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121EBC(void)
{
    row_page(101);
    sep_b();
    cell_tick_sub(cell_state(99));
    cell_set50_from40();
    cell_put(29);
    sep();
    func_80121F14();
}
