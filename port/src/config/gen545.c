/* FF4 source-port — interpreted module for ability_menu_x60_window_x1a83_text.
 * Ground truth: src/ability_menu_x60_window_x1a83_text.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_menu_x60_window_x1a83_text(void)
{
    /* ability menu: 0x60 window, 0x1A83 text, 801210AC/8011FBA4/
       8013C44C/8011F684/80126418/8011F884/8013BFFC rows; loop
       L13C304 on 4120(2). */
L13c304:
    for (;;) {
        midrow_paint_a();
        draw_pad_cur();
        battle_rows_29();
        fn_1x3c44c();
        midrow_pad88_run();
        fn_1x26418();
        midrow_degen();
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L13C38C;
        row_page(0x60);
        cell_put_cur();
    L13C38C:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L13C3DC;
        row_page(0x60);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L13C43C;
        latch(0xFF);
        cell_put(0x60);
    L13C3DC:
        row_page_cur();
        row_read(0x80);
        if (sel(2) == 0)
            goto L13C43C;
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            continue;
        open_row(0x60);
        fn_1x3c44c();
        page_paint2(0x1A83);
        ability_rows_x1a83_text_loop_l13c0();
    L13C43C:
        return;
    }
}
