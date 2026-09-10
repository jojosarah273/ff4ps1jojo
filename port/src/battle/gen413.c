/* FF4 source-port — interpreted module for shop_stat_row_x3e_x3d_windows_with.
 * Ground truth: src/shop_stat_row_x3e_x3d_windows_with.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_stat_row_x3e_x3d_windows_with(void)
{
    /* shop stat row: 0x3E/0x3D windows with 76BC/7CC8 pairs, 0xE5B
       cells; loops L10D170/L10D1C4 poll 5C64(0x202)/4248(0xF)
       gates. */
    cell_put(0x3E);
    open_row(0x3D);
    cell_word_half(cell_state(0x3E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x3D));
    cell_word_half(cell_state(0x3E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x3D));
    cell_word_half(cell_state(0x3E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x3D));
    page(0x3D);
L10D170:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0xE5B);
        cell_step();
        step2();
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        break;
    }
L10D1C4:
    for (;;) {
        latch_cur();
        cell_pull_c8(0xE5B);
        step2();
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        break;
    }
    row_read(0x3F);
    if (sel(0x202) != 0)
        goto L10D170;
    return;
}
