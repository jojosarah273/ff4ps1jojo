/* FF4 source-port — interpreted module for shop_row_xfd8_title_x3e_x3d_window.
 * Ground truth: src/shop_row_xfd8_title_x3e_x3d_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_row_xfd8_title_x3e_x3d_window(void)
{
    /* shop row: 0xFD8 title + 0x3E/0x3D windows (76BC/7CC8 pair cells),
       0x5000 gate, 8011F724-style sprint; loops L1768B4/L1768B8
       (4968/5A90(0x800)). */
    txt_set(0xFD8);
    cell_push_c8();
    cell_put(0x3E);
    open_row(0x3D);
    cell_word_half(cell_state(0x3E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x3D));
    row_page(0x3E);
    sep_a();
    cell_poke0(cell_peek_cur());
    cell_put(0x3E);
    page(0x3D);
    draw_pad_cur();
    latch(0x7F);
    cell_cursor_dec();
    row_pad();
L1768B4:
    for (;;) {
    L1768b8:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x5000);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L1768B4;
            goto L17690C;
        }
    L17690C:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0x5000);
            cell_step();
            step2();
            latch_cur();
            cell_pull_c8(0x5000);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x800);
        if (io_just() == 0)
            continue;
        break;
    }
    latch_cur();
    cell_cursor_dec();
    row_pad();
    return;
}
