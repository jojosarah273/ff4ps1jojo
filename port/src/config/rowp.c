/* FF4 source-port — interpreted module for func_8013AB18.
 * Ground truth: src/func_8013AB18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013AB18(void)
{
Lab24:
    for (;;) {
        txt_set(0x1BB9);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x4B);
        cell_put(0x46);
        latch(0xA);
        cell_put(0x45);
        draw_pad(0x314);
        func_8011F6FC();
        txt_set(0x16AE);
        func_8013B0C4();
        latch(0x4A);
        cell_put(0x46);
        func_8011F6D4();
        txt_set(0x16AF);
        func_8013B0C4();
        latch(0x5A);
        cell_put(0x46);
        func_8011F6AC();
        txt_set(0x16B0);
        func_8013B0C4();
        latch(0x6A);
        cell_put(0x46);
        draw_pad(0x30C);
        func_8011F6FC();
        txt_set(0x16B1);
        func_801224D0();
        cell_put(0x45);
        latch(0x7A);
        cell_put(0x46);
        draw_pad(0x308);
        func_8011F6FC();
        txt_set(0x16B2);
        func_801224D0();
        cell_put(0x45);
        latch(0x8A);
        cell_put(0x46);
        draw_pad(0x318);
        func_8011F6FC();
        func_8011F684();
        func_8011F884();
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto Lad30;
        latch(5);
        txt_draw(0x1BB9);
    Lad30:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto Lad80;
        txt_set(0x1BB9);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto Lad78;
        latch(5);
    Lad78:
        txt_draw(0x1BB9);
    Lad80:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            goto Ladd8;
        txt_set(0x1BB9);
        cell_set50_from40();
        io_poll(6);
        if (io_just() == 0)
            goto Ladd0;
        latch_cur();
    Ladd0:
        txt_draw(0x1BB9);
    Ladd8:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto Lae74;
        txt_set(0x1BB9);
        io_poll(5);
        if (io_just() != 0)
            goto Laf0c;
        func_801224D0();
        txt_cell(0x16AE);
        cell_set50_from40();
        io_poll_cur();
        if (io_just() == 0)
            goto Lae6c;
        latch_cur();
    Lae6c:
        cell_draw(0x16AE);
    Lae74:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto Laf0c;
        txt_set(0x1BB9);
        io_poll(5);
        if (io_just() != 0)
            goto Laf0c;
        func_801224D0();
        txt_cell(0x16AE);
        poll_spin();
        if (poll_go(0x8080) != 0)
            goto Laf04;
        poll_spin();
    Laf04:
        cell_draw(0x16AE);
    Laf0c:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto Laf54;
        txt_set(0x1BB9);
        io_poll(5);
        if (io_just() != 0)
            func_8013AFA4();
    Laf54:
        row_page(1);
        row_read(0xC0);
        if (sel(0x202) != 0)
            goto Laf94;
        row_page_cur();
        row_read(0xC0);
        if (sel(0x202) == 0)
            goto Lab24;
    Laf94:
        func_8013AFA4();
        goto Lab24;
    }
}
