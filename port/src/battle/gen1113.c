/* FF4 source-port — interpreted module for battle_rows_d54_d44_loop_on_b68_xf.
 * Ground truth: src/battle_rows_d54_d44_loop_on_b68_xf.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void battle_rows_d54_d44_loop_on_b68_xf(void)
{
    /* battle rows: D54 <- D44; loop on 6B68(0xF476)/8768(0x34C2)/
       6364/5958(8). */
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    do {
        txt_cell(0xF476);
        cell_draw(0x34C2);
        cell_step();
        poll_t(8);
    } while (io_just() == 0);
}
