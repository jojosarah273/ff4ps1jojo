/* FF4 source-port — interpreted module for func_8013D040.
 * Ground truth: src/func_8013D040.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D040(void)
{
    /* battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. */
    func_800F8960(0x342);
    row_page(2);
    func_800F8960(0x341);
    txt_set(0x6CC0);
    if (gate(0x202) != 0)
        goto L13D098;
    row_page_cur();
    func_800F8960(0x340);
    row_page(4);
    goto L13D0F4;
L13D098:
    row_page_cur();
    sep_b();
    func_800F8058(0x10);
    func_800F8960(0x340);
    row_page(4);
L13D0F4:
    func_800F8960(0x343);
    step2();
    step2();
    step2();
    step2();
    return;
}
