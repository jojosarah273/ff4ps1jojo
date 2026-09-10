/* FF4 source-port — interpreted module for shop_memory_x7d21_gate_x2121_x2123.
 * Ground truth: src/shop_memory_x7d21_gate_x2121_x2123.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_memory_x7d21_gate_x2121_x2123(void)
{
    /* shop memory: 0x7D21 gate, 0x2121/0x2123/0x2127/0x7D24/0x7D1A
       texts, 0x1C window; loop L16E398 (5958(4)) with the 5D24/5B8C
       ladders. */
    txt_set(0x7D21);
    if (gate(0x202) != 0)
        goto L16E410;
    row_prep(0x20);
    wnd_open(0x1C);
    cell_push9(0x2121);
    cell_cursor_ret2();
L16e398:
    for (;;) {
        cell_sink8_9(0x2103);
        cell_stamp8_9(0x2105);
        cell_set50_from54();
        cell_set50_from54();
        poll_t(4);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_cursor_adv2();
    cell_pull9_hi(0x2109);
    sep();
    row_prep_close();
    if (cell_dec_bank(0x7D24) != 0)
        goto L16E480;
    page_paint2(0x7D21);
    goto L16E480;
L16E410:
    if (cell_dec_bank(0x7D22) != 0)
        goto L16E480;
    cell_clear_bank(0x7D21);
    cell_clear_bank(0x7D23);
    latch(0x1A);
    txt_draw(0x7D24);
    txt_set(0x7D26);
    page_paint2(0x7D26);
    txt_cell_cur();
    txt_draw(0x7D22);
    return;
L16E480:
    return;
}
