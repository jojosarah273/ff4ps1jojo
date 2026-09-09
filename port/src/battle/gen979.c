/* FF4 source-port — interpreted module for func_8011B594.
 * Ground truth: src/func_8011B594.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B594(void)
{
    /* battle rows: 8011B744 prep; loop L11B5AC on 5A90/53D4;
       closes with 0x3D/0x1280 reads. */
    func_8011B744();
    latch(1);
L11b5ac:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L11B5DC;
        row_sel_cell_cur();
        poll_pair_cur();
    }
L11B5DC:
    page(0x3D);
    cell_tick_or(cell_state_of());
    cell_draw(0x1280);
    return;
}
