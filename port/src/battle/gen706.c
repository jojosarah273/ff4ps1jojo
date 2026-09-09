/* FF4 source-port — interpreted module for func_8011818C.
 * Ground truth: src/func_8011818C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011818C(void)
{
    /* battle rows: 0x40/0x7/0x3D windows, 0x1140/0x1000 cells; loop
       L1181F4 on 5DA0(7)/5B8C(0x202). */
    row_read(0x7F);
    row_prep(0x20);
    func_800F8274(0x40);
    row_sync2_cur();
    row_prep_close();
    latch(0x40);
    cell_put(7);
    cell_fmt2(0x3D);
    page(0x40);
L1181f4:
    for (;;) {
        txt_cell(0x1140);
        func_800F8960(0x1000);
        page_paint(0x1140);
        cell_step();
        step2();
        poll_pair(7);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
