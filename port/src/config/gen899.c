/* FF4 source-port — interpreted module for battle_row_88.
 * Ground truth: src/battle_row_88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_row_88(void)
{
    /* rows: 0x88 window, 0x2100 text, 8011F320/8011F844 rows;
       6434(0x80) gate; loop L126618 on 5B8C. */
L126618:
    for (;;) {
        midrow_pad88();
        row_page(0x88);
        if (gate(0x80) != 0)
            goto L126690;
        cell_pull_c8_lo(0x2100);
        cell_cursor_dec();
        fn_1x1f844();
        row_close2();
        poll_spin();
        cell_put(0x88);
        if (poll_go_cur() != 0)
            continue;
        latch(0x80);
        cell_pull_c8_lo(0x2100);
        cell_put(0x88);
        return;
    }
L126690:
    return;
}
