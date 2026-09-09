/* FF4 source-port — interpreted module for func_8013C094.
 * Ground truth: src/func_8013C094.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013C094(void)
{
    /* ability/skill screen: 1BB3/1BB4 headers, 5B/5A/60 windows;
       8011F724/8011F684/8011F884 + 8012B100 renders; loops to L13C09C
       while 4120(2) holds; 8013C554 details. */
L13c09c:
    for (;;) {
        txt_set(0x1BB3);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        row_open_w(0x30);
        cell_put(0x5B);
        txt_set(0x1BB4);
        if (gate(2) != 0)
            goto L13C104;
        latch(0x70);
        goto L13C10C;
    L13C104:
        latch_cur();
    L13C10C:
        cell_put(0x5A);
        page(0x5A);
        draw_pad(0x304);
        sep();
        func_8011F724();
        midrow_pad88_run();
        midrow_degen();
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            goto L13C184;
        open_row(0x60);
        draw_pad(0x304);
        func_8012B100();
        return;
    L13C184:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L13C1AC;
        func_8013C554();
    L13C1AC:
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto L13C1FC;
        txt_set(0x1BB4);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1BB4);
        if (sel(2) != 0)
            goto L13C2B4;
    L13C1FC:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto L13C24C;
        txt_set(0x1BB4);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1BB4);
        if (sel(0x202) != 0)
            goto L13C26C;
    L13C24C:
        row_page(1);
        row_read(8);
        if (sel(2) != 0)
            goto L13C294;
    L13C26C:
        txt_set(0x1BB3);
        poll_spin();
        if (poll_go(0x80) != 0)
            goto L13C294;
        txt_draw(0x1BB3);
    L13C294:
        row_page(1);
        row_read(4);
        if (sel(2) != 0)
            continue;
        goto L13C2B4;
    L13C2B4:
        txt_set(0x1BB3);
        cell_set50_from40();
        io_poll(4);
        if (io_just() != 0)
            continue;
        txt_draw(0x1BB3);
    }
    return;
}
