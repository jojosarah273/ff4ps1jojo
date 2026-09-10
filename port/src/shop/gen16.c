/* FF4 source-port — interpreted module for fn_1x60e88.
 * Ground truth: src/fn_1x60e88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x60e88(void)
{
    latch(0x17);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    latch(0xF8);
    txt_draw(0x33C6);
    latch(4);
    txt_draw(0x33C7);
    fn_1x532d4();
    row_page(0xCE);
    if (gate(0x80) == 0)
        goto L103c;
    func_801531CC();
    cell_put(0xA9);
    sep_a();
    latch(0x32);
    cell_poke0(cell_state(0x2682));
    sep_b();
    cell_tick_sub(cell_state(0x272F));
    if (io_go() != 0)
        goto Lf58;
    latch(1);
    goto Lf78;
Lf58:
    io_poll(0x63);
    if (io_go() == 0)
        goto Lf78;
    latch(0x63);
Lf78:
    if (io_press(cell_state(0xA9)) != 0)
        goto L1054;
    func_801531CC();
    if (io_press(cell_state(0x272F)) == 0)
        goto L1038;
    row_prep(0x20);
    cell_push9(0x2689);
    func_80152B38();
    cell_put_hi9(0xA9);
    row_sync2_cur();
    row_prep_close();
    row_page(0xCD);
    cell_flags_scr();
    func_80061C1C();
    row_page(0xA9);
    cell_draw(0x34D4);
    row_page(0xAA);
    cell_draw(0x34D5);
    func_80061C8C();
    goto L103c;
L1038:
    ;
L103c:
    latch_cur();
    txt_draw(0x34CA);
    return;
L1054:
    txt_set(0x2773);
    row_read(0xC0);
    io_poll(0xC0);
    if (io_just() != 0)
        return;
    sep();
    cell_set50_from40();
    cell_put(0xAA);
    txt_set(0x2773);
    row_read(0x3F);
    func_80152994();
    cell_push_c8();
    if (gate(2) != 0)
        goto L103c;
    cell_put(0xA9);
    io_poll(0x61);
    if (io_go() != 0)
        goto L1128;
    io_poll(0x54);
    if (io_go() == 0)
        goto L1128;
    latch(0xA);
    cell_put(0xAA);
L1128:
    sep();
L1168:
    for (;;) {
        txt_cell(0x321B);
        if (io_press(cell_state(0xA9)) != 0)
            goto L1298;
    L1190:
        cell_step();
        cell_step();
        cell_step();
        cell_step();
        step2();
        poll_t(0x30);
        if (io_just() == 0)
            goto L1168;
        txt_set(0x38F4);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L103c;
        row_prep(0x20);
        sep();
        row_prep_close();
        row_page(0xAA);
        cell_draw(0x321C);
        row_page(0xA9);
        cell_draw(0x321B);
        tail(0xAB);
        row_sync();
        options_row_screen_key_ladder_xde();
        row_done();
        goto L1330;
    L1298:
        sep_a();
        txt_cell(0x321C);
        cell_poke0(cell_state(0xAA));
        io_poll(0x64);
        if (io_go() == 0)
            goto L1328;
        cell_cursor_dec();
        latch(0x63);
        cell_draw(0x321C);
        func_80161368();
        row_close2();
        sep_b();
        cell_pos_back(0x63);
        if (io_just() != 0)
            goto L1330;
        cell_put(0xAA);
        goto L1190;
    L1328:
        cell_draw(0x321C);
    L1330:
        func_80161368();
        row_page(0xA9);
        txt_draw(0x359A);
        latch(0x1D);
        txt_draw(0x34CA);
        return;
    }
}
