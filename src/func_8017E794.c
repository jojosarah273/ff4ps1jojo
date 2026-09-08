#include "common.h"
void func_8017E794(void)
{
    /* battle anim: 80195120 + 80197208 spin loop (L17E8CC); gates;
       returns at L17E90C. */
    if (func_800F53D4() != 0)
        goto L17E7D8;
L17E7D8:
    if (func_800F53D4() == 0)
        goto L17E90C;
    if (func_800F53D4() != 0)
        goto L17E84C;
    func_80195120();
    if (func_800F53D4() == 0)
        goto L17E8F8;
    do {
        func_80197208();
    } while (func_800F53D4() != 0);
    return;
L17E84C:
    if (func_800F53D4() == 0)
        goto L17E898;
    goto L17E8AC;
L17E898:
    func_80195120();
    return;
L17E8AC:
    func_80195120();
    if (func_800F53D4() == 0)
        goto L17E8F8;
    func_80197208();
    goto L17E8CC;
L17E8F8:
    return;
L17E90C:
    return;
}
