/* FF4 source-port — interpreted module for func_8016ED64.
 * Ground truth: src/func_8016ED64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016ED64(void)
{
    /* shop rows: 0x64/0x6A/0x6B texts, 8016EF88 row; linear. */
    row_prep(0x10);
    row_prep_close();
    row_open2();
    row_open3();
    latch(2);
    cell_pull_c8_lo(0x64);
    latch(0xF0);
    cell_pull_c8_lo(0x6A);
    latch(0xD);
    cell_pull_c8_lo(0x6B);
    func_8016EF88();
    return;
}
