/* FF4 source-port — interpreted module for func_8010AF2C.
 * Ground truth: src/func_8010AF2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010AF2C(void)
{
    /* battle rows: 0x903 text; loop L10AF5C on 5958/53D4; then
       78C4(3B04)/7918(0x202) gates with 0x902 alternate. */
    row_read(0x7F);
    latch_cur();
L10af5c:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L10AF94;
        cell_set50_from54();
        sep_a();
        row_open_w(0xF);
    }
L10AF94:
    txt_cell_cur();
    cell_tick_or(cell_state_of());
    if (func_800F7918(0x202) != 0)
        goto L10AFF0;
    latch(0xFF);
    return;
L10AFF0:
    txt_cell(0x902);
    poll_spin();
    return;
}
