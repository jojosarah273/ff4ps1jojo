/* FF4 source-port — interpreted module for func_80119E7C.
 * Ground truth: src/func_80119E7C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119E7C(void)
{
    txt_set(0x1706);
    sep_b();
    func_800F8058(7);
    cell_put(0x3D);
    txt_set(0x1707);
    sep_b();
    func_800F8058(7);
    if (func_800F53FC() == 0)
        goto L19EF8;
    sep_a();
    row_open_w(0xF);
    cell_put(7);
    open_row(0x3E);
    goto L19F18;
L19EF8:
    row_read(0x1F);
    cell_put(0x3E);
    latch(0xF);
    cell_put(7);
L19F18:
    page(0x3D);
    draw_pad(0x10);
L19f2c:
    for (;;) {
        func_800F6C68();
        io_poll(0x60);
        if (io_just() != 0)
            goto L19FB4;
        cell_step();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        key_page(0x3E);
        row_page(0x3E);
        io_poll(0x20);
        if (io_go() != 0)
            goto L1A1EC;
        poll_pair(7);
        if (poll_go(0x202) != 0)
            goto L19F18;
        goto L1A1EC;
    L19FB4:
        tail(0x3D);
        latch(0x64);
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_800F61E8();
        func_800F885C();
        func_8011A204();
        wnd_open_cur();
        draw_pad_cur();
    L1a024:
        for (;;) {
            row_prep(0x20);
            func_800F6CF4();
            func_800F6CF4();
            func_800F6CF4();
            func_800F6CF4();
            func_800F89D4(0xA27);
            func_800F89D4(0xA29);
            func_800F89D4(0xA2F);
            func_800F89D4(0xA31);
            row_sync2_cur();
            row_prep_close();
            row_read(7);
            if (sel(2) != 0)
                goto L1A19C;
            sep_a();
            row_open_w(8);
        L1A19C:
            poll_t(8);
            if (io_just() == 0)
                continue;
            break;
        }
        latch(1);
        cell_put(0xE2);
        latch(0x31);
        func_800FD804();
    L1A1EC:
        func_8011EA5C();
        return;
    }
}
