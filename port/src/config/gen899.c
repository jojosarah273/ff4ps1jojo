/* FF4 source-port — interpreted module for func_80126610.
 * Ground truth: src/func_80126610.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126610(void)
{
    /* rows: 0x88 window, 0x2100 text, 8011F320/8011F844 rows;
       6434(0x80) gate; loop L126618 on 5B8C. */
L126618:
    for (;;) {
        func_8011F320();
        row_page(0x88);
        if (gate(0x80) != 0)
            goto L126690;
        cell_pull_c8_lo(0x2100);
        cell_cursor_dec();
        func_8011F844();
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
