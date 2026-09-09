/* FF4 source-port — interpreted module for func_8013BB0C.
 * Ground truth: src/func_8013BB0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013BB0C(void)
{
    /* ability menu: 0x93/0x9F/0x60 windows, 0x1B1D/0x1BC6 texts,
       8013CB94/8012A868/8013C2FC/8013CA70 sub-rows; loop L13BC38
       (80194700/80194394) and L13BCA4 (8013C2FC gate) end via
       8013BD04. */
    wnd_open_cur();
    tail(0x93);
    wnd_open_cur();
    tail(0x9F);
    midrow_paint_a();
    func_8013CB94();
    func_80120FBC();
    wnd_open_cur();
    label(0x1B1D);
    page_paint2(0x1BC6);
    func_8012A868();
    func_80120F1C();
    draw_pad_cur();
    battle_rows_sync();
    midrow_paint_b();
    func_8012AAC0();
    func_80126330();
    func_8016EA7C();
    open_row(0x60);
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
    battle_mode_dispatch();
L13bc38:
    for (;;) {
        func_80194700();
        cb_slot15();
        func_80126590();
    L13bca4:
        for (;;) {
            func_8013C2FC();
            row_page(0x60);
            if (gate(2) != 0)
                goto L13BCE4;
            func_8013CA70();
            if (io_go() != 0)
                continue;
            goto L13BCEC;
        }
    L13BCE4:
        func_8013BD04();
    L13BCEC:
        return;
    }
}
