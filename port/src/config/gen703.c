/* FF4 source-port — interpreted module for func_80129B04.
 * Ground truth: src/func_80129B04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80129B04(void)
{
    /* rows: 0x41/0x60/0x45/0x5D windows, 3F38(3C3C(0x45)) +
       3F38(3A70(0x5D)) reads; v1/v0 gates route the L129BF8 etc
       tails; 5574 close. */
    row_sync();
    cell_fmt2(0x41);
    func_800F6E30(0x60);
    row_sel_cell_cur();
    cell_put(0x45);
    sep_a();
    cell_poke0(cell_state(0x45));
    cell_poke0(cell_bank_sel(0x5D));
    cell_state_of();
    cell_put(0x45);
    open_row(0x46);
    cell_fmt2(0x45);
    /* v1/v0 gates -> L129BD8 / L129BE8 / L129BF8 / L129C0C /
       L129C18 / L129C34 */
    row_done();
    io_poll_cur();
    return;
}
