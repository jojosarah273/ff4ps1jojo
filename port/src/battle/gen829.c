/* FF4 source-port — interpreted module for func_8014D080.
 * Ground truth: src/func_8014D080.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014D080(void)
{
    /* battle cast rows: 801495D4/80074B98 preps, 4FAC(0x101) gate
       loop L14D0A0, 80073EB0/800744A0/800999A0/801495F4 close. */
    func_801495D4();
    func_80074B98();
    wnd_open_cur();
L14d0a0:
    for (;;) {
        cell_state_of();
        row_arm2_cur();
        if (cell_flags_zero50(0x101) != 0)
            goto L14D104;
        txt_draw_cur();
        latch(7);
        txt_draw_cur();
        row_open();
        func_80073EB0();
        row_close();
    L14D104:
        cell_step();
        poll_t(8);
        if (io_just() == 0)
            continue;
        break;
    }
    func_800744A0();
    func_800999A0();
    func_801495F4();
    return;
}
