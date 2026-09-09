/* FF4 source-port — interpreted module for func_8013ED14.
 * Ground truth: src/func_8013ED14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013ED14(void)
{
    /* battle rows: 0x2/0x3/0x4 windows, 0x6CFD cells; loop L13ED2C
       on 5DA0(0x4)/5B8C(0x202). */
    latch_cur();
    cell_put(4);
L13ed2c:
    for (;;) {
        func_800F6C68();
        cell_put(2);
        row_read(0x80);
        cell_put(3);
        row_page(2);
        row_read(0x3F);
        func_800F61E8();
        func_800F8960(0x6CFD);
        step2();
        row_page(2);
        row_read(0x40);
        sep_a();
        row_open_w(4);
        func_800F78C4(cell_state(3));
        func_800F8960(0x6CFD);
        step2();
        cell_step();
        poll_pair(4);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
