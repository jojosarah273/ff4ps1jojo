/* FF4 source-port — interpreted module for func_8013A8CC.
 * Ground truth: src/func_8013A8CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013A8CC(void)
{
    /* battle rows: 7270(0x41) then 8960/63BCx2/6364 loop on
       5958(9). */
    page(0x41);
    do {
        cell_pull_c8();
        step2();
        step2();
        cell_step();
        poll_t(9);
    } while (io_just() == 0);
    return;
}
