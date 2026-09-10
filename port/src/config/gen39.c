/* FF4 source-port — interpreted module for fn_1x5fe98.
 * Ground truth: src/fn_1x5fe98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5fe98(void)
{
    latch(3);
    txt_draw(0x38E6);
    page_paint2(0x3882);
    txt_set(0x2683);
    txt_draw(0x2683);
    txt_set(0x2703);
    txt_draw(0x2703);
    txt_set(0x29A0);
    cell_put(0xA9);
    row_read(3);
    io_poll(3);
    if (io_just() != 0)
        goto L1d8;
    sep();
    tail(0xAB);
    sep_a();
    for (;;) {
        txt_cell(0x29B5);
        if (gate(0x80) != 0)
            goto Lf98;
        cell_poke0(cell_state(0xAB));
        cell_put(0xAB);
    Lf98:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0xAB);
    if (gate(0x202) != 0)
        goto L118;
    row_page(0xA9);
    row_read(0xC0);
    options_row_v0_gate_picks_e8_vs_cc();
    tail(0x8A);
    open_row(0xB1);
    open_row(0xB2);
    options_x280_x29b5_cells_xb1_xb2_w();
    row_page(0xA9);
    row_read(0x30);
    func_80152B38();
    tail(0x8C);
    if (cell_flags_pack(2) != 0)
        goto L098;
    for (;;) {
        latch(1);
        options_ports_x8a_window_x29b5_x29();
        poll_pair(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            continue;
        break;
    }
L098:
    txt_set(0x29A0);
    row_read(0xC);
    func_80152C50();
    tail(0x8C);
    if (cell_flags_pack(2) != 0)
        return;
    for (;;) {
        latch(2);
        options_ports_x8a_window_x29b5_x29();
        poll_pair(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    return;
L118:
    latch(1);
    cell_put(0xB1);
    cell_set50_from40();
    cell_put(0xB2);
    options_x280_x29b5_cells_xb1_xb2_w();
    sep();
    tail(0x8A);
    row_page(0xA9);
    row_read(0xC0);
    options_row_v0_gate_picks_e8_vs_cc();
    tail(0x8C);
    for (;;) {
        latch_cur();
        options_ports_x8a_window_x29b5_x29();
        poll_pair(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    return;
L1d8:
    sep();
    sep_a();
    for (;;) {
        txt_cell(0x29B5);
        io_poll(2);
        if (io_just() != 0)
            break;
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
L344:
    sep();
    tail(0x8A);
    latch(2);
    cell_put(0xB1);
    cell_put(0xB2);
    options_x280_x29b5_cells_xb1_xb2_w();
    row_page(0xA9);
    row_read(0xC0);
    options_row_v0_gate_picks_e8_vs_cc();
    tail(0x8C);
    for (;;) {
        latch_cur();
        options_ports_x8a_window_x29b5_x29();
        poll_pair(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    txt_set(0x29A0);
    row_read(0x30);
    func_80152B38();
    tail(0x8C);
    for (;;) {
        latch(1);
        options_ports_x8a_window_x29b5_x29();
        poll_pair(0x8C);
        row_page(0x8C);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    return;
}
