/* FF4 source-port — interpreted module for func_8010FB58.
 * Ground truth: src/func_8010FB58.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010FB58(void)
{
    /* battle rows (twin of 8010F944): 0xEF/0xF1/0xF3/0xF5/0x89
       windows, 8010FCA8/80115D2C/80110474/8011EA5C; loop L10FBB8
       (5958(0x140) weights). */
    wnd_open(0x30);
    tail(0xEF);
    wnd_open(0xB0);
    tail(0xF1);
    wnd_open(0x100);
    tail(0xF3);
    wnd_open_cur();
    tail(0xF5);
    func_8010FCA8();
    wnd_open(0x1C0);
    tail(0x89);
L10fbb8:
    for (;;) {
        func_800FE778();
        func_800FE870();
        page(0x89);
        poll_t(0x140);
        if (io_go() != 0)
            goto L10FC28;
        row_page(0x7A);
        row_read(3);
        if (sel(0x202) != 0)
            goto L10FC60;
        page(0xF3);
        func_800F5E48();
        tail(0xF3);
        goto L10FC60;
    L10FC28:
        func_80115D2C();
        page(0x89);
        poll_t(0x1B8);
        if (io_just() == 0)
            goto L10FC60;
        latch(0x23);
        func_800FD804();
    L10FC60:
        func_80110474();
        page(0x89);
        func_800F5E48();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
