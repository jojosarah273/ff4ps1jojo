/* FF4 source-port — interpreted module for func_801142FC.
 * Ground truth: src/func_801142FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801142FC(void)
{
    /* battle skills list: 0x65/0x11D/0x5/0x80/0x89/0xAD windows,
       0x1706/0x1707 headers; 801146F0/80114680/801144B4/80114618
       rows; 4 loops (L11432C/L114384/L1143DC/L114424). */
    latch(0x65);
    txt_draw(0x1706);
    latch_cur();
    txt_draw(0x1707);
    func_801146F0();
L11432c:
    for (;;) {
        wnd_fx_7d();
        func_80114680();
        latch(8);
        cell_put(5);
        func_801144B4();
        row_page(0x80);
        io_poll(0xF);
        if (io_just() == 0)
            continue;
        break;
    }
    wnd_open(0x110);
    tail(0x89);
L114384:
    for (;;) {
        wnd_fx_7d();
        latch(8);
        cell_put(5);
        func_801144B4();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    wnd_open(0x40);
    tail(0x89);
L1143dc:
    for (;;) {
        wnd_fx_7d();
        open_row(5);
        func_801144B4();
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_800FD6E8();
L114424:
    for (;;) {
        wnd_fx_7d();
        open_row(5);
        func_80114618();
        row_page(0x80);
        sep_a();
        row_open_w(0x10);
        cell_put(0xAD);
        func_801144B4();
        row_page(0x80);
        if (gate(0x202) != 0)
            continue;
        break;
    }
    latch(3);
    txt_draw(0x1700);
    open_row(0xAC);
    cell_clear_bank(0x1704);
    battle_wndfx_run();
    return;
}
