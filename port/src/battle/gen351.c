/* FF4 source-port — interpreted module for func_801187C0.
 * Ground truth: src/func_801187C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801187C0(void)
{
    /* battle rows: 0x6/0x83/0x82/0x79/0x81 windows, 0x2130/0x212D
       texts, 8017EA90 icon; loop L118860 polls 4120(0x202) and
       54D4(3C3C(0x81)). */
    cell_cursor_dec();
    cell_cursor_dec();
    row_read(0xE0);
    cell_put(6);
    row_close2();
    row_read(0xF);
    row_sel_cell_cur();
    sep_b();
    cell_poke0(cell_state(6));
    cell_put(0x83);
    row_close2();
    row_read(0x10);
    if (sel(2) != 0)
        goto L118848;
    latch(7);
L118848:
    cell_put(0x82);
    open_row(0x79);
    open_row(0x81);
L118860:
    for (;;) {
        func_800FE7D8();
        cell_clear_bank(0x2130);
        cell_clear_bank(0x212D);
        latch(0x83);
        txt_draw(0x2131);
        row_page(0x83);
        row_read(0xE0);
        cell_tick_or(cell_state(0x81));
        func_8017EA90();
        key_page(0x79);
        row_page(0x79);
        func_800F4370(0x82);
        if (sel(0x202) != 0)
            continue;
        break;
    }
    key_page(0x81);
    row_page(0x83);
    row_read(0x1F);
    if (io_press(cell_state(0x81)) != 0)
        poll_pair(0x81);
    return;
}
