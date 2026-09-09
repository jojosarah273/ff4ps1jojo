/* FF4 source-port — interpreted module for func_8016EEDC.
 * Ground truth: src/func_8016EEDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016EEDC(void)
{
    /* shop rows (variant): 0x64/0x6A/0x6B texts, 8016EF88 row. */
    row_prep(0x10);
    row_prep_close();
    row_open2();
    row_open3();
    latch_cur();
    func_800F81E8(0x64);
    latch(0x50);
    func_800F81E8(0x6A);
    latch(0x13);
    func_800F81E8(0x6B);
    func_8016EF88();
    return;
}
