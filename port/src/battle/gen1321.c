/* FF4 source-port — interpreted module for battle_c3c_b04_gates_bc_pair_rows.
 * Ground truth: src/battle_c3c_b04_gates_bc_pair_rows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_c3c_b04_gates_bc_pair_rows(void)
{
    /* battle: 3C3C/3B04 gates; 801411BC/80141240 pair rows. */
    cell_state_of();
    cell_state_of();
    if (io_just() == 0)
        goto L1411A8;
    battle_c3c_rows();
    fn_1x41240();
    goto L1411A8;
L141178:
    battle_c3c_rows();
    fn_1x41240();
    return;
L1411A8:
    return;
}
