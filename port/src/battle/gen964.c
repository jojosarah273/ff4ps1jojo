/* FF4 source-port — interpreted module for battle_c3c_b04_x2000_x3_b9c_gates.
 * Ground truth: src/battle_c3c_b04_x2000_x3_b9c_gates.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_x2000_x3_b9c_gates(void)
{
    /* battle: 3C3C/3B04(0x2000)x3/3B9C gates; 9330/939C rows with
       the v0/v1 latch loop L146824; closes 960C/95A0. */
    cell_state_of();
    cell_state(0x300);
    cell_state(0x2000);
    cell_state_of();
    cell_peek_cur();
    row_open();
    row_sync();
    /* v0 gates -> L146924 / L1467D8 */
L146824:
    /* v0/v1 latch -> L146824 */
    row_done();
    row_close();
    return;
}
