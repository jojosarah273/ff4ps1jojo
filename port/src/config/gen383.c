/* FF4 source-port — interpreted module for config_save_screen_x1b23_x1b1a_tex.
 * Ground truth: src/config_save_screen_x1b23_x1b1a_tex.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_save_screen_x1b23_x1b1a_tex(void)
{
    /* config save-screen: 0x1B23/0x1B1A texts, 0x1440/0x45/0x54 windows,
       801210AC/801224D0/8011EF30 preps; L12CA7C confirm loop on
       53D4/6434(0x202)/5B8C(0x202); L12CB04 alt with 801240A8. */
    midrow_paint_a();
    txt_set(0x1B23);
    sep_a();
    cell_poke0(cell_state(0x1B1A));
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x1B22));
    row_sel_cell_cur();
    battle_put43();
    txt_cell(0x1440);
    cell_cursor_dec();
    draw_pad_cur();
    battle_rows_sync();
    row_close2();
    io_poll(0xCE);
    if (io_go() == 0)
        goto L12CB04;
    io_poll(0xE7);
    if (io_go() != 0)
        goto L12CB04;
    sep_b();
    cell_pos_back(0xCE);
    battle_put43();
    cell_push_c8();
    cell_put(0x45);
    wnd_open_cur();
    func_800F712C();
L12ca7c:
    for (;;) {
        if (io_just() != 0)
            goto L12CACC;
        cell_step();
        cell_push_c8();
        if (gate(0x202) != 0)
            continue;
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        cell_step();
    }
L12CACC:
    latch(0xF);
    wnd_open(0x54);
    row_prep2_close();
    return;
L12CB04:
    config_row_a600();
    draw_pad_cur();
    func_8011FB74();
    return;
}
