/* FF4 source-port — interpreted module for func_8011B4A4.
 * Ground truth: src/func_8011B4A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B4A4(void)
{
    func_8011B744();
    latch(0xFE);
    do {
        poll_t(0);
        if (io_just() != 0)
            break;
        sep_b();
        cell_tick_dbl();
        poll_pair_cur();
    } while (1);
    page(0x3D);
    func_800F4960(0x1280);
    cell_draw(0x1280);
}
