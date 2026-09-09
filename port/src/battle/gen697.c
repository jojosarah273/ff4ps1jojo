/* FF4 source-port — interpreted module for func_80142394.
 * Ground truth: src/func_80142394.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80142394(void)
{
    /* battle rows: 4x 6B68/8768 cell pairs; loop L1423C0 on
       5958(3), then 4x 5D24 close. */
    sep();
L1423c0:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        txt_cell_cur();
        cell_draw_cur();
        cell_step();
        poll_t(3);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800F5D24();
    func_800F5D24();
    func_800F5D24();
    func_800F5D24();
    return;
}
