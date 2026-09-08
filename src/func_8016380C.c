#include "common.h"
void func_8016380C(void)
{
    /* options value: 0x34C8/0x34C7 titles, 0xA6/0x202F/0xA9/0xAB
       windows, 80152CDC + 8015329C rows; loop L16386C on 5574(0xD). */
    func_800F654C(0x12);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_800F7270(0xA6);
    func_800F6B68(0x202F);
    func_800F7864();
    func_800F76E8();
    func_800F824C(0xA9);
    func_800F71DC(5);
    func_800F8D6C(0xAB);
L16386c:
    for (;;) {
        func_800F7270(0xAB);
        func_800F6B68(0x3540);
        if (func_800F6434(0x202) != 0)
            break;
        func_80152CDC();
        func_800F7270(0xA6);
        func_800F5480();
        func_800F6B68(0x202F);
        func_800F7F48(func_800F3C3C(0xA9));
        if (func_800F53D4() != 0)
            goto L1638F0;
        if (func_800F53C0() != 0)
            goto L1638F8;
    L1638F0:
        func_800F654C(1);
    L1638F8:
        func_800F8768(0x202F);
        func_800F62BC(0xAB);
        func_800F6630(0xAB);
        func_800F5574(0xD);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x13);
    func_800F8188(0x34CA);
    func_8015329C();
    return;
}
