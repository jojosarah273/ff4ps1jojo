/* FF4 source-port — interpreted module for battle_row_a78_xa2_gate_routes_the.
 * Ground truth: src/battle_row_a78_xa2_gate_routes_the.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_a78_xa2_gate_routes_the(void)
{
    /* battle row: 6A78(0xA2)/6434 gate routes the 6AF4(0xA1) stat
       cells (0x1D/0x89/0x8B windows); 53C0 check. */
    cell_push_c8_c2(0xA2);
    if (gate_cur() != 0)
        goto L121720;
    row_prep(0x20);
    cell_0xf6af4(0xA1);
    cell_pos_mask(0x7FFF);
    cell_put_hi9(0x1D);
    cell_0xf6af4(0x89);
    sep_b();
    cell_pos_sub16(cell_state(0x1D));
    cell_0xf86f0(0x89);
    row_prep_close();
    if (io_go() != 0)
        goto L1217DC;
    cell_0xf5b2c(cell_state(0x8B));
    return;
L121720:
    row_prep(0x20);
    cell_0xf6af4(0x89);
    sep_a();
    cell_peek0(cell_state(0xA1));
L121798:
    cell_0xf86f0(0x89);
    row_prep_close();
    if (io_go() == 0)
        return;
    cell_dispatch(cell_state(0x8B));
    return;
    return;
L1217DC:
    return;
}
