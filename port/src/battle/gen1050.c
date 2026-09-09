/* FF4 source-port — interpreted module for func_8014EDD0.
 * Ground truth: src/func_8014EDD0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014EDD0(void)
{
    row_page(8);
    cell_put(6);
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(7);
}
