/* FF4 source-port — interpreted module for shop_row_x43_window_x1fff_xfff_x7f.
 * Ground truth: src/shop_row_x43_window_x1fff_xfff_x7f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_row_x43_window_x1fff_xfff_x7f(void)
{
    /* shop row: 0x43 window; 4264(0x1FFF)/4064 + 4264(0xFFF)/4064
       (0x7F/0x7E7E) value cells. */
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    stat_sync();
    row_sel2_cur();
    cell_cursor_ret2();
    sep_a();
    cell_pos_mask(0x1FFF);
    sep_a();
    cell_pos_fwd();
    cell_cursor_adv2();
    sep_a();
    cell_pos_mask(0xFFF);
    sep_a();
    cell_pos_fwd(0x7F);
    row_sync2_cur();
    battle_wait_just(0x7E7E);
    row_prep_close();
    return;
}
