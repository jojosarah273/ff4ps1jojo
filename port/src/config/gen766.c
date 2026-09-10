/* FF4 source-port — interpreted module for ability_tabs_x24_window_x130_x1b0.
 * Ground truth: src/ability_tabs_x24_window_x130_x1b0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_tabs_x24_window_x130_x1b0(void)
{
    /* ability tabs: 0x24 window, 0x130/0x1B0/0x230 consts, 0x1B81
       text, 80130A74 rows, 6434(0x202)/5574(1) gates, 80130A24
       close. */
    latch(0x24);
    wnd_open(0x130);
    fn_1x30a74();
    wnd_open(0x1B0);
    fn_1x30a74();
    wnd_open(0x230);
    fn_1x30a74();
    txt_set(0x1B81);
    if (gate(0x202) != 0)
        goto L1309C4;
    wnd_open(0x130);
    goto L1309F4;
L1309C4:
    io_poll(1);
    if (io_just() == 0)
        goto L1309EC;
    wnd_open(0x1B0);
    goto L1309F4;
L1309EC:
    wnd_open(0x230);
L1309F4:
    latch(0x20);
    cell_cursor_dec();
    draw_pad(5);
    fn_1x30a24();
    return;
}
