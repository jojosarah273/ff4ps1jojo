/* FF4 source-port — interpreted module for func_80125934.
 * Ground truth: src/func_80125934.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125934(void)
{
    /* sub-menu: 0x1A73/0x1A75 texts, 80125130 row; loop L1259C4
       (6DE8/8274(0x1D)/8274(2) cells) on 5C64(0x202). */
    txt_set(0x1A73);
    if (gate(2) != 0)
        goto L125964;
    cell_dec_bank(0x1A73);
    return;
L125964:
    latch(0xA);
    txt_draw(0x1A73);
    latch(0xFF);
    cell_tick_xor(cell_state(0x1A75));
    txt_draw(0x1A75);
    if (func_800F5F20(2) != 0)
        goto L1259B4;
    draw_pad_cur();
    goto L1259BC;
L1259B4:
    draw_pad_cur();
L1259BC:
    wnd_open(5);
L1259c4:
    for (;;) {
        row_prep(0x20);
        cell_sink89();
        cell_put_hi9(0x1D);
        cell_sink89();
        cell_put_hi9(2);
        row_prep_close();
        row_open();
        row_sync();
        func_80125130();
        row_done();
        row_close();
        step2();
        step2();
        step2();
        step2();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
