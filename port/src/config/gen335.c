/* FF4 source-port — interpreted module for ability_spell_screen_x1b9b_x1b8b_t.
 * Ground truth: src/ability_spell_screen_x1b9b_x1b8b_t.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_spell_screen_x1b9b_x1b8b_t(void)
{
    /* ability/spell screen: 0x1B9B/0x1B8B texts, 0x45/0x46/0x43 windows,
       801224D0 cursor, 8011F724 commit; L1313A8 row loop on
       5DA0(0x45)/5B8C(0x202), L1314 960C tail. */
    txt_set(0x1B9B);
    cell_cursor_dec();
    row_sync();
    battle_put43();
    txt_cell(0x1B8B);
    if (gate(0x202) != 0)
        goto L1313F8;
    latch(8);
    cell_put(0x45);
L1313a8:
    for (;;) {
        latch(0xFF);
        cell_pull_c8();
        step2();
        latch(0xF0);
        cell_pull_c8();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    goto L131498;
L1313F8:
    row_page(0x43);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x43));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x24);
    cell_put(0x46);
    latch(0x44);
    cell_put(0x45);
    page(0x45);
    sep();
    row_latch_7e();
L131498:
    row_done();
    row_prep(0x20);
    sep_a();
    cell_pos_fwd(0x10);
    row_prep_close();
    row_close2();
    cell_set50_from40();
    io_poll(5);
    if (io_go() == 0)
        goto L13151C;
    sep();
L13151C:
    txt_draw(0x1B9B);
    return;
}
