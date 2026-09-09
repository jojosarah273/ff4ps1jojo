/* FF4 source-port — interpreted module for func_8012C0A8.
 * Ground truth: src/func_8012C0A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012C0A8(void)
{
    /* config save-flow: 0x60/0x45 windows, 0x1B3B/0x1B84/0x1B86 texts,
       801221EC/801210AC/8011EF30/8011FBA4/801263F0/8012C250 rows;
       4120(2) gate. */
    draw_pad(3);
    cell_push_c8_sel(0x60);
    row_read(0xC0);
    if (sel(2) == 0)
        goto L12C1E0;
    sep();
    stat_sync();
    txt_set(0x1B3B);
    sep_b();
    cell_pos_back(0xB0);
    row_prep(0x20);
    row_arm_s_cur();
    cell_put_hi9(0x45);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x45));
    row_prep_close();
    sep();
    stat_sync();
    cell_push_c8();
    row_prep(0x20);
    cell_pull9_hi(0x1B84);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_peek0(cell_state(0x1B84));
    cell_put_hi9(0x45);
    row_prep_close();
    func_801221EC();
    return;
L12C1E0:
    draw_pad_cur();
    page_paint2(0x1A82);
    row_sync();
    midrow_paint_a();
    draw_pad_cur();
    battle_rows_sync();
    row_done();
    battle_rows_29();
    func_801263F0();
    func_8012C250();
    return;
}
