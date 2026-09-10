/* FF4 source-port — interpreted module for config_status_row_xa9_xaa_xaf_wind.
 * Ground truth: src/config_status_row_xa9_xaa_xaf_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_status_row_xa9_xaa_xaf_wind(void)
{
    /* config status row: 0xA9/0xAA/0xAF windows, 0x1822 text, 0x2001
       gate; 80152CDC/8015B284 renders; loops L15B0DC (7A40/5C64) and
       L15B14C (6434(2) cursor gate). */
    open_row(0xA9);
    open_row(0xAA);
    txt_set(0x1822);
    options_rows_run();
    page(0xA6);
    txt_cell(0x2001);
    row_read(0xF);
    step2();
    sep_b();
L15b0dc:
    for (;;) {
        row_sel2(cell_state(0xA9));
        cell_flags_repack2();
        row_sel2(cell_state(0xAA));
        cell_flags_repack2();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    sep();
    tail(0xAF);
L15b14c:
    for (;;) {
        page(0xAF);
        txt_cell(0x321B);
        if (gate(2) != 0)
            goto L15B23C;
        io_poll(0xC8);
        if (io_just() == 0)
            goto L15B1C4;
        page(0xA6);
        txt_cell(0x2000);
        row_read(0x1F);
        io_poll(0xB);
        if (io_just() == 0)
            goto L15B1E4;
        if (io_just() != 0)
            goto L15B21C;
    L15B1C4:
        config_row_x353d_text_xe5_x82_xab();
        txt_set(0x353D);
        if (gate(2) != 0)
            goto L15B21C;
    L15B1E4:
        page(0xAF);
        txt_cell(0x321A);
        cell_draw_cur();
        goto L15B23C;
    L15B21C:
        page(0xAF);
        txt_cell(0x321A);
        row_read(0x7F);
        cell_draw(0x321A);
    L15B23C:
        sep_a();
        row_page(0xAF);
        row_open_w(4);
        cell_put(0xAF);
        io_poll(0xC0);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
