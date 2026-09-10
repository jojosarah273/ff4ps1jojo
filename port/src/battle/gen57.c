/* FF4 source-port — interpreted module for chara_status_sub_screen_d12c_ef78.
 * Ground truth: src/chara_status_sub_screen_d12c_ef78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void chara_status_sub_screen_d12c_ef78(void)
{
    /* chara/status sub-screen: 8013D12C/8013EF78 prep, poll loop L142128
       (4008 0x10/0x70 reads + 8768 row draws), then detail rows and the
       L1422D8/L14230C loops with 8014202C / 80143D64 / 80143D14 /
       80142450 / 80142394. */
    battle_row_wrap();
    battle_row_d548();
    open_row_cur();
    latch(0x40);
    cell_put(2);
    sep();
L142128:
    for (;;) {
        row_page_cur();
        cell_draw_cur();
        sep_a();
        row_open_w(0x10);
        cell_put_cur();
        cell_cursor_dec();
        row_page(2);
        cell_draw_cur();
        sep_a();
        row_open_w(0x10);
        cell_put(2);
        sep_a();
        row_open_w(0x70);
        cell_draw_cur();
        row_close2();
        sep_a();
        row_open_w(0x70);
        cell_draw_cur();
        latch(0x18);
        cell_draw_cur();
        cell_draw_cur();
        cell_draw_cur();
        cell_draw_cur();
        cell_step();
        poll_t(4);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set(0x49);
    row_sel_cell_cur();
    txt_set(0x34C4);
    if (gate(0x80) != 0)
        goto L142278;
    txt_cell_cur();
    sep_a();
    row_open_w(0x18);
    txt_draw_cur();
    txt_cell_cur();
    txt_draw_cur();
    goto L142298;
L142278:
    txt_cell_cur();
    txt_draw_cur();
    txt_cell_cur();
    txt_draw_cur();
L142298:
    txt_set_cur();
    sep_b();
    cell_pos_back(8);
    txt_draw_cur();
    txt_set_cur();
    sep_b();
    cell_pos_back(8);
    txt_draw_cur();
L1422D8:
    for (;;) {
        wnd_open(4);
        fn_1x4202c();
        sep();
    L14230C:
        for (;;) {
            fn_1x43d64();
            cell_draw_cur();
            fn_1x43d14();
            cell_draw_cur();
            latch(0xF0);
            battle_rows_twin();
            cell_step();
            poll_t(8);
            if (io_just() != 0)
                break;
        }
        battle_magic_status_x340_x343_cell();
        battle_rows_x_b68_cell_pairs_loop();
        txt_set_cur();
        if (gate(0x202) != 0)
            continue;
        break;
    }
    return;
}
