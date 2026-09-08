#include "common.h"
void func_8012CC74(void)
{
    /* config rows: 0x1A02 text, 0x202 cell gate; 8012C250 vs
       8012CEA8 rows. */
    func_800F6564(0x1A02);
    if (func_800F6434(0x202) != 0)
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
