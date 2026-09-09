/* FF4 source-port — interpreted module for func_80103DD8.
 * Ground truth: src/func_80103DD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80103DD8(void)
{
    /* shop rows: 0x5C/0xDF/0x79 windows, 0x420C/0x6E/0x6F texts,
       80103F00/8010408C rows; loop L103E0C on 5574(0xFF). */
    wnd_open_cur();
    tail(0x5C);
    latch(0xDF);
    cell_put(0x79);
L103e0c:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        row_page(0x79);
        cell_put(0x6E);
        open_row(0x6F);
        row_arm2(cell_state(0x6E));
        row_sel_cell2_cur();
        row_sel2(cell_state(0x6F));
        func_800FE6E4();
        func_80103F00();
        func_8010408C();
        poll_pair(0x79);
        row_page(0x79);
        io_poll(0xFF);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
