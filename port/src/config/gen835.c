/* FF4 source-port — interpreted module for ability_rows_x1bb0_x1bb1_texts_x5b.
 * Ground truth: src/ability_rows_x1bb0_x1bb1_texts_x5b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1bb0_x1bb1_texts_x5b(void)
{
    /* ability rows: 0x1BB0/0x1BB1 texts, 0x5B/0x5A windows,
       8011F724/80176BFC rows; gates 6434(2). */
    txt_set(0x1BB0);
    sep_a();
    row_open_w(0x1D);
    cell_put(0x5B);
    txt_set(0x1BB1);
    if (gate(2) != 0)
        goto L13964C;
    latch(0x78);
    goto L139654;
L13964C:
    latch(8);
L139654:
    cell_put(0x5A);
    page(0x5A);
    draw_pad(0x300);
    sep();
    row_latch_7e();
    fn_1x76bfc();
    return;
}
