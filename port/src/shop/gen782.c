/* FF4 source-port — interpreted module for battle_rows_x70174_fb8_dc_preps_b2.
 * Ground truth: src/battle_rows_x70174_fb8_dc_preps_b2.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x70174_fb8_dc_preps_b2(void)
{
    /* battle rows: 0x70174/8FB8/71DC preps, 5B2C(3B04) check; loops
       L167798 and L167780 on 5958(0x12)/6434(0x202). */
L167780:
    for (;;) {
        func_80070174();
        open_row_cur();
        wnd_open_cur();
    L167798:
        for (;;) {
            txt_cell_cur();
            io_poll_cur();
            if (io_just() != 0)
                goto L1677FC;
            cell_0xf5b2c(cell_state_of());
            key_page_cur();
        L1677FC:
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
