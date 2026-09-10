/* FF4 source-port — interpreted module for battle_c3c_b04_b9c_x2000_gates_x_a.
 * Ground truth: src/battle_c3c_b04_b9c_x2000_gates_x_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_b9c_x2000_gates_x_a(void)
{
    /* battle: 3C3C/3B04/3B9C(0x2000) gates; 2x 800728AC rows and the
       s0/v1 regcmp loops with 9330/95A0 closes. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
    if (cell_state(0x2000) == 0)
        goto L14802C;
    /* s0/v0 gate -> L14802C */
    row_open();
L14802C:
    func_800728AC();
    func_800728AC();
    /* v1/v0 gates -> L1480A4 / L1480AC / L1480DC loop */
    row_open();
    /* s0/v1 latch -> L148164 / L148174 */
    row_close();
    /* L1481C4 -> L148264: s0/v1 latch -> L1480DC */
    row_close();
    return;
}
