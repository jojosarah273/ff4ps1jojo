/* FF4 source-port — interpreted module for func_801241B8.
 * Ground truth: src/func_801241B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801241B8(void)
{
    /* rows: 0x300/0x302/0x500 cells via 88E4(768/12288/770/1280);
       loops L1241D8/L124238 on 5C64(0x202). */
    row_prep(0x20);
    draw_pad(0x80);
    wnd_open_cur();
L1241d8:
    for (;;) {
        row_sync2_cur();
        cell_pull89_fn(0x300);
        row_sync2(0x3000);
        cell_pull89_fn(0x302);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    draw_pad(0x10);
    row_sync2_cur();
L124238:
    for (;;) {
        cell_pull89_fn(0x300);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_sync2_cur();
    func_800F8210(0x500);
    row_prep_close();
    return;
}
