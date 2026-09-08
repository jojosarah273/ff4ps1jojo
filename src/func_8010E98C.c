#include "common.h"
void func_8010E98C(void)
{
    /* battle row: 0xAD/0x20 windows, 0x420C text, 8010E0D0/8017559C/
       8010E128/8011EA5C rows; 3 loops (L10E9B4 menu, L10EA2C confirm,
       L10EA7C second menu). */
    func_8010E0D0();
    func_800F654C(0x20);
    func_800F824C(0xAD);
    func_800FE870();
L10E9B4:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F62BC(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        func_800F6630(0xAD);
        func_800F61E8();
        func_8017559C();
        func_800F6630(0xAD);
        func_800F5574(0x78);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L10EA2C:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800FE6E4();
        func_800F6630(2);
        if (func_800F6434(0x202) != 0)
            goto L10EA74;
        func_800F6630(3);
        if (func_800F6434(2) != 0)
            continue;
    }
L10EA74:
    func_8010E128();
    goto L10EA7C;
L10EA7C:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F5DA0(0xAD);
        func_800FE5D4();
        func_800FE6E4();
        func_800F6630(0xAD);
        func_8017559C();
        func_800F6630(0xAD);
        func_800F5574(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F654C(0x10);
    func_800F824C(0xAD);
    func_8011EA5C();
    return;
}
