/* FF4 source-port — interpreted module for func_8015E84C.
 * Ground truth: src/func_8015E84C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015E84C(void)
{
    /* options: 0x14/0x280/0x2001 cells, 80150C38/8015330C/80058554
       rows; loop L15E890 on 5A90(8). */
    latch(0x14);
    gpu_driver_run_b();
    wnd_open(0x280);
    sep();
L15e890:
    for (;;) {
        txt_cell(0x2001);
        row_read(0x7F);
        cell_tick_or(cell_state_of());
        cell_draw(0x2001);
        func_8015330C();
        step2();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_clear_bank(0x390A);
    func_80058554();
    return;
}
