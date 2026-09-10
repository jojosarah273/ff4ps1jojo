/* FF4 source-port — interpreted module for ability_rows_ca4_prep_x1b4a_x1b4b.
 * Ground truth: src/ability_rows_ca4_prep_x1b4a_x1b4b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_ca4_prep_x1b4a_x1b4b(void)
{
    /* ability rows: 80139CA4 prep, 0x1B4A/0x1B4B texts, 0x43 window,
       80126070 close; gate 6434(0x80). */
    fn_1x39ca4();
    txt_set(0x1B4A);
    if (gate(0x80) != 0)
        goto L132C84;
    cell_put(0x43);
    row_prep(0x20);
    row_read2(0x43);
    row_arm_s(0x20);
    row_prep_close();
    latch(8);
    cell_draw(0x1B4B);
L132C84:
    wnd_open(0x2588);
    fn_1x26070();
    return;
}
