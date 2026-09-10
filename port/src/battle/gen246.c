/* FF4 source-port — interpreted module for fn_1x1ce18.
 * Ground truth: src/fn_1x1ce18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1ce18(void)
{
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
        goto LCEE8;
    row_page(0x9A);
    sep_a();
    row_open_w(4);
    cell_put(0x9A);
LCEE8:
    row_page(0x43);
    row_read(0x1F);
    sep_a();
    cell_poke0(cell_state(0x99));
    cell_put(0x99);
    row_page(0x9A);
    sep_a();
    row_open_w(0x18);
    cell_put(0x9A);
    row_page(0x99);
    row_read(0x1F);
    row_sel_cell_cur();
    cell_put(0x97);
    open_row(0x98);
    latch(0x40);
    sep_b();
    cell_tick_sub(cell_state(0x97));
    cell_put(0x95);
    open_row(0x96);
    row_page(0x99);
    row_read(0xE0);
    cell_put(0x9B);
    row_page(0x9A);
    sep_a();
    row_open_w(4);
    row_read(7);
    sep_a();
    row_open_w(0x18);
    cell_put(0x9C);
    row_page(0x99);
    sep_a();
    row_open_w(0x20);
    cell_put(0x9D);
    row_page(0x9A);
    row_open_w0();
    cell_put(0x9E);
    row_page(0x9B);
    sep_a();
    row_open_w(0x20);
    cell_put(0x9F);
    row_page(0x9C);
    row_open_w0();
    cell_put(0xA0);
    key_page(0x94);
    return;
}
