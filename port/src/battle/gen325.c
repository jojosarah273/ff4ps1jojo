/* FF4 source-port — interpreted module for func_80106B1C.
 * Ground truth: src/func_80106B1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80106B1C(void)
{
    /* shop detail: 0xDA/0xE7/0x8D/0xBA windows, 0x2115 title; 5574(8)
       gate; 3F38(3C3C)/76BC/7CC8 cell pairs on 0x8C/0x8B, 0x4B/0x4A;
       closes on 8D6C(0x8D). */
    row_page(0xDA);
    io_poll(8);
    if (io_just() == 0)
        goto L106CC0;
    latch(0x80);
    txt_draw(0x2115);
    row_page(0xE7);
    if (gate(2) != 0)
        goto L106BA4;
    page(0x8D);
    open_row(0xE7);
L106BA4:
    row_page(0xBA);
    sep_a();
    cell_poke0(cell_state(0x8C));
    cell_put(0x4B);
    open_row(0x4A);
    cell_word_half(cell_state(0x4B));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x4A));
    cell_word_half(cell_state(0x4B));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x4A));
    row_page(0x8B);
    if (gate(2) != 0)
        goto L106C44;
    latch(0xD);
L106C44:
    sep_a();
    row_open_w(0x23);
    cell_poke0(cell_state(0x4A));
    cell_put(0x4A);
    row_page(0x4B);
    row_read(3);
    sep_a();
    row_open_w(0x2C);
    cell_put(0x4B);
    page(0x4A);
    tail(0x8D);
    return;
L106CC0:
    return;
}
