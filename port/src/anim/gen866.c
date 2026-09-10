/* FF4 source-port — interpreted module for shop_rows_x128a_text_x4c_x4e_x4a_x.
 * Ground truth: src/shop_rows_x128a_text_x4c_x4e_x4a_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_rows_x128a_text_x4c_x4e_x4a_x(void)
{
    /* shop rows: 0x128A text + 0x4C/0x4E/0x4A/0x49/0x73 windows,
       80170458 + 8017F8F8 rows; gate 4120(0x202). */
    txt_set(0x128A);
    row_read(0x40);
    if (sel(0x202) != 0)
        return;
    wnd_open(0x5A00);
    tail(0x4C);
    wnd_open(0x600);
    tail(0x4E);
    wnd_open_cur();
    tail(0x4A);
    latch(0x1C);
    cell_put(0x49);
    shop_row_render_x2115_x4300_x4301();
    battle_mode_dispatch();
    return;
}
