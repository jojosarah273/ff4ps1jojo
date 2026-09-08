#include "common.h"
void func_801093B8(void)
{
    /* shop rows: 0x42 key gate routes the 3D48/95A0 fills. */
    func_800F5574(0x42);
    if (func_800F53C0() != 0)
        goto L109478;
    func_800F9330();
    func_800F5480();
    func_800F8058(0xF);
    func_800F5140();
    func_800F3D48();
    func_800F3D48();
    func_800F95A0();
    return;
L109478:
    func_800F3D48();
    func_800F654C(0xFF);
    func_800F3D48();
    return;
}
