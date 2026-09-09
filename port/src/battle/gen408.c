/* FF4 source-port — interpreted module for func_80114194.
 * Ground truth: src/func_80114194.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80114194(void)
{
    latch(0xE1);
    txt_draw(0x1706);
    latch(0xFE);
    txt_draw(0x1707);
    func_801146F0();
    wnd_open(0x80);
    func_80116398();
    do {
        wnd_fx_7d();
        func_80114680();
        latch(8);
        cell_put(5);
        latch(1);
        cell_put(0xD5);
        func_801144B4();
        row_page(0x80);
        io_poll(0xF);
    } while (io_just() == 0);
    wnd_open(0x1E0);
    tail(0x89);
    do {
        wnd_fx_7d();
        latch(8);
        cell_put(5);
        func_801144B4();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
    } while (poll_go(0x202) != 0);
    do {
        wnd_fx_7d();
        func_80114618();
        latch(8);
        cell_put(5);
        func_801144B4();
        row_page(0x80);
    } while (gate(0x202) != 0);
    latch(3);
    txt_draw(0x1700);
    open_row(0xAC);
    cell_clear_bank(0x1704);
    battle_wndfx_run();
}
