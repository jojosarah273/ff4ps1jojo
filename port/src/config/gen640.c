/* FF4 source-port — interpreted module for func_8013D040.
 * Ground truth: src/func_8013D040.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D040(void)
{
    /* battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. */
    cell_pull_c8(0x342);
    row_page(2);
    cell_pull_c8(0x341);
    txt_set(0x6CC0);
    if (gate(0x202) != 0)
        goto L13D098;
    row_page_cur();
    cell_pull_c8(0x340);
    row_page(4);
    goto L13D0F4;
L13D098:
    row_page_cur();
    sep_b();
    cell_pos_back(0x10);
    cell_pull_c8(0x340);
    row_page(4);
L13D0F4:
    cell_pull_c8(0x343);
    step2();
    step2();
    step2();
    step2();
    return;
}
