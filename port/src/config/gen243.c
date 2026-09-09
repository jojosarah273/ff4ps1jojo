/* FF4 source-port — interpreted module for func_8015C220.
 * Ground truth: src/func_8015C220.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015C220(void)
{
Lc228:
    for (;;) {
        txt_set(0x38E8);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    open_row(0xDB);
    open_row(0xD9);
    row_page(0xD0);
    txt_draw(0x38E9);
    options_rows_run();
    page(0xA6);
    txt_cell(0x2000);
    row_read(0x1F);
    io_poll(0x15);
    if (io_just() == 0)
        goto Lc318;
Lc298:
    for (;;) {
        txt_set(0x38A9);
        row_sel_cell_cur();
        txt_cell(0x389A);
        io_poll(0xFF);
        if (io_just() != 0)
            goto Lc308;
        cell_put(0xA9);
        txt_cell(0x389B);
        cell_put(0xAA);
        page_paint2(0x38A9);
        goto Lc390;
    Lc308:
        cell_clear_bank(0x38A9);
    }
Lc318:
    for (;;) {
        txt_set(0x38A8);
        row_sel_cell_cur();
        txt_cell(0x388C);
        io_poll(0xFF);
        if (io_just() == 0)
            break;
        cell_clear_bank(0x38A8);
    }
    cell_put(0xA9);
    txt_cell(0x388D);
    cell_put(0xAA);
    page_paint2(0x38A8);
Lc390:
    row_page(0xA9);
    io_poll(0xC0);
    if (io_go() == 0)
        goto Lc4a4;
    sep_b();
    cell_pos_back(0xC0);
    cell_put(0xDC);
    txt_draw(0x38EA);
    row_page(0xA9);
    io_poll(0xCE);
    if (io_just() == 0)
        goto Lc408;
    latch(0xFF);
    cell_put(0xDA);
    goto Lc48c;
Lc408:
    for (;;) {
        func_8015316C();
        cell_put(0xA9);
        sep_a();
        row_open_w(5);
        txt_cell(0x3540);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    row_page(0xA9);
    sep();
    func_80153098();
    cell_put(0xDA);
Lc48c:
    latch(0x80);
    cell_put(0xD8);
    goto Lc534;
Lc4a4:
    io_poll(1);
    if (io_just() != 0)
        goto Lc504;
    latch(2);
    txt_draw(0x38EA);
    row_page(0xAA);
    cell_put(0xDC);
    latch(0x20);
    cell_put(0xD8);
    latch(0xFF);
    cell_put(0xDA);
    goto Lc534;
Lc504:
    row_page(0xAA);
    cell_put(0xDC);
    latch(0x40);
    cell_put(0xD8);
    latch(0xFF);
    cell_put(0xDA);
Lc534:
    page_paint2(0x38E8);
    return;
}
