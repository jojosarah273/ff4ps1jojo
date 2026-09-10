/* FF4 source-port — interpreted module for battle_rows_gates_route_the_xff_wi.
 * Ground truth: src/battle_rows_gates_route_the_xff_wi.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_gates_route_the_xff_wi(void)
{
    /* battle rows: 5574(2/3) gates route the 0xFF window fill; loop
       L14D038 on 5A90(0x10); 8014E424 detail. */
    txt_set_cur();
    io_poll(2);
    if (io_just() != 0)
        goto L14D004;
    io_poll(3);
    if (io_just() == 0)
        return;
L14D004:
    latch(0xFF);
    txt_draw_cur();
    sep();
L14d038:
    for (;;) {
        cell_pull_c8();
        step2();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    txt_set_cur();
    fn_1x4e424();
    return;
}
