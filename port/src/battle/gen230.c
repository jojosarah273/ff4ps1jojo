/* FF4 source-port — interpreted module for func_801474B0.
 * Ground truth: src/func_801474B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801474B0(void)
{
    txt_set(0x16A8);
    txt_draw(0xF014);
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L7508;
    txt_set(0xF014);
    txt_draw(0xF014);
L7508:
    wnd_open_cur();
L7510:
    for (;;) {
        row_open();
        tail(0x47);
        cell_put_cur();
        cell_push_c8();
        cell_pull_c8(0xEFC9);
        row_open();
        txt_cell(0x29C5);
        io_poll(0xFF);
        if (io_just() == 0)
            goto L75bc;
        sep();
        goto L7684;
    L75bc:
        func_80147434();
        txt_set(0x1801);
        if (gate(2) != 0)
            goto L7674;
        txt_set(0x1800);
        io_poll(0xB6);
        if (io_just() == 0)
            goto L7674;
        txt_cell(0x2001);
        row_read(0xF);
        io_poll(0xB);
        if (io_just() == 0)
            goto L7674;
        txt_cell(0x2005);
        cell_draw(0x2005);
        page_cur();
        latch(1);
        cell_draw(0xF2C1);
        sep();
        goto L7684;
    L7674:
        txt_cell(0x2000);
        row_read(0x3F);
    L7684:
        row_close();
        cell_pull_c8(0xEFC4);
        sep();
        cell_pull_c8(0xEFC7);
        cell_pull_c8(0xEFC8);
        cell_pull_c8(0xEFCC);
        cell_pull_c8(0xEFCE);
        cell_pull_c8(0xEFCF);
        cell_pull_c8(0xEFD1);
        cell_push_c8_d58(0x1900);
        cell_pull_c8(0xEFD3);
        latch(1);
        cell_pull_c8(0xEFD0);
        latch(1);
        cell_pull_c8(0xEFCD);
        txt_set(0xF014);
        if (gate(0x202) != 0)
            goto L7728;
        cell_push_c8();
        goto L7734;
    L7728:
        cell_push_c8();
    L7734:
        cell_cursor_dec();
        row_sync();
        row_page(0x47);
        cell_push_c8_d58(0xF015);
        row_read(0xC0);
        if (sel(2) != 0)
            goto L77b8;
        row_done();
        row_close2();
        goto L77d0;
    L77b8:
        row_done();
        row_close2();
        latch(0xF0);
    L77d0:
        cell_pull_c8(0xEFC5);
        cell_push_c8();
        cell_pull_c8(0xEFC6);
        func_80147888();
        row_sel_cell_cur();
        cell_push_c8();
        cell_pull_c8(0xEFCA);
        cell_push_c8();
        cell_pull_c8(0xEFCB);
        row_close();
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
