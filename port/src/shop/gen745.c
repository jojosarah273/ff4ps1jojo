/* FF4 source-port — interpreted module for func_8016EE10.
 * Ground truth: src/func_8016EE10.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016EE10(void)
{
    /* shop rows: 0xA1/0xA3 windows, 0x64/0x6A/0x6B texts, 8016EF88
       row; linear. */
    row_prep(0x10);
    row_prep_close();
    row_open2();
    row_open3();
    wnd_open(8);
    label(0xA1);
    wnd_open_cur();
    label(0xA3);
    latch(1);
    cell_pull_c8_lo(0x64);
    latch(0x80);
    cell_pull_c8_lo(0x6A);
    latch(0xA);
    cell_pull_c8_lo(0x6B);
    func_8016EF88();
    return;
}
