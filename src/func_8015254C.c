#include "common.h"
void func_8015254C(void)
{
    /* options: 3B04(0x2000) gates; v0 run -> L152614 / L152630. */
    func_800F3B04(0x2000);
    if (func_800F53D4() == 0)
        goto L152630;
    if (func_800F53D4() == 0)
        goto L152630;
    if (func_800F53D4() != 0)
        goto L1525D8;
    goto L152630;
L1525D8:
    if (func_800F53D4() != 0)
        goto L152614;
    return;
L152614:
    return;
L152630:
    return;
}
