/* FF4 source-port — interpreted module for battle_rows_x79_x83_x82_x81_window.
 * Ground truth: src/battle_rows_x79_x83_x82_x81_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x79_x83_x82_x81_window(void)
{
    /* battle rows: 0x79/0x83/0x82/0x81 windows, 0x212D/0xFE4/0x2130/
       0x2131 texts, 8017EA90 icon; loops L118948 on 4120(0x202)/
       5B8C. */
    open_row(0x79);
L118948:
    for (;;) {
        shop_view_run();
        row_page(0x83);
        row_read(0xE0);
        cell_tick_or(cell_state(0x81));
        func_8017EA90();
        key_page(0x79);
        row_page(0x79);
        cell_tick_and(0x82);
        if (sel(0x202) != 0)
            continue;
        poll_pair(0x81);
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    open_row(0x81);
    latch(0x11);
    txt_draw(0x212D);
    txt_set(0xFE4);
    cell_tick_half();
    if (cell_flags_nz50(0x101) != 0)
        goto L118A28;
    latch(2);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    return;
L118A28:
    cell_clear_bank(0x2131);
    return;
}
