/* FF4 source-port — interpreted module for battle_item_cast_x47_window_gates.
 * Ground truth: src/battle_item_cast_x47_window_gates.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_cast_x47_window_gates(void)
{
    /* battle item cast: 0x47 window; 6434 gates (0x202/2) route the
       5574(0xB0/0xC0) key ladder and 4248(0x30/0x20) row gates, with
       90EC/8768 cell draws; exits at L14653C. */
    row_open();
    row_page(0x47);
    txt_cell_cur();
    if (gate(0x202) != 0)
        goto L14633C;
    txt_cell_cur();
    if (gate(2) != 0)
        goto L14634C;
L14633C:
    row_close();
    return;
L14634C:
    row_close();
    txt_cell_cur();
    row_read(0xF);
    cell_draw_cur();
    txt_cell_cur();
    io_poll(0xB0);
    if (io_just() != 0)
        goto L146514;
    page_paint_cur();
    page_paint_cur();
    io_poll(0xC0);
    if (io_just() == 0)
        goto L1463C4;
    latch(8);
    goto L14645C;
L1463C4:
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L146420;
    row_open();
    row_page(0x47);
    cell_push_c8();
    row_close();
    goto L14645C;
L146420:
    row_open();
    row_page(0x47);
    cell_push_c8();
    row_close();
L14645C:
    cell_draw_cur();
    cell_push_c8_d58();
    row_read(0x30);
    if (sel(2) != 0)
        goto L1464E4;
    row_read(0x20);
    if (sel(2) != 0)
        goto L1464C4;
    txt_cell_cur();
    cell_draw_cur();
L1464C4:
    txt_cell_cur();
    row_sel_cell_cur();
    cell_draw_cur();
    return;
L1464E4:
    txt_cell_cur();
    cell_draw_cur();
    return;
L146514:
    txt_cell_cur();
    cell_draw_cur();
    return;
}
