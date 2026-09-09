/* FF4 source-port — interpreted module for func_8016E358.
 * Ground truth: src/func_8016E358.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016E358(void)
{
    /* shop memory: 0x7D21 gate, 0x2121/0x2123/0x2127/0x7D24/0x7D1A
       texts, 0x1C window; loop L16E398 (5958(4)) with the 5D24/5B8C
       ladders. */
    txt_set(0x7D21);
    if (gate(0x202) != 0)
        goto L16E410;
    row_prep(0x20);
    wnd_open(0x1C);
    func_800F658C(0x2121);
    func_800F922C();
L16e398:
    for (;;) {
        func_800F6BE0(0x2103);
        func_800F87DC(0x2105);
        func_800F5E48();
        func_800F5E48();
        poll_t(4);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0(0x2109);
    sep();
    row_prep_close();
    if (func_800F5D24(0x7D24) != 0)
        goto L16E480;
    page_paint2(0x7D21);
    goto L16E480;
L16E410:
    if (func_800F5D24(0x7D22) != 0)
        goto L16E480;
    func_800F8F74(0x7D21);
    func_800F8F74(0x7D23);
    latch(0x1A);
    txt_draw(0x7D24);
    txt_set(0x7D26);
    page_paint2(0x7D26);
    txt_cell_cur();
    txt_draw(0x7D22);
    return;
L16E480:
    return;
}
