#include "common.h"
void func_80169614(void)
{
    func_800F71DC();
    func_800F7500();
    func_8016BAAC();
    func_800F926C();
    func_800F971C();
    func_800F9200();
    func_800F9448();
    func_800F71DC();
    func_800F8FB8(4);
    func_800F6630(0x64);
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L697AC;
    func_800F5574(2);
    if (func_800F53D4() == 0)
        goto L696C8;
    func_800F654C(0x40);
    func_800F824C(4);
L696C8:
    func_800F971C();
L696f0:
    for (;;) {
        func_800F6C68();
        func_800F824C();
        func_800F7500(8);
    L69708:
        for (;;) {
            func_800F3C3C();
            func_800F4F28();
            func_800F4F4C();
            func_800F7C6C();
            func_800F4248(1);
            func_800F5EA0();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F6364();
        func_800F6364();
        func_800F5958(0x1000);
        if (func_800F53D4() != 0)
            goto L69940;
    }
L697AC:
    func_800F71DC(0x40);
    func_800F971C();
L697c0:
    for (;;) {
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
L69828:
    for (;;) {
        func_800F6C68();
        func_800F9200();
        func_800F4248(0xF);
        if (func_800F4120(2) != 0)
            goto L69870;
    L69870:
        func_800F93DC();
        func_800F4248(0xF0);
        if (func_800F4120(2) != 0)
            goto L698F4;
    L698F4:
        func_800F6364();
        func_800F5958(0x800);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9448();
L69940:
    return;
}
