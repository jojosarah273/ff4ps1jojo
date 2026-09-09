/* FF4 source-port — interpreted module for func_8011B51C.
 * Ground truth: src/func_8011B51C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B51C(void)
{
    func_8011B7B4();
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
    func_800F4A7C(0x12E0);
    cell_pull_c8_off(0x12E0);
}
