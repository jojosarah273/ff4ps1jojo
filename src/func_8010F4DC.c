#include "common.h"
void func_8010F4DC(void)
{
    /* battle spell-cast helper: 0xC7/0x48/0xC/0xE/0xCF windows, 0xACF-
       0xAD8 texts, 801105A4/801187C0/8010F484/80116398/8011053C/80115BCC
       sub-renders, 80115D2C/80173780 in the L10F5C4 loop. */
    func_800F654C(1);
    func_800F824C(0xC7);
    func_800F71DC(0x30);
    func_800F654C(0x60);
    func_800F824C(0xC);
    func_800F654C(0x50);
    func_800F824C(0xE);
    func_801105A4();
    func_800F654C(0xCF);
    func_801187C0();
    func_8010F484();
    func_800F71DC(0x20);
    func_80116398();
    func_8011053C();
    func_800F654C(0x10);
    func_800F8188(0xACF);
    func_800F71DC(0x24);
    func_800F8D00(0xAD2);
    func_800F8F74(0xACD);
    func_800F8F74(0xACE);
    func_800F654C(0x70);
    func_800F8188(0xAD4);
    func_800F8188(0xAD5);
    func_80115BCC();
    func_800F654C(0x23);
    func_800FD804();
    func_800F654C(1);
    func_800F824C(0xE3);
L10f5c4:
    for (;;) {
        func_800FE778();
        func_800FE870();
        func_8011416C();
        func_80115D2C();
        func_800F71DC(0x30);
        func_800F654C(0x60);
        func_800F824C(0xC);
        func_800F654C(0x50);
        func_800F824C(0xE);
        func_801105A4();
        func_80173780();
        func_800F7210(0xAD2);
        func_800F5958(4);
        if (func_800F53D4() != 0)
            goto L10F64C;
        func_800F654C(1);
        func_800F824C(0xE5);
    L10F64C:
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(0xE3);
    func_8011053C();
    func_800F8FB8(0xC7);
    return;
}
