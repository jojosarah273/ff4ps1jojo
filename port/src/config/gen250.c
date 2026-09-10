/* FF4 source-port — interpreted module for config_save_screen_x4b_x48_x49_win.
 * Ground truth: src/config_save_screen_x4b_x48_x49_win.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_save_screen_x4b_x48_x49_win(void)
{
    /* config/save screen: 0x4B/0x48/0x49 windows, 80120070 config
       dispatcher, 8012833C save-check; L128954 gate loop (6BE0/4264/
       55C0), then the 80128AD4 stat blocks, 80127538 cursor row. */
    cell_cursor_dec();
    cell_put(0x4B);
    row_sel_cell_cur();
    cell_put(0x48);
    open_row(0x49);
    wnd_open_cur();
    row_page(0x4B);
    open_depth_guard_in_the_menu_regio();
    row_page(0x4B);
    if (gate(0x202) != 0)
        goto L12882C;
    draw_pad_cur();
    row_info(0x29);
L12882C:
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    wnd_open(0x82);
    battle_rows_100();
    row_page(0x4B);
    sep_a();
    row_open_w(0x81);
    cell_fmt2(0x29);
    cell_pull_c8(0xC2);
    cell_cursor_dec();
    latch(0x7F);
    cell_pull_c8(0xC4);
    latch(0xFF);
    cell_pull_c8(0xC6);
    cell_pull_c8(0xC8);
    row_close2();
    row_open2();
    latch(0x70);
    cell_cursor_dec();
    row_pad();
    row_page(0x4B);
    shop_rows_x51_x46_x45_windows_d8_r();
    if (io_go() == 0)
        goto L128A98;
    row_prep(0x20);
    row_read2(0x48);
    stat_sync();
    row_open();
    row_open();
L128954:
    for (;;) {
        cell_sink8_9();
        cell_pos_mask(0x3F);
        cell_flags_cmp3(1);
        if (io_just() != 0)
            goto L1289D4;
        cell_flags_cmp3(0xB);
        if (io_just() != 0)
            goto L1289D4;
        sep_a();
        cell_pos_fwd(0x40);
    }
L1289D4:
    cell_sink8_9(7);
    draw_pad(0x14A);
    fn_1x28ad4();
    cell_sink8_9(9);
    draw_pad(0x154);
    fn_1x28ad4();
    row_close();
    row_read2(0x29);
    sep_a();
    cell_pos_fwd(0xCC);
    row_close();
    cell_sink8_9(0x6A5);
    cell_cursor_ret2();
    row_prep_close();
    txt_cell(0x6A4);
    row_close();
    status_rows_x73_x74_windows_xa_xc();
    row_pad();
    cell_fmt2(0x29);
    latch(0xC7);
    cell_pull_c8(0x152);
    goto L128AB4;
L128A98:
    draw_pad_cur();
    battle_rows_29();
    row_pad();
L128AB4:
    row_close2();
    cell_set50_from40();
    return;
}
