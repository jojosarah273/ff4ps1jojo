/* FF4 source-port — interpreted module for func_8013D4C8.
 * Ground truth: src/func_8013D4C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D4C8(void)
{
    /* battle rows (twin of 8013D040): 0x342/0x341/0x343 cells with
       0x3F/0x7F cursor codes; gates 6434(0x202). */
    func_800F8960(0x342);
    row_page(2);
    func_800F8960(0x341);
    txt_set(0x6CC0);
    if (gate(0x202) != 0)
        goto L13D520;
    row_page_cur();
    func_800F8960(0x340);
    latch(0x3F);
    goto L13D550;
L13D520:
    row_page(0x340);
    func_800F8960();
    latch(0x7F);
L13D550:
    func_800F5ECC(cell_state_of());
    func_800F8960(0x343);
    step2();
    step2();
    return;
}
