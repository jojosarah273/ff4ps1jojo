/* FF4 source-port — interpreted module for func_801266F0.
 * Ground truth: src/func_801266F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801266F0(void)
{
    /* rows: 0x100/0x1C/0x41 windows, 86F0(0x89) cell; loop L126740
       on 5C64(0x202). */
    row_open();
    row_open3();
    wnd_open(0x100);
    row_open();
    func_800F94B8();
    row_prep(0x20);
    row_sync2_cur();
    draw_pad(0x1C);
    page(0x41);
L126740:
    for (;;) {
        func_800F86F0(0x89);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    func_800F94B8();
    row_close();
    return;
}
