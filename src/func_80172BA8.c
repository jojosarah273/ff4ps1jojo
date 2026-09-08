#include "common.h"
void func_80172BA8(void)
{
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() != 0)
        goto Lcf0;
    func_800F6564(0x171C);
    if (func_800F6434(2) != 0)
        goto Lff0;
    func_800F6564(0x1701);
    if (func_800F54D4(func_800F3B04(0x171F)) == 0)
        goto Lff0;
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto Lc68;
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        goto Lff0;
Lc68:
    func_800F6564(0x171D);
    func_800F824C(0xC);
    func_800F6564(0x171E);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto Lff0;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto Lce0;
    func_800F654C(4);
    func_80171E18();
    return;
Lce0:
    func_800F654C(3);
    goto Ld50;
Lcf0:
    func_800F6630(0xB7);
    func_801729E0();
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xB7));
    func_800F824C(0xE);
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F6564(0x1705);
Ld50:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto Lde0;
    func_800F6564(0x6FD);
    func_800F6630(0x7A);
    func_800F4960(0xBE37);
    if (func_800F4120(0x202) != 0)
        goto Lde0;
    func_800F654C(0x10);
    goto Lde8;
Lde0:
    func_800F654C();
Lde8:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
Le20:
    for (;;) {
        func_800F6B68(0xBFB4);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x46C);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) == 0) {
            func_800F654C(0x5B);
            func_801714C4();
        }
        func_800F6B68(0xBFB5);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x46D);
        func_800F6B68(0xBFB6);
        func_800F5410();
        func_800F4008(0x78);
        func_800F8960(0x46E);
        func_800F6B68(0xBFB7);
        func_800F5410();
        func_800F4008(0x18);
        func_800F8960(0x46F);
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
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto Lff0;
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53D4() == 0)
        goto Lff0;
    func_800F6630(0xB7);
    func_800F5574(0x10);
    if (func_800F53D4() == 0)
        goto Lff0;
    func_800F654C(0x74);
    func_800F8188(0x47C);
    func_800F6564(0x6F8);
    func_800F5410();
    func_800F4008(0x68);
    func_800F8188(0x47D);
    func_800F654C(0x2E);
    func_800F8188(0x47E);
    func_800F654C(0x21);
    func_800F8188(0x47F);
Lff0:
    func_800F9448();
    return;
}
