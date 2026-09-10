/* FF4 source-port — interpreted module for fn_1x4ed40.
 * Ground truth: src/fn_1x4ed40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4ed40(void)
{
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(6);
    cell_put(7);
}
