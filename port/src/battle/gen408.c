/* FF4 source-port — interpreted module for fn_1x14194.
 * Ground truth: src/fn_1x14194.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x14194(void)
{
    latch(0xE1);
    txt_draw(0x1706);
    latch(0xFE);
    txt_draw(0x1707);
    fn_1x146f0();
    wnd_open(0x80);
    fn_1x16398();
    do {
        wnd_fx_7d();
        fn_1x14680();
        latch(8);
        cell_put(5);
        latch(1);
        cell_put(0xD5);
        battle_rows_x4_xd5_xc_xe_x91_x8f();
        row_page(0x80);
        io_poll(0xF);
    } while (io_just() == 0);
    wnd_open(0x1E0);
    tail(0x89);
    do {
        wnd_fx_7d();
        latch(8);
        cell_put(5);
        battle_rows_x4_xd5_xc_xe_x91_x8f();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
    } while (poll_go(0x202) != 0);
    do {
        wnd_fx_7d();
        fn_1x14618();
        latch(8);
        cell_put(5);
        battle_rows_x4_xd5_xc_xe_x91_x8f();
        row_page(0x80);
    } while (gate(0x202) != 0);
    latch(3);
    txt_draw(0x1700);
    open_row(0xAC);
    cell_clear_bank(0x1704);
    battle_wndfx_run();
}
