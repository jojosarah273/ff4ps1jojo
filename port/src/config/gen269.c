/* FF4 source-port — interpreted module for equip_cells_render.
 * Ground truth: src/equip_cells_render.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void equip_cells_render(void)
{
    /* equip sub-cell renderer (called by the 80130C74/80130F90 family):
       0x48/0x4B/0x4D/0x4F/0x46/0x57/0x49/0x51/0x4A/0x4E/0x4C/0xC7
       stat cells through 80123B00/80120A0C/80123320/8011F360/80122F2C;
       early exit when 4120(2) holds. */
    cell_push_c8_d58();
    row_read(0x3F);
    if (sel(2) != 0)
        return;
    row_info(0x48);
    tail(0x4B);
    fn_1x23b00();
    shop_row_x29_x45_windows_x41_x1500();
    cell_fmt2(0x4B);
    page(0x48);
    fn_1x23320();
    row_prep(0x20);
    row_read2(0x4B);
    sep_a();
    cell_pos_fwd(0x84);
    cell_put_hi9(0x4B);
    cell_peek0(cell_state(0x29));
    row_prep_close();
    latch(0x4D);
    cell_draw_cur();
    cell_draw(8);
    latch(0x46);
    cell_draw(2);
    cell_draw(6);
    latch(0x57);
    cell_draw(4);
    latch(0x49);
    cell_draw(0x40);
    latch(0x51);
    cell_draw(0x42);
    cell_draw(0x82);
    latch(0x4A);
    cell_draw(0x80);
    latch(0xC7);
    cell_draw(0x4E);
    cell_draw(0x8E);
    draw_pad(2);
    cell_push_c8_sel(0x48);
    rows_x45_window_loop_l11f370_on_c0();
    cell_draw(0x14);
    stat_sync();
    cell_draw(0x16);
    row_prep(0x20);
    row_sync2(0x46);
    draw_pad(7);
    config_rows_5a();
    row_sync2(0x50);
    draw_pad(9);
    config_rows_5a();
    row_sync2(0x86);
    draw_pad(0xB);
    config_rows_5a();
    row_sync2(0x90);
    draw_pad(0xD);
    config_rows_5a();
    row_prep_close();
    return;
}
