#include "common.h"
void func_80192020(void)
{
    /* event: 80191858 gate; 80192858/80191838(9)/801919B4(2) rows. */
    if (func_800F53D4() != 0)
        goto L1920E0;
    func_80191858();
    if (func_800F53D4() == 0)
        goto L1920A8;
    func_80192858();
L1920A8:
    func_80191838(9);
    func_801919B4(2);
    return;
L1920E0:
    return;
}
