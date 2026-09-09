/* FF4 source-port — interpreted module for func_800FCCDC.
 * Ground truth: src/func_800FCCDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FCCDC(void)
{
    txt_set(0x1704);
    if (gate(0x202) != 0)
        goto Ld64;
    row_page(0xA2);
    row_read(0x40);
    if (sel(2) != 0)
        goto Ld64;
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto Ldb4;
    row_page(0xAB);
    if (gate(2) != 0)
        goto Ld64;
    row_page(0xD5);
    if (gate(2) == 0)
        goto Ldb4;
Ld64:
    row_page(0xC0);
    if (gate(2) != 0)
        return;
    open_row(0xC0);
    latch(2);
    txt_draw(0x1E00);
    latch(1);
    txt_draw(0x1E01);
    func_80169128();
    return;
Ldb4:
    key_page(0x88);
    key_page(0x86);
    if (func_800F60A8(0x202) == 0) {
        txt_set(0x17EF);
        sep_a();
        row_open_w(0x11);
        txt_draw(0x17EF);
    }
    txt_set(0x1700);
    io_poll_cur();
    if (io_just() == 0)
        goto Lf30;
    txt_set(0x1707);
    row_read(0xF8);
    cell_put(6);
    txt_set(0x1706);
    sep_a();
    cell_poke0(cell_state(6));
    cell_cur_save54();
    cell_push_c8();
    cell_put(6);
    row_open();
    row_done();
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto Lf0c;
    row_page(0x86);
    cell_cur_save54();
    cell_push_c8();
    sep_a();
    cell_poke0(cell_state(0x17EF));
    if (io_press(cell_state(6)) != 0)
        return;
Lf0c:
    row_sync();
    row_close();
    cell_push_c8();
    goto Ld40;
Lf30:
    io_poll(1);
    if (io_just() == 0)
        goto Ld038;
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto Lfbc;
    row_page(0x86);
    cell_cur_save54();
    cell_push_c8();
    sep_a();
    cell_poke0(cell_state(0x17EF));
    cell_peek_cur();
    io_press_cur();
    if (io_go() != 0)
        return;
Lfbc:
    txt_set(0x1707);
    row_read(0xFC);
    cell_put(6);
    txt_set(0x1706);
    sep_a();
    cell_poke0(cell_state(6));
    cell_cur_save54();
    cell_push_c8();
    goto Ld40;
Ld038:
    io_poll(2);
    if (io_just() == 0)
        goto Ld1f4;
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto Ld0c4;
    row_page(0x86);
    cell_cur_save54();
    cell_push_c8();
    sep_a();
    cell_poke0(cell_state(0x17EF));
    cell_peek_cur();
    io_press_cur();
    if (io_go() != 0)
        return;
Ld0c4:
    open_row(6);
    txt_set(0x1707);
    io_poll(0x20);
    if (io_go() != 0) {
        latch(2);
        cell_put(6);
    }
    txt_set(0x1706);
    io_poll(0x20);
    if (io_go() != 0)
        key_page(6);
    row_page(6);
    cell_cur_save54();
    cell_push_c8();
Ld40:
    func_800FD494();
    open_row(0x3E);
    page(0x3D);
    cell_push_c8();
    txt_draw(0x1800);
    txt_set(0x1701);
    if (gate(2) == 0)
        latch(1);
    txt_draw(0x1801);
    row_page(0xA2);
    row_read(7);
    func_800F96E0(0x1802);
    txt_draw_cur();
    open_row(0xC0);
    latch(1);
    cell_put(0x85);
    return;
Ld1f4:
    txt_set(0x1702);
    cell_put(0x3D);
    txt_set(0x1701);
    if (gate(2) == 0)
        latch(1);
    cell_put(0x3E);
    page(0x3D);
    cell_push_c8();
    if (gate(2) != 0)
        goto Ld2c4;
    cell_put(6);
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto Ld30c;
    row_page(0x86);
    cell_cur_save54();
    cell_push_c8();
    sep_a();
    cell_poke0(cell_state(0x17EF));
    if (io_press(cell_state(6)) == 0)
        goto Ld30c;
Ld2c4:
    row_page(0xC0);
    if (gate(2) != 0)
        return;
    open_row(0xC0);
    latch(2);
    txt_draw(0x1E00);
    cell_clear_bank(0x1E01);
    func_80169128();
    return;
Ld30c:
    page(0x3D);
    cell_push_c8();
    func_800FD494();
    page(0x3D);
    cell_push_c8();
    txt_draw(0x1800);
    func_800FD37C();
    open_row(0xC0);
    latch(1);
    cell_put(0x85);
    open_row(0x88);
    return;
}
