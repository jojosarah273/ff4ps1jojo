/* FF4 source-port — interpreted module for func_8011B61C.
 * Ground truth: src/func_8011B61C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B61C(void)
{
    /* battle rows (twin with 3B9C/4832): 8011B7B4 prep; loop
       L11B634 on 5A90/53D4. */
    func_8011B7B4();
    latch(1);
L11b634:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L11B664;
        row_sel_cell_cur();
        poll_pair_cur();
    }
L11B664:
    page(0x3D);
    cell_tick_or(cell_peek_cur());
    cell_pull_c8_off(0x12E0);
    return;
}
