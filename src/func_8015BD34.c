#include "common.h"
void func_8015BD34(void)
{
    func_800F6630(0xD7);
    if (func_800F6434(2) != 0)
        goto Lbed4;
    func_800F6630(0xD0);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_8015C54C();
    func_800F6630(0xD0);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lbeac;
    func_800F7270(0xA6);
    func_800F6B68(0x2000);
    func_800F4248(0x1F);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto Lbe34;
    func_800F6564(0x3582);
    if (func_800F6434(0x202) != 0)
        goto Lbe34;
    func_800F6564(0x38DB);
    func_800F5CCC();
    if (func_800F5B8C(2) != 0)
        goto Lbe34;
    func_800F6B68(0x2006);
    if (func_800F6434(0x80) != 0)
        goto Lbe34;
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        goto Lbeac;
Lbe34:
    func_8015B3F4();
    func_800F6630(0xD0);
    func_80152908();
    func_800F6B68(0x32DB);
    func_800F5574(0x4C);
    if (func_800F53D4() != 0)
        goto Lbea4;
    func_800F6B68(0x32DF);
    func_800F5574(0x4C);
    if (func_800F53D4() == 0)
        return;
Lbea4:
    func_8015C1B0();
Lbeac:
    func_800F654C(0xFF);
    func_800F824C(0xD0);
    func_800F654C(1);
    func_80150C38();
    return;
Lbed4:
    func_800F6630(0xD0);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lbf8c;
    func_8015C54C();
    func_800F6630(0xD0);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_800F6564(0x388B);
    if (func_800F6434(2) != 0)
        goto Lbf3c;
    func_8015C220();
Lbf3c:
    func_800F71DC(5);
    for (;;) {
        func_800F6A78(0xD7);
        func_800F8768(0x3937);
        func_800F5E48();
        if (func_800F5C64(0x8080) != 0)
            continue;
        break;
    }
    func_8015C604();
    func_800F654C(0xFF);
    func_800F824C(0xD0);
    return;
Lbf8c:
    func_800F6564(0x352D);
    if (func_800F6434(0x202) != 0)
        return;
    func_800F6564(0x3929);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_800F9200();
    func_800F971C();
    for (;;) {
        func_800F6B68(0x392A);
        func_800F8768(0x3929);
        func_800F6364();
        func_800F5958(5);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F5D24(0x392F);
    func_800F93DC();
    func_800F8188(0x1822);
    func_800F824C(0xD0);
    func_8015D0B8();
    func_8015C54C();
    func_800F6630(0xD0);
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        return;
    func_8015B078();
    func_8015B3F4();
    func_800F7270(0xA6);
    func_800F6B68(0x2005);
    func_800F4248(0xEF);
    func_800F8768(0x2005);
    func_800F6564(0x357B);
    if (func_800F54D4(func_800F3C3C(0xD0)) != 0)
        return;
    func_800F6B68(0x2033);
    func_800F5574(0x4C);
    if (func_800F53D4() != 0)
        goto Lc148;
    func_800F6B68(0x2035);
    func_800F5574(0x4C);
    if (func_800F53D4() != 0)
        goto Lc148;
    func_800F6564(0x388B);
    if (func_800F6434(2) != 0)
        goto Lc130;
    func_800F8FB8(0xD7);
    return;
Lc130:
    func_800F971C();
    func_80150C38();
    return;
Lc148:
    func_800F7270(0xA6);
    func_800F6B68(0x2004);
    func_800F8768(0x2004);
    func_800F6630(0xD0);
    func_800F90EC(0x3560);
    return;
}
