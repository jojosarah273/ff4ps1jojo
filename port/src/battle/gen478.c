/* FF4 source-port — interpreted module for func_80119740.
 * Ground truth: src/func_80119740.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119740(void)
{
    /* battle rows: 0x89/0x8A windows with 4F28/7A40 pairs, 0x1700
       text gate (800FF024 vs 80170C14/8010B010); loop L1197D8 on
       5C64(0x202). */
    func_80117594();
    cell_put(0x89);
    open_row(0x8A);
    row_arm2(cell_state(0x89));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x8A));
    row_arm2(cell_state(0x89));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x8A));
    row_arm2(cell_state(0x89));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x8A));
L1197d8:
    for (;;) {
        wnd_fx_7d();
        txt_set(0x1700);
        io_poll(3);
        if (io_just() != 0)
            goto L119810;
        shop_buy_run();
        goto L119820;
    L119810:
        func_80170C14();
        state_ok();
    L119820:
        page(0x89);
        cell_set50_from54();
        tail(0x89);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
