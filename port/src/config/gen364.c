/* FF4 source-port — interpreted module for options_music_screen_x38fe_gate_x2.
 * Ground truth: src/options_music_screen_x38fe_gate_x2.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_music_screen_x38fe_gate_x2(void)
{
    /* options/music screen: 0x38FE gate, 0x2724/0x2704 texts, 0xAA/0xD6/
       0xCF windows, 80160AAC prep, 8006508C/801608C4/800654CC/
       8015A374/80153374 rows. */
    options_banner_x2726_x2725_x28a2_x();
    txt_set(0x38FE);
    if (gate_cur() != 0)
        goto L15F428;
    row_read(0x7F);
    txt_draw(0x38FE);
    func_8006508C();
    return;
L15F428:
    txt_set(0x2724);
    cell_tick_and2(0x28A4);
    if (sel(2) != 0)
        goto L15F458;
    options_x3554_text_xce_window_row();
    return;
L15F458:
    txt_set(0x2704);
    row_read(0xFC);
    cell_put(0xAA);
    txt_set(0x2704);
    row_read(3);
    sep_a();
    row_open_w(1);
    io_poll(4);
    if (io_go() == 0)
        goto L15F4C8;
    row_page(0xAA);
    txt_draw(0x2704);
    func_800654CC();
    return;
L15F4C8:
    cell_tick_or(cell_state(0xAA));
    txt_draw(0x2704);
    latch(7);
    cell_put(0xD6);
    row_page(0xCF);
    options_value_table();
    latch(0xC);
    option_row_d4();
    latch(0x40);
    cell_draw(0x2A06);
    row_page(0xCF);
    row_sel_cell_cur();
    txt_cell(0x29EB);
    cell_draw_cur();
    row_page(0xD4);
    cell_draw(0x2B2C);
    row_page(0xD5);
    cell_draw(0x2B2D);
    return;
}
