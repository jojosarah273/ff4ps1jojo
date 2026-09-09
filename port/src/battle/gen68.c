/* FF4 source-port — interpreted module for func_8010F68C.
 * Ground truth: src/func_8010F68C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010F68C(void)
{
    /* battle command-row screen: 0x20/0x24/0x7A/0x22 row windows,
       8010543C/80102770 sub-renders, 801105A4 + 80173780 commits;
       loops until 5574(3)/53D4 returns at L10F934. */
    open_row(0x20);
    open_row(0x24);
    open_row(0x7A);
L10f6ac:
    for (;;) {
        wnd_fx_7d();
        row_page(0x20);
        if (gate(2) != 0)
            goto L10F784;
        poll_pair(0x20);
        row_page(0x20);
        row_read(1);
        if (sel(2) != 0)
            goto L10F784;
        row_page(0x20);
        cell_tick_half();
        cell_put(0x22);
        row_page(0x5C);
        sep_a();
        cell_poke0(cell_state(0x22));
        row_page(0x5D);
        row_open_w0();
    L10F784:
        row_page(0x7A);
        row_read(0x7F);
        if (sel(0x202) != 0)
            goto L10F7EC;
        key_page(0x24);
        row_page(0x24);
        io_poll(3);
        if (io_just() != 0)
            return;
        latch(4);
        cell_put(5);
        open_row(4);
        goto L10F81C;
    L10F7EC:
        row_page(0x7A);
        row_read(0xF);
        if (sel(0x202) != 0)
            goto L10F81C;
        open_row(5);
        open_row(4);
    L10F81C:
        cell_clear_pad();
        func_8011416C();
        latch(1);
        cell_put(0xD5);
        func_8010543C();
        func_80102770();
        row_page(0x5C);
        sep_a();
        row_open_w(0xF);
        row_read(0x10);
        if (sel(0x202) != 0)
            goto L10F88C;
        wnd_open_cur();
        goto L10F894;
    L10F88C:
        wnd_open(0x18);
    L10F894:
        latch(0x60);
        cell_put(0xC);
        latch(0x50);
        cell_put(0xE);
        func_801105A4();
        row_page(0x5C);
        row_read(0xF);
        io_poll(0xF);
        if (io_just() == 0)
            goto L10F8F4;
        latch(0x48);
        wnd_fx_pads();
    L10F8F4:
        func_80173780();
        row_page(0x7A);
        row_read(0x7F);
        if (sel(0x202) != 0)
            continue;
        latch(0x20);
        cell_put(0x20);
    }
    return;
}
