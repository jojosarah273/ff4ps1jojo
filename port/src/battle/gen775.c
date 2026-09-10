/* FF4 source-port — interpreted module for battle_rows_x60_xad4_xad5_texts_c.
 * Ground truth: src/battle_rows_x60_xad4_xad5_texts_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x60_xad4_xad5_texts_c(void)
{
    /* battle rows: 0x60/0xAD4/0xAD5 texts, 8011356C row; loop
       L11340C on 5574(0x10). */
    latch(0x60);
    cell_pull_c8_lo(0xAD4);
    latch(0x48);
    txt_draw(0xAD5);
    fn_1x1356c();
    wnd_fx_7d_b();
    latch(0x80);
    txt_draw(0x2115);
    wnd_open_cur();
L11340c:
    for (;;) {
        row_read(3);
        if (sel(0x202) != 0)
            goto L113504;
        row_sel_cell_cur();
    L113504:
        cell_step();
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
