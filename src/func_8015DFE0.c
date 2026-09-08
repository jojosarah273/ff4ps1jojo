#include "common.h"
void func_8015DFE0(void)
{
    /* options row: 0xA6/0x90 windows, 0x2053/0x2054/0x3303 cells,
       801531CC + 8015E158 + 8015319C/80153098 rows; loops L15E030
       (5C64(0x202)) and L15E0F0 (6434(0x202)). */
    func_800F7270(0xA6);
    func_800F90EC(0x2053);
    func_800F90EC(0x2054);
    func_801531CC();
    func_800F5574(0x46);
    if (func_800F53C0() != 0)
        goto L15E0D0;
    func_800F7210(0x3534);
    func_800F7500(5);
L15e030:
    for (;;) {
        func_800F6B68(0x3303);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            goto L15E0A8;
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto L15E0A8;
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    goto L15E0D0;
L15E0A8:
    func_800F8FB8(0x90);
    func_8015E158();
    func_800F6630(0x90);
    if (func_800F6434(0x202) == 0)
        return;
L15E0D0:
    func_800F7270(0xA6);
    func_800F654C(0x80);
    func_800F8768(0x2050);
    func_800F90EC(0x2051);
L15e0f0:
    for (;;) {
        func_8015319C();
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_80153098();
    func_800F7270(0xA6);
    func_800F8768(0x2054);
    return;
}
