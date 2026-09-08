#include "common.h"
void func_80106370(void)
{
L378:
    for (;;) {
        func_800F6630(0xCC);
        if (func_800F6434(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(1);
    func_800F824C(0xDA);
    func_800F824C(0xEB);
    func_800F8FB8(0xBA);
    func_800F8FB8(0x8B);
    func_800F8FB8(0x8C);
    func_800F654C(0x70);
    func_800F824C(0xBB);
    func_80107B74();
    func_800FE778();
    func_80107830();
L3e8:
    func_800FE778();
    for (;;) {
        func_800F6630(0x7F);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F62BC(0xDA);
    func_800F6630(0xDA);
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto L3e8;
L438:
    func_800FE778();
L440:
    for (;;) {
        func_800F654C(1);
        func_800F824C(0x7D);
        func_800F6630(3);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L488;
        func_80106830();
        func_800F654C(0xFF);
        goto L508;
    L488:
        func_800F6630(2);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L518;
        func_80106830();
        func_800F6630(0xBA);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x8C));
        func_800F5140();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x8B));
        func_800F5140();
        func_800F9690();
        func_800F6B68(0x712);
    L508:
        func_800F8188(0x8FB);
        goto L7b8;
    L518:
        func_800F6630(3);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L5a8;
        func_80106860();
        func_800F62BC(0xE7);
        func_800F6630(0x8B);
        func_800F61E8();
        func_800F4248(1);
        func_800F824C(0x8B);
        if (func_800F4120(0x202) != 0)
            goto L438;
        func_800F6630(0x8C);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto L6a8;
        func_800F61E8();
        goto L628;
    L5a8:
        func_800F6630(3);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto L638;
        func_80106860();
        func_800F62BC(0xE7);
        func_800F6630(0x8B);
        func_800F5CCC();
        func_800F4248(1);
        func_800F824C(0x8B);
        if (func_800F4120(2) != 0)
            goto L438;
        func_800F6630(0x8C);
        if (func_800F6434(2) != 0)
            goto L770;
        func_800F5CCC();
    L628:
        func_800F824C(0x8C);
        goto L438;
    L638:
        func_800F6630(0x8C);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto L688;
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L6f8;
        func_800F62BC(0x8C);
        goto L738;
    L688:
        func_800F6630(3);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L6f8;
    L6a8:
        func_800F6630(0xBA);
        func_800F5574(0x11);
        if (func_800F53D4() != 0)
            goto L438;
        func_800F62BC(0xE7);
        func_800F62BC(0xBA);
        func_80106830();
        func_80107830();
        func_80106908();
        goto L440;
    L6f8:
        func_800F6630(0x8C);
        if (func_800F6434(0x202) == 0)
            goto L750;
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L438;
        func_800F5DA0(0x8C);
    L738:
        func_800F62BC(0xE7);
        func_80106860();
        goto L438;
    L750:
        func_800F6630(3);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L438;
    L770:
        func_800F6630(0xBA);
        if (func_800F6434(0x202) == 0)
            goto L438;
        func_800F62BC(0xE7);
        func_800F5DA0(0xBA);
        func_80106830();
        func_80107830();
        func_801068B0();
        goto L440;
    }
L7b8:
    func_800FE778();
    for (;;) {
        func_800F6630(0x7F);
        func_800F5574(2);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F5DA0(0xDA);
    func_800F6630(0xDA);
    func_800F5574();
    if (func_800F53D4() == 0)
        goto L7b8;
    func_800F654C(1);
    func_800F824C(0xEC);
    func_800F8FB8(0xDA);
    return;
}
