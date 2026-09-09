/* FF4 source-port — interpreted module for func_8014CE94.
 * Ground truth: src/func_8014CE94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014CE94(void)
{
    /* battle rows: 4x 8768 cells (0x7612-0x77B6); loop L14CEAC on
       5958(0x8C). */
    func_800F9200();
    wnd_open_cur();
L14ceac:
    for (;;) {
        cell_draw(0x7612);
        cell_draw(0x769E);
        cell_draw(0x772A);
        cell_draw(0x77B6);
        poll_t(0x8C);
        if (io_just() == 0)
            continue;
        break;
    }
    row_close2();
    return;
}
