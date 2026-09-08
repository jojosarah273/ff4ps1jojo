#include "common.h"
void func_8011BD88(void)
{
    func_800F6630(0xC9);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0xFE4);
    func_800F4248(0xC0);
    if (func_800F4120(0x202) == 0)
        return;
    func_800F6564(0xFE4);
    func_800F4248(6);
    if (func_800F4120(0x202) != 0)
        goto Lbfe0;
    func_800F6564(0xFE4);
    func_800F4248(0xC0);
    func_800F6630(0x7A);
    if (func_800F4120(0x202) != 0)
        goto Lbf70;
    func_800F6564(0xFE4);
    func_800F4248(0x30);
    func_800F9644(0x20);
    func_800F6658(0x66);
    func_800F5410();
    func_800F4064();
    func_800F8274(0x66);
    func_800F6658(0x68);
    func_800F5410();
    func_800F4064();
    func_800F8274(0x68);
Lbf70:
    func_800F9644(0x20);
    func_800F6658(0x5A);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x66));
    func_800F8274(0x5E);
    func_800F6658(0x5C);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x68));
    func_800F8274(0x60);
    func_800F6558();
    func_800F9660(0x20);
    return;
Lbfe0:
    func_800F6564(0xFE4);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto Lc0e8;
    func_800F7270(0x5A);
    func_800F8D6C(0x5E);
    func_800F6564(0xFE4);
    func_800F4248(0xC0);
    func_800F5574(0x80);
    if (func_800F53D4() != 0)
        goto Lc0a8;
    func_800F5574(0x40);
    if (func_800F53D4() != 0)
        goto Lc080;
    func_800F4F28(func_800F3C3C(0x5E));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x5F));
    goto Lc0a8;
Lc080:
    func_800F76BC(func_800F3C3C(0x5F));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x5E));
Lc0a8:
    func_800F6564(0xFE4);
    func_800F4248(6);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto Lc0e8;
    func_800F71DC();
    func_800F8D6C(0x60);
    return;
Lc0e8:
    func_800F6564(0xFE4);
    func_800F4248(2);
    if (func_800F4120(2) != 0)
        return;
    func_800F7270(0x5C);
    func_800F8D6C(0x60);
    func_800F6564(0xFE4);
    func_800F4248(0xC0);
    func_800F5574(0x80);
    if (func_800F53D4() != 0)
        goto Lc1b0;
    func_800F5574(0x40);
    if (func_800F53D4() != 0)
        goto Lc188;
    func_800F4F28(func_800F3C3C(0x60));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(0x61));
    goto Lc1b0;
Lc188:
    func_800F76BC(func_800F3C3C(0x61));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x60));
Lc1b0:
    func_800F6564(0xFE4);
    func_800F4248(6);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        return;
    func_800F71DC();
    func_800F8D6C(0x5E);
    return;
}
