/* FF4 source-port — interpreted module for fn_1x1c2c8.
 * Ground truth: src/fn_1x1c2c8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1c2c8(void)
{
    row_page(0xAB);
    if (gate(0x202) == 0)
        return;
    row_read(1);
    if (sel(2) == 0)
        goto Lc51c;
    row_page(0xAB);
    row_read(2);
    if (sel(2) != 0)
        goto Lc348;
    txt_set(0x1706);
    sep_a();
    row_open_w(0x21);
    cell_put(0x3D);
    goto Lc368;
Lc348:
    txt_set(0x1706);
    sep_b();
    cell_pos_back(0x1F);
    cell_put(0x3D);
Lc368:
    txt_set(0x1707);
    sep_b();
    cell_pos_back(0x1F);
    row_read(0x3F);
    cell_put(0x3E);
    page(0x3D);
    tail(0x40);
    draw_pad_cur();
    for (;;) {
        page(0x3D);
        cell_push_c8();
        cell_pull_c8(0xADB);
        cell_pull_c8(0xADC);
        cell_pull_c8(0xB5B);
        cell_pull_c8(0xB5C);
        row_page(0x3E);
        cell_set50_from40();
        row_read(0x3F);
        cell_put(0x3E);
        poll_t(0x80);
        if (io_just() != 0)
            break;
    }
    open_row(0x98);
    open_row(0x96);
    open_row(0x9C);
    open_row(0xA0);
    row_page(0x40);
    row_sel_cell_cur();
    row_read(0x7F);
    cell_put(0x99);
    cell_put(0x9B);
    cell_set50_from40();
    cell_put(0x9D);
    cell_put(0x9F);
    txt_set(0x1707);
    sep_b();
    cell_pos_back(0x1F);
    row_read(0x3F);
    cell_put(0x9A);
    cell_put(0x9E);
    row_sel_cell_cur();
    cell_put(0x97);
    latch(0x80);
    sep_b();
    cell_tick_sub(cell_state(0x97));
    cell_put(0x95);
    key_page(0x94);
    return;
Lc51c:
    row_page(0xAB);
    row_read(2);
    if (sel(0x202) != 0)
        goto Lc574;
    txt_set(0x1707);
    sep_b();
    cell_pos_back(0x1F);
    cell_put(6);
    row_read(0x3F);
    cell_put(0x3E);
    goto Lc5a4;
Lc574:
    txt_set(0x1707);
    sep_a();
    row_open_w(0x20);
    cell_put(6);
    row_read(0x3F);
    cell_put(0x3E);
Lc5a4:
    txt_set(0x1706);
    sep_b();
    cell_pos_back(0x1F);
    cell_put(0x3D);
    page(0x3D);
    tail(0x40);
    draw_pad_cur();
    for (;;) {
        page(0x3D);
        cell_push_c8();
        cell_pull_c8(0xADB);
        cell_pull_c8(0xADC);
        cell_pull_c8(0xB5B);
        cell_pull_c8(0xB5C);
        key_page(0x3D);
        poll_t(0x80);
        if (io_just() != 0)
            break;
    }
    open_row(0x97);
    open_row(0x98);
    latch(0x80);
    cell_put(0x95);
    open_row(0x96);
    open_row(0x9B);
    latch(0x80);
    cell_put(0x9F);
    row_page(6);
    row_read(0x3F);
    cell_put(0x9A);
    cell_put(0x9C);
    cell_put(0x9E);
    cell_put(0xA0);
    txt_set(0x1706);
    sep_b();
    cell_pos_back(0x1F);
    row_read(0x3F);
    row_sel_cell_cur();
    cell_put(0x99);
    sep_a();
    row_open_w(0x80);
    cell_put(0x9D);
    row_page(0x99);
    cell_put(0x97);
    latch(0x80);
    sep_b();
    cell_tick_sub(cell_state(0x97));
    cell_put(0x95);
    key_page(0x94);
    return;
}
