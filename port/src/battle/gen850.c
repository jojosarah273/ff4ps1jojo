/* FF4 source-port — interpreted module for func_8011B6B4.
 * Ground truth: src/func_8011B6B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B6B4(void)
{
    /* battle rows: 8011B744 prep + 0x3D/0x1280 cells; loop L11B6DC
       on 5A90/53D4. */
    row_open();
    func_8011B744();
    page(0x3D);
    txt_cell(0x1280);
L11b6dc:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L11B70C;
        func_800F7864();
        poll_pair_cur();
    }
L11B70C:
    func_800F7864();
    func_800F76E8();
    latch_cur();
    row_open_w0();
    row_close();
    return;
}
