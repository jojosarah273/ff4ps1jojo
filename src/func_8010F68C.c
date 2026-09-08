#include "common.h"
void func_8010F68C(void)
{
    /* battle command-row screen: 0x20/0x24/0x7A/0x22 row windows,
       8010543C/80102770 sub-renders, 801105A4 + 80173780 commits;
       loops until 5574(3)/53D4 returns at L10F934. */
    func_800F8FB8(0x20);
    func_800F8FB8(0x24);
    func_800F8FB8(0x7A);
L10f6ac:
    for (;;) {
        func_800FE778();
        func_800F6630(0x20);
        if (func_800F6434(2) != 0)
            goto L10F784;
        func_800F5DA0(0x20);
        func_800F6630(0x20);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto L10F784;
        func_800F6630(0x20);
        func_800F7864();
        func_800F824C(0x22);
        func_800F6630(0x5C);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x22));
        func_800F6630(0x5D);
        func_800F4008();
    L10F784:
        func_800F6630(0x7A);
        func_800F4248(0x7F);
        if (func_800F4120(0x202) != 0)
            goto L10F7EC;
        func_800F62BC(0x24);
        func_800F6630(0x24);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            return;
        func_800F654C(4);
        func_800F824C(5);
        func_800F8FB8(4);
        goto L10F81C;
    L10F7EC:
        func_800F6630(0x7A);
        func_800F4248(0xF);
        if (func_800F4120(0x202) != 0)
            goto L10F81C;
        func_800F8FB8(5);
        func_800F8FB8(4);
    L10F81C:
        func_800FE870();
        func_8011416C();
        func_800F654C(1);
        func_800F824C(0xD5);
        func_8010543C();
        func_80102770();
        func_800F6630(0x5C);
        func_800F5410();
        func_800F4008(0xF);
        func_800F4248(0x10);
        if (func_800F4120(0x202) != 0)
            goto L10F88C;
        func_800F71DC();
        goto L10F894;
    L10F88C:
        func_800F71DC(0x18);
    L10F894:
        func_800F654C(0x60);
        func_800F824C(0xC);
        func_800F654C(0x50);
        func_800F824C(0xE);
        func_801105A4();
        func_800F6630(0x5C);
        func_800F4248(0xF);
        func_800F5574(0xF);
        if (func_800F53D4() == 0)
            goto L10F8F4;
        func_800F654C(0x48);
        func_800FD804();
    L10F8F4:
        func_80173780();
        func_800F6630(0x7A);
        func_800F4248(0x7F);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F654C(0x20);
        func_800F824C(0x20);
    }
    return;
}
