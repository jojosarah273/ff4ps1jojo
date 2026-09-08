#include "common.h"
void func_8016571C(void)
{
    func_800F971C();
L764:
    for (;;) {
        func_800F6B68(0x2041);
        func_800F8768(0x202D);
        func_800F6B68(0x2042);
        func_800F8768(0x202E);
        func_800F6D70(0x38BF);
        func_800F8768(0x2003);
        func_800F6D70(0x38C0);
        func_800F8768(0x2004);
        func_800F6D70(0x38C1);
        func_800F8768(0x2006);
        func_8015330C();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0xF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F971C();
    func_800F8FB8(0xA9);
L830:
    func_800F8FB8(0xAB);
    for (;;) {
        func_800F6B68(0x2000);
        func_800F8960(0x1000);
        func_800F6364();
        func_800F63BC();
        func_800F62BC(0xAB);
        func_800F6630(0xAB);
        func_800F5574(0x40);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064(0x40);
    func_800F971C();
    func_800F9660(0x20);
    func_800F62BC(0xA9);
    func_800F6630(0xA9);
    func_800F5574(5);
    if (func_800F53D4() == 0)
        goto L830;
    func_800F971C();
    func_800F8D6C(0xA9);
L93c:
    for (;;) {
        func_800F6B68(0x321B);
        func_800F8960(0x1440);
        if (func_800F6434(2) != 0)
            goto L974;
        func_800F5574(0x60);
        if (func_800F53D4() == 0)
            goto L994;
    L974:
        func_800F971C();
        func_800F64A8();
        func_800F8960(0x1440);
        goto L9a4;
    L994:
        func_800F6B68(0x321C);
        func_800F63F8();
    L9a4:
        func_800F8960(0x1441);
        if (func_800F53D4() == 0)
            goto L9cc;
        func_800F971C();
        func_800F8960(0x1440);
    L9cc:
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F62BC(0xA9);
        func_800F6630(0xA9);
        func_800F5574(0x30);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x16A8);
    if (func_800F6434(0x202) != 0)
        goto L5adc;
    func_800F6564(0x2001);
    func_800F4248(0x7F);
    func_800F8188(0x2001);
    func_800F6564(0x2081);
    func_800F4248(0x7F);
    func_800F8188(0x2081);
    func_800F6564(0x2101);
    func_800F4248(0x7F);
    func_800F8188(0x2101);
    func_800F6564(0x2181);
    func_800F8188(0x2181);
    func_800F6564(0x2201);
    func_800F8188(0x2201);
    return;
L5adc:
    func_800F6564(0x2001);
    func_800F8188(0x2001);
    func_800F6564(0x2081);
    func_800F8188(0x2081);
    func_800F6564(0x2101);
    func_800F8188(0x2101);
    func_800F6564(0x2181);
    func_800F4248(0x7F);
    func_800F8188(0x2181);
    func_800F6564(0x2201);
    func_800F4248(0x7F);
    func_800F8188(0x2201);
    return;
}
