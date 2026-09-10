/* FF4 source-port — interpreted module for options_banner_x3e_x3f_ladders_rou.
 * Ground truth: src/options_banner_x3e_x3f_ladders_rou.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_banner_x3e_x3f_ladders_rou(void)
{
    /* options banner: 5574(0x3E/0x3F) ladders route the 0x5D/0x2/
       0xF8/0x26D4/0x26D2/0x3584 codes; 80152224 row. */
    io_poll(0x3E);
    if (io_go() == 0)
        goto L160A0C;
    io_poll(0x3F);
    if (io_just() == 0)
        goto L1609C4;
    latch(0x5D);
    goto L160A2C;
L1609C4:
    wnd_open_cur();
    latch(2);
    config_banner_96();
    cell_cursor_dec();
    latch(0xF8);
    txt_draw(0x26D4);
    row_close2();
    sep_a();
    row_open_w(0x3E);
L160A0C:
    sep_b();
    cell_pos_back(0x31);
    sep_a();
    row_open_w(0x4D);
L160A2C:
    txt_draw(0x26D2);
    page_paint2(0x3584);
    return;
}
