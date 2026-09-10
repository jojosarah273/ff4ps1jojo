/* FF4 source-port — interpreted module for fn_1x1b51c.
 * Ground truth: src/fn_1x1b51c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1b51c(void)
{
    battle_rows_x3d_x3e_windows_xfe5_x();
    latch(0xFE);
    do {
        poll_t(0);
        if (io_just() != 0)
            break;
        sep_b();
        cell_tick_dbl();
        poll_pair_cur();
    } while (1);
    page(0x3D);
    cell_0xf4a7c(0x12E0);
    cell_pull_c8_off(0x12E0);
}
