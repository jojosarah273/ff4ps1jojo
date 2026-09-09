/* FF4 source-port — interpreted module for func_80134C74.
 * Ground truth: src/func_80134C74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80134C74(void)
{
    /* ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2
       rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls
       80194700/80194394. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    cell_cursor_read();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    func_8016EA9C();
    func_80123D3C();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L134d38:
    for (;;) {
        func_80194700();
        cb_slot15();
        wnd_open_cur();
        label(0x1B1D);
        latch(0x20);
        cell_put(0xC1);
        cell_clear_bank(0x1BB1);
        cell_clear_bank(0x1BB2);
        func_8016EA7C();
        latch(0x20);
        cell_put(0x3F);
        cell_clear_bank(0x1BB4);
        func_80123FB4();
        midrow_paint_c();
        func_80126330();
        anim_noop();
        func_801378B0();
        latch(0xA);
        txt_draw(0x1BB4);
        func_80134FF4();
        battle_row_88();
        func_80122114();
        sep();
        stat_sync();
        cell_cursor_read();
        row_pad();
        return;
    }
}
