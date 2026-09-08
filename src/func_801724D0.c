#include "common.h"
void func_801724D0(void)
{
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1718);
    if (func_800F6434(2) != 0)
        goto L980;
    func_800F6564(0x1701);
    if (func_800F54D4(func_800F3B04(0x171B)) == 0)
        goto L980;
    func_800F6564(0x1704);
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto L630;
    func_800F6564(0x6D0);
    if (func_800F6434(2) == 0)
        goto L868;
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L5a8;
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        goto L980;
L5a8:
    func_800F6564(0x1719);
    func_800F824C(0xC);
    func_800F6564(0x171A);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto L980;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto L620;
    func_800F654C(3);
    func_80171E18();
    return;
L620:
    func_800F654C(3);
    goto L690;
L630:
    func_800F654C();
    func_801729E0();
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xB6));
    func_800F824C(0xE);
    func_800F6564(0x1705);
L690:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        goto L700;
    func_800F6630(0x7A);
    func_800F4248(2);
    goto L708;
L700:
    func_800F654C();
L708:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
L740:
    for (;;) {
        func_800F6B68(0xBFB4);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x480);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) == 0) {
            func_800F654C(0x60);
            func_801714C4();
        }
        func_800F6B68(0xBFB5);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x481);
        func_800F6B68(0xBFB6);
        func_800F5410();
        func_800F4008(0x48);
        func_800F8960(0x482);
        func_800F6B68(0xBFB7);
        func_800F5410();
        func_800F4008(0x18);
        func_800F8960(0x483);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    goto L980;
L868:
    func_800F6564(0x6F8);
    if (func_800F6434(0x202) != 0)
        goto L8a8;
    func_800F6564(0x1705);
    goto L8b0;
L8a8:
    func_800F654C(0x40);
L8b0:
    func_800F7500();
    for (;;) {
        func_800F6B68(0xB816);
        func_800F8960(0x480);
        func_800F6B68(0xB817);
        func_800F5410();
        func_800F3F38(func_800F3B04(0x6F8));
        func_800F8960(0x481);
        func_800F6B68(0xB818);
        func_800F8960(0x482);
        func_800F6B68(0xB819);
        func_800F8960(0x483);
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
L980:
    func_800F9448();
    return;
}
