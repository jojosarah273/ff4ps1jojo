/* FF4 source-port — interpreted module for func_8011C768.
 * Ground truth: src/func_8011C768.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011C768(void)
{
    row_page(0xAB);
    if (gate(0x202) == 0)
        return;
    row_read(1);
    if (sel(2) == 0)
        goto Lbd0;
    row_page(0xAB);
    row_read(2);
    if (sel(2) != 0)
        goto L7ec;
    txt_set(0x1706);
    sep_a();
    row_open_w(9);
    cell_put(0x3D);
    goto L80c;
L7ec:
    txt_set(0x1706);
    sep_b();
    cell_pos_back(8);
    cell_put(0x3D);
L80c:
    txt_set(0x1707);
    sep_b();
    cell_pos_back(7);
    row_read(0x3F);
    cell_put(0x3E);
    page(0x3D);
    tail(0x43);
    draw_pad_cur();
    for (;;) {
        page(0x3D);
        cell_push_c8();
        cell_put(0x18);
        open_row(0x19);
        row_prep(0x20);
        cell_pair_dbl2(cell_state(0x18));
        page(0x18);
        cell_push9_bank();
        cell_push9_bank();
        cell_push9_bank();
        cell_push9_bank();
        cell_stamp8_9_b(0xADB);
        cell_stamp8_9_b(0xADD);
        cell_stamp8_9_b(0xB1B);
        cell_stamp8_9_b(0xB1D);
        row_sync2_cur();
        row_prep_close();
        row_page(0x3E);
        cell_set50_from40();
        row_read(0x3F);
        cell_put(0x3E);
        poll_t(0x40);
        if (io_just() != 0)
            break;
    }
    open_row(0x99);
    row_page(0x44);
    row_read(0xF);
    cell_put(0x9A);
    cell_word_half(cell_state(0x9A));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x99));
    cell_word_half(cell_state(0x9A));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x99));
    row_page(0x43);
    row_read(0x1F);
    row_sel_cell_cur();
    cell_put(0x43);
    row_read(0x20);
    if (sel(2) != 0)
        goto La88;
    row_page(0x9A);
    sep_a();
    row_open_w(4);
    cell_put(0x9A);
La88:
    row_page(0x43);
    row_read(0x1F);
    sep_a();
    cell_poke0(cell_state(0x99));
    cell_put(0x99);
    row_page(0x9A);
    sep_a();
    row_open_w(0x18);
    cell_put(0x9A);
    row_page(0x44);
    row_read(0xF);
    cell_put(0x97);
    open_row(0x98);
    latch(0x40);
    sep_b();
    cell_tick_sub(cell_state(0x97));
    cell_put(0x95);
    open_row(0x96);
    row_page(0x9A);
    row_read(0xFC);
    cell_put(0x9C);
    row_page(0x99);
    row_read(0x1F);
    cell_put(0x9B);
    row_page(0x99);
    cell_set50_from40();
    cell_put(0x9D);
    row_page(0x9A);
    cell_put(0x9E);
    row_page(0x9B);
    cell_set50_from40();
    cell_put(0x9F);
    row_page(0x9C);
    cell_put(0xA0);
    key_page(0x94);
    return;
Lbd0:
    row_page(0xAB);
    row_read(2);
    if (sel(0x202) != 0)
        goto Lc20;
    txt_set(0x1707);
    sep_b();
    cell_pos_back(8);
    row_read(0x3F);
    cell_put(0x3E);
    goto Lc48;
Lc20:
    txt_set(0x1707);
    sep_a();
    row_open_w(8);
    row_read(0x3F);
    cell_put(0x3E);
Lc48:
    txt_set(0x1706);
    sep_b();
    cell_pos_back(7);
    cell_put(0x3D);
    page(0x3D);
    tail(0x43);
    func_8011CC98();
    func_8011CE18();
    return;
}
