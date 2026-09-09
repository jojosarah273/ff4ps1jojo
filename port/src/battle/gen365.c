/* FF4 source-port — interpreted module for func_801486D8.
 * Ground truth: src/func_801486D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801486D8(void)
{
    /* battle item detail: 0xE/0x10/0x11 windows, 0x500/0x301-0x303
       cells, 78C4(3C3C(0x10)) rows, 6434(2)/6CC0 gates. */
    txt_set_cur();
    if (gate(2) != 0)
        return;
    txt_set_cur();
    cell_put(0xE);
    row_page_cur();
    row_read(3);
    cell_push_c8();
    cell_put(0x10);
    cell_push_c8();
    cell_put(0x11);
    cell_push_c8_d58(0x500);
    cell_tick_and(0x11);
    cell_tick_or(cell_state(0x10));
    cell_pull_c8(0x500);
    row_page(0xE);
    row_prep(0x20);
    sep();
    row_prep_close();
    txt_set_cur();
    cell_draw(0x301);
    txt_set_cur();
    cell_draw(0x302);
    txt_set(0x6CC0);
    if (gate(2) != 0)
        goto L1488A4;
    txt_set_cur();
    sep_b();
    cell_pos_back(0x10);
    cell_draw(0x300);
    txt_set(0x303);
    cell_draw_cur();
    return;
L1488A4:
    txt_set_cur();
    cell_draw(0x300);
    txt_set_cur();
    cell_draw(0x303);
    return;
}
