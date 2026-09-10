/* FF4 source-port — interpreted module for battle_cast_driver_dd4_anim_rows_c.
 * Ground truth: src/battle_cast_driver_dd4_anim_rows_c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_cast_driver_dd4_anim_rows_c(void)
{
    /* battle cast driver: 80167DD4 anim rows, 8014096C cast, 80167E44
       status block; loops L167BDC/L167C20/L167C70/L167CB0/L167D24. */
    latch(0x20);
    txt_draw_cur();
    sep();
L167bdc:
    for (;;) {
        fn_1x67dd4();
        poll_t(0x10);
        if (io_just() != 0)
            break;
    }
    sep();
    poll_spin();
L167c20:
    for (;;) {
        cell_draw_cur();
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    cell_clear_bank();
    fn_1x4096c();
    latch(2);
    txt_draw_cur();
    wnd_open(4);
L167c70:
    for (;;) {
        func_80070174();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_paint2_cur();
    battle_class_status_screen_windows();
    cell_clear_bank();
    wnd_open(0x16);
L167cb0:
    for (;;) {
        txt_cell_cur();
        cell_draw_cur();
        cell_set50_from54();
        poll_t(0xF);
        if (io_just() != 0)
            break;
    }
    txt_set_cur();
    cell_set50_from40();
    row_read(7);
    txt_draw_cur();
    sep();
L167d24:
    for (;;) {
        txt_cell_cur();
        if (gate(0x202) != 0)
            goto L167D84;
        row_open();
        row_sel_cell_cur();
        fn_1x67dd4();
        row_close();
    L167D84:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_dec_bank();
    if (poll_go(0x202) != 0)
        goto L167C68;
    cell_clear_bank();
    return;
L167C68:
    wnd_open(4);
    for (;;) {
        func_80070174();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_paint2_cur();
    return;
}
