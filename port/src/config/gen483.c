/* FF4 source-port — interpreted module for ability_plot_x3975_text_xa7_xa6_wi.
 * Ground truth: src/ability_plot_x3975_text_xa7_xa6_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_plot_x3975_text_xa7_xa6_wi(void)
{
    /* ability plot: 0x3975 text, 0xA7/0xA6 windows, 80151CD8/
       801571DC/80155778/801583FC rows; loop L158374 on 5A90(0x40). */
    txt_set(0x3975);
    cell_cursor_dec();
    fn_1x51cd8();
    row_close2();
    txt_draw(0x3975);
    fn_1x571dc();
    fn_1x55778();
    fn_1x583fc();
    cell_word_half(cell_state(0xA7));
    cell_flags_repack();
    cell_word_half_s(cell_state(0xA6));
    page(0xA6);
    sep();
L158374:
    for (;;) {
        cell_push_c8_sel(0x80);
        cell_draw(0x1000);
        cell_step();
        step2();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    draw_pad(0x41);
    cell_push_c8_sel(0x80);
    page(0xA6);
    cell_draw(0x102D);
    step2();
    cell_step();
    cell_push_c8_sel(0x80);
    cell_draw(0x102D);
    return;
}
