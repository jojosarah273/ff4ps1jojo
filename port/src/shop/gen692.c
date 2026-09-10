/* FF4 source-port — interpreted module for shop_row_x4a_x57_windows_x400_x28.
 * Ground truth: src/shop_row_x4a_x57_windows_x400_x28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_row_x4a_x57_windows_x400_x28(void)
{
    /* shop row: 0x4A/0x57 windows, 0x400/0x28/0x57 consts, 8016BBCC
       row; gate 4120(0x202). */
    row_page(0x4A);
    row_read(0xF);
    if (sel(0x202) != 0)
        return;
    wnd_open(0x400);
    tail(0x28);
    page(0x57);
    draw_pad(0x4000);
    latch(0x7E);
    fn_1x6bbcc();
    row_prep(0x20);
    row_read2(0x57);
    sep_a();
    cell_pos_fwd(0x400);
    cell_pos_mask(0x7FFF);
    cell_put_hi9(0x57);
    sep();
    row_prep_close();
    return;
}
