/* FF4 source-port — interpreted module for config_rows_x1b3b_xd5_x60_texts_wi.
 * Ground truth: src/config_rows_x1b3b_xd5_x60_texts_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x1b3b_xd5_x60_texts_wi(void)
{
    /* config rows: 0x1B3B/0xD5/0x60 texts/windows, 801221EC/8012C2F8/
       8012C980 rows; gate 53D4. */
    txt_set(0x1B3B);
    sep_b();
    cell_pos_back(0xD5);
    row_sel_cell_cur();
    cell_put(0x43);
    page(0x43);
    draw_pad(3);
    row_prep(0x20);
    cell_push89_sel(0x60);
    cell_put_hi9(0x45);
    cell_0xf4b1c();
    cell_pull89_bank(0x60);
    cell_flags_cmp_pos(cell_state(0x45));
    if (io_just() != 0)
        goto L12C948;
    row_prep_close();
    config_row_221ec();
    return;
L12C948:
    row_prep_close();
    draw_pad_cur();
    fn_1x2c2f8();
    config_save_screen_x1b23_x1b1a_tex();
    return;
}
