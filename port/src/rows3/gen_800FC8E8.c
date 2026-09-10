/* FF4 source-port — interpreted module for func_800FC8E8.
 * Ground truth: src/func_800FC8E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
uint32_t shop_banner_7f(void)
{
    /* shop banner: 0x7F window, 0x5800 cells; loops LFC918/LFC968
       (5A90(0x100) gate). */
    func_800F654C(0x7F);
    cell_cursor_dec();
    func_800F9448();
    wnd_open_cur();
    draw_pad_cur();
LFC918:
    for (;;) {
    LFC91C:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x5800);
            cell_step();
            func_800F63BC();
            row_read(0xF);
            if (ticker_reblend(0x202) != 0)
                goto LFC918;
            break;
        }
    LFC968:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x5800);
            cell_step();
            func_800F63BC();
            func_800F654C();
            cell_pull_c8(0x5800);
            func_800F63BC();
            row_read(0xF);
            if (ticker_reblend(0x202) != 0)
                continue;
            break;
        }
        func_800F5A90(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C();
    cell_cursor_dec();
    func_800F9448();
    return;
    return 0;
}
