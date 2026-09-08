#include "common.h"
void func_801428FC(void)
{
    /* battle item-cast: 8013D12C prep, 0x1900 gate + 80142B4C intro,
       wait loop L142938, L142988/L1429BC/L142A6C cast loops
       (801431E8/80177DCC/8014096C rows); L142B1C loops back via
       5C64(0x202). */
    func_8013D12C();
    func_800F971C();
    func_800F5CCC();
    func_800F8188();
L142938:
    for (;;) {
        func_800F6B68(0x1900);
        func_80142B4C();
        func_800F971C();
        func_800F8768();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_801407EC();
    func_800F71DC(0x18);
L142988:
    for (;;) {
        func_800F9330();
        func_800F8F74();
        func_800F971C();
    L1429bc:
        for (;;) {
            func_800F6D70(3);
            func_800F4248();
            func_800F6C68();
            func_800F8960();
            func_800F63BC();
            func_800F5A90(0x40);
            if (func_800F53D4() != 0)
                break;
        }
        func_800F654C(0x40);
        func_801431E8();
        func_80177DCC();
        func_800F971C();
    L142a6c:
        for (;;) {
            func_800F6B68();
            if (func_800F6434(0x202) != 0)
                goto L142AD4;
            func_800F6B68();
            func_800F5480();
            func_800F8058(8);
            func_800F8768();
            func_800F8768();
            func_800F5574(0x10);
            if (func_800F53C0() != 0)
                goto L142AD4;
            func_800F654C(1);
            func_800F8768();
        L142AD4:
            func_800F6364();
            func_800F5958(0x40);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
        func_800F95A0();
        func_800F5958(9);
        if (func_800F53D4() == 0)
            goto L142B1C;
        func_8014096C();
    L142B1C:
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8F74();
    return;
}
