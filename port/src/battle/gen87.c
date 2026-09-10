/* FF4 source-port — interpreted module for battle_item_count_screen_x18_windo.
 * Ground truth: src/battle_item_count_screen_x18_windo.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_item_count_screen_x18_windo(void)
{
    /* battle item-count screen: 0x18 window, 0x18/0x19 rows, 0x6CC0
       gate picks the 300/301 vs 769/770/771 count cells; loop L14F850
       (6434(2)) polls. */
    row_page(0x18);
    row_sel_cell_cur();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L14F828;
    txt_cell_cur();
    cell_put(0x12);
    txt_cell_cur();
    sep_a();
    row_open_w(6);
    cell_put(0x13);
    goto L14F848;
L14F828:
    txt_cell_cur();
    cell_put(0x12);
    txt_cell_cur();
    cell_put(0x13);
L14F848:
    wnd_open_cur();
L14f850:
    for (;;) {
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L14F92C;
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0x12));
        sep_b();
        cell_pos_back(0xF);
        cell_pull_c8(0x300);
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0x13));
        cell_pull_c8(0x301);
        cell_push_c8();
        cell_pull_c8(0x302);
        cell_push_c8();
        cell_pull_c8(0x303);
        goto L14F9A8;
    L14F92C:
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0x12));
        cell_pull_c8(0x300);
        cell_push_c8();
        sep_a();
        cell_poke0(cell_state(0x13));
        cell_pull_c8(0x301);
        cell_push_c8();
        cell_pull_c8(0x302);
        cell_push_c8();
        cell_pull_c8(0x303);
    L14F9A8:
        txt_set_cur();
        if (gate(2) != 0)
            goto L14F9E8;
        cell_push_c8_d58(0x303);
        cell_pull_c8(0x303);
    L14F9E8:
        page_paint2(8);
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
