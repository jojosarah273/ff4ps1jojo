/* FF4 source-port — interpreted module for battle_c3c_b04_gates_loop_on_a0_v1.
 * Ground truth: src/battle_c3c_b04_gates_loop_on_a0_v1.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_gates_loop_on_a0_v1(void)
{
    /* battle: 3C3C/3B04 gates; 6364 loop on a0/v1 latch. */
    cell_addr16();
    catalog_base();
    do {
    } while (io_just() == 0);
    cell_step();
    return;
}
