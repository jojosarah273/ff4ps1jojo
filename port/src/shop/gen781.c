/* FF4 source-port — interpreted module for battle_rows_twin_with_x70174_fb8_d.
 * Ground truth: src/battle_rows_twin_with_x70174_fb8_d.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_twin_with_x70174_fb8_d(void)
{
    /* battle rows (twin with 6048): 0x70174/8FB8/71DC preps; loops
       L167868 and L167850 on 5958(0x12)/6434(0x202). */
L167850:
    for (;;) {
        func_80070174();
        open_row_cur();
        wnd_open_cur();
    L167868:
        for (;;) {
            txt_cell_cur();
            io_poll_cur();
            if (io_just() != 0)
                goto L1678CC;
            cell_dispatch(cell_state_of());
            key_page_cur();
        L1678CC:
            cell_step();
            poll_t(0x12);
            if (io_just() == 0)
                continue;
            break;
        }
        row_page_cur();
        if (gate(0x202) != 0)
            continue;
        break;
    }
    return;
}
