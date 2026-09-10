/* FF4 source-port — interpreted module for battle_rows_twin_variant_x66_x65_x.
 * Ground truth: src/battle_rows_twin_variant_x66_x65_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_twin_variant_x66_x65_x(void)
{
    /* battle rows (twin variant): 0x66/0x65/0x63/0x1D windows,
       80121E94/80121D64/80121CE4 rows. */
    if (io_go() != 0)
        goto L12191C;
    fn_1x21e94();
    poll_pair(0x66);
    goto L12192C;
L12191C:
    fn_1x21d64();
    key_page(0x66);
L12192C:
    fn_1x21ce4();
    row_page(0x65);
    sep_b();
    cell_tick_sub(cell_state(0x63));
    poll_spin();
    cell_put(0x1D);
    latch(0xF7);
    cell_draw(0xF8);
    latch_cur();
L121994:
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
