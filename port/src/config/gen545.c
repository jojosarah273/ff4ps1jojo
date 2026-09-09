/* FF4 source-port — interpreted module for func_8013C2FC.
 * Ground truth: src/func_8013C2FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013C2FC(void)
{
    /* ability menu: 0x60 window, 0x1A83 text, 801210AC/8011FBA4/
       8013C44C/8011F684/80126418/8011F884/8013BFFC rows; loop
       L13C304 on 4120(2). */
L13c304:
    for (;;) {
        midrow_paint_a();
        draw_pad_cur();
        battle_rows_29();
        func_8013C44C();
        midrow_pad88_run();
        func_80126418();
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
        func_8013C44C();
        page_paint2(0x1A83);
        func_8013BFFC();
    L13C43C:
        return;
    }
}
