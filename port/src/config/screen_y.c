/* FF4 source-port — interpreted module for func_8013C554.
 * Ground truth: src/func_8013C554.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013C554(void)
{
    /* ability/skill detail (twin of 8013C094): 1BB5/1BB6/1BB7 texts,
       0x46/0x45/0x60 windows, 8012B168/801266C8/8011F884/8013C4B4
       rows; loops L13C55C/L13C75C/L13C82C. */
L13c55c:
    for (;;) {
        txt_set(0x1BB5);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x86);
        cell_put(0x46);
        txt_set(0x1BB6);
        if (gate(2) != 0)
            goto L13C5C4;
        latch(0x70);
        goto L13C5CC;
    L13C5C4:
        latch_cur();
    L13C5CC:
        cell_put(0x45);
        func_8011F6D4();
        func_8011F684();
        func_8011F884();
    L13C5EC:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L13C61C;
        func_8012B168();
        return;
    L13C61C:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L13C64C;
        func_8012B168();
        goto L13C89C;
    L13C64C:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto L13C69C;
        txt_set(0x1BB6);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1BB6);
        if (sel(2) != 0)
            goto L13C7CC;
    L13C69C:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto L13C6EC;
        txt_set(0x1BB6);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1BB6);
        if (sel(0x202) != 0)
            goto L13C70C;
    L13C6EC:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L13C7AC;
    L13C70C:
        txt_set(0x1BB5);
        poll_spin();
        if (poll_go_cur() != 0)
            goto L13C7A4;
        txt_set(0x1BB7);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto L13C7AC;
        txt_draw(0x1BB7);
        latch(8);
    L13C75C:
        for (;;) {
            row_prep(0x20);
            cell_dec_cell(0x9F);
            cell_dec_cell(0x9F);
            row_prep_close();
            func_801266C8();
            poll_spin();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        goto L13C86C;
    L13C7A4:
        txt_draw(0x1BB5);
    L13C7AC:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            continue;
        goto L13C7CC;
    L13C7CC:
        txt_set(0x1BB5);
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            goto L13C88C;
        txt_set(0x1BB7);
        cell_set50_from40();
        io_poll(0x14);
        if (io_just() != 0)
            continue;
        txt_draw(0x1BB7);
        latch(8);
    L13C82C:
        for (;;) {
            row_prep(0x20);
            cell_inc_cell(0x9F);
            cell_inc_cell(0x9F);
            row_prep_close();
            func_801266C8();
            poll_spin();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
    L13C86C:
        func_8011F884();
        page(2);
        tail_cur();
        continue;
    L13C88C:
        txt_draw(0x1BB5);
        continue;
    L13C89C:
        txt_set(0x1BB3);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        cell_poke0(cell_state(0x1BB4));
        row_sel_cell_cur();
        func_801224D0();
        txt_set(0x1BB5);
        sep_a();
        cell_poke0(cell_state(0x1BB7));
        row_sel_cell_cur();
        row_sel_cell2_cur();
        cell_poke0(cell_state(0x1BB6));
        row_sel_cell_cur();
        cell_put(0x43);
        cell_fmt2(0x43);
        cell_push_c8_d58(0x1440);
        io_poll(0x19);
        if (io_just() != 0)
            goto L13CA58;
        io_poll(0xC8);
        if (io_just() != 0)
            goto L13CA58;
        io_poll(0xEE);
        if (io_go() != 0)
            goto L13CA58;
        cell_push_c8_d58(0x1440);
        if (io_press(cell_state_of()) == 0)
            goto L13CA18;
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        io_poll(0x64);
        if (io_go() != 0)
            goto L13CA58;
        cell_pull_c8(0x1441);
        page_paint_cur();
        return;
    L13CA18:
        row_prep(0x20);
        cell_sink89(0x1440);
        cell_cursor_ret2();
        cell_sink8_9();
        cell_stamp8_9_b(0x1440);
        cell_cursor_adv2();
        cell_stamp8_9();
        row_prep_close();
        return;
    L13CA58:
        func_8013C4B4();
        return;
    }
}
