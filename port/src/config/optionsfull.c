/* FF4 source-port — interpreted module for func_8015902C.
 * Ground truth: src/func_8015902C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015902C(void)
{
    draw_pad(0x22);
    sep_a();
    txt_set(0x3969);
    cell_poke0(cell_state(0x396A));
    cell_put(0xAA);
    func_80152AAC();
    cell_put(0xA9);
    txt_set(0x3967);
    func_80152AAC();
    sep_a();
    cell_poke0(cell_state(0xA9));
    cell_pull_c8_bank(0x80);
    row_page(0xAA);
    func_80152BC4();
    cell_put(0xA9);
    sep();
    for (;;) {
        sep_a();
        cell_push_c8_sel(0x82);
        row_read(0x7F);
        cell_poke0(cell_state(0xA9));
        cell_put(0xA9);
        sep_a();
        row_open_w(0xB);
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x23);
    sep_a();
    row_page(0xA9);
    cell_poke0(cell_state(0x3972));
    fn_1x5a30c();
    cell_pull_c8_bank(0x80);
    draw_pad(3);
    sep();
    tail(0xA9);
    for (;;) {
        sep_a();
        cell_push_c8_sel(0x82);
        cell_poke0(cell_state(0xA9));
        cell_put(0xA9);
        sep_a();
        row_open_w(0xB);
        cell_step();
        poll_t(3);
        if (io_just() != 0)
            break;
    }
    draw_pad(0x24);
    sep_a();
    row_page(0xA9);
    cell_poke0(cell_state(0x3973));
    fn_1x5a344();
    cell_pull_c8_bank(0x80);
    wnd_open(0x15);
    for (;;) {
        page_paint(0x289C);
        cell_set50_from54();
        if (poll_go(0x8080) == 0)
            break;
    }
    cell_clear_bank(0x3977);
    draw_pad(1);
    cell_push_c8_sel(0x80);
    row_read(0xF);
    io_poll(6);
    if (io_just() == 0)
        goto l934C;
    page_paint2(0x3977);
l934C:
    draw_pad(0x33);
    cell_push_c8_sel(0x80);
    if (gate(2) != 0)
        goto l9418;
    draw_pad(0x25);
    cell_push_c8_sel(0x82);
    if (gate(0x80) != 0)
        goto l9418;
    txt_set(0x3977);
    txt_draw(0x3977);
    draw_pad(0x21);
    sep();
    for (;;) {
        cell_push_c8_sel(0x82);
        cell_draw(0x289C);
        step2();
        cell_step();
        poll_t(0xB);
        if (io_just() != 0)
            break;
    }
l9418:
    draw_pad(0x35);
    cell_push_c8_sel(0x80);
    if (gate(2) != 0)
        goto l94C8;
    draw_pad(0x30);
    cell_push_c8_sel(0x82);
    if (gate(0x80) != 0)
        goto l94C8;
    txt_set(0x3977);
    txt_draw(0x3977);
    draw_pad(0x2C);
    wnd_open(0xB);
    for (;;) {
        cell_push_c8_sel(0x82);
        cell_draw(0x289C);
        step2();
        cell_step();
        poll_t(0x16);
        if (io_just() != 0)
            break;
    }
l94C8:
    txt_set(0x3977);
    row_read(0xC0);
    if (sel(2) != 0)
        goto l9528;
    if (cell_0xf5f20(0x202) != 0)
        goto l96AC;
    txt_set(0x28A2);
    row_read(0xC0);
    cell_flags_tick2();
l9528:
    if (io_just() != 0)
        goto l979C;
    latch(0x80);
    txt_draw(0x3978);
    txt_set(0x28A2);
    row_read(0x80);
    if (sel(0x202) != 0)
        goto l9674;
    latch(0x40);
    txt_draw(0x3978);
    sep();
    draw_pad(0x16);
    for (;;) {
        txt_cell(0x289C);
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0xB);
        if (io_just() != 0)
            break;
    }
    sep();
    for (;;) {
        txt_cell(0x289C);
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0x16);
        if (io_just() != 0)
            break;
    }
    draw_pad(0xB);
    for (;;) {
        txt_cell(0x289C);
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0x16);
        if (io_just() != 0)
            break;
    }
l9674:
    txt_set(0x3977);
    row_read(0x3F);
    txt_draw(0x3977);
    goto l979C;
l96AC:
    txt_set(0x3977);
    if (gate(0x80) != 0)
        goto l979C;
    wnd_open(0xB);
    sep();
    for (;;) {
        txt_cell(0x289C);
        cell_pull_c8(0x289C);
        cell_step();
        step2();
        poll_t(0xB);
        if (io_just() != 0)
            break;
    }
    for (;;) {
        page_paint(0x289C);
        cell_step();
        poll_t(0x16);
        if (io_just() != 0)
            break;
    }
    txt_set(0x3977);
    row_read(0x3F);
    txt_draw(0x3977);
l979C:
    sep();
    tail(0xA9);
    txt_set(0x28A0);
    if (gate(0x80) != 0)
        goto l97EC;
    txt_set(0x28A4);
    cell_put(0xA9);
l97EC:
    txt_set(0x28AB);
    if (gate(0x80) != 0)
        goto l9814;
    txt_set(0x28AF);
    cell_put(0xAA);
l9814:
    row_page(0xA9);
    cell_tick_or(cell_state(0xAA));
    draw_pad(0x19);
    cell_pull_c8_bank(0x80);
    sep();
    tail(0xA9);
    txt_set(0x28A0);
    if (gate(0x80) != 0)
        goto l988C;
    txt_set(0x28A1);
    cell_put(0xA9);
l988C:
    txt_set(0x28AB);
    if (gate(0x80) != 0)
        goto l98B4;
    txt_set(0x28AC);
    cell_put(0xAA);
l98B4:
    row_page(0xA9);
    cell_tick_or(cell_state(0xAA));
    draw_pad(0x1A);
    cell_pull_c8_bank(0x80);
    txt_set(0x3966);
    func_80152BC4();
    cell_put(0xA9);
    txt_set(0x3967);
    func_80152B38();
    sep_a();
    cell_poke0(cell_state(0xA9));
    cell_set50_from40();
    draw_pad(0x1B);
    cell_pull_c8_bank(0x80);
    txt_set(0x3965);
    func_80152C50();
    cell_put(0xA9);
    txt_set(0x3977);
    row_read(0xC0);
    if (sel(2) != 0)
        goto l9A2C;
    if (cell_0xf5f20(0x202) != 0)
        goto l9A58;
    sep_a();
    txt_set(0x289E);
    row_read(0x7F);
    cell_poke0(cell_state(0xA9));
    cell_put(0xAA);
    sep_a();
    txt_set(0x28A9);
    row_read(0x7F);
    cell_poke0(cell_state(0xA9));
    cell_poke0(cell_state(0xAA));
    cell_tick_half();
    io_poll(0x63);
    if (io_go() != 0)
        latch(0x63);
    goto l9A88;
l9A2C:
    sep_a();
    cell_push_c8_cur();
    cell_poke0(cell_state(0xA9));
    goto l9A80;
l9A58:
    sep_a();
    txt_set(0x289E);
    row_read(0x7F);
    cell_poke0(cell_state(0xA9));
l9A80:
    fn_1x5a30c();
l9A88:
    draw_pad(0x1C);
    cell_pull_c8_bank(0x80);
    txt_set(0x3966);
    func_80152C50();
    cell_put(0xAA);
    txt_set(0x3977);
    row_read(1);
    if (sel(2) != 0)
        goto l9B08;
    txt_set(0x3965);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(0xAA));
    row_open_w(2);
    goto l9D5C;
l9B08:
    txt_set(0x3977);
    row_read(0xC0);
    if (sel(2) != 0)
        goto l9CE8;
    if (cell_0xf5f20(0x202) != 0)
        goto l9BD8;
    sep_a();
    txt_set(0x289D);
    cell_poke0(cell_state(0xA9));
    cell_poke0(cell_state(0xAA));
    cell_put(0xAB);
    sep_a();
    txt_set(0x28A8);
    cell_poke0(cell_state(0xA9));
    cell_poke0(cell_state(0xAA));
    sep_a();
    cell_poke0(cell_state(0xAB));
    goto l9D5C;
l9BD8:
    txt_set(0x3977);
    row_read(0x20);
    if (sel(2) != 0)
        goto l9CE8;
    txt_set(0x289D);
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state(0x28A8));
    cell_poke0(cell_state(0xAA));
    cell_put(0xBF);
    draw_pad_cur();
    cell_push_c8_sel(0x80);
    row_read(0xC0);
    cell_tick_and2(0x3978);
    if (sel(2) != 0)
        goto l9CD8;
    row_page(0xBF);
    label(0x3945);
    wnd_open(5);
    label(0x3947);
    options_b04_x2000_gates_v0_run_l15();
    sep_b();
    row_page(0xBF);
    cell_tick_sub(cell_state(0x3949));
    cell_put(0xBF);
    goto l9D64;
l9CD8:
    row_page(0xBF);
    goto l9D64;
l9CE8:
    sep_a();
    txt_set(0x289D);
    cell_poke0(cell_state(0xA9));
    cell_poke0(cell_state(0xAA));
l9D5C:
    fn_1x5a344();
l9D64:
    draw_pad(0x1D);
    cell_pull_c8_bank(0x80);
    txt_set(0x28A5);
    cell_tick_or(cell_state(0x28B0));
    draw_pad(0x1E);
    cell_pull_c8_bank(0x80);
    txt_set(0x28A6);
    cell_tick_or(cell_state(0x28B1));
    step2();
    cell_pull_c8_bank(0x80);
    draw_pad(0x41);
    cell_push_c8_sel(0x80);
    cell_put(0xA9);
    step2();
    cell_push_c8_sel(0x80);
    cell_put(0xAA);
    txt_set(0x3977);
    row_read(0xC0);
    if (sel(2) != 0)
        goto lA014;
    if (cell_0xf5f20(2) != 0)
        goto lA014;
    txt_set(0x3977);
    row_read(0x20);
    if (sel(2) != 0)
        goto l9F2C;
    row_page(0xA9);
    io_poll(0x21);
    if (io_go() != 0)
        latch(0x21);
l9E84:
    cell_put(0xDF);
    latch(3);
    cell_put(0xE1);
    options_row_run();
    row_page(0xE3);
    cell_put(0xA9);
    sep_a();
    row_page(0xAA);
    cell_poke0(cell_state(0x28A8));
    fn_1x5a344();
    cell_put(0xAA);
    goto l9FE4;
l9F2C:
    cell_poke0(cell_state(0xA9));
    row_arm2_cur();
    if (cell_flags_zero50(0x101) != 0)
        goto l9F5C;
    latch(0x63);
    goto l9F64;
l9F5C:
    row_page(0xA9);
l9F64:
    cell_put(0xA9);
    txt_set(0x289D);
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state(0xAA));
    fn_1x5a344();
    cell_put(0xAA);
l9FE4:
    draw_pad(0x2D);
    row_page(0xA9);
    cell_pull_c8_bank(0x80);
    step2();
    row_page(0xAA);
    cell_pull_c8_bank(0x80);
lA014:
    txt_set(0x3977);
    row_read(0x20);
    if (sel(0x202) != 0)
        goto lA054;
    txt_set(0x289C);
    row_read(0x20);
    if (sel(2) != 0)
        return;
lA054:
    draw_pad(1);
    cell_push_c8_sel(0x80);
    cell_pull_c8_bank(0x80);
    return;
}
