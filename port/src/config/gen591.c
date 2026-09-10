/* FF4 source-port — interpreted module for func_80134E74.
 * Ground truth: src/func_80134E74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80134E74(void)
{
    /* ability summary: 0x48C0/0x1A71/0x1A01/0x1A02 texts,
       80120F1C/8012807C/801257BC/8011EF30/80135298/8011F8D4/
       8011FBA4 rows; linear render. */
    config_row_d600b();
    wnd_open(0x48C0);
    label(0x1A71);
    func_8012807C();
    func_801257BC();
    draw_pad_cur();
    battle_rows_sync();
    func_80135298();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    latch_cur();
    stat_sync();
    txt_set(0x1A01);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1A01));
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0x20);
    row_prep_close();
    wnd_open(0x46);
    battle_rows_100();
    draw_pad_cur();
    battle_rows_29();
    return;
}
