/* FF4 source-port — interpreted module for ability_config_screen_bb1_text_win.
 * Ground truth: src/ability_config_screen_bb1_text_win.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_config_screen_bb1_text_win(void)
{
    /* ability/config screen: 1BB1 text, 45/46 windows; header renders
       (L135054 vs L13507C variants) with 80124298/80134FBC/801264C0/
       80126590/80123FB4/80126528/80126458; sub-dispatchers 80120070 +
       8012B0D8; loops to L135054/L13507C. */
    config_rows_e4();
    func_80134FBC();
    config_row_264e8();
    battle_mode_dispatch();
    fn_1x26590();
    goto L13507C;
L135054:
    for (;;) {
        func_80123FB4();
        func_80134FBC();
        config_row_26528();
        func_80126458();
        config_row_264e8();
    L13507C:
        txt_set(0x1BB1);
        cell_put(0x45);
        row_sel_cell_cur();
        row_sel_cell2_cur();
        cell_poke0(cell_state(0x45));
        row_open_w(0x10);
        /* v0 gate -> L135108 + row renders */
        cell_put(0x45);
        latch(0x30);
        cell_put(0x46);
        config_pad_300();
        sub_menu_x1a73_x1a75_texts_row_loo();
        midrow_pad88_run();
        config_row_7800();
        battle_state_dc400();
        midrow_degen();
        row_page(1);
        row_read(1);
        if (sel(2) != 0)
            goto L1351A8;
        txt_set(0x1BB1);
        cell_set50_from40();
        io_poll(3);
        if (io_just() == 0)
            goto L1351A0;
        latch_cur();
    L1351A0:
        txt_draw(0x1BB1);
    L1351A8:
        row_page(1);
        row_read(2);
        if (sel(2) != 0)
            goto L1351F8;
        txt_set(0x1BB1);
        poll_spin();
        if (poll_go_cur() != 0)
            goto L1351F0;
        latch(2);
    L1351F0:
        txt_draw(0x1BB1);
    L1351F8:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L135268;
        txt_set(0x1BB1);
        io_poll(2);
        if (io_just() != 0)
            goto L135288;
        cell_cursor_dec();
        row_close2();
        wnd_open_cur();
        open_depth_guard_in_the_menu_regio();
        animation_row_310();
        continue;
    L135268:
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            break;
        continue;
    L135288:
        return;
    }
    return;
}
