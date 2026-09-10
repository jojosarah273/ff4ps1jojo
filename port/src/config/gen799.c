/* FF4 source-port — interpreted module for rows_x145_text_loops_l125e28_d70_c.
 * Ground truth: src/rows_x145_text_loops_l125e28_d70_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x145_text_loops_l125e28_d70_c(void)
{
    /* rows: 0x145 text; loops L125E28 (6D70/5C64) and L125EAC
       (63BC/5C64) with the 5D24(0x145)/5B8C latch. */
    txt_draw(0x145);
L125e20:
    for (;;) {
        wnd_open(8);
    L125e28:
        for (;;) {
            cell_push_c8_d58();
            cell_push_c8_d58();
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
    L125eac:
        for (;;) {
            cell_push_c8_d58();
            step2();
            cell_set50_from54();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        cell_dec_bank(0x145);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
