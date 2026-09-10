/* FF4 source-port — interpreted module for fn_1x4ecc8.
 * Ground truth: src/fn_1x4ecc8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4ecc8(void)
{
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(6);
    open_row(7);
}
