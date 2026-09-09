/* FF4 source-port — interpreted module for func_80153518.
 * Ground truth: src/func_80153518.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80153518(void)
{
    /* options: 0x2003-0x2006 cells with 0x38BF-0x38C1 stats,
       8015330C row; loop L153560 on 5A90(0xF). */
    sep();
L153560:
    for (;;) {
        txt_cell(0x2003);
        cell_pull_c8(0x38BF);
        row_read(0xF8);
        cell_draw(0x2003);
        txt_cell(0x2004);
        cell_pull_c8(0x38C0);
        row_read(0x40);
        cell_draw(0x2004);
        page_paint(0x2005);
        txt_cell(0x2006);
        cell_pull_c8(0x38C1);
        page_paint(0x2006);
        func_8015330C();
        step2();
        step2();
        step2();
        poll_t(0xF);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
