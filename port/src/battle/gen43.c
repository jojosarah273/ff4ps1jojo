/* FF4 source-port — interpreted module for fn_1x0e58c.
 * Ground truth: src/fn_1x0e58c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x0e58c(void)
{
    wnd_fx_2100();
    fn_1x03fe8();
    fn_1x94518();
    cb_slot15();
    battle_mode_dispatch();
    latch(0x22);
    txt_draw(0x2123);
    latch_cur();
    txt_draw(0x420C);
    latch(0xF7);
    cell_pull_c8_lo();
    latch(0x80);
    cell_pull_c8_lo();
    latch(0xEB);
    cell_pull_c8_lo();
    latch(0xF7);
    cell_pull_c8_lo();
    latch(0x78);
    cell_pull_c8_lo();
    latch(0xEC);
    cell_pull_c8_lo();
    latch_cur();
    cell_pull_c8_lo();
    latch(0x41);
    txt_draw(0x4360);
    latch(0x26);
    txt_draw(0x4361);
    wnd_open(0x5A00);
    label(0x4362);
    latch(0x7F);
    txt_draw(0x4364);
    latch(0x16);
    txt_draw(0x4367);
    latch(3);
    txt_draw(0x1700);
    latch_cur();
    txt_draw(0x2100);
    latch(0x81);
    txt_draw(0x4200);
    open_row(0x24);
LE738:
    for (;;) {
        wnd_fx_7d_b();
        latch(0x40);
        txt_draw(0x420C);
        row_page(0x24);
        txt_draw(0x2100);
        battle_rows_x300_x303_x200_cells_x();
        key_page(0x24);
        row_page(0x24);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
LE790:
    for (;;) {
        wnd_fx_7d_b();
        latch(0x40);
        txt_draw(0x420C);
        battle_rows_x300_x303_x200_cells_x();
        row_page(2);
        if (gate(0x202) != 0)
            goto LE7e0;
        row_page(3);
        if (gate(0x202) == 0)
            continue;
        break;
    }
LE7e0:
    latch(0xF);
    cell_put(0x24);
LE7f0:
    for (;;) {
        wnd_fx_7d_b();
        latch(0x40);
        txt_draw(0x420C);
        row_page(0x24);
        txt_draw(0x2100);
        battle_rows_x300_x303_x200_cells_x();
        poll_pair(0x24);
        row_page(0x24);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    latch(0x33);
    txt_draw(0x2123);
    latch_cur();
    txt_draw(0x420C);
    battle_wndfx_run();
    return;
}
