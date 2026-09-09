/* FF4 source-port — interpreted module for func_80163F68.
 * Ground truth: src/func_80163F68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80163F68(void)
{
    sep();
    label(0x3591);
    label(0x3593);
    label(0x3594);
    label(0x3595);
    tail(0xB5);
    tail(0xB7);
    page(0xB7);
    txt_cell(0x3585);
    cell_put(0xB1);
    if (gate(0x202) != 0)
        goto fe8;
    goto d8;
fe8:
    for (;;) {
        page(0xB7);
        txt_cell(0x358B);
        cell_put(0xAF);
        open_row(0xB0);
        row_arm2(cell_state(0xAF));
        row_sel_cell2_cur();
        row_sel2(cell_state(0xB0));
        page(0xAF);
        sep_a();
        cell_push_c8();
        cell_poke0(cell_state(0x3591));
        txt_draw(0x3591);
        cell_push_c8();
        cell_poke0(cell_state(0x3592));
        txt_draw(0x3592);
        txt_set(0x3593);
        row_open_w0();
        txt_draw(0x3593);
        page(0xB7);
        txt_cell(0x3588);
        cell_put(0xAF);
        open_row(0xB0);
        row_arm2(cell_state(0xAF));
        row_sel_cell2_cur();
        row_sel2(cell_state(0xB0));
        page(0xAF);
        sep_a();
        cell_push_c8();
        cell_poke0(cell_state(0x3594));
        txt_draw(0x3594);
        cell_push_c8();
        cell_poke0(cell_state(0x3595));
        txt_draw(0x3595);
        txt_set(0x3596);
        row_open_w0();
        txt_draw(0x3596);
        page(0xB7);
        txt_cell(0x358E);
        cell_put(0xB3);
        txt_cell(0x358E);
        row_read(0xC0);
        io_poll(0xC0);
        if (io_just() != 0)
            goto i210;
        io_poll(0x40);
        if (io_just() == 0)
            goto i1C0;
        latch(5);
        goto i1E0;
    i1C0:
        io_poll(0x80);
        if (io_just() == 0)
            goto b8;
        latch(0x19);
    i1E0:
        cell_put(0xB4);
        func_801531CC();
        if (io_press(cell_state(0xB4)) != 0)
            goto b8;
    i210:
        row_arm2(cell_state(0xB3));
        row_arm2(cell_state(0xB3));
        row_page(0xB3);
        sep();
        row_info(0xA9);
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x289C);
            cell_step();
            step2();
            key_page(0xA9);
            row_page(0xA9);
            io_poll(4);
            if (io_just() != 0)
                break;
        }
        txt_set(0x16A3);
        cell_poke0(cell_state(0x97));
        cell_put(0x97);
        func_80153218();
        io_poll(0x80);
        if (io_go() != 0)
            goto i310;
        latch(0);
        goto i368;
    i310:
        io_poll(0xD0);
        if (io_go() != 0)
            goto i338;
        latch(1);
        goto i368;
    i338:
        io_poll(0xFC);
        if (io_go() != 0)
            goto i360;
        latch(2);
        goto i368;
    i360:
        latch(3);
    i368:
        txt_cell(0x289C);
        page(0xB5);
        poll_t(8);
        if (io_just() != 0)
            goto b8;
        cell_draw(0x1804);
        key_page(0xB5);
    b8:
        poll_pair(0xB1);
        row_page(0xB1);
        if (gate(2) == 0)
            continue;
        break;
    }
d8:
    key_page(0xB7);
    row_page(0xB7);
    io_poll(3);
    if (io_just() == 0)
        goto fC0;
    sep_a();
    txt_set(0x16A0);
    cell_poke0(cell_state(0x3594));
    txt_draw(0x16A0);
    txt_set(0x16A1);
    cell_poke0(cell_state(0x3595));
    txt_draw(0x16A1);
    txt_set(0x16A2);
    cell_poke0(cell_state(0x3596));
    txt_draw(0x16A2);
    sep_b();
    txt_set(0x16A0);
    cell_pos_back(0x7F);
    txt_set(0x16A1);
    cell_pos_back(0x96);
    txt_set(0x16A2);
    cell_pos_back(0x98);
    if (io_go() != 0) {
        latch(0x7F);
        txt_draw(0x16A0);
        latch(0x96);
        txt_draw(0x16A1);
        latch(0x98);
        txt_draw(0x16A2);
    }
    sep();
    tail(0xA9);
    tail(0xAB);
    tail(0xAD);
    label(0x405F);
    label(0x4061);
    label(0x4063);
    label(0x4065);
    label(0x4067);
    for (;;) {
        page(0xA9);
        poll_t(5);
        if (io_go() != 0)
            goto q578;
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto q608;
    q578:
        page(0xAD);
        txt_cell(0x1000);
        row_read(0x1F);
        if (sel(2) != 0)
            goto q608;
        txt_cell(0x1003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto q608;
        page(0xA9);
        cell_dispatch(cell_state_of());
        poll_t(5);
        if (io_go() != 0)
            goto q608;
        key_page(0xAB);
    q608:
        row_prep(0x20);
        sep_a();
        row_read2(0xAD);
        cell_pos_fwd(0x40);
        cell_put_hi9(0xAD);
        sep();
        row_prep_close();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(0xA);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x3591);
    cell_tick_or(cell_state(0x3592));
    cell_tick_or(cell_state(0x3593));
    if (ticker_reblend2(2) != 0)
        goto q790;
    sep();
    tail(0xAD);
    tail(0xAF);
    txt_set(0x3591);
    cell_tick_or(cell_state(0x3592));
    cell_tick_or(cell_state(0x3593));
    if (ticker_reblend2(0x202) != 0)
        goto q728;
    open_row(0xAD);
    open_row(0xAE);
    open_row(0xAF);
    goto q730;
q728:
    func_8016E668();
q730:
    row_page(0xAD);
    cell_tick_or(cell_state(0xAE));
    cell_tick_or(cell_state(0xAF));
    if (ticker_reblend2(0x202) == 0)
        key_page(0xAD);
    page(0xAD);
    label(0x3591);
    row_page(0xAF);
    txt_draw(0x3593);
q790:
    func_8005A234();
    func_80153264();
    txt_set(0x3594);
    txt_draw(0x359A);
    txt_set(0x3595);
    txt_draw(0x359B);
    txt_set(0x3596);
    txt_draw(0x359C);
    txt_set(0x3591);
    txt_draw(0x359D);
    txt_set(0x3592);
    txt_draw(0x359E);
    txt_set(0x3593);
    txt_draw(0x359F);
    sep();
    txt_set(0x3594);
    cell_tick_or(cell_state(0x3595));
    if (ticker_reblend2(2) != 0)
        goto q860;
    latch(0x1F);
    txt_draw(0x34CA);
    cell_step();
q860:
    txt_set(0x3591);
    cell_tick_or(cell_state(0x3592));
    if (ticker_reblend2(2) != 0)
        goto q8A0;
    latch(0x20);
    cell_draw(0x34CA);
    cell_step();
q8A0:
    if (gate(2) != 0)
        goto q8D8;
    latch(5);
    func_80150C38();
q8D8:
    latch(0xFF);
    txt_draw(0x34CB);
    sep();
    tail(0xA9);
    tail(0xAB);
    for (;;) {
        page(0xA9);
        txt_cell(0x405F);
        if (gate(2) != 0)
            goto a20;
        page(0xAB);
        sep_a();
        txt_cell(0x1037);
        cell_poke0(cell_state(0x3591));
        cell_draw(0x1037);
        txt_cell(0x1038);
        cell_poke0(cell_state(0x3592));
        cell_draw(0x1038);
        txt_cell(0x1039);
        cell_poke0(cell_state(0x3593));
        cell_draw(0x1039);
        sep_b();
        txt_cell(0x1037);
        cell_pos_back(0x7F);
        txt_cell(0x1038);
        cell_pos_back(0x96);
        txt_cell(0x1039);
        cell_pos_back(0x98);
        if (io_go() != 0) {
            latch(0x7F);
            cell_draw(0x1037);
            latch(0x96);
            cell_draw(0x1038);
            latch(0x98);
            cell_draw(0x1039);
        }
    a20:
        row_prep(0x20);
        sep_a();
        row_read2(0xAB);
        cell_pos_fwd(0x40);
        cell_put_hi9(0xAB);
        sep();
        row_prep_close();
        key_page(0xA9);
        row_page(0xA9);
        io_poll(0xA);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
    tail(0x98);
    tail(0xA6);
    for (;;) {
        page(0x98);
        txt_cell(0x405F);
        if (gate(0x202) == 0)
            goto f2C;
    ad0:
        page(0xA6);
        txt_cell(0x1000);
        row_read(0x1F);
        poll_spin();
        row_sel_cell_cur();
        cell_push_c8();
        cell_put(0x80);
        cell_push_c8();
        cell_put(0x81);
        latch(0xF);
        cell_put(0x82);
        page(0xA6);
        txt_cell(0x1002);
        io_poll(0x46);
        if (io_go() != 0)
            latch(0x45);
        poll_spin();
        cell_put(0xDF);
        latch(5);
        cell_put(0xE1);
        func_8015240C();
        cell_fmt2(0xE3);
        sep();
        for (;;) {
            cell_push_c8_b4o(0x80);
            cell_draw(0x289C);
            step2();
            cell_step();
            poll_t(5);
            if (io_just() != 0)
                break;
        }
        page(0xA6);
        txt_cell(0x1002);
        io_poll(0x46);
        if (io_go() != 0) {
            row_sync();
            wnd_open_cur();
            latch(7);
            func_80152224();
            tail(0xAD);
            row_done();
            row_prep(0x20);
            sep_a();
            cell_poke0(cell_state(0xAD));
            cell_peek0();
            sep();
            row_prep_close();
            cell_push_c8_b4o(0x80);
            txt_draw(0x289C);
        }
        txt_set(0x289F);
        cell_put(0xAD);
        txt_set(0x28A0);
        cell_put(0xAE);
        txt_set(0x289E);
        func_80152AAC();
        cell_put(0xAF);
        page(0xA6);
        sep_a();
        txt_cell(0x103D);
        cell_poke0(cell_state(0xAD));
        cell_put(0xAD);
        txt_cell(0x103E);
        cell_poke0(cell_state(0xAE));
        cell_put(0xAE);
        txt_cell(0x103F);
        cell_poke0(cell_state(0xAF));
        cell_put(0xAF);
        sep_b();
        txt_cell(0x1037);
        cell_tick_sub(cell_state(0xAD));
        txt_cell(0x1038);
        cell_tick_sub(cell_state(0xAE));
        txt_cell(0x1039);
        cell_tick_sub(cell_state(0xAF));
        if (io_go() == 0)
            goto f2C;
        row_page(0xAD);
        cell_draw(0x103D);
        row_page(0xAE);
        cell_draw(0x103E);
        row_page(0xAF);
        cell_draw(0x103F);
        txt_cell(0x1002);
        io_poll(0x63);
        if (io_go() != 0)
            goto f2C;
        cell_dispatch(cell_state_of());
        func_8016501C();
        row_page(0x98);
        io_poll(5);
        if (io_go() != 0)
            goto ad0;
        txt_draw(0x359A);
        latch(0x21);
        txt_draw(0x34CA);
        latch(5);
        func_80150C38();
        latch(0x23);
        txt_draw(0x34CA);
        sep();
        tail(0xAF);
        for (;;) {
            page(0xAF);
            txt_cell(0x291C);
            io_poll(0xFF);
            if (io_just() != 0)
                goto ad0;
            txt_draw(0x359A);
            latch(5);
            func_80150C38();
            key_page(0xAF);
        }
    f2C:
        row_prep(0x20);
        sep_a();
        row_read2(0xA6);
        cell_pos_fwd(0x40);
        cell_put_hi9(0xA6);
        sep();
        row_prep_close();
        key_page(0x98);
        row_page(0x98);
        io_poll(0xA);
        if (io_just() == 0)
            continue;
        break;
    }
    func_801571DC();
    func_80155778();
    cell_clear_bank(0x3975);
    for (;;) {
        txt_set(0x3975);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            goto fa4;
        func_801583FC();
    fa4:
        page_paint2(0x3975);
        txt_set(0x3975);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
fC0:
    goto fe8;
}
