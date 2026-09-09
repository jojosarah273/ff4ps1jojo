/* FF4 source-port — interpreted module for func_8011383C.
 * Ground truth: src/func_8011383C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011383C(void)
{
    latch(0x51);
    func_800FD804();
    latch(0x60);
    cell_put(0xAD);
    open_row(0x79);
    open_row(0x7A);
L1388c:
    for (;;) {
        wnd_fx_7d_b();
        row_page(0x7A);
        row_read(0x1C);
        row_page(0x83);
        row_read(0xE0);
        func_8017EA90();
        row_page(0x7A);
        row_read(0xF);
        if (sel(0x202) != 0)
            goto L13958;
        key_page(0x79);
    L13958:
        func_8011416C();
        open_row(0x20);
    L13968:
        for (;;) {
            row_page(0x20);
            sep_a();
            cell_poke0(cell_state(0x6FB));
            cell_put(0x22);
            row_sel_cell_cur();
            sep_a();
            cell_poke0(cell_state(0x22));
            func_801140A4();
            func_80113C04();
            row_page(0x20);
            sep_a();
            row_open_w(0x40);
            sep_a();
            cell_poke0(cell_state(0x6FB));
            row_sel_cell_cur();
            func_801140A4();
            func_80113C54();
            row_page(0x20);
            row_read(3);
            cell_pull_c8(0x302);
            io_poll(0xEC);
            if (io_just() == 0)
                goto L13B18;
            row_page(0x7A);
            row_read(4);
            if (sel(2) != 0)
                goto L13B18;
            latch(0x79);
        L13B18:
            latch(0x39);
            cell_pull_c8(0x303);
            key_page(0x20);
            row_page(0x20);
            io_poll(0x10);
            if (io_just() != 0)
                break;
        }
        page_paint2(0x6FB);
        row_page(0x7A);
        row_read(3);
        if (sel(0x202) != 0)
            goto L13BB0;
        row_page(0x79);
        io_poll(0x12);
        if (io_go() != 0)
            goto L13BA8;
        poll_pair(0xAD);
        goto L13BB0;
    L13BA8:
        key_page(0xAD);
    L13BB0:
        row_page(0xAD);
        io_poll(0x62);
        if (io_just() != 0)
            break;
    }
    latch_cur();
    func_800FD804();
    func_8011EA5C();
    return;
}
