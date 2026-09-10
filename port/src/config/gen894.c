/* FF4 source-port — interpreted module for ability_rows_x1b8b_x4_texts_d0_row.
 * Ground truth: src/ability_rows_x1b8b_x4_texts_d0_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1b8b_x4_texts_d0_row(void)
{
    /* ability rows: 0x1B8B/0x4 texts, 801224D0/80132178 rows; loop
       L132388 on 5574(5). */
    latch_cur();
L132388:
    for (;;) {
        cell_cursor_dec();
        battle_put43();
        txt_cell(0x1B8B);
        if (gate(2) != 0)
            goto L1323F0;
        row_close2();
        cell_cursor_dec();
        fn_1x32178();
        cell_draw(4);
    L1323F0:
        row_close2();
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
