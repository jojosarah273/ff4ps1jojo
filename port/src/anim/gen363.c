/* FF4 source-port — interpreted module for shop_confirm_rows_x3e_x3d_windows.
 * Ground truth: src/shop_confirm_rows_x3e_x3d_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_confirm_rows_x3e_x3d_windows(void)
{
    /* shop confirm rows: 0x3E/0x3D windows, 0x1700/0xBD cells and
       0x8 window; loops L170A4C (5A90(0x100)) and L170ACC (3F38
       (3B04) rows + 4120(0x202) latch). */
    latch(0x80);
    txt_draw(0x2115);
    wnd_open(0x1700);
    txt_set_cur();
    cell_put(0x3E);
    open_row(0x3D);
    page(0x3D);
    draw_pad_cur();
L170a4c:
    for (;;) {
        cell_push_c8();
        cell_pull_c8(0xBD);
        cell_step();
        step2();
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x1700);
    cell_put(0x3E);
    open_row(0x3D);
    page(0x3D);
    draw_pad_cur();
L170acc:
    for (;;) {
        cell_push_c8();
        cell_put(8);
        cell_step();
        row_read(0xF);
        sep_a();
        cell_poke0(cell_state_of());
        row_page(8);
        sep_a();
        cell_poke0(cell_state_of());
        row_read(0x1F);
        if (sel(0x202) != 0)
            continue;
        step2();
        poll_t(0x100);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
