/* FF4 source-port — interpreted module for func_801398F4.
 * Ground truth: src/func_801398F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801398F4(void)
{
    /* ability detail: 0x1340/0x1440 texts, 0x45/0x41 windows,
       80139694 prep, 80120E2C/8011FBA4/80126528/801399EC/
       801264C0 rows; loops L139934 (5DA0(0x45)/5B8C(0x202)). */
    func_80139694();
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
    func_80126528();
    return;
L1399A4:
    row_prep(0x20);
    cell_sink8_9(0x1340);
    cell_stamp8_9_b(0x1440);
    func_800F9140(0x1340);
    row_prep_close();
    func_801399EC();
    func_801264C0();
    return;
L1399DC:
    return;
}
