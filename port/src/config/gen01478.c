/* FF4 source-port — interpreted module for func_8012CC74.
 * Ground truth: src/func_8012CC74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012CC74(void)
{
    /* config rows: 0x1A02 text, 0x202 cell gate; 8012C250 vs
       8012CEA8 rows. */
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        goto L12CCA4;
    func_8012C250();
    return;
L12CCA4:
    /* a0/v1 + a0/v0 latch tree -> L12CCD4/L12CCF0/L12CCF8 */
    func_8012CEA8();
    return;
L12CD5C:
    return;
}
