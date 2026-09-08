#include "common.h"
void func_80166CA8(void)
{
    /* shop rows: 0x1D window + 4248(0x30/0x20) gates route the
       0xB8 window fills. */
    func_800F90EC();
    func_800F6D70();
    func_800F4248(0x30);
    if (func_800F4120(2) != 0)
        goto L166D98;
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L166D88;
    func_800F6B68();
    func_800F4248(7);
    func_800F9330();
    func_800F6C68();
    func_800F95A0();
    func_800F8768();
L166D88:
    func_800F654C(1);
    goto L166DA0;
L166D98:
    func_800F654C(2);
L166DA0:
    func_800F824C();
    return;
}
