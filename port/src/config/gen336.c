/* FF4 source-port — interpreted module for func_80124358.
 * Ground truth: src/func_80124358.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124358(void)
{
    /* equip/status row: 0x5A/0x5C/0x5B window + 0x22/0x42/0x45 cells,
       801224D0/8011F320/8011EE34/801813C0 rows; loop L124530
       (5DA0(0x45)/5B8C(0x202)); gate 6434(0x202)/0x90 window. */
    row_page(0x90);
    if (gate(0x202) == 0)
        goto L1245A0;
    latch_cur();
    stat_sync();
    row_page(0x5C);
    stat_sync();
    row_prep(0x20);
    sep_a();
    cell_pos_fwd();
    cell_put_hi9(0x1F);
    row_sync2(0x600);
    cell_put_hi9(0x22);
    row_prep_close();
    latch(0x1A);
    cell_put(0x21);
    row_page(0x5B);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    func_801224D0();
    row_prep(0x20);
    cell_push9_bank();
    cell_put_hi9(0x1D);
    row_prep_close();
    func_8011F320();
    func_8011EE34();
    sep();
    stat_sync();
    row_page(0x5C);
    row_read(0xF);
    row_prep(0x20);
    row_prep_close();
    row_page(0x5B);
    cell_put(0x43);
    cell_fmt2(0x43);
    latch(0x20);
    cell_put(0x45);
L124530:
    for (;;) {
        cell_push_c8();
        cell_pull_c8();
        cell_step();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_801813C0();
    return;
L1245A0:
    return;
}
