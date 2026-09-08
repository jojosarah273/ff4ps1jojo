#include "common.h"
void func_8017E930(void)
{
    /* battle anim (twin): 80195120 + 80197208 spin loop (L17EA2C). */
    if (func_800F53D4() != 0)
        goto L17E974;
    goto L17E974;
L17E974:
    if (func_800F53D4() == 0)
        goto L17EA6C;
    if (func_800F53D4() != 0)
        goto L17E9EC;
    func_80195120();
    if (func_800F53D4() == 0)
        goto L17EA58;
    do {
        func_80197208();
    } while (func_800F53D4() != 0);
    return;
L17E9EC:
    func_80195120();
    if (func_800F53D4() == 0)
        goto L17EA58;
    func_80197208();
    goto L17EA2C;
L17EA58:
    return;
L17EA6C:
    return;
}
