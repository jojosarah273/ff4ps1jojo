/* FF4 source-port — interpreted module for func_80141A80.
 * Ground truth: src/func_80141A80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141A80(void)
{
    /* battle rows: 80140558/80140310 loop L141AB8 on 5958(0x14),
       with 80D0(8)/81B0 cells. */
    sep();
    label_cur();
    label_cur();
L141ab8:
    for (;;) {
        gpu_driver_run();
        func_80140310();
        row_prep(0x20);
        cell_push9();
        sep_b();
        cell_pos_back2(8);
        cell_pull9_hi();
        sep();
        row_prep_close();
        cell_step();
        poll_t(0x14);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
