/* FF4 source-port — interpreted module for func_801442BC.
 * Ground truth: src/func_801442BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801442BC(void)
{
    /* battle rows: 8013EF78 prep; loop L1442E4 on 5C64(0x202) with
       80140558 + cell writes; closes via 0x10 window. */
    cell_clear_bank();
    cell_clear_bank();
    func_8013EF78();
    wnd_open(0x78);
L1442e4:
    for (;;) {
        func_80140558();
        txt_set_cur();
        cell_set50_from40();
        row_read(0xF);
        txt_draw_cur();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0x10);
    txt_draw_cur();
    return;
}
