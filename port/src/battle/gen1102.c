/* FF4 source-port — interpreted module for func_8014ECC8.
 * Ground truth: src/func_8014ECC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014ECC8(void)
{
    sep();
    sep_b();
    cell_tick_sub(cell_state(8));
    cell_put(6);
    open_row(7);
}
