/* FF4 source-port — interpreted module for func_8014ED88.
 * Ground truth: src/func_8014ED88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014ED88(void)
{
    open_row(6);
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(7);
}
