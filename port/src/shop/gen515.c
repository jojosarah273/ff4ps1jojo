/* FF4 source-port — interpreted module for func_8016A0C8.
 * Ground truth: src/func_8016A0C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016A0C8(void)
{
    /* shop cells: 0x2 window, 0x8 gate; loops L16A124 (6764 cells)
       and L16A18C (66D8 cells) on 5C64/5B8C(0x202). */
    row_open2();
    func_800F9200();
    row_pad();
    tail(2);
    draw_pad_cur();
L16a10c:
    for (;;) {
        row_prep(0x20);
        func_800F922C();
        wnd_open(8);
    L16a124:
        for (;;) {
            func_800F6764(2);
            step2();
            step2();
            func_800F5E48();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
        func_800F9410();
        row_prep_close();
    L16a18c:
        for (;;) {
            func_800F66D8(2);
            step2();
            func_800F5E48();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_pad();
    return;
}
