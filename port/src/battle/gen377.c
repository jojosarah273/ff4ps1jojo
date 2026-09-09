/* FF4 source-port — interpreted module for func_80118244.
 * Ground truth: src/func_80118244.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118244(void)
{
    /* battle rows: 0x40/0x7/0x3D windows with three 1000/102D/1037/
       103F stat-cell loops (5DA0(7)/5B8C(0x202) latch each), closing
       via 801183D8. */
    row_prep(0x20);
    cell_put_hi9(0x40);
    row_sync2_cur();
    row_prep_close();
    latch(0x14);
    cell_put(7);
    page(0x40);
    cell_fmt2(0x3D);
L1182a4:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x1000);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(3);
    cell_put(7);
    page(0x40);
    cell_fmt2(0x3D);
L118300:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x102D);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(9);
    cell_put(7);
    page(0x40);
    cell_fmt2(0x3D);
L118360:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0x1037);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_801183D8();
    return;
}
