/* FF4 source-port — interpreted module for battle_rows_x64_x65_x63_x1d_window.
 * Ground truth: src/battle_rows_x64_x65_x63_x1d_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x64_x65_x63_x1d_window(void)
{
    /* battle rows: 0x64/0x65/0x63/0x1D windows, 0xF7-0xF9 codes,
       80121E6C/80121F64/80121C0C rows; 53C0 gate + loop L121894
       on 5DA0/5B8C(0x202). */
    if (io_go() != 0)
        goto L12181C;
    fn_1x21e6c();
    poll_pair(0x64);
    goto L12182C;
L12181C:
    fn_1x21f64();
    key_page(0x64);
L12182C:
    fn_1x21c0c();
    row_page(0x65);
    sep_b();
    cell_tick_sub(cell_state(0x63));
    poll_spin();
    cell_put(0x1D);
    latch(0xF7);
    cell_draw(0xF8);
    latch_cur();
L121894:
    for (;;) {
        cell_draw(0x1D);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0xF9);
    cell_draw_cur();
    return;
}
