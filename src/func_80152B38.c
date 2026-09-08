#include "common.h"
void func_80152B38(void)
{
    /* options row: v0 gate picks 7864/76E8 vs 7894/77CC. */
    if (func_800F53D4() != 0)
        goto L152B8C;
    func_800F7864();
    func_800F76E8();
    return;
L152B8C:
    func_800F7894();
    func_800F77CC();
    return;
}
