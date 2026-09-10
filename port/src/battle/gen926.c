/* FF4 source-port — interpreted module for battle_rows_c3c_b04_x2000_x2_b9c_x.
 * Ground truth: src/battle_rows_c3c_b04_x2000_x2_b9c_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_c3c_b04_x2000_x2_b9c_x(void)
{
    /* battle rows: 3C3C/3B04(0x2000)x2/3B9C(0xF0) gates; spins
       L147B14/L147B38; 9330 + 80146A44 row; 3B9C/95A0 then the
       80147FA0/801466E0 gated block. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    cell_peek_cur();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    /* v0 gate -> L147F78 */
    row_open();
    if (battle_magic_cast_flow_v0_cascades() == 0)
        goto L147BD4;
L147BD4:
    /* gate tree L147BE8..L147E94 -> 3B9C */
    cell_peek_cur();
L147EA8:
    row_close();
    /* gates -> L147F54/L147F68 */
    if (battle_c3c_b04_b9c_x2000_gates_x_a() == 0)
        goto L147F68;
    if (io_just() == 0)
        goto L147F68;
L147F54:
    battle_c3c_b04_x2000_x3_b9c_gates();
    return;
L147F68:
    return;
}
