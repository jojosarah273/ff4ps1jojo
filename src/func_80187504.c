#include "common.h"
void func_80187504(void)
{
    /* battle: v0 gates; 8018767C row at L187590. */
    if (func_800F53D4() != 0)
        goto L187590;
    goto L187560;
    func_8018767C();
    return;
L187590:
    func_8018767C();
    return;
L187560:
    if (func_800F53D4() != 0)
        goto L187590;
    func_8018767C();
    return;
}
