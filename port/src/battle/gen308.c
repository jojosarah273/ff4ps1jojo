/* FF4 source-port — interpreted module for func_801126A0.
 * Ground truth: src/func_801126A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801126A0(void)
{
    /* battle item-status (twin of 8011285C): 0x1706/0x1700 headers,
       0xACF-0xAD8 texts, 80115BCC/80115D2C sub-renders; loop L1127C0
       scrolls on 7170(0x202). */
    func_80176060();
    page_open(0x1706);
    row_open();
    wnd_open_cur();
    label(0x1706);
    func_800F8F74(0x1700);
    func_800FB09C();
    latch(0x20);
    cell_put(0xAD);
    latch(0x10);
    func_8017559C();
    latch(0x81);
    txt_draw(0x4200);
    latch(3);
    func_800FD85C();
    wnd_open(0x40);
    func_80116398();
    latch(1);
    cell_put(0xE3);
    latch(0x20);
    txt_draw(0xACF);
    latch(2);
    txt_draw(0xAD0);
    latch(2);
    txt_draw(0xAD1);
    wnd_open(0x7070);
    label(0xAD4);
    wnd_open(0x40);
    label(0xAD2);
    func_800F8F74(0xACD);
    latch(2);
    txt_draw(0xACE);
    latch(0x5E);
    func_800FD804();
    func_80115BCC();
L1127c0:
    for (;;) {
        func_800FE7D8();
        func_80115D2C();
        page_open(0xAD2);
        poll_t(0x10);
        if (io_go() != 0)
            goto L11280C;
        txt_draw(0x2100);
    L11280C:
        page_open(0xAD2);
        if (func_800F7170(0x202) != 0)
            continue;
        break;
    }
    row_close();
    label(0x1706);
    open_row(0xE3);
    open_row(0x80);
    func_8011EA5C();
    return;
}
