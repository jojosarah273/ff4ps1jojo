#include "common.h"
void func_8016543C(void)
{
    /* options sub-screen: 0x289C/0x289D/0x291C stat rows, 0xB5/0x9A/0xB9/
       0xB3/0xB7 windows; 80152640 intro, 8015240C detail; three loops. */
    func_800F9200();
    func_800F824C(0xE5);
    func_800F7500();
    func_800F654C(0xF);
    func_80152640();
    func_800F971C();
L1654a4:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x289C);
        func_800F6364();
        func_800F63BC();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F971C();
L165504:
    for (;;) {
        func_800F6B68(0x289C);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L16557C;
        if (func_800F54D4(func_800F3C3C(0xB5)) == 0)
            goto L165564;
        func_800F7594(0x9A);
        func_800F6B68(0x289D);
        func_800F8960(0x291C);
        func_800F62BC(0x9A);
    L165564:
        func_800F6364();
        func_800F6364();
    }
L16557C:
    func_800F93DC();
    func_800F824C(0xDF);
    func_800F654C(0x18);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F971C();
    func_800F8EBC(0xB7);
L1655d4:
    for (;;) {
        func_800F6B68(0x1560);
        if (func_800F6434(0x202) != 0)
            goto L1656DC;
        func_800F6D70(0x291C);
        func_800F824C(0xB9);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            return;
        func_800F5574(0x19);
        if (func_800F53C0() != 0)
            goto L16564C;
        func_800F6630(0xB3);
        if (func_800F6434(0x202) != 0)
            goto L1656DC;
        goto L1656C4;
    L16564C:
        func_800F5574(0x31);
        if (func_800F53C0() != 0)
            goto L16568C;
    L165664:
        for (;;) {
            func_800F6630(0xB3);
            func_800F5CCC();
            if (func_800F5B8C(0x202) != 0)
                goto L1656DC;
            goto L1656C4;
        }
    L16568C:
        func_800F5574(0x42);
        if (func_800F53C0() != 0)
            goto L165664;
        func_800F6630(0xB3);
        func_800F5574(2);
        if (func_800F53D4() == 0)
            goto L1656DC;
    L1656C4:
        func_800F6630(0xB9);
        func_800F8768(0x1560);
        func_800F63BC();
    L1656DC:
        func_800F6364();
        func_800F62BC(0xB7);
        func_800F6630(0xB7);
        func_800F5574(0x18);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
