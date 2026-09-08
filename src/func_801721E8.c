#include "common.h"
void func_801721E8(void)
{
    /* shop sell/detail screen: 1730/1731 headers, buy rows 12/14 with
       per-row gate reads; 80173ED8 draws the stat block, 801714C4 the
       quantity picker; scroll loop L172398 spins on 5A90(0x10). */
    func_800F926C();
    func_800F654C(0x15);
    func_800F9200();
    func_800F9448();
    func_800F6564(0x1730);
    if (func_800F6434(2) != 0)
        goto L1724B8;
    func_800F6564(0x1701);
    if (func_800F6434(0x202) != 0)
        goto L1724B8;
    func_800F6564(0x1704);
    func_800F5574(7);
    if (func_800F53D4() != 0)
        goto L1722B0;
    func_800F6564(0x1731);
    func_800F824C(0xC);
    func_800F6564(0x1732);
    func_800F824C(0xE);
    func_80173ED8();
    func_800F6630(0xD7);
    if (func_800F6434(0x202) == 0)
        goto L1724B8;
    func_800F654C();
    goto L1722E8;
L1722B0:
    func_800F8FB8(0xD);
    func_800F8FB8(0xF);
    func_800F654C(0x70);
    func_800F824C(0xC);
    func_800F654C(0x70);
    func_800F824C(0xE);
    func_800F6564(0x1705);
L1722E8:
    func_800F824C(7);
    func_800F6564(0x1704);
    func_800F5574(7);
    if (func_800F53D4() == 0)
        goto L172358;
    func_800F6630(0x7A);
    func_800F4248(4);
    goto L172360;
L172358:
    func_800F654C();
L172360:
    func_800F5410();
    func_800F3F38(func_800F3C3C(7));
    func_800F7500();
L172398:
    for (;;) {
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xC));
        func_800F8960(0x480);
        func_800F6630(0xD);
        func_800F4008();
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L1723F8;
        func_800F654C(0x60);
        func_801714C4();
    L1723F8:
        func_800F6B68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0xE));
        func_800F8960(0x481);
        func_800F6B68();
        func_800F5410();
        func_800F4008(0x60);
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
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L1724B8:
    func_800F9448();
    return;
}
