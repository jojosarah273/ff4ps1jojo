#include "common.h"
void func_801719C8(void)
{
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1712);
    if (func_800F6434(2) != 0)
        goto Le00;
    func_800F6564(0x1701);
    if (func_800F6434(0x202) != 0)
        goto Le00;
    func_800F6564(0x1704);
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto Lb00;
    func_800F6630(0xAD);
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto La78;
    func_800F4248(0xF);
    if (func_800F4120(0x202) != 0)
        goto Le00;
La78:
    func_800F6564(0x1713);
    func_800F824C(0xC);
    func_800F6564(0x1714);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto Le00;
    func_800F6630(0xAD);
    func_800F5574(0x10);
    if (func_800F53D4() != 0)
        goto Laf0;
    func_800F654C(2);
    func_80171E18();
    return;
Laf0:
    func_800F654C(3);
    goto Lb60;
Lb00:
    func_800F654C();
    func_801729E0();
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0xB5));
    func_800F824C(0xE);
    func_800F6564(0x1705);
Lb60:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto Lbd0;
    func_800F6630(0x7A);
    func_800F4248(4);
    goto Lbd8;
Lbd0:
    func_800F654C();
Lbd8:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
Lc10:
    for (;;) {
        func_800F6B68(0xBFB4);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x414);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) == 0) {
            func_800F654C(0x45);
            func_801714C4();
        }
        func_800F6B68(0xBFB5);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x415);
        func_800F6B68(0xBFB6);
        func_800F5410();
        func_800F4008(0x90);
        func_800F8960(0x416);
        func_800F6B68(0xBFB7);
        func_800F5410();
        func_800F4008(0x1A);
        func_800F8960(0x417);
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
    func_800F5574(2);
    if (func_800F53D4() != 0)
        goto Ld70;
    func_800F654C(0xF8);
    func_800F8188(0x41D);
    func_800F8188(0x421);
    goto Le00;
Ld70:
    func_800F6630(0xA1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto Le00;
    func_800F654C(0x70);
    func_800F8188(0x40C);
    func_800F654C(0x78);
    func_800F8188(0x40D);
    func_800F654C(0x43);
    func_800F8188(0x40E);
    func_800F8F74(0x40F);
    func_800F654C(0x78);
    func_800F8188(0x410);
    func_800F654C(0x78);
    func_800F8188(0x411);
    func_800F654C(0x43);
    func_800F8188(0x412);
    func_800F8F74(0x413);
Le00:
    func_800F9448();
    return;
}
