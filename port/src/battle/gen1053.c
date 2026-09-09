/* FF4 source-port — interpreted module for func_80140CFC.
 * Ground truth: src/func_80140CFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140CFC(void)
{
    /* battle rows: loop L140D28 on 6B68(0x34C2)/8768(0x34C2)x2/
       6364/5958(8). */
    sep();
    do {
        txt_cell(0x34C2);
        cell_draw(0x34C2);
        cell_draw_cur();
        cell_step();
        poll_t(8);
    } while (io_just() == 0);
    return;
}
