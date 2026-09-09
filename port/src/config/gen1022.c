/* FF4 source-port — interpreted module for func_80121A9C.
 * Ground truth: src/func_80121A9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121A9C(void)
{
    row_page(102);
    sep_b();
    func_800F7F48(cell_state(100));
    poll_spin();
    cell_put(29);
    row_page(30);
    cell_draw(0);
    func_801222C4();
    func_80121B04();
}
