/* FF4 source-port — interpreted module for fn_1x05db4.
 * Ground truth: src/fn_1x05db4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x05db4(void)
{
    open_row(0xDC);
L5DC8:
    for (;;) {
        wnd_fx_7d_b();
        fn_1x096f0();
        fn_1x060a8();
        key_page(0xDC);
        row_page(0xDC);
        io_poll(6);
        if (io_just() != 0)
            break;
    }
    latch(1);
    cell_put(0x54);
    open_row(0x8C);
L5E20:
    for (;;) {
        wnd_fx_7d_b();
        fn_1x096f0();
        battle_option_icon_row_windows_wit();
        row_page(2);
        row_read(0x80);
        if (sel(2) != 0)
            goto L5E80;
        row_page(0x54);
        if (gate(0x202) != 0)
            goto L5E80;
        key_page(0x54);
        goto L5FB8;
    L5E80:
        row_page(3);
        row_read(0x80);
        if (sel(2) != 0)
            goto L5ED8;
        row_page(0x55);
        if (gate(0x202) != 0)
            goto L5ED8;
        key_page(0x55);
        latch(1);
        cell_put(0x8C);
        goto L5FB8;
    L5ED8:
        row_page(1);
        row_read(0xC);
        if (sel(2) != 0)
            continue;
        row_page(0x8C);
        cell_put(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            goto L5F44;
        latch(0x14);
        goto L5F50;
    L5F44:
        latch(0xFF);
    L5F50:
        row_page(0x8C);
        if (gate(2) != 0)
            goto L5F8C;
        latch(0x14);
        goto L5F94;
    L5F8C:
        latch(0xFF);
    L5F94:
        fn_1x06860();
    }
L5FB8:
    fn_1x06830();
    row_page(0x8C);
    cell_put(0xDB);
    poll_pair(0xDC);
L5FD8:
    for (;;) {
        wnd_fx_7d_b();
        fn_1x096f0();
        fn_1x060a8();
        poll_pair(0xDC);
        if (poll_go(0x8080) != 0)
            continue;
        break;
    }
    wnd_fx_7d_b();
    fn_1x096f0();
    row_page(0x3D);
    sep_b();
    cell_pos_back(0x20);
    cell_put(0x3D);
    row_page(0x3E);
    cell_pos_back();
    cell_put(0x3E);
    fn_1x062e8();
    row_page(0x3D);
    sep_b();
    cell_pos_back(0x20);
    cell_put(0x3D);
    row_page(0x3E);
    cell_pos_back();
    cell_put(0x3E);
    fn_1x062e8();
    return;
}
