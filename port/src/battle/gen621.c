/* FF4 source-port — interpreted module for func_8010A5A0.
 * Ground truth: src/func_8010A5A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010A5A0(void)
{
    /* shop banner: 0xE9 window + 0x2115 gate; spins on L10A620,
       then 0x834/0x774 text rows (L10A748/L10A84C) before restoring
       0x2115. */
    row_page(0xE9);
    if (gate(0x202) == 0)
        return;
    open_row(0xE9);
    latch(0x80);
    txt_draw(0x2115);
L10a620:
    for (;;) {
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
L10a748:
    for (;;) {
        txt_cell(0x834);
        cell_step();
        poll_t(0x14);
        if (io_just() != 0)
            break;
    }
    wnd_open_cur();
L10a84c:
    for (;;) {
        txt_cell(0x774);
        cell_step();
        poll_t(0x14);
        if (io_just() != 0)
            break;
    }
    latch(0x80);
    txt_draw(0x2115);
L10a8d4:
    for (;;) {
        if (io_just() != 0)
            break;
    }
    return;
}
