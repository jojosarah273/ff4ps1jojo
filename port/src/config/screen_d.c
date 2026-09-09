/* FF4 source-port — interpreted module for func_801548F4.
 * Ground truth: src/func_801548F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801548F4(void)
{
    txt_set(0x29A0);
    row_read(3);
    if (sel(2) != 0)
        goto ab0;
    io_poll(1);
    if (io_just() == 0)
        goto reset_ask;
    sep();
    for (;;) {
        txt_cell(0x29B5);
        io_poll(1);
        if (io_just() != 0)
            break;
        cell_step();
    }
    func_80155658();
    goto ab0;
reset_ask:
    io_poll(2);
    if (io_just() == 0)
        goto save_ask;
    sep();
    tail(0xC7);
    for (;;) {
        page(0xC7);
        txt_cell(0x29B5);
        if (gate(2) != 0)
            goto r_skip;
        io_poll(0xFF);
        if (io_just() != 0)
            goto ab0;
        func_80155658();
    r_skip:
        key_page(0xC7);
    }
save_ask:
    sep();
    tail(0xC7);
    for (;;) {
        page(0xC7);
        txt_cell(0x29B5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto ab0;
        io_poll(2);
        if (io_just() == 0)
            goto s_skip;
        io_just();
        func_80155658();
    s_skip:
        key_page(0xC7);
    }
ab0:
    txt_set(0x3581);
    row_read(8);
    if (sel(2) != 0)
        goto ae8;
    latch(0x80);
    txt_draw(0x38D8);
    goto f0c;
ae8:
    txt_set(0x3582);
    if (gate(0x202) != 0)
        goto f0c;
    txt_set(0x38E5);
    row_read(1);
    if (sel(0x202) != 0)
        goto f0c;
    txt_set(0x38EF);
    if (gate(0x202) != 0)
        goto f0c;
    sep();
    tail(0xA9);
    tail(0xAB);
    tail(0xAD);
    for (;;) {
        cell_push_c8_d58(0x3540);
        if (gate(0x202) == 0) {
            sep_a();
            txt_cell(0x2002);
            cell_poke0(cell_state(0xA9));
            cell_put(0xA9);
            latch_cur();
            cell_poke0(cell_state(0xAA));
            cell_put(0xAA);
            key_page(0xAD);
        }
        func_8015330C();
        step2();
        poll_t(5);
        if (io_just() != 0)
            break;
    }
    for (;;) {
        cell_push_c8_d58(0x3540);
        if (gate(0x202) == 0) {
            sep_a();
            txt_cell(0x2002);
            cell_poke0(cell_state(0xAB));
            cell_put(0xAB);
            latch_cur();
            cell_poke0(cell_state(0xAC));
            cell_put(0xAC);
            key_page(0xAE);
        }
        func_8015330C();
        step2();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    page(0xA9);
    label(0x3945);
    row_page(0xAD);
    label(0x3947);
    func_8015254C();
    page_open(0x3949);
    txt_draw(0x38D4);
    sep();
    page(0xAB);
    label(0x3945);
    row_page(0xAE);
    label(0x3947);
    func_8015254C();
    page_open(0x3949);
    txt_draw(0x38D5);
    sep();
    sep();
    tail(0xA9);
    key_page(0xA9);
    key_page(0xAA);
    latch(0x63);
    func_80152224();
    if (io_press(cell_state(0x38D4)) == 0)
        key_page(0xA9);
    func_801531CC();
    if (io_press(cell_state(0x38D5)) == 0)
        key_page(0xAA);
    row_page(0xA9);
    if (io_press(cell_state(0xAA)) != 0)
        goto f0c;
    if (io_go() == 0)
        goto e7c;
    page_paint2(0x38D7);
    page_paint2(0x38D8);
    goto f0c;
e7c:
    latch(0x80);
    txt_draw(0x38D7);
    txt_draw(0x38D8);
    txt_set(0x38D5);
    cell_tick_half();
    cell_put(0xA9);
    sep();
    txt_set(0x38D4);
    func_80152224();
    if (io_press(cell_state(0xA9)) == 0) {
        latch(8);
        txt_draw(0x3581);
    }
f0c:
    sep();
    tail(0xC7);
    for (;;) {
        cell_push_c8_d58(0x3540);
        if (gate(0x202) != 0)
            goto fc0;
        row_page(0xC7);
        if (gate(0x202) != 0)
            goto s080;
        txt_cell(0x2000);
        row_read(0x1F);
        io_poll(1);
        if (io_just() != 0)
            goto s080;
        io_poll(0xB);
        if (io_just() != 0)
            goto s078;
    fc0:
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x80);
        sep();
        row_prep_close();
        step2();
        poll_t(5);
        io_just();
        key_page(0xC7);
        sep();
    }
s078:
    cell_pull60(0x355E);
s080:
    txt_cell(0x2015);
    label(0x393D);
    wnd_open(0x32);
    label(0x393F);
    func_8015236C();
    page_open(0x3941);
    tail(0xCB);
    sep();
    tail(0xC7);
    tail(0xC9);
    for (;;) {
        page(0xC9);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto l1c0;
        page(0xC7);
        txt_cell(0x2015);
        cell_put(0xDF);
        latch(0xA);
        cell_put(0xE1);
        options_row_run();
        page(0xCB);
        label(0x3945);
        page(0xE3);
        label(0x3947);
        func_8015254C();
        page_open(0x3949);
        if (cell_flags_pack(0x202) == 0)
            page_paint2(0x3949);
        page(0xC7);
        txt_set(0x3949);
        cell_draw(0x2060);
        txt_set(0x394A);
        cell_draw(0x2061);
    l1c0:
        row_prep(0x20);
        sep_a();
        row_read2(0xC7);
        cell_pos_fwd(0x80);
        cell_put_hi9(0xC7);
        sep();
        row_prep_close();
        key_page(0xC9);
        row_page(0xC9);
        io_poll(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    tail(0xC7);
    for (;;) {
        page(0xC7);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto l488;
        cell_put(0xDF);
        latch(0x80);
        cell_put(0xE1);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        if (gate(0x80) != 0)
            goto l488;
        row_page(0xC7);
        io_poll(5);
        if (io_go() != 0)
            goto l35c;
        txt_set(0x3581);
        row_read(8);
        if (sel(2) != 0)
            goto l35c;
        txt_cell(0x2001);
        cell_cursor_dec();
        row_read(0x7F);
        cell_put(0xA9);
        row_close2();
        row_read(0x80);
        cell_tick_or(cell_state(0xA9));
        cell_draw(0x2001);
    l35c:
        open_row(0xD6);
        page(0xC7);
        options_value_table();
        txt_set(0x38D8);
        if (gate(2) != 0)
            goto l478;
        if (cell_flags_hi7() != 0)
            goto l440;
        row_page(0xC7);
        io_poll(5);
        if (io_go() == 0)
            goto l460;
    l3d0:
        row_arm2(cell_state(0xD4));
        row_sel_cell2_cur();
        row_sel2(cell_state(0xD5));
        row_page(0xD4);
        cell_tick_or(cell_state(0xD5));
        if (ticker_reblend2(0x202) != 0)
            goto l478;
        cell_set50_from40();
        cell_set50_from40();
        cell_put(0xD4);
        goto l478;
    l440:
        row_page(0xC7);
        io_poll(5);
        if (io_go() == 0)
            goto l3d0;
    l460:
        latch(1);
        cell_put(0xD4);
        open_row(0xD5);
    l478:
        latch(3);
        option_row_d4();
    l488:
        key_page(0xC7);
        row_page(0xC7);
        io_poll(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
    row_prep(0x20);
    row_sync2(0xFFFF);
    cell_put_hi9(0xA9);
    draw_pad(0xD);
    sep();
    for (;;) {
        cell_sink8_9(0x2A07);
        if (cell_flags_pos0(2) != 0)
            goto l534;
        cell_poke0(cell_state(0xA9));
        cell_flags_cmp_pos();
        if (io_go() != 0)
            goto l534;
        cell_put_hi9(0xA9);
    l534:
        sep_a();
        cell_pos_fwd(0x15);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_dec_cell(0xA9);
    for (;;) {
        sep_b();
        cell_sink8_9(0x2A07);
        if (cell_flags_pos0(2) != 0)
            goto l5e0;
        cell_poke0(cell_state(0xA9));
        cell_pos_sub16();
        cell_stamp8_9(0x2A07);
    l5e0:
        sep_a();
        cell_pos_fwd(0x15);
        step2();
        poll_t(0xD);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    row_prep_close();
    return;
}
