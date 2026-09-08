#include "common.h"
void func_80141100(void)
{
    /* battle: 3C3C/3B04 gates; 801411BC/80141240 pair rows. */
    func_800F3C3C();
    func_800F3B04();
    if (func_800F53D4() == 0)
        goto L1411A8;
    func_801411BC();
    func_80141240();
    goto L1411A8;
L141178:
    func_801411BC();
    func_80141240();
    return;
L1411A8:
    return;
}
