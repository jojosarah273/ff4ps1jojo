/* FF4 source-port — interpreted module for rows_x45_window_loop_l11f370_on_c0.
 * Ground truth: src/rows_x45_window_loop_l11f370_on_c0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x45_window_loop_l11f370_on_c0(void)
{
    /* rows: 0x45 window; loop L11F370 on 5480/53C0; closes via
       6434(0x202)/4008(0x80) gates. */
    open_row(0x45);
L11f370:
    for (;;) {
        sep_b();
        cell_pos_back(0xA);
        if (io_go() != 0)
            goto L11F3A0;
        key_page(0x45);
    }
L11F3A0:
    row_open_w(0x8A);
    stat_sync();
    row_page(0x45);
    if (gate(0x202) != 0)
        goto L11F3D8;
    latch(0xFF);
    return;
L11F3D8:
    sep_a();
    row_open_w(0x80);
    return;
}
