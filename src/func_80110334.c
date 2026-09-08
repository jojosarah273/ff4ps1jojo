#include "common.h"
void func_80110334(void)
{
    /* battle single-row: 0x89/0x7A windows, 0x2100 text, 0xC/0xE/0x91/
       0x8F/0x92 windows, 0x411/0x415 texts, 8011581C/80110474/
       80110024/8011EA5C; loop L11035C. */
    func_80110024();
    func_800F71DC(0x30);
    func_800F8D6C(0x89);
    func_800F8FB8(0x7A);
L11035c:
    for (;;) {
        func_800FE778();
        func_800F6630(0x89);
        func_800F5574(0x10);
        if (func_800F53C0() != 0)
            goto L11038C;
        func_800F8188(0x2100);
    L11038C:
        func_800FE870();
        func_80110474();
        func_800F654C(0x68);
        func_800F824C(0xC);
        func_800F6630(0x89);
        func_800F5410();
        func_800F4008(0x80);
        func_800F824C(0xE);
        func_800F654C(0x18);
        func_800F824C(0x91);
        func_800F654C(0x78);
        func_800F824C(0x8F);
        func_800F7500(0xB0);
        func_800F654C();
        func_800F824C(0x92);
        func_8011581C();
        func_800F654C(0xF0);
        func_800F8188(0x411);
        func_800F8188(0x415);
        func_800F7270(0x89);
        func_800F5E48();
        func_800F8D6C(0x89);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F8FB8(0x80);
    func_800F8FB8(0xC8);
    func_8011EA5C();
    return;
}
