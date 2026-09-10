/* FF4 source-port — interpreted module for shop_rows_xa0_x211a_texts_x7d1b_x7.
 * Ground truth: src/shop_rows_xa0_x211a_texts_x7d1b_x7.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_xa0_x211a_texts_x7d1b_x7(void)
{
    /* shop rows: 0xA0/0x211A texts + 0x7D1B/0x7D19/0x7D1E/0x7D1D
       texts, 8016D4D8 close; loop L169998 on 5958. */
    sep();
    txt_draw(0xA0);
    cell_pull_c8_lo(0x211A);
L169998:
    for (;;) {
        cell_pull_c8_off();
        cell_step();
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open_cur();
    label(0x7D1B);
    wnd_open_cur();
    label(0x7D19);
    latch(0x13);
    txt_draw(0x7D1E);
    latch(0x20);
    txt_draw(0x7D1D);
    config_map_x7d19_x36_x7d1e_x38_x7d();
    return;
}
