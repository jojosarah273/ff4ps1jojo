/* FF4 source-port — interpreted module for func_800FC8E8.
 * Ground truth: src/func_800FC8E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FC8E8(void)
{
    /* shop banner: 0x7F window, 0x5800 cells; loops LFC918/LFC968
       (5A90(0x100) gate). */
    latch(0x7F);
    func_800F9200();
    row_pad();
    wnd_open_cur();
    draw_pad_cur();
LFC918:
    for (;;) {
    LFC91C:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5800);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto LFC918;
            break;
        }
    LFC968:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5800);
            cell_step();
            step2();
            latch_cur();
            func_800F8960(0x5800);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    latch_cur();
    func_800F9200();
    row_pad();
    return;
}
