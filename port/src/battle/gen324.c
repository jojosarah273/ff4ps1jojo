/* FF4 source-port — interpreted module for battle_skills_list_x65_x11d_x5_x80.
 * Ground truth: src/battle_skills_list_x65_x11d_x5_x80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_skills_list_x65_x11d_x5_x80(void)
{
    /* battle skills list: 0x65/0x11D/0x5/0x80/0x89/0xAD windows,
       0x1706/0x1707 headers; 801146F0/80114680/801144B4/80114618
       rows; 4 loops (L11432C/L114384/L1143DC/L114424). */
    latch(0x65);
    txt_draw(0x1706);
    latch_cur();
    txt_draw(0x1707);
    fn_1x146f0();
L11432c:
    for (;;) {
        wnd_fx_7d();
        fn_1x14680();
        latch(8);
        cell_put(5);
        battle_rows_x4_xd5_xc_xe_x91_x8f();
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
        battle_rows_x4_xd5_xc_xe_x91_x8f();
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
        battle_rows_x4_xd5_xc_xe_x91_x8f();
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
        fn_1x14618();
        row_page(0x80);
        sep_a();
        row_open_w(0x10);
        cell_put(0xAD);
        battle_rows_x4_xd5_xc_xe_x91_x8f();
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
