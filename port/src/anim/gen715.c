/* FF4 source-port — interpreted module for func_80175CB4.
 * Ground truth: src/func_80175CB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80175CB4(void)
{
    /* shop rows: 0xDDB cells; loops L175CCC/L175CD0/L175D20 on
       4120(0x202)/5A90(0x80). */
    draw_pad_cur();
    wnd_open_cur();
L175CCC:
    for (;;) {
    L175cd0:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xDDB);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L175CCC;
            break;
        }
    L175d20:
        for (;;) {
            latch_cur();
            func_800F8960(0xDDB);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
