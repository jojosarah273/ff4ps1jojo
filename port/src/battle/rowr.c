/* FF4 source-port — interpreted module for fn_1x45408.
 * Ground truth: src/fn_1x45408.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x45408(void)
{
    txt_set(0xF320);
    if (gate(2) != 0)
        return;
    io_poll(0xFF);
    if (io_just() != 0)
        return;
    wnd_open(0x16);
    latch(0xAA);
    for (;;) {
        cell_draw(0x500);
        cell_step();
        poll_t(0x20);
        if (io_just() != 0)
            break;
    }
    txt_set(0xF327);
    if (gate(2) == 0)
        page_paint2(0xF326);
    txt_set(0xF326);
    row_read(3);
    cell_put(0xE);
    txt_set(0xF325);
    sep_a();
    cell_poke0(cell_state(0xE));
    cell_push_c8();
    txt_draw(0xF328);
    sep();
    label(0xF32E);
    txt_set(0xF32C);
    if (gate(2) != 0)
        goto L60c;
    txt_set(0xF1B3);
    row_sel_cell_cur();
    cell_put(0x1E);
    txt_set(0xF133);
    sep_a();
    cell_poke0(cell_state(0xF32D));
    txt_draw(0xF133);
    func_80147000();
    txt_draw(0xF32F);
    txt_set(0xF1F3);
    row_sel_cell_cur();
    cell_put(0x1E);
    txt_set(0xF173);
    sep_a();
    cell_poke0(cell_state(0xF32D));
    txt_draw(0xF173);
    func_80147000();
    txt_draw(0xF32E);
L60c:
    txt_set(0xF328);
    row_sel_cell_cur();
    cell_push_c8();
    cell_put(0x1C);
    cell_push_c8();
    cell_put(0x1D);
    latch(0xD);
    cell_put(0x1E);
    txt_set(0xF322);
    sep_a();
    cell_poke0(cell_state(0xF32F));
    cell_put(0x23);
    txt_set(0xF324);
    cell_put(0x21);
    open_row(0xE);
    draw_pad(0x160);
L6b4:
    for (;;) {
        txt_set(0xF323);
        cell_put(0x20);
        txt_set(0xF321);
        sep_a();
        cell_poke0(cell_state(0xF32E));
        cell_put(0x22);
        txt_set(0xF329);
        txt_draw(0xF32A);
    L6fc:
        for (;;) {
            battle_row_xe_x1c_x10_windows_gate();
            if (io_go() == 0)
                goto L80c;
            cell_pull_c8(0x302);
            row_arm2(cell_state(0xF32A));
            if (cell_flags_zero50(1) != 0)
                goto L80c;
            txt_set(0x6CC0);
            if (gate(0x202) != 0)
                goto L794;
            row_page(0x22);
            cell_pull_c8(0x300);
            row_page(0x10);
            cell_pull_c8(0x303);
            goto L7dc;
        L794:
            row_page(0x22);
            sep_b();
            cell_pos_back(0x10);
            cell_pull_c8(0x300);
            row_page(0x10);
            cell_pull_c8(0x303);
        L7dc:
            row_page(0x23);
            cell_pull_c8(0x301);
            step2();
            step2();
            step2();
            step2();
        L80c:
            row_page(0x22);
            sep_a();
            row_open_w(0x10);
            cell_put(0x22);
            poll_pair(0x20);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_page(0x23);
        sep_a();
        row_open_w(0x10);
        cell_put(0x23);
        poll_pair(0x21);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
