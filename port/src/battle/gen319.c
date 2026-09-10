/* FF4 source-port — interpreted module for battle_item_count_detail_ee20_row.
 * Ground truth: src/battle_item_count_detail_ee20_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_count_detail_ee20_row(void)
{
    /* battle item-count detail: 8014EE20 row, 80148CAC close, 8014FA4C
       sub-list, 8014F2CC/8014F7A8 row handlers; loop L14F1CC picks
       rows on 4FAC keys. */
    txt_set_cur();
    if (gate(2) != 0)
        goto L14F0E4;
    battle_status_cast_xe_x10_xd_windo();
L14F0E4:
    txt_set_cur();
    if (gate(0x202) == 0)
        return;
    txt_draw_cur();
    battle_status_cast_xe_x10_xd_windo();
    txt_set_cur();
    poll_spin();
    if (poll_go(0x202) != 0)
        goto L14F144;
    txt_set_cur();
    txt_draw_cur();
    battle_rows_xf42b_text_x_xaa_bytes();
L14F144:
    cell_clear_bank();
    txt_set_cur();
    txt_draw_cur();
    open_row(0x18);
    fn_1x4fa4c();
    page_open_cur();
    tail(0xE);
    txt_set_cur();
    row_prep(0x20);
    sep();
    row_prep_close();
L14f1cc:
    for (;;) {
        row_arm2(cell_state_of());
        if (cell_flags_zero50(0x101) != 0)
            goto L14F20C;
        row_arm2(cell_state_of());
        battle_item_count_screen_x18_windo();
        goto L14F22C;
    L14F20C:
        row_arm2(cell_state_of());
        if (cell_flags_zero50(1) != 0)
            goto L14F294;
    L14F22C:
        key_page(0x18);
        row_page(0x18);
        io_poll(8);
        if (io_just() == 0)
            continue;
        cell_dec_bank();
        if (poll_go(0x202) != 0)
            return;
        txt_set_cur();
        txt_draw_cur();
        txt_set_cur();
        txt_draw_cur();
        return;
    L14F294:
        page_open_cur();
        if (cell_flags_pack(2) != 0)
            continue;
        fn_1x4f2cc();
    }
    return;
}
