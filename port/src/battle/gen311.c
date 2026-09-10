/* FF4 source-port — interpreted module for battle_status_cast_x29c5_x2003_x20.
 * Ground truth: src/battle_status_cast_x29c5_x2003_x20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_status_cast_x29c5_x2003_x20(void)
{
    /* battle status-cast: 0x29C5/0x2003/0x2001 texts, 80147434 +
       801473A4 rows, 8007275C/80072CB0 commits; loop L1471DC polls
       5574(0xFF)/5958(5). */
    wnd_open_cur();
    tail(0xA);
L1471dc:
    for (;;) {
        row_open();
        txt_cell(0x29C5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L147334;
        row_open();
        fn_1x47434();
        txt_cell(0x2003);
        row_read(8);
        if (sel(2) != 0)
            goto L147244;
        latch(0xE);
        goto L147254;
    L147244:
        txt_cell(0x2001);
        row_read(0x1F);
    L147254:
        row_close();
        cell_draw_cur();
        io_poll(0xF);
        if (io_go() == 0)
            goto L14728C;
        fn_1x473a4();
        goto L1472C4;
    L14728C:
        tail(0x26);
        wnd_open(0x800);
        tail(0x28);
        func_8007275C();
    L1472C4:
        row_prep(0x20);
        row_read2(0x2A);
        sep_a();
        cell_pos_fwd(0x800);
        row_sync2_cur();
        cell_put_hi9();
        cell_fmt2(0xA);
        sep();
        row_prep_close();
        latch(0x1A);
        func_80072CB0();
    L147334:
        row_prep(0x20);
        row_read2(0xA);
        sep_a();
        cell_pos_fwd(0x400);
        cell_put_hi9(0xA);
        sep();
        row_prep_close();
        row_close();
        cell_step();
        poll_t(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
