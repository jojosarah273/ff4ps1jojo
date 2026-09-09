/* FF4 source-port — interpreted module for func_800FCC0C.
 * Ground truth: src/func_800FCC0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FCC0C(void)
{
    cell_put(9);
    cell_put(7);
    func_800F7CC8(cell_state(9));
    func_800F7D0C();
    func_800F7CC8(cell_state(8));
    func_800F7D0C();
    func_800F7CC8(cell_state(7));
    func_800F7D0C();
    row_page(8);
}
