/* FF4 source-port — interpreted module for func_8011E534.
 * Ground truth: src/func_8011E534.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011E534(void)
{
    cell_put(0x3D);
    open_row(0x3E);
    latch(0x17);
    cell_put(6);
    txt_set(0xFE5);
    row_read(1);
    if (sel(0x202) != 0)
        goto Le594;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto Le59c;
Le594:
    key_page(0x3E);
Le59c:
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    page(0x3D);
    cell_push_c8();
    cell_put(0x3D);
    cell_push_c8();
    cell_put(0x3E);
    if (gate(0x8080) == 0) {
        key_page(6);
        row_read(0x7F);
        cell_put(0x3E);
    }
    cell_push_c8();
    cell_put(0x40);
    cell_push_c8();
    row_read(0x7F);
    cell_put(0x41);
    page(0x3D);
    if (cell_flags_cmp(cell_state(0x40)) != 0) {
        row_page(0x41);
        sep_a();
        row_open_w(0x80);
        cell_put(0x41);
    }
    txt_set(0xFE5);
    row_read(1);
    if (sel(0x202) != 0)
        goto Le6cc;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto Le6d4;
Le6cc:
    key_page(6);
Le6d4:
    row_page(0x40);
    sep_b();
    cell_tick_sub(cell_state(0x3D));
    cell_put(0x40);
    row_page(0x41);
    cell_tick_sub(cell_state(0x3E));
    cell_put(0x41);
    cell_fmt2(0x3D);
    wnd_open_cur();
    row_page(6);
    cell_cursor_dec();
    row_pad();
Le744:
    for (;;) {
        cell_push_c8_d58(0x8000);
        cell_pull_c8_off();
        cell_step();
        if (cell_flags_cmp(cell_state(0x40)) != 0)
            goto Le7d0;
        step2();
        poll_t(0x8000);
        if (io_just() == 0)
            goto Le744;
        draw_pad_cur();
        key_page(6);
        row_page(6);
        cell_cursor_dec();
        row_pad();
    }
Le7d0:
    latch_cur();
    cell_cursor_dec();
    row_pad();
    wnd_open_cur();
    tail(0x40);
    tail(0x3D);
Le804:
    for (;;) {
        cell_push_c8();
        if (gate(0x8080) != 0)
            goto Le938;
        row_read(0x7F);
        cell_cursor_dec();
        cell_push_c8();
        step2();
        row_close2();
        page(0x40);
    Le864:
        for (;;) {
            cell_pull_c8_off();
            cell_step();
            tail(0x40);
            cell_cursor_dec();
            io_poll(0x20);
            if (io_just() == 0)
                goto Le8d0;
            key_page(0x41);
            open_row(0x40);
            page(0x40);
        Le8d0:
            row_close2();
            poll_t(0x2000);
            if (io_just() != 0)
                return;
            poll_pair_cur();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        page(0x3D);
        tail(0x3D);
        continue;
    Le938:
        page(0x40);
        cell_pull_c8_off();
        cell_step();
        tail(0x40);
        io_poll(0x20);
        if (io_just() != 0) {
            open_row(0x40);
            key_page(0x41);
        }
        page(0x40);
        poll_t(0x2000);
        if (io_just() != 0)
            return;
        page(0x3D);
        cell_step();
        tail(0x3D);
    }
}
