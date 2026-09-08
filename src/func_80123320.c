#include "common.h"
void func_80123320(void)
{
    func_800F8EBC(0x4B);
    func_800F8D6C(0x48);
    func_800F6B68(3);
    func_800F52BC(0x80);
    if (func_800F53D4() == 0)
        goto L3400;
    func_800F5140();
    func_800F4F4C();
    func_800F824C(0x45);
    func_800F6B68(4);
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    func_800F7A68();
    func_800F7C6C();
    func_800F4248(1);
    func_800F78C4(func_800F3C3C(0x45));
    if (func_800F7918(2) != 0)
        goto L3440;
    func_800F9200();
    func_80123AA8();
    func_80122334();
    func_800F93DC();
    func_800F5EA0();
    func_800F5EA0();
    goto L3488;
L3400:
    func_80123AA8();
    func_800F7500();
    func_8011F8D4();
    return;
L3440:
    func_800F6564(0x1BC2);
    if (func_800F6434(2) == 0)
        return;
    func_800F7594(0x48);
    func_800F6D70(1);
    func_800F9200();
    func_80123AA8();
    func_800F93DC();
    goto L3640;
L3488:
    func_800F824C(0x45);
    func_800F654C(0x21);
    func_800F824C(0x46);
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F71DC(8);
L34fc:
    for (;;) {
        func_800F6630(0x45);
        func_800F52BC(0x80);
        if (func_800F53D4() != 0)
            goto L3574;
        func_800F6630(0x46);
        func_800F8960(0x34);
        func_800F78C4(func_800F3C3C());
        func_800F8960(1);
        goto L3584;
    L3574:
        func_800F654C(0xFF);
        func_800F8960();
    L3584:
        func_800F939C();
        func_800F9644(0x20);
        func_800F5480();
        func_800F80D0(0x40);
        func_800F9660(0x20);
        func_800F654C(0xFF);
        func_800F8960();
        func_800F960C();
        func_800F62BC(0x46);
        func_800F4F28(func_800F3C3C(0x45));
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    return;
L3640:
    func_800F4248(0xF);
    func_800F9200();
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x29));
    func_800F9660(0x20);
    func_800F93DC();
    func_800F5140();
    func_800F824C(0x45);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x45));
    func_800F824C(0x45);
    func_800F8FB8(0x46);
    func_800F7270(0x45);
    func_800F654C(6);
    func_800F824C(0x45);
    func_8012371C();
    return;
}
