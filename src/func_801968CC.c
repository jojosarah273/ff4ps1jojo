#include "common.h"
void func_801968CC(void)
{
    /* event: 801928E8 gate; 8018F0C8 + 2x 80192C74 rows. */
    if (func_801928E8() == 0)
        goto L1969FC;
    func_8018F0C8();
    func_80192C74();
    func_80192C74();
    return;
L1969FC:
    return;
}
