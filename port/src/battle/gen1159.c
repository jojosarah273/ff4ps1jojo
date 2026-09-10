/* FF4 source-port — interpreted module for battle_rows_e34_d54_d44_loop_on_c.
 * Ground truth: src/battle_rows_e34_d54_d44_loop_on_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void battle_rows_e34_d54_d44_loop_on_c(void)
{
    /* battle rows: 80142E34 + D54 <- D44; loop on 654C(8)/
       80143E44/6364/5958(0x10). */
    battle_rows_xf42c_xf42d_texts_d54();
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    do {
        latch(8);
        battle_rows_twin();
        cell_step();
        poll_t(0x10);
    } while (io_just() == 0);
}
