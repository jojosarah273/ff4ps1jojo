/* FF4 source-port — interpreted module for func_801312BC.
 * Ground truth: src/func_801312BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801312BC(void)
{
    /* ability rows: 0x29 window + 80124704 row; 6CF4/9330 preps. */
    func_800F9200();
    row_open();
    func_800F9200();
    row_prep(0x20);
    func_800F6CF4(0x20);
    row_prep_close();
    row_close2();
    func_80124704();
    row_close();
    row_close2();
    func_800F61E8();
    cell_step();
    cell_step();
    return;
}
