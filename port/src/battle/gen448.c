/* FF4 source-port — interpreted module for func_801100BC.
 * Ground truth: src/func_801100BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801100BC(void)
{
    /* battle rows: 0x3B0/0x3B1/0x410/0x411 cells with 3F38(3C3C)
       pairs, 0x4C/0x4D/0x7A windows; loop L1100CC on 5A90(0x10). */
    draw_pad_cur();
L1100cc:
    for (;;) {
        cell_push_c8_d58(0x3B0);
        sep_a();
        cell_poke0(cell_state(0x4C));
        cell_pull_c8(0x3B0);
        cell_push_c8_d58(0x3B1);
        sep_a();
        cell_poke0(cell_state(0x4D));
        cell_pull_c8(0x3B1);
        row_page(0x7A);
        row_read(1);
        if (sel(0x202) != 0)
            goto L1101A4;
        poll_t(8);
        if (io_go() != 0)
            goto L1101A4;
        cell_push_c8_d58(0x410);
        sep_a();
        cell_poke0(cell_state(0x4C));
        cell_pull_c8(0x410);
        cell_push_c8_d58(0x411);
        sep_a();
        cell_poke0(cell_state(0x4E));
        cell_pull_c8(0x411);
    L1101A4:
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
