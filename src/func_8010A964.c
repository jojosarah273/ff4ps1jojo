#include "common.h"
void func_8010A964(void)
{
    func_800F6564(0x1705);
    func_800F824C(8);
    func_800F5140(0x202);
    if (func_800F73E0() != 0)
        goto La9e4;
    func_800F6D70(0x6A4);
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto La9e4;
    func_800F654C(4);
    func_800F824C(8);
    goto Laa1c;
La9e4:
    func_800F6D70(0x6A3);
    func_800F4248(3);
    if (func_800F4120(2) != 0)
        goto Laa1c;
    func_800F4370(0xD2);
    if (func_800F4120(0x202) == 0)
        return;
Laa1c:
    func_800F6630(8);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_8010D458();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Laafc;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Laafc;
    func_8010AF2C();
    goto Lae68;
Laafc:
    func_800F6630(8);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_8010D458();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lac20;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lac20;
    func_8010AF2C();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lac20;
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lae68;
Lac20:
    func_800F6630(8);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_8010D458();
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lad44;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lad44;
    func_8010AF2C();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lad44;
    func_800F5574();
    if (func_800F53D4() != 0)
        goto Lae68;
Lad44:
    func_800F6630(8);
    func_800F6564(0x1706);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xC);
    func_800F6564(0x1707);
    func_800F5410();
    func_800F4008();
    func_800F824C(0xE);
    func_8010D458();
    func_800F5574();
    if (func_800F53D4() != 0)
        return;
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_8010AF2C();
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_800F5574();
    if (func_800F53D4() == 0)
        return;
Lae68:
    func_800F6B68(0x909);
    func_800F9200();
    func_800F6B68(0x901);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto Laec0;
    func_800F6564(0x1705);
    func_800F5410();
    func_800F4008(2);
    func_800F4248(3);
    func_800F8768(0x909);
Laec0:
    func_800F9330();
    func_8010B010();
    func_800F95A0();
    func_800F6B68(0x907);
    func_800F9330();
    if (func_8011B158() != 0)
        return;
    func_800F95A0();
    func_800F93DC();
    func_800F8768(0x909);
    func_800F8FB8(0xEE);
    return;
}
