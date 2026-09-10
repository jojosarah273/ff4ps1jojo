/* FF4 source-port — interpreted module for fn_1x4ed88.
 * Ground truth: src/fn_1x4ed88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4ed88(void)
{
    open_row(6);
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(7);
}
