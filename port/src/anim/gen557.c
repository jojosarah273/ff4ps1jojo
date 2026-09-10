/* FF4 source-port — interpreted module for shop_title_xfe0_x19_x18_windows_xc.
 * Ground truth: src/shop_title_xfe0_x19_x18_windows_xc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_title_xfe0_x19_x18_windows_xc(void)
{
    /* shop title: 0xFE0/0x19/0x18 windows, 0xCDB/0xCEB texts,
       73E0(0x202) gates; loops L17464C and L174650. */
    txt_set(0xFE0);
    cell_put(0x19);
    open_row(0x18);
    cell_word_half(cell_state(0x19));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x18));
    page(0x18);
    draw_pad(0x20);
L17464C:
    for (;;) {
    L174650:
        for (;;) {
            cell_push_c8();
            cell_pull_c8(0xCDB);
            cell_push_c8();
            cell_pull_c8(0xCEB);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L17464C;
            break;
        }
        sep_a();
        row_open_w(0x10);
        if (cell_0xf73e0(0x202) != 0)
            goto L174650;
        break;
    }
    return;
}
