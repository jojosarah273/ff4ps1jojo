#include "common.h"
void func_80171F90(void)
{
    /* shop sell-row screen (twin of 801721E8 without the bottom commit):
       0x1701 header, 0xB/0xC/0xE/0xD windows, 80173ED8 stat block,
       801714C4 quantity picker; loop L171FE0 scrolls on 5958(0x10). */
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1701);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        goto L1721D0;
    func_800F8FB8(0xB);
L171fe0:
    for (;;) {
        func_800F6630(0xB);
        func_800F6B68();
        func_800F824C(0xC);
        func_800F6B68();
        func_800F824C(0xE);
        func_80173ED8();
        func_800F6630(0xD7);
        if (func_800F6434(2) != 0)
            goto L1721A8;
        func_800F71DC();
        func_800F6630(0xB);
    L172088:
        for (;;) {
            func_800F6B68();
            func_800F5410();
            func_800F3F38(func_800F3C3C(0xC));
            func_800F8960(0x480);
            func_800F6630(0xD);
            func_800F4008();
            func_800F4248(1);
            if (func_800F4120(2) != 0)
                goto L1720E8;
            func_800F654C(0x60);
            func_801714C4();
        L1720E8:
            func_800F6B68();
            func_800F5410();
            func_800F3F38(func_800F3C3C(0xE));
            func_800F8960(0x481);
            func_800F6B68();
            func_800F5410();
            func_800F4008(0xA8);
            func_800F8960(0x482);
            func_800F6B68();
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
            func_800F5958(0x10);
            if (func_800F53D4() == 0)
                continue;
            break;
        }
    L1721A8:
        func_800F62BC(0xB);
        func_800F6630(0xB);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L1721D0:
    func_800F9448();
    return;
}
