/* FF4 source-port — interpreted module for func_8014EC18.
 * Ground truth: src/func_8014EC18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014EC18(void)
{
    sep();
    sep_b();
    func_800F7F48(cell_state(8));
    cell_put(6);
    row_page(8);
    cell_put(7);
}
