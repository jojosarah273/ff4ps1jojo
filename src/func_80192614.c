#include "common.h"
void func_80192614(void)
{
    /* event: 801928E8 x2 + 801920F0(1) rows; 80191818 gate tail;
       returns at L1926F8. */
    func_801928E8();
    func_801928E8();
    func_801920F0(1);
    if (func_800F53D4() != 0)
        goto L1926AC;
    func_80191818();
    return;
L1926AC:
    if (func_800F53D4() == 0)
        goto L1926CC;
    func_80191818();
    return;
L1926CC:
    return;
L1926F8:
    return;
}
