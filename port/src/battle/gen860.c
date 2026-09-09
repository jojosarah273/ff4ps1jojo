/* FF4 source-port — interpreted module for func_8010408C.
 * Ground truth: src/func_8010408C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010408C(void)
{
    /* battle rows: 0x300/0x301/0x2F/0x303/0x200 cells via 8010D9D4;
       loop L1040A4 on 5A90(). */
    draw_pad(0x10);
    wnd_open_cur();
L1040a4:
    for (;;) {
        battle_row_linear();
        cell_pull_c8(0x300);
        battle_row_linear();
        cell_pull_c8(0x301);
        latch(0x2F);
        cell_pull_c8(0x302);
        battle_row_linear();
        row_read(7);
        row_sel_cell_cur();
        cell_pull_c8(0x303);
        cell_pull_c8(0x200);
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
