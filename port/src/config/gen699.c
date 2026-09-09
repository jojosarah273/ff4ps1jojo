/* FF4 source-port — interpreted module for func_8013D4C8.
 * Ground truth: src/func_8013D4C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D4C8(void)
{
    /* battle rows (twin of 8013D040): 0x342/0x341/0x343 cells with
       0x3F/0x7F cursor codes; gates 6434(0x202). */
    cell_pull_c8(0x342);
    row_page(2);
    cell_pull_c8(0x341);
    txt_set(0x6CC0);
    if (gate(0x202) != 0)
        goto L13D520;
    row_page_cur();
    cell_pull_c8(0x340);
    latch(0x3F);
    goto L13D550;
L13D520:
    row_page(0x340);
    cell_pull_c8();
    latch(0x7F);
L13D550:
    cell_tick_xor(cell_state_of());
    cell_pull_c8(0x343);
    step2();
    step2();
    return;
}
