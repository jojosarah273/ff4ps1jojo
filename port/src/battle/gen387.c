/* FF4 source-port — interpreted module for func_8010E388.
 * Ground truth: src/func_8010E388.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010E388(void)
{
    /* battle spell screen: 0xACF-0xAD8 texts, 0xE3/0x89 windows,
       80115BCC/80115D2C sub-renders; loop L10E428 (5C64(0x202))
       scrolls rows. */
    latch(0x10);
    txt_draw(0xACF);
    wnd_open(0x20);
    label(0xAD2);
    latch(7);
    txt_draw(0xACD);
    func_800F8F74(0xACE);
    latch(2);
    txt_draw(0xAD0);
    txt_draw(0xAD1);
    func_80115BCC();
    latch(1);
    cell_put(0xE3);
    latch(0x23);
    func_800FD804();
    wnd_open(0xC0);
    tail(0x89);
L10e428:
    for (;;) {
        func_800FE778();
        func_800FE870();
        txt_set(0x1707);
        sep_b();
        func_800F8058(0x10);
        row_page(1);
        row_read(0xD8);
        txt_draw_cur();
        sep_a();
        row_open_w0();
        txt_draw(0xAD5);
        func_80115D2C();
        func_800FF024();
        page(0x89);
        func_800F5E48();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    open_row(0xE3);
    func_8011EA5C();
    return;
}
