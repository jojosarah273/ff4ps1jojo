/* FF4 source-port — interpreted module for ability_detail_x1340_x1440_texts_x.
 * Ground truth: src/ability_detail_x1340_x1440_texts_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_detail_x1340_x1440_texts_x(void)
{
    /* ability detail: 0x1340/0x1440 texts, 0x45/0x41 windows,
       80139694 prep, 80120E2C/8011FBA4/80126528/801399EC/
       801264C0 rows; loops L139934 (5DA0(0x45)/5B8C(0x202)). */
    fn_1x39694();
    txt_cell(0x1340);
    if (gate(2) != 0)
        goto L1399DC;
    latch(0x30);
    cell_put(0x45);
    cell_fmt2(0x41);
L139934:
    for (;;) {
        cell_push_c8_d58(0x1440);
        if (gate(2) != 0)
            goto L1399A4;
        step2();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_29();
    config_row_26528();
    return;
L1399A4:
    row_prep(0x20);
    cell_sink8_9(0x1340);
    cell_stamp8_9_b(0x1440);
    cell_0xf9140(0x1340);
    row_prep_close();
    fn_1x399ec();
    config_row_264e8();
    return;
L1399DC:
    return;
}
