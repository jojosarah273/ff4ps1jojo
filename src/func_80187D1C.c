#include "common.h"
void func_80187D1C(void)
{
    /* battle: v0 gates; 80187CD0 row when nonzero. */
    if (func_800F53D4() != 0)
        goto L187D50;
    func_80187CD0();
    return;
L187D50:
    if (func_800F53D4() != 0)
        goto L187D68;
    func_80187CD0();
    return;
L187D68:
    return;
}
