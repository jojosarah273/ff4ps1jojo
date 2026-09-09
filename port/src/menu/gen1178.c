/* FF4 source-port — interpreted module for func_800FE8B4.
 * Ground truth: src/func_800FE8B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FE8B4(void)
{
    /* battle: 3C3C/3B04 gates; 6364 loop on a0/v1 latch. */
    cell_state_of();
    cell_state_of();
    do {
    } while (io_just() == 0);
    cell_step();
    return;
}
