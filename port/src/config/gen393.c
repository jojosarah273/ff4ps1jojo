/* FF4 source-port — interpreted module for func_80129910.
 * Ground truth: src/func_80129910.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80129910(void)
{
    /* shop rows: 0x45/0x4B/0x48 windows, 801245B4 detail; nested
       loops L129958 (5574/8960 cells), L129948, L129938 on
       5DA0/5B8C(0x202). */
    draw_pad_cur();
    latch(8);
    cell_put(0x45);
L129938:
    for (;;) {
        latch(2);
        cell_put(0x4B);
    L129948:
        for (;;) {
            latch(5);
            cell_put(0x48);
        L129958:
            for (;;) {
                cell_step();
                io_poll_cur();
                if (io_just() != 0)
                    goto L1299B8;
                poll_spin();
                cell_pull_c8();
                cell_pull_c8(0x40);
                goto L1299D8;
            L1299B8:
                battle_rows_42();
                cell_pull_c8();
                stat_sync();
                cell_pull_c8(0x40);
            L1299D8:
                step2();
                step2();
                step2();
                step2();
                poll_pair(0x48);
                if (poll_go(0x202) != 0)
                    continue;
                break;
            }
            step2();
            step2();
            poll_pair(0x4B);
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x54);
        row_prep_close();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
